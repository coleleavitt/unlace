__int64 __fastcall sub_D3D3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  char v15; // bl
  __int64 result; // rax
  __int64 v17; // rax
  bool v18; // cc
  __int64 v19; // rsi
  __int64 v20; // r15
  char v21; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v22; // [rsp+Ch] [rbp-5Ch]
  unsigned int v23; // [rsp+Ch] [rbp-5Ch]
  void *v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-50h]
  char v26; // [rsp+1Ch] [rbp-4Ch]
  void *v27; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-40h]
  char v29; // [rsp+2Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v25 = v10;
  if ( v10 <= 0x40 )
  {
    v24 = (void *)(v9 - 1);
    v28 = v10;
    v27 = v24;
    v25 = 0;
    v29 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v21 = v11;
  sub_2205470(&v24, v12, 0);
  v10 = v25;
  v12 = (unsigned __int64)v24;
  v25 = 0;
  v18 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v28 = v10;
  v27 = v24;
  v29 = v21;
  if ( v18 )
    goto LABEL_4;
  sub_2205B60(a4, &v27);
  v10 = v28;
LABEL_5:
  if ( v10 > 0x40 && v27 )
    operator delete[](v27);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v13 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v13 = *(_QWORD *)v13;
LABEL_14:
    if ( v9 <= 1 || v9 > (unsigned int)v13 )
    {
LABEL_16:
      LODWORD(v14) = v9 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v14) )
      {
        v14 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v14) = *v14;
      }
      v15 = *(_BYTE *)(a3 + 12);
      sub_CF8150((__int64)&v27, a3, (unsigned int)v14);
      v26 = v15;
      v25 = v28;
      v24 = v27;
      sub_CF0850(a5, (__int64)&v24);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
      }
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
      return 1;
    }
    v23 = v13;
    v19 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v28 = 32;
    v27 = (void *)v23;
    v29 = 1;
    v20 = *(_QWORD *)(v19 + 8);
    v24 = (void *)sub_E33C90(a1, v19, 2422, 0);
    if ( v24 )
    {
      sub_CF8A40((unsigned __int8 ***)&v24, (__int64)&v27);
      if ( v24 )
      {
        sub_AE9DF0((unsigned __int8 **)v24, v20, 8u);
        if ( v24 )
          sub_AE9DF0((unsigned __int8 **)v24, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      goto LABEL_16;
    }
    if ( v28 <= 0x40 )
      return result;
    goto LABEL_35;
  }
  if ( !sub_CF0820((__int64 *)a4) )
  {
    LODWORD(v13) = *(_DWORD *)(a4 + 8);
    v17 = *(_QWORD *)a4;
    if ( (unsigned int)v13 > 0x40 )
    {
      LODWORD(v13) = *(_DWORD *)v17;
    }
    else if ( (_DWORD)v13 )
    {
      v13 = v17 << (64 - (unsigned __int8)v13) >> (64 - (unsigned __int8)v13);
    }
    goto LABEL_14;
  }
  v24 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v27 = (void *)sub_E33D20(a1, &v24, 2444, 0);
  if ( v27 )
    sub_CF8A40((unsigned __int8 ***)&v27, a4);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    sub_C16960((__int64)&v27, a4);
    result = sub_D3D070(a1, a2, a3, (__int64)&v27, a5);
    if ( v28 > 0x40 )
    {
LABEL_35:
      if ( v27 )
      {
        v22 = result;
        operator delete[](v27);
        return v22;
      }
    }
  }
  return result;
}

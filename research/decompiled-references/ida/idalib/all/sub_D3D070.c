__int64 __fastcall sub_D3D070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  __int64 result; // rax
  __int64 v16; // rax
  bool v17; // cc
  __int64 v18; // rsi
  __int64 v19; // r15
  char v20; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v21; // [rsp+Ch] [rbp-5Ch]
  unsigned int v22; // [rsp+Ch] [rbp-5Ch]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-40h]
  char v27; // [rsp+2Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v24 = v10;
  if ( v10 <= 0x40 )
  {
    v23 = (void *)(v9 - 1);
    v26 = v10;
    v25 = v23;
    v24 = 0;
    v27 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v20 = v11;
  sub_2205470(&v23, v12, 0);
  v10 = v24;
  v12 = (unsigned __int64)v23;
  v24 = 0;
  v17 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v26 = v10;
  v25 = v23;
  v27 = v20;
  if ( v17 )
    goto LABEL_4;
  sub_2205B60(a4, &v25);
  v10 = v26;
LABEL_5:
  if ( v10 > 0x40 && v25 )
    operator delete[](v25);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
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
      sub_CF8770((__int64)&v25, a3, (unsigned int)v14);
      sub_CF0850(a5, (__int64)&v25);
      if ( v26 > 0x40 )
      {
        if ( v25 )
          operator delete[](v25);
      }
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
      return 1;
    }
    v22 = v13;
    v18 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v26 = 32;
    v25 = (void *)v22;
    v27 = 1;
    v19 = *(_QWORD *)(v18 + 8);
    v23 = (void *)sub_E33C90(a1, v18, 2422, 0);
    if ( v23 )
    {
      sub_CF8A40((unsigned __int8 ***)&v23, (__int64)&v25);
      if ( v23 )
      {
        sub_AE9DF0((unsigned __int8 **)v23, v19, 8u);
        if ( v23 )
          sub_AE9DF0((unsigned __int8 **)v23, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      goto LABEL_16;
    }
    if ( v26 <= 0x40 )
      return result;
    goto LABEL_35;
  }
  if ( !sub_CF0820((__int64 *)a4) )
  {
    LODWORD(v13) = *(_DWORD *)(a4 + 8);
    v16 = *(_QWORD *)a4;
    if ( (unsigned int)v13 > 0x40 )
    {
      LODWORD(v13) = *(_DWORD *)v16;
    }
    else if ( (_DWORD)v13 )
    {
      v13 = v16 << (64 - (unsigned __int8)v13) >> (64 - (unsigned __int8)v13);
    }
    goto LABEL_14;
  }
  v23 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v25 = (void *)sub_E33D20(a1, &v23, 2444, 0);
  if ( v25 )
    sub_CF8A40((unsigned __int8 ***)&v25, a4);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    sub_C16960((__int64)&v25, a4);
    result = sub_D3D3C0(a1, a2, a3, &v25, a5);
    if ( v26 > 0x40 )
    {
LABEL_35:
      if ( v25 )
      {
        v21 = result;
        operator delete[](v25);
        return v21;
      }
    }
  }
  return result;
}

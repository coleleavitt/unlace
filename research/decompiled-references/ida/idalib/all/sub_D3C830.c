__int64 __fastcall sub_D3C830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  _DWORD *v14; // rbp
  __int64 result; // rax
  unsigned int v16; // eax
  unsigned __int8 **v17; // rax
  unsigned int v18; // r8d
  bool v19; // cc
  __int64 v20; // rsi
  __int64 v21; // r15
  unsigned int v22; // [rsp+Ch] [rbp-6Ch]
  unsigned int v23; // [rsp+Ch] [rbp-6Ch]
  char v24; // [rsp+Ch] [rbp-6Ch]
  unsigned __int8 v25; // [rsp+Ch] [rbp-6Ch]
  unsigned int v26; // [rsp+Ch] [rbp-6Ch]
  unsigned __int8 **v27; // [rsp+18h] [rbp-60h] BYREF
  void *v28; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-50h]
  void *v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+3Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v29 = v10;
  if ( v10 <= 0x40 )
  {
    v28 = (void *)(v9 - 1);
    v31 = v10;
    v30 = v28;
    v29 = 0;
    v32 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v24 = v11;
  sub_2205470(&v28, v12, 0);
  v10 = v29;
  v12 = (unsigned __int64)v28;
  v29 = 0;
  v19 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v31 = v10;
  v30 = v28;
  v32 = v24;
  if ( v19 )
    goto LABEL_4;
  sub_2205B60(a4, &v30);
  v10 = v31;
LABEL_5:
  if ( v10 > 0x40 && v30 )
    operator delete[](v30);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v13 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v13 = *(_QWORD *)v13;
LABEL_14:
    if ( (int)v13 >= 0 )
      goto LABEL_15;
    goto LABEL_29;
  }
  if ( sub_CF0820((__int64 *)a4) )
  {
    v28 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v30 = (void *)sub_E33D20(a1, &v28, 2444, 0);
    if ( v30 )
      sub_CF8A40((unsigned __int8 ***)&v30, a4);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_C16960((__int64)&v30, a4);
      result = sub_D3CC40(a1, a2, a3, &v30, a5);
      if ( v31 > 0x40 )
      {
LABEL_43:
        if ( v30 )
        {
          v25 = result;
          operator delete[](v30);
          return v25;
        }
        return result;
      }
    }
    return result;
  }
  v16 = *(_DWORD *)(a4 + 8);
  v13 = *(_QWORD *)a4;
  if ( v16 > 0x40 )
  {
    LODWORD(v13) = *(_DWORD *)v13;
    goto LABEL_14;
  }
  if ( !v16 )
  {
    LODWORD(v13) = 0;
LABEL_15:
    if ( v9 <= 1 || v9 > (unsigned int)v13 )
    {
LABEL_17:
      LODWORD(v14) = v9 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v14) )
      {
        v14 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v14) = *v14;
      }
      sub_CF8770((__int64)&v30, a3, (unsigned int)v14);
      sub_CF0850(a5, (__int64)&v30);
      if ( v31 > 0x40 )
      {
        if ( v30 )
          operator delete[](v30);
      }
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
      return 1;
    }
    v26 = v13;
    v20 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v31 = 32;
    v30 = (void *)v26;
    v32 = 0;
    v21 = *(_QWORD *)(v20 + 8);
    v28 = (void *)sub_E33C90(a1, v20, 2422, 0);
    if ( v28 )
    {
      sub_CF8A40((unsigned __int8 ***)&v28, (__int64)&v30);
      if ( v28 )
      {
        sub_AE9DF0((unsigned __int8 **)v28, v21, 8u);
        if ( v28 )
          sub_AE9DF0((unsigned __int8 **)v28, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      goto LABEL_17;
    }
    if ( v31 <= 0x40 )
      return result;
    goto LABEL_43;
  }
  v13 = v13 << (64 - (unsigned __int8)v16) >> (64 - (unsigned __int8)v16);
  if ( (int)v13 >= 0 )
    goto LABEL_15;
LABEL_29:
  v22 = v13;
  v28 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v17 = (unsigned __int8 **)sub_E33D20(a1, &v28, 2444, 0);
  v32 = 0;
  v27 = v17;
  v31 = 32;
  v18 = v22;
  v30 = (void *)v22;
  if ( v17 )
  {
    sub_CF8A40(&v27, (__int64)&v30);
    v18 = v22;
    if ( v31 > 0x40 )
    {
      if ( v30 )
      {
        operator delete[](v30);
        v18 = v22;
      }
    }
  }
  v23 = v18;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v13) = v23;
  if ( (_BYTE)result )
    goto LABEL_15;
  return result;
}

__int64 __fastcall sub_D3C5E0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 **v10; // rax
  void *v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v22; // [rsp+18h] [rbp-40h] BYREF
  void *v23; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-30h]
  char v25; // [rsp+2Ch] [rbp-2Ch]

  v8 = sub_E32240(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 = *a4 & 0x3F;
    *a4 = (unsigned int)v9;
  }
  else if ( v9 < 0 )
  {
    v21 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E33D20(a1, &v21, 2444, 0);
    v11 = (void *)*a4;
    v25 = 0;
    v22 = v10;
    v24 = 64;
    v23 = v11;
    if ( v10 )
    {
      sub_CF8A40(&v22, (__int64)&v23);
      if ( v24 > 0x40 )
      {
        if ( v23 )
          operator delete[](v23);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_D3C3C0(a1, a2, a3, a4, a5);
    }
    return result;
  }
  if ( (unsigned int)v9 <= 0x3F )
    goto LABEL_11;
  v15 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v16 = (void *)*a4;
  v24 = 64;
  v23 = v16;
  v25 = 0;
  v17 = *(_QWORD *)(v15 + 8);
  v22 = (unsigned __int8 **)sub_E33C90(a1, v15, 2422, 0);
  if ( v22 )
  {
    sub_CF8A40(&v22, (__int64)&v23);
    if ( v22 )
    {
      sub_AE9DF0(v22, v17, 8u);
      if ( v22 )
        sub_AE9DF0(v22, 64, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    v9 = *a4;
LABEL_11:
    v13 = *a3;
    v14 = *a3 << v9;
    if ( v9 > 63 )
    {
      if ( v13 )
      {
        _BitScanReverse64(&v18, v13);
        LODWORD(v20) = v18 ^ 0x3F;
        v19 = v20;
        v20 = (int)v20;
      }
      else
      {
        v20 = 64;
        v19 = 64;
      }
      *a4 = v20;
      v14 = v13 << v19;
    }
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v14;
    return 1;
  }
  if ( v24 > 0x40 && v23 )
  {
    operator delete[](v23);
    return 0;
  }
  return result;
}

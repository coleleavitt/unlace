__int64 __fastcall sub_D3B900(__int64 a1, __int64 a2, unsigned __int64 *a3, char *a4, __int64 a5)
{
  __int64 v8; // rax
  char v9; // cl
  unsigned __int8 **v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  char v19; // cl
  char v20; // dl
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v22; // [rsp+18h] [rbp-40h] BYREF
  void *v23; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-30h]
  char v25; // [rsp+2Ch] [rbp-2Ch]

  v8 = sub_E32240(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 &= 0x3Fu;
    *a4 = v9;
    goto LABEL_11;
  }
  if ( v9 < 0 )
  {
    v21 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E33D20(a1, &v21, 2444, 0);
    v11 = (unsigned __int8)*a4;
    v25 = 0;
    v22 = v10;
    v24 = 8;
    v23 = (void *)v11;
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
      return sub_D3B6F0(a1, a2, a3, a4, a5);
    }
    return result;
  }
  if ( v9 <= 63 )
    goto LABEL_11;
  v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v15 = (unsigned __int8)*a4;
  v24 = 8;
  v23 = (void *)v15;
  v25 = 0;
  v16 = *(_QWORD *)(v14 + 8);
  v22 = (unsigned __int8 **)sub_E33C90(a1, v14, 2422, 0);
  if ( v22 )
  {
    sub_CF8A40(&v22, (__int64)&v23);
    if ( v22 )
    {
      sub_AE9DF0(v22, v16, 8u);
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
    if ( *a4 > 63 )
    {
      v17 = *a3;
      if ( *a3 )
      {
        _BitScanReverse64(&v18, v17);
        v19 = v18 ^ 0x3F;
        v20 = v19;
      }
      else
      {
        v19 = 64;
        v20 = 64;
      }
      *a4 = v20;
      v13 = v17 << v19;
      goto LABEL_12;
    }
LABEL_11:
    v13 = *a3 << v9;
LABEL_12:
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v13;
    return 1;
  }
  if ( v24 > 0x40 && v23 )
  {
    operator delete[](v23);
    return 0;
  }
  return result;
}

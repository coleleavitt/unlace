__int64 __fastcall sub_DDDA60(_QWORD *a1)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  char v7; // cl
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rdx
  unsigned __int64 v15; // rcx
  unsigned __int8 **v16; // [rsp+18h] [rbp-40h] BYREF
  void *v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = a1[22];
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = sub_E32240(a1);
  v7 = v3;
  if ( (*(_BYTE *)(v6 + 47) & 0x20) != 0 )
  {
    v7 = v3 & 0x3F;
LABEL_3:
    *(_QWORD *)sub_E216C0(a1[22], 8) = v5 << v7;
    return 1;
  }
  if ( (unsigned int)v3 <= 0x3F )
  {
    if ( v3 <= 0x3F )
      goto LABEL_3;
LABEL_18:
    v7 = 64;
    if ( v5 )
    {
      _BitScanReverse64(&v15, v5);
      v7 = v15 ^ 0x3F;
    }
    goto LABEL_3;
  }
  v9 = sub_E1EF60(a1[50]);
  v18 = 64;
  v17 = (void *)v3;
  v19 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v16 = (unsigned __int8 **)sub_E33C90(a1, v9, 2422, 0);
  if ( v16 )
  {
    sub_DC15C0(&v16, (__int64)&v17);
    if ( v16 )
    {
      sub_AE9DF0(v16, v10, 8u);
      if ( v16 )
        sub_AE9DF0(v16, 64, 3u);
    }
  }
  v11 = (_QWORD *)a1[3];
  v12 = *(__int64 (**)(void))(*v11 + 32LL);
  if ( (char *)v12 == (char *)sub_CF0260 )
  {
    v13 = (_QWORD **)v11[3];
    v14 = (__int64 (*)(void))(*v13)[4];
    if ( v14 == v12 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 32LL))(v13[3]);
    else
      result = v14();
  }
  else
  {
    result = v12();
  }
  if ( (_BYTE)result )
  {
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
    goto LABEL_18;
  }
  if ( v18 > 0x40 && v17 )
  {
    operator delete[](v17);
    return 0;
  }
  return result;
}

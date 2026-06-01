__int64 __fastcall sub_DDDFD0(_QWORD *a1)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  __int64 v4; // r13
  int v5; // ebp
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  _QWORD **v12; // rdi
  __int64 (*v13)(void); // rdx
  unsigned __int8 **v14; // [rsp+18h] [rbp-40h] BYREF
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = a1[22];
  v5 = *(char *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 7;
LABEL_3:
    v6 = v5 >> v3;
LABEL_4:
    *(_BYTE *)sub_E216C0(a1[22], 8) = v6;
    return 1;
  }
  if ( v3 <= 7 )
    goto LABEL_3;
  v8 = sub_E1EF60(a1[50]);
  v15 = (void *)v3;
  v16 = 32;
  v17 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v14 = (unsigned __int8 **)sub_E33C90(a1, v8, 2422, 0);
  if ( v14 )
  {
    sub_DC15C0(&v14, (__int64)&v15);
    if ( v14 )
    {
      sub_AE9DF0(v14, v9, 8u);
      if ( v14 )
        sub_AE9DF0(v14, 8, 3u);
    }
  }
  v10 = (_QWORD *)a1[3];
  v11 = *(__int64 (**)(void))(*v10 + 32LL);
  if ( (char *)v11 == (char *)sub_CF0260 )
  {
    v12 = (_QWORD **)v10[3];
    v13 = (__int64 (*)(void))(*v12)[4];
    if ( v13 == v11 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 32LL))(v12[3]);
    else
      result = v13();
  }
  else
  {
    result = v11();
  }
  if ( (_BYTE)result )
  {
    if ( v16 > 0x40 )
    {
      if ( v15 )
        operator delete[](v15);
    }
    LOBYTE(v6) = -1;
    goto LABEL_4;
  }
  if ( v16 > 0x40 && v15 )
  {
    operator delete[](v15);
    return 0;
  }
  return result;
}

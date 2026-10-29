__int64 __fastcall sub_DBD140(_QWORD *a1)
{
  __int64 v2; // r12
  void *v3; // rbp
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  char v6; // cl
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rdx
  unsigned __int8 **v15; // [rsp+18h] [rbp-40h] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = (void *)*(unsigned __int8 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    v6 = (unsigned __int8)v3 & 0x3F;
LABEL_3:
    v7 = v5 >> v6;
LABEL_4:
    *(_QWORD *)sub_DFD980(a1[22], 8) = v7;
    return 1;
  }
  if ( (unsigned __int8)v3 <= 0x3Fu )
  {
    v6 = (char)v3;
    goto LABEL_3;
  }
  v9 = sub_DFB220(a1[50]);
  v17 = 8;
  v16 = v3;
  v18 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v15 = (unsigned __int8 **)sub_E0FF50(a1, v9, 2422, 0);
  if ( v15 )
  {
    sub_D9D880(&v15, (__int64)&v16);
    if ( v15 )
    {
      sub_AC60B0(v15, v10, 8u);
      if ( v15 )
        sub_AC60B0(v15, 64, 3u);
    }
  }
  v11 = (_QWORD *)a1[3];
  v12 = *(__int64 (**)(void))(*v11 + 32LL);
  if ( (char *)v12 == (char *)sub_CCC520 )
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
    if ( v17 > 0x40 )
    {
      if ( v16 )
        operator delete[](v16);
    }
    v7 = -1;
    goto LABEL_4;
  }
  if ( v17 > 0x40 && v16 )
  {
    operator delete[](v16);
    return 0;
  }
  return result;
}


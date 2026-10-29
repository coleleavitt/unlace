__int64 __fastcall sub_DBCF60(_QWORD *a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  __int64 (*v13)(void); // rax
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rdx
  unsigned __int8 **v16; // [rsp+18h] [rbp-40h] BYREF
  void *v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = sub_E0E500(a1);
  v7 = v3;
  if ( (*(_BYTE *)(v6 + 47) & 0x20) != 0 )
  {
    v7 = v3 & 0x3F;
LABEL_3:
    v8 = v5 >> v7;
LABEL_4:
    *(_QWORD *)sub_DFD980(a1[22], 8) = v8;
    return 1;
  }
  if ( (unsigned int)v3 <= 0x3F )
  {
    if ( v3 <= 0x3F )
      goto LABEL_3;
LABEL_19:
    v8 = -1;
    goto LABEL_4;
  }
  v10 = sub_DFB220(a1[50]);
  v18 = 64;
  v19 = 1;
  v11 = *(_QWORD *)(v10 + 8);
  v17 = (void *)v3;
  v16 = (unsigned __int8 **)sub_E0FF50(a1, v10, 2422, 0);
  if ( v16 )
  {
    sub_D9D880(&v16, (__int64)&v17);
    if ( v16 )
    {
      sub_AC60B0(v16, v11, 8u);
      if ( v16 )
        sub_AC60B0(v16, 64, 3u);
    }
  }
  v12 = (_QWORD *)a1[3];
  v13 = *(__int64 (**)(void))(*v12 + 32LL);
  if ( (char *)v13 == (char *)sub_CCC520 )
  {
    v14 = (_QWORD **)v12[3];
    v15 = (__int64 (*)(void))(*v14)[4];
    if ( v15 == v13 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 32LL))(v14[3]);
    else
      result = v15();
  }
  else
  {
    result = v13();
  }
  if ( (_BYTE)result )
  {
    if ( v18 > 0x40 )
    {
      if ( v17 )
        operator delete[](v17);
    }
    goto LABEL_19;
  }
  if ( v18 > 0x40 && v17 )
  {
    operator delete[](v17);
    return 0;
  }
  return result;
}


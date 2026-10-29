__int64 __fastcall sub_DB8070(_QWORD *a1)
{
  __int64 v2; // r12
  void *v3; // rbp
  __int64 v4; // r12
  unsigned __int8 v5; // r13
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  _QWORD **v12; // rdi
  __int64 (*v13)(void); // rdx
  int v14; // eax
  char v15; // cl
  char v16; // dl
  unsigned __int8 **v17; // [rsp+18h] [rbp-40h] BYREF
  void *v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = (void *)*(unsigned __int16 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = (unsigned __int8)v3 & 7;
LABEL_3:
    v6 = v5 << (char)v3;
LABEL_4:
    *(_BYTE *)sub_DFD980(a1[22], 8) = v6;
    return 1;
  }
  if ( (unsigned __int16)v3 <= 7u )
    goto LABEL_3;
  v8 = sub_DFB220(a1[50]);
  v19 = 16;
  v18 = v3;
  v20 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v17 = (unsigned __int8 **)sub_E0FF50(a1, v8, 2422, 0);
  if ( v17 )
  {
    sub_D9D880(&v17, (__int64)&v18);
    if ( v17 )
    {
      sub_AC60B0(v17, v9, 8u);
      if ( v17 )
        sub_AC60B0(v17, 8, 3u);
    }
  }
  v10 = (_QWORD *)a1[3];
  v11 = *(__int64 (**)(void))(*v10 + 32LL);
  if ( (char *)v11 == (char *)sub_CCC520 )
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
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
    v14 = v5;
    v15 = 8;
    if ( v5 )
    {
      v16 = 4;
      if ( (int)v5 >> 4 )
      {
        v16 = 0;
        v14 = (int)v5 >> 4;
      }
      if ( v14 >> 2 )
        v14 = (unsigned __int8)(v14 >> 2);
      else
        v16 |= 2u;
      v15 = v16 | 1;
      if ( (unsigned int)v14 >> 1 )
        v15 = v16;
    }
    v6 = v5 << v15;
    goto LABEL_4;
  }
  if ( v19 > 0x40 && v18 )
  {
    operator delete[](v18);
    return 0;
  }
  return result;
}


__int64 __fastcall sub_DB8D50(_QWORD *a1)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  __int64 v4; // r12
  unsigned __int16 v5; // r13
  int v6; // eax
  char v7; // cl
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rdx
  int v15; // edx
  char v16; // si
  unsigned __int8 **v17; // [rsp+18h] [rbp-40h] BYREF
  void *v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_WORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0xF;
    v6 = v5;
LABEL_3:
    v7 = v3;
LABEL_4:
    *(_WORD *)sub_DFD980(a1[22], 8) = v6 << v7;
    return 1;
  }
  if ( (unsigned int)v3 <= 0xF )
  {
    v15 = v5;
    v6 = v5;
    if ( v3 <= 0xF )
      goto LABEL_3;
LABEL_20:
    v7 = 16;
    if ( v5 )
    {
      v16 = 8;
      if ( v15 >> 8 )
      {
        v16 = 0;
        v15 >>= 8;
      }
      if ( v15 >> 4 )
        v15 = (unsigned __int16)(v15 >> 4);
      else
        v16 |= 4u;
      if ( v15 >> 2 )
        v15 >>= 2;
      else
        v16 |= 2u;
      v7 = v16 | 1;
      if ( (unsigned int)v15 >> 1 )
        v7 = v16;
    }
    goto LABEL_4;
  }
  v9 = sub_DFB220(a1[50]);
  v19 = 64;
  v18 = (void *)v3;
  v20 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v17 = (unsigned __int8 **)sub_E0FF50(a1, v9, 2422, 0);
  if ( v17 )
  {
    sub_D9D880(&v17, (__int64)&v18);
    if ( v17 )
    {
      sub_AC60B0(v17, v10, 8u);
      if ( v17 )
        sub_AC60B0(v17, 16, 3u);
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
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
    v15 = v5;
    v6 = v5;
    goto LABEL_20;
  }
  if ( v19 > 0x40 && v18 )
  {
    operator delete[](v18);
    return 0;
  }
  return result;
}


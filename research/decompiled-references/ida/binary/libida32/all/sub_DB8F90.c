__int64 __fastcall sub_DB8F90(_QWORD *a1)
{
  __int64 v2; // r12
  void *v3; // rbp
  __int64 v4; // r13
  unsigned int v5; // r12d
  char v6; // cl
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  _QWORD **v12; // rdi
  __int64 (*v13)(void); // rdx
  unsigned int v14; // ecx
  unsigned __int8 **v15; // [rsp+18h] [rbp-40h] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = (void *)*(unsigned __int8 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    v6 = (unsigned __int8)v3 & 0x1F;
LABEL_3:
    *(_DWORD *)sub_DFD980(a1[22], 8) = v5 << v6;
    return 1;
  }
  if ( (unsigned __int8)v3 <= 0x1Fu )
  {
    v6 = (char)v3;
    goto LABEL_3;
  }
  v8 = sub_DFB220(a1[50]);
  v17 = 8;
  v16 = v3;
  v18 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v15 = (unsigned __int8 **)sub_E0FF50(a1, v8, 2422, 0);
  if ( v15 )
  {
    sub_D9D880(&v15, (__int64)&v16);
    if ( v15 )
    {
      sub_AC60B0(v15, v9, 8u);
      if ( v15 )
        sub_AC60B0(v15, 32, 3u);
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
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
    v6 = 32;
    if ( v5 )
    {
      _BitScanReverse(&v14, v5);
      v6 = v14 ^ 0x1F;
    }
    goto LABEL_3;
  }
  if ( v17 > 0x40 && v16 )
  {
    operator delete[](v16);
    return 0;
  }
  return result;
}


__int64 __fastcall sub_DB9560(_QWORD *a1)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 v6; // rax
  char v7; // cl
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rdx
  unsigned int v15; // ecx
  unsigned __int8 **v16; // [rsp+18h] [rbp-40h] BYREF
  void *v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = sub_E0E500(a1);
  v7 = v3;
  if ( (*(_BYTE *)(v6 + 47) & 0x20) != 0 )
  {
    v7 = v3 & 0x1F;
LABEL_3:
    *(_DWORD *)sub_DFD980(a1[22], 8) = v5 << v7;
    return 1;
  }
  if ( (unsigned int)v3 <= 0x1F )
  {
    if ( v3 <= 0x1F )
      goto LABEL_3;
LABEL_18:
    v7 = 32;
    if ( v5 )
    {
      _BitScanReverse(&v15, v5);
      v7 = v15 ^ 0x1F;
    }
    goto LABEL_3;
  }
  v9 = sub_DFB220(a1[50]);
  v18 = 64;
  v17 = (void *)v3;
  v19 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v16 = (unsigned __int8 **)sub_E0FF50(a1, v9, 2422, 0);
  if ( v16 )
  {
    sub_D9D880(&v16, (__int64)&v17);
    if ( v16 )
    {
      sub_AC60B0(v16, v10, 8u);
      if ( v16 )
        sub_AC60B0(v16, 32, 3u);
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


__int64 __fastcall sub_DB9390(_QWORD *a1)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // r13
  unsigned int v5; // r12d
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  _QWORD **v12; // rdi
  __int64 (*v13)(void); // rdx
  char v14; // cl
  unsigned int v15; // ecx
  unsigned __int8 **v16; // [rsp+18h] [rbp-40h] BYREF
  void *v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = a1[22];
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0x1F;
LABEL_3:
    v6 = v5 << v3;
LABEL_4:
    *(_DWORD *)sub_DFD980(a1[22], 8) = v6;
    return 1;
  }
  if ( v3 <= 0x1F )
    goto LABEL_3;
  v8 = sub_DFB220(a1[50]);
  v17 = (void *)v3;
  v18 = 32;
  v19 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v16 = (unsigned __int8 **)sub_E0FF50(a1, v8, 2422, 0);
  if ( v16 )
  {
    sub_D9D880(&v16, (__int64)&v17);
    if ( v16 )
    {
      sub_AC60B0(v16, v9, 8u);
      if ( v16 )
        sub_AC60B0(v16, 32, 3u);
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
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
    v14 = 32;
    if ( v5 )
    {
      _BitScanReverse(&v15, v5);
      v14 = v15 ^ 0x1F;
    }
    v6 = v5 << v14;
    goto LABEL_4;
  }
  if ( v18 > 0x40 && v17 )
  {
    operator delete[](v17);
    return 0;
  }
  return result;
}


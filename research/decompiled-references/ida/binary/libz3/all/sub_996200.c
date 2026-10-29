__int64 __fastcall sub_996200(__int64 a1, int a2, __int64 *a3, unsigned __int8 a4)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  _DWORD *v7; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // rax
  void *v15; // rbp
  _QWORD v16[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v16[0] = 1;
    v16[1] = 0;
    v17[0] = 1;
    v17[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v17);
    v13 = *(_QWORD *)(a1 + 416);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = 1;
    if ( !v13 )
    {
      sub_16669E0(a1 + 408);
      v13 = *(_QWORD *)(a1 + 416);
    }
    v14 = sub_166A700(v13, (unsigned int)v16, a4, v10, v11, v12);
    v15 = qword_1C7F2C0;
    v5 = v14;
    sub_182CBA0(qword_1C7F2C0, v16);
    sub_182CBA0(v15, v17);
    return v5;
  }
  v5 = *a3;
  if ( a2 == 1 )
    return v5;
  v6 = *(_QWORD *)(a1 + 408);
  if ( a2 == 2 )
    return sub_15E1B70(v6);
  if ( *(_WORD *)(v5 + 4) )
    return sub_15E1AF0(v6);
  v7 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( !v7 || *v7 != 5 || v7[1] )
    return sub_15E1AF0(v6);
  sub_15E1AF0(v6);
  return sub_15E1B70(*(_QWORD *)(a1 + 408));
}


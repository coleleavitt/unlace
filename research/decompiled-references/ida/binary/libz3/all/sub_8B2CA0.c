__int64 __fastcall sub_8B2CA0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  _QWORD *v11; // [rsp+0h] [rbp-88h]
  _QWORD v12[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v15[10]; // [rsp+38h] [rbp-50h] BYREF

  v3 = a1 + 92;
  v6 = a1[199] + 232LL * a2;
  v11 = a1 + 92;
  v7 = v6 + 8;
  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1
    || (*(_BYTE *)(v6 + 28) & 1) != 0
    || *(_DWORD *)(v6 + 24) != 1 )
  {
    sub_1854300(a1 + 92, a3, v7, v12);
  }
  else
  {
    sub_183A580(a1 + 92, a3, v7, v12);
    sub_182EF00(v3, v13);
    BYTE4(v13[0]) &= ~1u;
    LODWORD(v13[0]) = 1;
  }
  v8 = v6 + 40;
  v9 = a3 + 32;
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1
    || (*(_BYTE *)(v6 + 60) & 1) != 0
    || *(_DWORD *)(v6 + 56) != 1 )
  {
    sub_1854300(v3, v9, v8, v14);
  }
  else
  {
    sub_183A580(v3, v9, v8, v14);
    sub_182EF00(v3, v15);
    BYTE4(v15[0]) &= ~1u;
    LODWORD(v15[0]) = 1;
  }
  sub_8B2760(a1, a2, (__int64)v12);
  sub_182EF00(v11, v12);
  sub_182EF00(v11, v13);
  sub_182EF00(v11, v14);
  return sub_182EF00(v11, v15);
}


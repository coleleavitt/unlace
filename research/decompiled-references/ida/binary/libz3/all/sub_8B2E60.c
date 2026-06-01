__int64 __fastcall sub_8B2E60(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v15; // [rsp+20h] [rbp-88h]
  _QWORD v16[2]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v19[10]; // [rsp+58h] [rbp-50h] BYREF

  v7 = (__int64)(a1 + 92);
  v8 = a1[199] + 232LL * a2;
  v15 = (__int64)(a1 + 92);
  v16[0] = 0;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  sub_8ADE80((__int64)(a1 + 92), (__int64)v16, (int *)(v8 + 8));
  sub_8ADE80((__int64)(a1 + 92), (__int64)v18, (int *)(v8 + 40));
  v9 = a1 + 92;
  if ( (v17[0] & 0x100000000LL) != 0
    || LODWORD(v17[0]) != 1
    || (*(_BYTE *)(a5 + 20) & 1) != 0
    || *(_DWORD *)(a5 + 16) != 1 )
  {
    sub_1854300(v9, v16, a5, v16);
    v10 = v15;
  }
  else
  {
    sub_183A580(v9, v16, a5, v16);
    sub_182EF00(v15, v17);
    BYTE4(v17[0]) &= ~1u;
    v10 = v15;
    LODWORD(v17[0]) = 1;
  }
  v11 = a5 + 32;
  if ( (v19[0] & 0x100000000LL) != 0
    || LODWORD(v19[0]) != 1
    || (*(_BYTE *)(a5 + 52) & 1) != 0
    || *(_DWORD *)(a5 + 48) != 1 )
  {
    sub_1854300(v10, v18, v11, v18);
  }
  else
  {
    sub_183A580(v10, v18, v11, v18);
    sub_182EF00(v10, v19);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = 1;
  }
  if ( (v17[0] & 0x100000000LL) != 0
    || LODWORD(v17[0]) != 1
    || (*(_BYTE *)(v8 + 220) & 1) != 0
    || *(_DWORD *)(v8 + 216) != 1 )
  {
    sub_184C880(v7, v16, v8 + 200, v16);
  }
  else
  {
    sub_1839230(v7, v16, v8 + 200, v16);
    sub_182EF00(v7, v17);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = 1;
  }
  if ( (v19[0] & 0x100000000LL) != 0
    || LODWORD(v19[0]) != 1
    || (*(_BYTE *)(v8 + 220) & 1) != 0
    || *(_DWORD *)(v8 + 216) != 1 )
  {
    sub_184C880(v7, v18, v8 + 200, v18);
  }
  else
  {
    sub_1839230(v7, v18, v8 + 200, v18);
    sub_182EF00(v7, v19);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = 1;
  }
  sub_8AE7F0(v7, (int *)v16, a4, (__int64)v16);
  sub_8AE7F0(v7, (int *)v18, a4, (__int64)v18);
  sub_8B2760(a1, a3, (__int64)v16);
  sub_8B22E0((__int64)a1, a2, a3, a4);
  return sub_8AD4E0(v15, (__int64)v16);
}


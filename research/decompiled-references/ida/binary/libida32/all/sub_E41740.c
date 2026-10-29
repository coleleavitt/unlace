__int64 __fastcall sub_E41740(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int8 v8; // al
  int v9; // esi
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v13; // r13
  __int64 v14; // rbp
  void *v15[4]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v16; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v17[4]; // [rsp+30h] [rbp-78h] BYREF
  __int16 v18; // [rsp+40h] [rbp-68h] BYREF
  __m128i v19; // [rsp+48h] [rbp-60h]
  int v20; // [rsp+58h] [rbp-50h]

  v4 = *(_QWORD **)(a3 + 16);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v5 = *(_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v5 + 8) & 7LL | (*(__int64 *)(v5 + 8) >> 3) & 1 )
    v6 = sub_F411C0(*v4) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v6 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  sub_E3FD20((__int64)&v16, a2, v6, 1);
  v18 = 7;
  v19 = v16;
  v16 = 0u;
  v20 = v17[0];
  v17[0] = 0;
  sub_E35E20((void ***)v15, (char *)"type");
  v7 = sub_220A4E0(a1, v15);
  sub_2207560(v7);
  sub_2205840(v7, &v18);
  if ( v15[0] )
    sub_E34850((void **)v15[0]);
  sub_2207560(&v18);
  sub_E395A0(v16.m128i_i64);
  v8 = *(_BYTE *)(a3 + 12);
  v9 = (v8 >> 2) & 3;
  if ( (v8 & 0xC) == 0xC )
    v9 = 2 * ((v8 & 2) != 0);
  sub_E34A40(&v16, v9);
  sub_E35650((__int64)&v18, &v16);
  sub_E35E20((void ***)v15, "access");
  v10 = sub_220A4E0(a1, v15);
  sub_2207560(v10);
  sub_2205840(v10, &v18);
  if ( v15[0] )
    sub_E34850((void **)v15[0]);
  sub_2207560(&v18);
  if ( (_DWORD *)v16.m128i_i64[0] != v17 )
    operator delete((void *)v16.m128i_i64[0]);
  sub_E34A40(&v16, (*(_BYTE *)(a3 + 12) >> 2) & 3);
  sub_E35650((__int64)&v18, &v16);
  sub_E35E20((void ***)v15, "writtenAccess");
  v11 = sub_220A4E0(a1, v15);
  sub_2207560(v11);
  sub_2205840(v11, &v18);
  if ( v15[0] )
    sub_E34850((void **)v15[0]);
  sub_2207560(&v18);
  if ( (_DWORD *)v16.m128i_i64[0] != v17 )
    operator delete((void *)v16.m128i_i64[0]);
  if ( (*(_BYTE *)(a3 + 12) & 1) == 0 )
  {
    if ( !*(_DWORD *)(a3 + 8) )
      return a1;
    goto LABEL_22;
  }
  v19.m128i_i8[0] = 1;
  v18 = 1;
  sub_E35E20((void ***)&v16, "isVirtual");
  v13 = sub_220A4E0(a1, &v16);
  sub_2207560(v13);
  sub_2205840(v13, &v18);
  if ( v16.m128i_i64[0] )
    sub_E34850((void **)v16.m128i_i64[0]);
  sub_2207560(&v18);
  if ( *(_DWORD *)(a3 + 8) )
  {
LABEL_22:
    v19.m128i_i8[0] = 1;
    v18 = 1;
    sub_E35E20((void ***)&v16, "isPackExpansion");
    v14 = sub_220A4E0(a1, &v16);
    sub_2207560(v14);
    sub_2205840(v14, &v18);
    if ( v16.m128i_i64[0] )
      sub_E34850((void **)v16.m128i_i64[0]);
    sub_2207560(&v18);
  }
  return a1;
}


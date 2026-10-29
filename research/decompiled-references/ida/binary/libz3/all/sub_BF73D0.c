__int64 __fastcall sub_BF73D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  void *v11; // r15
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-88h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  _QWORD v25[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v27; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a1 + 1848;
  while ( 1 )
  {
    sub_180C5A0(&v27, "seq.align.m");
    if ( !(unsigned __int8)sub_1407860(v3, &v27, a2) )
      break;
    if ( *(_DWORD *)(a2 + 24) != 2 )
      break;
    v24 = *(_QWORD *)(a2 + 32);
    v23 = *(_QWORD *)(a2 + 40);
    sub_180C5A0(&v27, "seq.align.m");
    if ( !(unsigned __int8)sub_1407860(v3, &v27, a3)
      || *(_DWORD *)(a3 + 24) != 2
      || *(_QWORD *)(a3 + 40) != v23
      || v24 == *(_QWORD *)(a3 + 32) )
    {
      break;
    }
    a2 = v24;
    a3 = *(_QWORD *)(a3 + 32);
  }
  v27 = 0u;
  v28[0] = 1;
  v28[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v28);
  v10 = *(_QWORD *)(a1 + 1840);
  BYTE4(v28[0]) &= ~1u;
  LODWORD(v28[0]) = 1;
  if ( !v10 )
  {
    sub_16669E0(a1 + 1832);
    v10 = *(_QWORD *)(a1 + 1840);
  }
  sub_166A700(v10, (unsigned int)&v27, 1, v7, v8, v9);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v27);
  sub_182CBA0(v11, v28);
  sub_BB1EF0((__int64)v26, a1);
  sub_BB1EF0((__int64)v25, a1);
  sub_BB1E10(&v27, a1);
  v12 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
  v13 = sub_BB2110(a1, v12);
  v14 = v27.m128i_i64[0];
  v15 = v13;
  if ( v27.m128i_i64[0] )
  {
    v16 = v27.m128i_i64[1];
    v17 = (*(_DWORD *)(v27.m128i_i64[0] + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v16, v14);
  }
  v18 = v25[0];
  if ( v25[0] )
  {
    v19 = v25[1];
    v17 = (*(_DWORD *)(v25[0] + 8LL))-- == 1;
    if ( v17 )
      sub_15D7BC0(v19, v18);
  }
  v20 = v26[0];
  if ( v26[0] )
  {
    v21 = v26[1];
    v17 = (*(_DWORD *)(v26[0] + 8LL))-- == 1;
    if ( v17 )
      sub_15D7BC0(v21, v20);
  }
  return v15;
}


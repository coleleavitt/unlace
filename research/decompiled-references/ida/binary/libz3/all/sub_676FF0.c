__m128i *__fastcall sub_676FF0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  bool v12; // zf
  __m128i v13; // [rsp+0h] [rbp-80h] BYREF
  __int64 v14; // [rsp+18h] [rbp-68h]
  int v15[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+48h] [rbp-38h]

  v4 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)(a2 + 8);
  v14 = a2;
  if ( v4 && *(_DWORD *)(a2 + 144) == *(_DWORD *)v4 && !*(_DWORD *)(v4 + 4) )
  {
    v7 = 0xFFFFFFFF0LL;
    v8 = *(_QWORD *)(v4 + 8);
    if ( v8 )
      v7 = 16LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
    v9 = v7 + v8;
    if ( *(_BYTE *)(v9 + 8) != 1 )
      sub_DBF6E(0);
    sub_675820(v16, *(__int64 **)(v14 + 24), *(_QWORD *)v9);
    v10 = v16[0];
    v17 = a3;
    v18 = 1;
    v11 = v16[1];
    *(_QWORD *)v15 = v16[0];
    v14 = sub_15DCAD0(*(_QWORD *)(v14 + 152), (int)v15, 0);
    v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v5);
    sub_15D0DF0(&v17);
    v12 = v14 == 0;
    *a1 = _mm_load_si128(&v13);
    if ( !v12 )
      ++*(_DWORD *)(v14 + 8);
    sub_675460(v10, v11);
  }
  else
  {
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v5;
  }
  return a1;
}


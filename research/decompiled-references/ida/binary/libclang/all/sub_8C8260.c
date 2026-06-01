unsigned __int64 __fastcall sub_8C8260(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-38h]
  __int64 v17; // [rsp+8h] [rbp-30h]

  v7 = 8 * a3;
  v10 = a3;
  if ( !a4 )
    v7 = 0;
  v11 = v7 + 16 * a3 + 40;
  v12 = a1[274];
  a1[284] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v11 + v13 && v12 )
  {
    a1[274] = v11 + v13;
  }
  else
  {
    v17 = a6;
    v16 = a5;
    v15 = sub_8C7D70((__int64)(a1 + 274), v11, 3);
    a6 = v17;
    a5 = v16;
    v13 = v15;
  }
  sub_8C80C0(v13, a2, v10, a4, a5, a6, a7);
  return v13;
}


__int64 __fastcall sub_DFFC0(_QWORD *a1)
{
  unsigned int v1; // ebx
  unsigned int i; // ebx
  __int64 v3; // rbp
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  __int64 v11[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v12; // [rsp+20h] [rbp-88h] BYREF
  __int128 v13; // [rsp+28h] [rbp-80h]
  __int64 v14[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  __int128 v16; // [rsp+58h] [rbp-50h]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v1 = *(_DWORD *)(*a1 + 72LL);
  sub_6FCF0(*(_QWORD *)(a1[1] + 784LL), v1, &v9);
  sub_64190(&v9, v1);
  v11[0] = 0;
  v11[1] = 0;
  v12 = 0;
  v13 = 0;
  for ( i = sub_64960(&v9, 0); ; i = sub_64960(&v9, i + 1) )
  {
    v4 = a1[1];
    if ( i == (_DWORD)v10 )
      break;
    if ( i >= *(_DWORD *)(v4 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
      BUG();
    }
    v3 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * i);
    sub_64280(v11, (__int64 *)(v3 + 200));
    sub_316CB0(&v12, v3 + 216);
  }
  v5 = *(_QWORD *)(v4 + 664);
  v6 = *(_QWORD *)(v4 + 672);
  v14[0] = 0;
  v14[1] = 0;
  v16 = 0;
  v15 = 0;
  if ( v5 + v6 - 1 >= v5 )
  {
    v15 = qvector_reserve(&v15, 0, 1, 16);
    *(__m128i *)(v15 + 16 * v16) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
    *(_QWORD *)&v16 = v16 + 1;
  }
  sub_64700(v11, v14);
  sub_3180C0(&v12, &v15);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  v7 = 0;
  qfree(v14[0]);
  if ( (_QWORD)v13 )
    v7 = *(_DWORD *)(v12 + 16 * v13 - 16) + *(_DWORD *)(v12 + 16 * v13 - 16 + 8) - *(_DWORD *)(v4 + 664);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v11[0]);
  qfree(v9);
  return v7;
}

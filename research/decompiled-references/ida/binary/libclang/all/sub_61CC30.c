__int64 __fastcall sub_61CC30(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rbp

  if ( (unsigned __int8)sub_61AC60(a1, *(_QWORD *)(a2 + 184), a3, a4, a5, a6) )
    return 1;
  v6 = *(_QWORD *)(a2 + 160);
  v7 = 0;
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) != 0 )
    {
      if ( v7 )
        v7 = *(_QWORD *)v7;
    }
  }
  v8 = *(unsigned int *)(v7 + 8);
  if ( (_DWORD)v8 )
  {
    v9 = v7 + 16;
    v10 = v9 + 32 * v8;
    while ( !(unsigned __int8)sub_61C470(a1->m128i_i64, v9) )
    {
      v9 += 32;
      if ( v9 == v10 )
        return sub_61BA50(a1, a2);
    }
    return 1;
  }
  return sub_61BA50(a1, a2);
}


char *__fastcall sub_5675C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned __int8 *a9,
        __int64 a10)
{
  unsigned __int16 v10; // si

  v10 = WORD2(a8);
  if ( WORD2(a8) )
    return sub_563060(*(_QWORD *)(a10 + 8), v10);
  v10 = a9[1];
  if ( (*(_QWORD *)a9 & 1) != 0 )
    return sub_563060(*(_QWORD *)(a10 + 8), v10);
  else
    return sub_563060(*(_QWORD *)(a10 + 8), *(_WORD *)(*(_QWORD *)a9 + 40LL));
}

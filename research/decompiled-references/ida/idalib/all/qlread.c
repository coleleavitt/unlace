__int64 __fastcall qlread(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return qfread(*(FILE **)(a1 + 8), a2);
  return sub_8370A0(a1, a2, a3, a4, a5);
}

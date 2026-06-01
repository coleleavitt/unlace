char __fastcall sub_131730(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  if ( *(_DWORD *)(a4 + 4) != -1 )
    return sub_131490(a1, a2, a3, (__int16 *)a4, a5, a6, a7);
  if ( *(_BYTE *)(a1[12] + 145) )
    return sub_11BB90((unsigned __int8 *)a4) == (char)a6;
  return a6 == 0;
}

__int64 __fastcall sub_3EBF80(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 that; // rbx
  unsigned __int64 *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+0h] [rbp-198h] BYREF
  __int64 v10; // [rsp+10h] [rbp-188h]
  __int64 v11; // [rsp+18h] [rbp-180h]
  __int64 v12; // [rsp+20h] [rbp-178h]
  char v13; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-30h] BYREF

  that = a1;
  v14 = __readfsqword(0x28u);
  v3 = (unsigned __int64 *)&v13;
  v9 = -1;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( &v14 != v3 );
  get_ph(0);
  if ( a1 < a2 )
  {
    do
    {
      decode_insn(&v9, that, v4, v5, v6, v7, 0.0);
      that = next_that(that, a2, sub_1B7C10, 0);
    }
    while ( that < a2 );
  }
  return 0;
}

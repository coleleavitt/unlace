__int64 __fastcall sub_5B9200(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  char *v8; // rdx
  unsigned __int64 *v9; // rax
  char v10; // [rsp+Eh] [rbp-1AAh] BYREF
  char v11; // [rsp+Fh] [rbp-1A9h] BYREF
  __int64 v12; // [rsp+10h] [rbp-1A8h] BYREF
  char *v13; // [rsp+18h] [rbp-1A0h] BYREF
  __int128 v14; // [rsp+20h] [rbp-198h] BYREF
  __int64 v15; // [rsp+30h] [rbp-188h]
  __int64 v16; // [rsp+38h] [rbp-180h]
  __int64 v17; // [rsp+40h] [rbp-178h]
  char v18; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+188h] [rbp-30h] BYREF

  v3 = a1[1].m128i_i64[0];
  v19 = __readfsqword(0x28u);
  v13 = (char *)a3;
  v12 = 0;
  if ( *(char *)(v3 + 10) < 0 )
  {
    v10 = 1;
    v11 = 1;
    if ( sub_3792E0(0x2Du, &v13, &v10, &v11) == 1 )
    {
      v8 = v13;
      if ( v13 != (char *)-1LL )
      {
        if ( v10 )
        {
          v15 = -1;
          v9 = (unsigned __int64 *)&v18;
          v16 = 0;
          v17 = 0;
          v14 = -1;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 5;
            *((_WORD *)v9 - 19) = 0;
            *((_WORD *)v9 - 18) = 0;
            *((_DWORD *)v9 - 2) = 0;
            *((_WORD *)v9 - 17) = 0;
            *((_OWORD *)v9 - 2) = 0;
            *(v9 - 2) = 0;
          }
          while ( &v19 != v9 );
          if ( (int)sub_573440(a1, (__int64)&v14, v8, 0) <= 0 || sub_3792E0(0x51u, &v12, &v14, 0.0) != 1 )
            v12 = 0;
        }
      }
    }
  }
  v5 = sub_5B9070(a1, a2, a3);
  v6 = 0;
  if ( v5 )
    v6 = v5[1];
  return v6 + v12;
}

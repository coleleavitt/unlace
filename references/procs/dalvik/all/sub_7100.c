unsigned __int64 __fastcall sub_7100(__int64 a1, char a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD v5[4]; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v6; // [rsp+20h] [rbp-198h] BYREF
  __int64 v7; // [rsp+30h] [rbp-188h]
  __int64 v8; // [rsp+38h] [rbp-180h]
  __int64 v9; // [rsp+40h] [rbp-178h]
  char v10; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+188h] [rbp-30h] BYREF

  v11 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v10;
  v6 = -1;
  v7 = -1;
  v8 = 0;
  v9 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v11 != v2 );
  if ( (unsigned __int8)xrefblk_t_first_to(v5, a1, 4, 0.0) )
  {
    do
    {
      while ( 1 )
      {
        decode_insn(&v6, v5[0]);
        if ( (unsigned __int8)v8 > 0x72u )
          break;
        if ( (unsigned __int8)v8 <= 0x68u && ((unsigned __int8)(v8 - 37) > 1u || (a2 & 1) == 0) )
          goto LABEL_12;
LABEL_8:
        if ( !(unsigned __int8)xrefblk_t_next_to(v5) )
          return v11 - __readfsqword(0x28u);
      }
      if ( (unsigned __int8)(v8 + 26) <= 0x14u )
      {
        v3 = 1981443;
        if ( _bittest64(&v3, (unsigned int)(unsigned __int16)v8 + 26) )
          goto LABEL_8;
      }
LABEL_12:
      sub_6FE0(a1, (__int64)"strange result move");
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v5) );
  }
  return v11 - __readfsqword(0x28u);
}

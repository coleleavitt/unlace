__int64 sub_73FC0()
{
  unsigned __int64 *v0; // rax
  __int128 v2; // [rsp+2h] [rbp-1A8h]
  __int64 v3; // [rsp+12h] [rbp-198h]
  __int64 v4; // [rsp+1Ah] [rbp-190h]
  __int64 v5; // [rsp+22h] [rbp-188h]
  __int64 v6; // [rsp+2Ah] [rbp-180h] BYREF
  char v7; // [rsp+53h] [rbp-157h]
  __int64 v8; // [rsp+5Ah] [rbp-150h]
  unsigned __int64 v9; // [rsp+16Ah] [rbp-40h] BYREF

  v9 = __readfsqword(0x28u);
  v2 = -1;
  v3 = -1;
  v0 = (unsigned __int64 *)&v6;
  v4 = 0;
  v5 = 0;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 5;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *(v0 - 2) = 0;
  }
  while ( &v9 != v0 );
  if ( (int)decode_insn() > 0 && (_WORD)v4 == 122 && (v6 & 0xFFFF00000000FF00LL) == 0x4000000000300LL && v7 == 5 && !v8 )
    decode_insn();
  return -1;
}

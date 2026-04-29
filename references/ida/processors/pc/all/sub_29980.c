unsigned __int64 __fastcall sub_29980(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 *v5; // rax
  char v7; // [rsp+2Ah] [rbp-180h] BYREF
  unsigned __int64 v8; // [rsp+16Ah] [rbp-40h] BYREF

  v8 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)&v7;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v8 != v5 );
  if ( a2 < a2 + a3 )
  {
    netnode_supset();
    if ( (unsigned int)decode_insn() )
    {
      if ( a4 )
        set_abits();
    }
  }
  return v8 - __readfsqword(0x28u);
}

__int64 __fastcall sub_3E3E80(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  char v4; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-20h] BYREF

  v5 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v2 = (unsigned __int64 *)&v4;
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
    while ( &v5 != v2 );
    if ( decode_prev_insn() != -1 )
      decode_insn();
  }
  return 0;
}

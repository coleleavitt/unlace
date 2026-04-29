__int64 __fastcall sub_439C0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v4; // rax
  char v6; // [rsp+48h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+188h] [rbp-20h] BYREF

  v7 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v6;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v7 != v4 );
  decode_insn();
  if ( !a3 )
    sub_22E50((__int64)"This command is applicable only for BL instructions", a1, 0.0);
  return 0;
}

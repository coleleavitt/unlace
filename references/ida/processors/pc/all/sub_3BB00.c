__int64 __fastcall sub_3BB00(__int64 a1)
{
  unsigned __int64 *v1; // rax
  __int64 v2; // rbp
  int v3; // ebx
  char v5; // [rsp+50h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+190h] [rbp-20h] BYREF

  v6 = __readfsqword(0x28u);
  v1 = (unsigned __int64 *)&v5;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 5;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *(v1 - 2) = 0;
  }
  while ( &v6 != v1 );
  v2 = a1 - 16;
  v3 = 16;
  while ( (unsigned int)decode_insn() != v3 || !(unsigned __int8)is_call_insn() )
  {
    ++v2;
    if ( !--v3 )
      return 0;
  }
  return v2;
}

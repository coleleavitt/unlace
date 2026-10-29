/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFFD0
// Address: 0x080CFFD0

//----- (080CFFD0) --------------------------------------------------------
void __cdecl __noreturn sub_80CFFD0(char *s, int a2)
{
  _BYTE v2[16]; // [esp+0h] [ebp-20h] BYREF
  unsigned int v3; // [esp+10h] [ebp-10h]

  v3 = __readgsdword(0x14u);
  if ( s )
  {
    if ( off_811E568 )
    {
      off_811E568(v2);
    }
    else
    {
      sub_80D3B30(s, a2);
      sub_80CF2F0(10, stderr);
    }
  }
  ++dword_811F8A8;
  if ( v3 == __readgsdword(0x14u) )
    sub_80CFF70(1);
  sub_80D7AB0();
}
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
// 811F8A8: using guessed type int dword_811F8A8;

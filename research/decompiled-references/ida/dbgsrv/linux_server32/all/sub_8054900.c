/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054900
// Address: 0x08054900

//----- (08054900) --------------------------------------------------------
int __usercall sub_8054900@<eax>(int result@<eax>)
{
  _DWORD v1[2]; // [esp+0h] [ebp-258h] BYREF
  char v2; // [esp+8h] [ebp-250h] BYREF
  unsigned int v3; // [esp+248h] [ebp-10h]

  v3 = __readgsdword(0x14u);
  if ( dword_811D388 < 0 )
  {
    v1[1] = 576;
    v1[0] = &v2;
    result = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, result, 514, v1);
    LOBYTE(result) = result == 0;
    dword_811D388 = (unsigned __int8)result;
  }
  else
  {
    LOBYTE(result) = dword_811D388 != 0;
  }
  if ( v3 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811D388: using guessed type int dword_811D388;

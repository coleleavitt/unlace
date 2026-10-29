/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084220
// Address: 0x08084220

//----- (08084220) --------------------------------------------------------
unsigned int sub_8084220()
{
  unsigned int result; // eax
  _BYTE v1[16]; // [esp+0h] [ebp-20h] BYREF
  unsigned int v2; // [esp+10h] [ebp-10h]

  v2 = __readgsdword(0x14u);
  off_811E568(v1);
  result = v2 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);

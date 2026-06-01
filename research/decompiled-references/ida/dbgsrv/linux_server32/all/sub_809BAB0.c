/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809BAB0
// Address: 0x0809BAB0

//----- (0809BAB0) --------------------------------------------------------
int sub_809BAB0()
{
  int result; // eax
  _BYTE v1[16]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v2; // [esp+14h] [ebp-10h]

  v2 = __readgsdword(0x14u);
  off_811E568(v1);
  result = v1[0];
  if ( v2 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);

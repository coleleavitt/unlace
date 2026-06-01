/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77FAC
// Address: 0x00077FAC

//----- (00077FAC) --------------------------------------------------------
_BYTE *__fastcall sub_77FAC(char *a1)
{
  size_t v2; // r5
  _BYTE *v3; // r0
  _BYTE *v4; // r6

  if ( !a1 )
    return nullptr;
  v2 = strlen(a1) + 1;
  v3 = malloc(v2);
  v4 = v3;
  if ( v3 )
  {
    sub_7968C(v3, (unsigned __int8 *)a1, v2);
    return v4;
  }
  sub_70B98(1);
  *_errno_location() = 12;
  sub_70B98(1);
  return nullptr;
}

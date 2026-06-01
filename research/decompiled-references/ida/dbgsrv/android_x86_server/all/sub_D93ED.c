/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D93ED
// Address: 0x000D93ED

//----- (000D93ED) --------------------------------------------------------
int __usercall sub_D93ED@<eax>(char a1@<al>, int a2@<edx>)
{
  unsigned __int8 v2; // al

  if ( a1 == -1 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return Unwind_GetTextRelBase(a2);
  if ( v2 <= 0x20u )
  {
    if ( !v2 || v2 == 16 )
      return 0;
LABEL_13:
    abort();
  }
  if ( v2 == 64 )
    return Unwind_GetRegionStart(a2);
  if ( v2 != 80 )
  {
    if ( v2 == 48 )
      return Unwind_GetDataRelBase(a2);
    goto LABEL_13;
  }
  return 0;
}

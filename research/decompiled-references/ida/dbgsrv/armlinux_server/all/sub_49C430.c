/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C430
// Address: 0x000000000049C430

//----- (000000000049C430) ----------------------------------------------------
__int64 __fastcall sub_49C430(_DWORD *a1)
{
  __int64 result; // x0
  int v3; // w1
  int pipedes[2]; // [xsp+20h] [xbp-10h] BYREF

  result = pipe(pipedes);
  if ( (_DWORD)result )
    return (unsigned int)*__errno_location();
  v3 = pipedes[1];
  *a1 = pipedes[0];
  a1[1] = v3;
  return result;
}

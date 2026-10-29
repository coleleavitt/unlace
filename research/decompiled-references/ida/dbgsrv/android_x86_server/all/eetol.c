/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol
// Address: 0x000A6630

//----- (000A6630) --------------------------------------------------------
int __cdecl eetol(_DWORD *a1, __int64 *a2, char a3)
{
  int result; // eax
  int v4[7]; // [esp+8h] [ebp-1Ch] BYREF

  v4[2] = __readgsdword(0x14u);
  result = sub_A66A0(v4, a2, 31, a3);
  if ( result == 1 )
    *a1 = v4[0];
  return result;
}

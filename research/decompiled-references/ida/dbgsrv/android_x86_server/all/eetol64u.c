/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol64u
// Address: 0x000A6910

//----- (000A6910) --------------------------------------------------------
int __cdecl eetol64u(_QWORD *a1, __int64 *a2, char a3)
{
  int result; // eax
  __int64 v4; // [esp+8h] [ebp-1Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-14h]

  v5 = __readgsdword(0x14u);
  result = sub_A66A0((int *)&v4, a2, 64, a3);
  if ( result == 1 )
    *a1 = v4;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471233
// Address: 0x00471233

//----- (00471233) --------------------------------------------------------
char __userpurge sub_471233@<al>(int a1@<ecx>, int a2@<ebx>, unsigned __int8 a3)
{
  int v4; // eax

  if ( *(__int16 *)(sub_478614(a1, a2) + 2 * a3) >= 0 )
    return 1;
  v4 = sub_470F7F((unsigned __int8 **)(a1 + 8));
  if ( v4 == *(unsigned __int8 *)(a1 + 45) )
    return 1;
  sub_4718E9((_DWORD *)(a1 + 8), v4);
  sub_4718E9((_DWORD *)(a1 + 8), (char)a3);
  return 0;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471281
// Address: 0x00471281

//----- (00471281) --------------------------------------------------------
char __usercall sub_471281@<al>(unsigned __int64 a1@<ebx:ecx>, int a2@<edi>)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  char result; // al

  v4 = a1;
  if ( *(_DWORD *)(a1 + 40) == 2 )
    return sub_47130B(a1);
  if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v2 = a1;
    v3 = sub_470F7F((unsigned __int8 **)(a1 + 8));
    if ( v3 != -1 )
    {
      if ( v3 == *(unsigned __int8 *)(v2 + 44) )
        return sub_471233(v2, SHIDWORD(a1), v3);
      sub_4718E9((_DWORD *)(v2 + 8), v3);
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 40) != 4 )
    return 0;
  result = sub_4710F7(a1, a2);
  if ( result && *(_DWORD *)(v4 + 64) != 9 && !*(_BYTE *)(v4 + 46) )
    ++*(_DWORD *)(v4 + 112);
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E7D0
// Address: 0x000000000047E7D0

//----- (000000000047E7D0) ----------------------------------------------------
__int64 __fastcall sub_47E7D0(__int64 a1, char *haystack)
{
  char *v4; // x0
  size_t v5; // x19
  unsigned __int64 v6; // x22
  _BYTE *v7; // x0

  v4 = strstr(haystack, ".clt");
  if ( !v4 )
    return 0;
  v5 = v4 - haystack;
  *(_QWORD *)(a1 + 8) = 0;
  v6 = v4 - haystack + 1;
  v7 = *(_BYTE **)a1;
  if ( v6 > *(_QWORD *)(a1 + 16) )
  {
    v7 = sub_491288(a1, *(void **)a1, v6, 1u);
    *(_QWORD *)a1 = v7;
  }
  *(_QWORD *)(a1 + 8) = v6;
  v7[v5] = 0;
  memmove(*(void **)a1, haystack, v5);
  return 1;
}

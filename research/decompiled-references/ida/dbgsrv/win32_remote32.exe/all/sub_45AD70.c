/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AD70
// Address: 0x0045AD70

//----- (0045AD70) --------------------------------------------------------
_BYTE *__stdcall sub_45AD70(_BYTE *a1, int a2)
{
  int v2; // ecx
  _BYTE *result; // eax
  char *i; // esi
  char v5; // dl
  char v6; // bl

  v2 = a2;
  result = a1;
  for ( i = a1; v2 > 1; v2 -= 2 )
  {
    v5 = i[v2 - 1];
    v6 = *i++;
    *(i - 1) = v5;
    i[v2 - 2] = v6;
  }
  return result;
}

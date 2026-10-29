/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D8F0
// Address: 0x0044D8F0

//----- (0044D8F0) --------------------------------------------------------
bool __userpurge sub_44D8F0@<al>(int a1@<edi>, __m128i a2@<xmm0>, _DWORD *a3, int a4, unsigned int a5, int a6, char a7)
{
  int v7; // ebx
  bool result; // al
  const char *v9; // eax
  int v10; // eax
  _DWORD *v11; // esi
  unsigned int v12; // edi
  int v13; // eax
  int v14[9]; // [esp+Ch] [ebp-28h] BYREF

  v7 = a7 & 1;
  if ( (a7 & 1) != 0 )
    result = sub_453690(v7, a1, v14, a6, 0);
  else
    result = sub_4536D0(v7, a1, v14, a6, 0);
  if ( result )
  {
    v9 = "T";
    if ( (a7 & 2) == 0 )
      v9 = &byte_48A240;
    v10 = sub_453D50(
            a2,
            a3,
            a4,
            "%04u-%02u-%02u%s%02u:%02u:%02u",
            v14[5] + 1900,
            v14[4] + 1,
            v14[3],
            v9,
            v14[2],
            v14[1],
            v14[0]);
    v11 = (_DWORD *)((char *)a3 + v10);
    v12 = a4 - v10;
    if ( (a7 & 4) != 0 )
    {
      v13 = sub_453D50(a2, v11, v12, ".%03u", a5 / 0x3E8);
      v11 = (_DWORD *)((char *)v11 + v13);
      v12 -= v13;
    }
    if ( (a7 & 2) != 0 && (a7 & 1) != 0 && v12 >= 2 )
      *(_WORD *)v11 = 90;
    return 1;
  }
  return result;
}
// 48A240: using guessed type char byte_48A240;

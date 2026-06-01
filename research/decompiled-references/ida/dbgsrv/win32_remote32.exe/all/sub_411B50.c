/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411B50
// Address: 0x00411B50

//----- (00411B50) --------------------------------------------------------
char __userpurge sub_411B50@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, char *lpBuffer, unsigned int a5)
{
  SIZE_T v5; // esi
  SIZE_T v6; // eax

  *lpBuffer = 0;
  v5 = *(unsigned __int16 *)(a3 + 18);
  if ( v5 >= a5 - ((*(_WORD *)(a3 + 16) != 0) + 1) )
    v5 = a5 - ((*(_WORD *)(a3 + 16) != 0) + 1);
  v6 = sub_40C190(a1, a2, *(LPVOID *)(a3 + 12), lpBuffer, v5, 0, 0);
  if ( v6 != v5 )
    return 0;
  lpBuffer[v6] = 0;
  if ( *(_WORD *)(a3 + 16) )
  {
    *(_WORD *)&lpBuffer[v6] = 0;
    sub_4178E0((unsigned int)lpBuffer, a5, (unsigned __int16 *)lpBuffer);
  }
  return 1;
}

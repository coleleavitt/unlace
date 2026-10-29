/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DE51
// Address: 0x0047DE51

//----- (0047DE51) --------------------------------------------------------
char *__usercall sub_47DE51@<eax>(int a1@<edi>, LPVOID lpMem, unsigned int a3, unsigned int a4)
{
  SIZE_T v5; // edi
  unsigned int v6; // esi
  char *v7; // ebx

  if ( a3 && 0xFFFFFFE0 / a3 < a4 )
  {
    *sub_46B984() = 12;
    return nullptr;
  }
  else
  {
    if ( lpMem )
      v5 = sub_4818F1((int)lpMem, a1, lpMem);
    else
      v5 = 0;
    v6 = a4 * a3;
    v7 = (char *)sub_47B51E(lpMem, a4 * a3);
    if ( v7 )
    {
      if ( v5 < v6 )
        sub_464890((__m128i *)&v7[v5], 0, v6 - v5);
    }
    return v7;
  }
}

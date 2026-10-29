/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B116
// Address: 0x0046B116

//----- (0046B116) --------------------------------------------------------
char __thiscall sub_46B116(int this)
{
  unsigned int v2; // ebx
  __m128i *v3; // edi
  char *v4; // eax

  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(this + 40);
  v3 = *(__m128i **)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 52) = v3;
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( sub_469B21(*(_DWORD *)this, *(_DWORD *)(this + 4), *(_BYTE *)(this + 49), *(_DWORD *)(this + 44)) )
  {
    if ( !v3 )
    {
      v3 = (__m128i *)L"(null)";
      *(_DWORD *)(this + 52) = L"(null)";
    }
    *(_BYTE *)(this + 60) = 1;
    v4 = (char *)sub_479958(v3, v2);
  }
  else
  {
    if ( !v3 )
    {
      v3 = (__m128i *)"(null)";
      *(_DWORD *)(this + 52) = "(null)";
    }
    v4 = sub_479836(v3, v2);
  }
  *(_DWORD *)(this + 56) = v4;
  return 1;
}
// 4A57B8: using guessed type wchar_t aNull_1[7];

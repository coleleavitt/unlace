/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DCF0
// Address: 0x0043DCF0

//----- (0043DCF0) --------------------------------------------------------
void __thiscall sub_43DCF0(void *this, const char *a2)
{
  int v2; // edi
  unsigned int v3; // esi

  v2 = (int)this + 132;
  if ( a2 && (v3 = strlen(a2)) != 0 )
  {
    if ( v3 + 1 > *(_DWORD *)(v2 + 8) )
      *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v3 + 1, 1u);
    *(_DWORD *)(v2 + 4) = v3 + 1;
    sub_464310(*(_DWORD *)v2, (unsigned int)a2, v3);
    *(_BYTE *)(v3 + *(_DWORD *)v2) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 4) = 0;
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404D90
// Address: 0x00404D90

//----- (00404D90) --------------------------------------------------------
char __thiscall sub_404D90(int this, const char *a2)
{
  int v3; // edi
  unsigned int v4; // esi

  *(_DWORD *)(this + 40) = 10;
  v3 = this + 80;
  if ( a2 && (v4 = strlen(a2)) != 0 )
  {
    if ( v4 + 1 > *(_DWORD *)(v3 + 8) )
      *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v4 + 1, 1u);
    *(_DWORD *)(v3 + 4) = v4 + 1;
    sub_464310(*(_DWORD *)v3, (unsigned int)a2, v4);
    *(_BYTE *)(v4 + *(_DWORD *)v3) = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 4) = 0;
  }
  sub_456370(hHandle, 0xFFFFFFFF);
  dword_4B69C0 = this;
  sub_456350(hSemaphore);
  sub_456370(*(HANDLE *)(this + 200), 0xFFFFFFFF);
  return *(_BYTE *)(this + 92);
}
// 4B69C0: using guessed type int dword_4B69C0;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401340
// Address: 0x00401340

//----- (00401340) --------------------------------------------------------
_DWORD *__thiscall sub_401340(_DWORD *this, const char *a2)
{
  unsigned int v3; // esi
  LPVOID v4; // eax
  unsigned int v5; // ecx

  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = nullptr;
    v5 = v3 + 1;
    if ( v3 != -1 )
    {
      v4 = sub_453B00((int)this, nullptr, v3 + 1, 1u);
      *this = v4;
      v5 = v3 + 1;
    }
    *(this + 1) = v5;
    sub_464310((unsigned int)v4, (unsigned int)a2, v3);
    *(_BYTE *)(v3 + *this) = 0;
  }
  return this;
}

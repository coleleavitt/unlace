/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401590
// Address: 0x00401590

//----- (00401590) --------------------------------------------------------
int __thiscall sub_401590(int this, const char *a2)
{
  unsigned int v3; // esi

  if ( a2 && (v3 = strlen(a2)) != 0 )
  {
    if ( v3 + 1 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v3 + 1, 1u);
    *(_DWORD *)(this + 4) = v3 + 1;
    sub_464310(*(_DWORD *)this, (unsigned int)a2, v3);
    *(_BYTE *)(v3 + *(_DWORD *)this) = 0;
    return this;
  }
  else
  {
    *(_DWORD *)(this + 4) = 0;
    return this;
  }
}

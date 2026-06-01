/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404330
// Address: 0x00404330

//----- (00404330) --------------------------------------------------------
int __thiscall sub_404330(int this, const char *a2)
{
  unsigned int v3; // esi
  int v4; // ebx
  unsigned int v5; // eax

  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = *(_DWORD *)(this + 4) != 0 ? *(_DWORD *)(this + 4) - 1 : 0;
    v5 = v3 + v4 + 1;
    if ( v5 > *(_DWORD *)(this + 8) )
    {
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v3 + v4 + 1, 1u);
      v5 = v3 + v4 + 1;
    }
    *(_DWORD *)(this + 4) = v5;
    *(_BYTE *)(v4 + *(_DWORD *)this + v3) = 0;
    sub_464310(v4 + *(_DWORD *)this, (unsigned int)a2, v3);
  }
  return this;
}

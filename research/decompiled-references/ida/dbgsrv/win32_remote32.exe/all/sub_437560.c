/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437560
// Address: 0x00437560

//----- (00437560) --------------------------------------------------------
_DWORD *__thiscall sub_437560(int this, unsigned int *a2)
{
  LPVOID v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  _DWORD *result; // eax
  unsigned int v8; // [esp+18h] [ebp-10h]

  v3 = nullptr;
  v8 = 0;
  v4 = a2[1];
  if ( v4 )
  {
    v3 = sub_4539E0(a2[1]);
    v8 = v4;
    sub_464310((unsigned int)v3, *a2, v4);
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_DWORD *)(this + 4) + 1;
  if ( v5 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v5, 0xCu);
  v6 = 3 * *(_DWORD *)(this + 4);
  result = *(_DWORD **)this;
  result[v6] = v3;
  result[v6 + 1] = v4;
  result[v6 + 2] = v8;
  ++*(_DWORD *)(this + 4);
  return result;
}

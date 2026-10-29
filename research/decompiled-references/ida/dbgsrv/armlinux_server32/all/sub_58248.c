/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58248
// Address: 0x00058248

//----- (00058248) --------------------------------------------------------
void *__fastcall sub_58248(__int64 *a1, void *a2, size_t a3)
{
  __int64 v3; // kr00_8
  size_t v4; // r4
  _BOOL4 v5; // r3

  v3 = *a1;
  v4 = *(_DWORD *)a1 + a3;
  v5 = *(_DWORD *)a1 > v4;
  if ( *((_DWORD *)a1 + 1) < v4 )
    v5 = 1;
  if ( v5 )
    return nullptr;
  *(_DWORD *)a1 = v4;
  return j_memcpy(a2, (const void *)v3, a3);
}

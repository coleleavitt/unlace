/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_590A0
// Address: 0x000590A0

//----- (000590A0) --------------------------------------------------------
void *__fastcall sub_590A0(int a1, _BYTE *a2)
{
  const char *v3; // r0
  const char *v4; // r5
  size_t v5; // r0
  size_t v6; // r6
  unsigned int v7; // r7
  void *v8; // r0
  void *result; // r0

  v3 = qbasename(a2);
  if ( v3 && (v4 = v3, (v5 = strlen(v3)) != 0) )
  {
    v6 = v5;
    v7 = v5 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v5 + 1 )
    {
      v8 = *(void **)a1;
    }
    else
    {
      v8 = qvector_reserve(a1, *(void **)a1, v7, 1u);
      *(_DWORD *)a1 = v8;
    }
    *(_DWORD *)(a1 + 4) = v7;
    memmove(v8, v4, v6);
    result = *(void **)a1;
    *(_BYTE *)(*(_DWORD *)a1 + v6) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    return nullptr;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79EF0
// Address: 0x00079EF0

//----- (00079EF0) --------------------------------------------------------
const char *__fastcall sub_79EF0(int a1, _BYTE *a2)
{
  const char *result; // eax
  const char *v4; // edi
  const char *v5; // edi
  void *v6; // eax
  size_t v7; // [esp+4h] [ebp-18h]
  const char *v8; // [esp+8h] [ebp-14h]

  result = qbasename(a2);
  if ( result && (v4 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v8 = v4;
    v7 = (size_t)result;
    v5 = result + 1;
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(result + 1) )
    {
      v6 = *(void **)a1;
    }
    else
    {
      v6 = qvector_reserve(a1, *(void **)a1, (unsigned int)(result + 1), 1u);
      *(_DWORD *)a1 = v6;
    }
    *(_DWORD *)(a1 + 4) = v5;
    memmove(v6, v8, v7);
    result = *(const char **)a1;
    *(_BYTE *)(*(_DWORD *)a1 + v7) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  return result;
}

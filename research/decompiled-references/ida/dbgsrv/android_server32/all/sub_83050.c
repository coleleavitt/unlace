/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83050
// Address: 0x00083050

//----- (00083050) --------------------------------------------------------
void *__fastcall sub_83050(int a1, int a2)
{
  void *result; // r0
  int v4; // r0
  size_t v5; // r5
  int v6; // r6
  void *v7; // r0

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 != -1 )
    return (void *)sub_1DA58(a1, "%a", a2);
  v4 = _strlen_chk("BADADDR", 8);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 + 1;
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v4 + 1) )
    {
      v7 = *(void **)a1;
    }
    else
    {
      v7 = qvector_reserve(a1, *(void **)a1, v4 + 1, 1u);
      *(_DWORD *)a1 = v7;
    }
    *(_DWORD *)(a1 + 4) = v6;
    memmove(v7, "BADADDR", v5);
    result = *(void **)a1;
    *(_BYTE *)(*(_DWORD *)a1 + v5) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    return nullptr;
  }
  return result;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);

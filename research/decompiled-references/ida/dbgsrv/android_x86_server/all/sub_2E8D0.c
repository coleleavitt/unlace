/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E8D0
// Address: 0x0002E8D0

//----- (0002E8D0) --------------------------------------------------------
int __cdecl sub_2E8D0(int a1, __int64 a2, char *s)
{
  int result; // eax
  int v4; // edi
  size_t v5; // eax
  size_t v6; // esi
  void *v7; // eax
  size_t v8; // [esp+8h] [ebp-14h]

  result = 0;
  if ( a2 == 14 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( s && (v5 = strlen(s)) != 0 )
    {
      v8 = v5;
      v6 = v5 + 1;
      if ( *(_DWORD *)(v4 + 8) >= v5 + 1 )
      {
        v7 = *(void **)v4;
      }
      else
      {
        v7 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
        *(_DWORD *)v4 = v7;
      }
      *(_DWORD *)(v4 + 4) = v6;
      memmove(v7, s, v8);
      *(_BYTE *)(*(_DWORD *)v4 + v8) = 0;
    }
    else
    {
      *(_DWORD *)(v4 + 4) = 0;
    }
    return 1;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80740F0
// Address: 0x080740F0

//----- (080740F0) --------------------------------------------------------
int __cdecl sub_80740F0(int a1, int a2)
{
  const char *v2; // edx
  const char *v3; // eax
  const char *v4; // edi
  size_t v5; // eax
  void *v7; // eax
  size_t v8; // [esp-28h] [ebp-28h]
  size_t v9; // [esp-24h] [ebp-24h]

  v2 = (char *)&qword_811CFF4 - 258076;
  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(const char **)(a1 + 24);
  v3 = sub_8084620(a1, v2);
  v4 = v3;
  if ( v3 )
  {
    v5 = strlen(v3);
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    if ( v5 )
    {
      v8 = v5;
      v9 = v5 + 1;
      v7 = sub_80CF920(a2 + 4, nullptr, v5 + 1, 1u);
      *(_DWORD *)(a2 + 4) = v7;
      *(_DWORD *)(a2 + 8) = v9;
      memmove(v7, v4, v8);
      *(_BYTE *)(*(_DWORD *)(a2 + 4) + v8) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    return 0;
  }
}
// 811CFF4: using guessed type __int64 qword_811CFF4;

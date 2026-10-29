/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B990
// Address: 0x0007B990

//----- (0007B990) --------------------------------------------------------
int __cdecl sub_7B990(int a1, int a2, int a3)
{
  unsigned int v3; // edi
  size_t v4; // ecx
  const void *v5; // edx
  void *v6; // eax
  int v7; // ecx
  const void *v9; // [esp+4h] [ebp-18h]

  if ( *(_BYTE *)(a2 + 17) )
  {
    if ( a1 && a2 != a1 )
    {
      v3 = *(_DWORD *)(a2 + 4);
      if ( !v3 || (v4 = v3 - 1, v3 == 1) )
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
      else
      {
        v5 = *(const void **)a2;
        if ( *(_DWORD *)(a1 + 8) >= v3 )
        {
          v6 = *(void **)a1;
        }
        else
        {
          v9 = *(const void **)a2;
          v6 = qvector_reserve(a1, *(void **)a1, v3, 1u);
          v5 = v9;
          v4 = v3 - 1;
          *(_DWORD *)a1 = v6;
        }
        *(_DWORD *)(a1 + 4) = v3;
        memmove(v6, v5, v4);
        *(_BYTE *)(*(_DWORD *)a1 + v3 - 1) = 0;
      }
    }
    return 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 12);
    if ( (unsigned int)(v7 - 10) >= 2 && v7 != 18 )
    {
      if ( !(_BYTE)under_debugger )
        interr(30222);
      BUG();
    }
    return sub_7A0F0(a1, a2, a3);
  }
}
// 13E34C: using guessed type int under_debugger;

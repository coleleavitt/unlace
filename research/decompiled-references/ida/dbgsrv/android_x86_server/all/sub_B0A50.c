/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B0A50
// Address: 0x000B0A50

//----- (000B0A50) --------------------------------------------------------
unsigned int __cdecl sub_B0A50(int a1, int a2)
{
  int v2; // edx
  unsigned int v3; // edi
  unsigned int v4; // ecx
  char *v5; // eax
  char *v6; // eax
  char v8; // [esp+7h] [ebp-15h] BYREF
  unsigned int v9; // [esp+8h] [ebp-14h]

  v2 = a2;
  v9 = __readgsdword(0x14u);
  if ( a2 )
  {
    v3 = a2 + 1;
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 >= a2 + 1 )
    {
      if ( v4 != a2 + 1 )
      {
        v8 = 0;
        sub_44400((char **)a1, a2 + 1, &v8);
        v2 = a2;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) >= v3 )
      {
        v5 = *(char **)a1;
      }
      else
      {
        v5 = (char *)qvector_reserve(a1, *(void **)a1, a2 + 1, 1u);
        *(_DWORD *)a1 = v5;
        v4 = *(_DWORD *)(a1 + 4);
      }
      memset(&v5[v4], 0, v3 - v4);
      *(_DWORD *)(a1 + 4) = v3;
      v2 = a2;
    }
    *(_BYTE *)(*(_DWORD *)a1 + v2) = 0;
  }
  else
  {
    v6 = *(char **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v6);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  return __readgsdword(0x14u);
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B6A0
// Address: 0x0003B6A0

//----- (0003B6A0) --------------------------------------------------------
char __cdecl sub_3B6A0(int a1, _DWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // kr00_8
  unsigned int v5; // ecx
  char v7[24]; // [esp+0h] [ebp-2Ch] BYREF
  unsigned int v8; // [esp+18h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 52);
  if ( v2 >= v3 )
  {
    v4 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
    if ( !v4 )
      return 0;
    v5 = *(_DWORD *)(a1 + 32);
    if ( v5 >= (unsigned int)v4 )
    {
      if ( v5 != (_DWORD)v4 )
      {
        *(_OWORD *)v7 = 0;
        sub_44290((char **)(a1 + 28), v4, v7);
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 36) < (unsigned int)v4 )
      {
        *(_DWORD *)(a1 + 28) = qvector_reserve(a1 + 28, *(void **)(a1 + 28), v4, 0x10u);
        v5 = *(_DWORD *)(a1 + 32);
      }
      memset((void *)(HIDWORD(v4) + 16 * v5), 0, 16 * (v4 - v5));
      *(_DWORD *)(a1 + 32) = v4;
    }
    *(_DWORD *)(a1 + 48) = 0;
    v3 = sub_44100(a1, v4);
    *(_DWORD *)(a1 + 52) = v3;
    if ( !v3 )
      return 0;
    *(_QWORD *)(a1 + 40) += v3;
    v2 = *(_DWORD *)(a1 + 48);
  }
  if ( v2 < v3 )
  {
    *a2 = *(_DWORD *)(a1 + 28) + 16 * v2;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  return 0;
}

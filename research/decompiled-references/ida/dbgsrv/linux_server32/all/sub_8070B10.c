/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8070B10
// Address: 0x08070B10

//----- (08070B10) --------------------------------------------------------
int __cdecl sub_8070B10(int a1, _DWORD *a2, unsigned int a3)
{
  char *v3; // ebp
  unsigned int v4; // eax
  int result; // eax
  int v6; // ecx
  unsigned int v7; // ebp
  int v8; // edx
  unsigned __int8 v9; // cl
  char v10; // bp

  v3 = (char *)&qword_811CFF4 - 258076;
  v4 = sub_806EBD0(a3, a2);
  if ( *(_DWORD *)(v4 + 4) )
    v3 = *(char **)v4;
  if ( sub_806D540(a1, v3) )
  {
    *(_BYTE *)(a1 + 60) = 1;
    result = (unsigned __int8)v3[1];
    if ( (unsigned __int8)(result - 97) <= 0x17u )
    {
      v6 = 8912897;
      if ( _bittest(&v6, result - 97) )
      {
        if ( (_BYTE)result == 97 || (_BYTE)result == 120 )
        {
          v7 = 1;
        }
        else
        {
          if ( (_BYTE)result == 116 )
            *(_BYTE *)(a3 + 66) |= 1u;
          v7 = 2;
        }
        result = *(_DWORD *)(a1 + 52);
        if ( result )
          result = ((int (__cdecl *)(_DWORD *, unsigned int, unsigned int, int))result)(a2, a3, v7, 1);
        if ( *(_BYTE *)(a1 + 61) )
          return sub_80704E0((_DWORD *)a1, (_DWORD *)a3, v7);
      }
    }
    return result;
  }
  v8 = 8196;
  v9 = *(_BYTE *)(a3 + 64);
  result = *(_BYTE *)(a3 + 28) & 0xF;
  if ( !_bittest(&v8, result) )
  {
    if ( (_BYTE)result != 15 || v9 > 2u )
      return result;
    *(_DWORD *)(a3 + 56) &= ~1u;
    goto LABEL_15;
  }
  if ( v9 > 2u )
    return result;
  *(_DWORD *)(a3 + 56) &= ~1u;
  if ( (_BYTE)result == 13 )
  {
    *(_BYTE *)(a3 + 65) = 2;
LABEL_15:
    *(_BYTE *)(a3 + 66) |= 1u;
    result = *(_DWORD *)(a1 + 52);
    if ( !result )
      return result;
    ((void (__cdecl *)(_DWORD *, unsigned int, int, _DWORD))result)(a2, a3, 2, 0);
    v10 = *(_BYTE *)(a3 + 66);
    result = v10 & 1;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a3 + 32) & 1) != 0 )
    goto LABEL_15;
  v10 = *(_BYTE *)(a3 + 66);
  result = v10 & 1;
LABEL_17:
  if ( !(_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 61)
      || sub_806D5A0(a1, a3) != 2
      || (*(_BYTE *)(a3 + 66) = v10 | 1, (result = *(_DWORD *)(a1 + 52)) != 0)
      && (result = ((int (__cdecl *)(_DWORD *, unsigned int, int, _DWORD))result)(a2, a3, 2, 0),
          (*(_BYTE *)(a3 + 66) & 1) == 0) )
    {
      result = *(_DWORD *)(a1 + 52);
      if ( result )
        return ((int (__cdecl *)(_DWORD *, unsigned int, int, _DWORD))result)(a2, a3, 1, 0);
    }
  }
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;

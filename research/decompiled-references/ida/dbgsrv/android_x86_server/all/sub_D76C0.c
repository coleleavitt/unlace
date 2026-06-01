/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D76C0
// Address: 0x000D76C0

//----- (000D76C0) --------------------------------------------------------
_BYTE *__cdecl sub_D76C0(int a1, void **a2)
{
  _BYTE *result; // eax
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  size_t v6; // eax
  char *v7; // ecx
  unsigned int v8; // eax
  void *v9; // eax
  size_t v10; // eax
  char *v11; // ecx
  unsigned int v12; // eax
  size_t v13; // eax

  (*(void (__cdecl **)(_DWORD, void **))(**(_DWORD **)(a1 + 12) + 12))(*(_DWORD *)(a1 + 12), a2);
  result = *(_BYTE **)(a1 + 8);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = (char *)a2[1];
    v4 = (unsigned int)a2[2];
    if ( (unsigned int)(v3 + 6) >= v4 )
    {
      v6 = 2 * v4;
      if ( v6 < (unsigned int)(v3 + 6) )
        v6 = (size_t)(v3 + 6);
      a2[2] = (void *)v6;
      v5 = (char *)realloc(*a2, v6);
      *a2 = v5;
      v3 = (char *)a2[1];
    }
    else
    {
      v5 = (char *)*a2;
    }
    *(_WORD *)&v3[(_DWORD)v5 + 4] = 29811;
    *(_DWORD *)&v3[(_DWORD)v5] = 1852793632;
    a2[1] = (char *)a2[1] + 6;
    result = *(_BYTE **)(a1 + 8);
    if ( ((unsigned __int8)result & 2) == 0 )
    {
LABEL_3:
      if ( ((unsigned __int8)result & 4) == 0 )
        return result;
      goto LABEL_17;
    }
  }
  else if ( ((unsigned __int8)result & 2) == 0 )
  {
    goto LABEL_3;
  }
  v7 = (char *)a2[1];
  v8 = (unsigned int)a2[2];
  if ( (unsigned int)(v7 + 9) >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < (unsigned int)(v7 + 9) )
      v10 = (size_t)(v7 + 9);
    a2[2] = (void *)v10;
    v9 = realloc(*a2, v10);
    *a2 = v9;
    v7 = (char *)a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v7[(_DWORD)v9 + 8] = 101;
  *(_DWORD *)&v7[(_DWORD)v9 + 4] = 1818850401;
  *(_DWORD *)&v7[(_DWORD)v9] = 1819244064;
  a2[1] = (char *)a2[1] + 9;
  result = *(_BYTE **)(a1 + 8);
  if ( ((unsigned __int8)result & 4) != 0 )
  {
LABEL_17:
    v11 = (char *)a2[1];
    v12 = (unsigned int)a2[2];
    if ( (unsigned int)(v11 + 9) >= v12 )
    {
      v13 = 2 * v12;
      if ( v13 < (unsigned int)(v11 + 9) )
        v13 = (size_t)(v11 + 9);
      a2[2] = (void *)v13;
      result = realloc(*a2, v13);
      *a2 = result;
      v11 = (char *)a2[1];
    }
    else
    {
      result = *a2;
    }
    v11[(_DWORD)result + 8] = 116;
    *(_DWORD *)&v11[(_DWORD)result + 4] = 1667854964;
    *(_DWORD *)&v11[(_DWORD)result] = 1936028192;
    a2[1] = (char *)a2[1] + 9;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF4F0
// Address: 0x000BF4F0

//----- (000BF4F0) --------------------------------------------------------
_DWORD *__cdecl sub_BF4F0(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  _DWORD *result; // eax
  char *v7; // eax
  bool v8; // zf
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // ecx
  int v12; // eax
  char *v13; // eax
  int v14; // ecx
  int v15; // [esp+8h] [ebp-14h]
  unsigned int v16; // [esp+8h] [ebp-14h]

  if ( a1 == *(_DWORD *)(a2 + 8) )
  {
    result = *(_DWORD **)(a2 + 16);
    if ( result )
    {
      if ( result == a3 )
      {
        if ( *(_DWORD *)(a2 + 24) == 2 )
        {
          *(_DWORD *)(a2 + 24) = a4;
          return (_DWORD *)a2;
        }
      }
      else
      {
        ++*(_DWORD *)(a2 + 36);
        *(_DWORD *)(a2 + 24) = 2;
        *(_BYTE *)(a2 + 54) = 1;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 16) = a3;
      *(_DWORD *)(a2 + 24) = a4;
      *(_DWORD *)(a2 + 36) = 1;
      return (_DWORD *)a4;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 20);
    v15 = *(_DWORD *)(a1 + 12);
    if ( a3 )
    {
      v5 = v4 >> 8;
      if ( (v4 & 1) != 0 )
        v5 = *(_DWORD *)(*a3 + v5);
    }
    else
    {
      v5 = 0;
    }
    v7 = (char *)a3 + v5;
    v8 = (v4 & 2) == 0;
    v9 = a4;
    if ( v8 )
      v9 = 2;
    (*(void (__cdecl **)(_DWORD, int, char *, int))(**(_DWORD **)(a1 + 16) + 28))(*(_DWORD *)(a1 + 16), a2, v7, v9);
    result = (_DWORD *)v15;
    if ( v15 >= 2 )
    {
      v16 = a1 + 8 * v15 + 16;
      v10 = (_DWORD *)(a1 + 24);
      do
      {
        v11 = v10[1];
        if ( a3 )
        {
          v12 = v11 >> 8;
          if ( (v11 & 1) != 0 )
            v12 = *(_DWORD *)(*a3 + v12);
        }
        else
        {
          v12 = 0;
        }
        v13 = (char *)a3 + v12;
        v8 = (v11 & 2) == 0;
        v14 = a4;
        if ( v8 )
          v14 = 2;
        (*(void (__cdecl **)(_DWORD, int, char *, int))(*(_DWORD *)*v10 + 28))(*v10, a2, v13, v14);
        result = (_DWORD *)a2;
        if ( *(_BYTE *)(a2 + 54) )
          break;
        v10 += 2;
      }
      while ( (unsigned int)v10 < v16 );
    }
  }
  return result;
}

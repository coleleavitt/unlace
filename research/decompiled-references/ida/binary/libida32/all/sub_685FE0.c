__int64 __fastcall sub_685FE0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  int v4; // ebx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  _DWORD *v7; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *(_BYTE *)(a1 + 16) )
      return 0xFFFFFFFFLL;
    *(_BYTE *)(a1 + 16) = 1;
    if ( *(_DWORD *)a2 != 3 )
      return 1;
  }
  else if ( *(_DWORD *)a2 != 3 )
  {
    return 1;
  }
  v3 = *(__int64 **)(a1 + 8);
  v4 = *(unsigned __int16 *)(a2 + 8);
  v5 = v3[1];
  v6 = (_DWORD *)(*v3 + 4 * v5);
  if ( (_DWORD *)*v3 == v6 )
    goto LABEL_14;
  v7 = (_DWORD *)*v3;
  while ( v4 != *v7 )
  {
    if ( v6 == ++v7 )
      goto LABEL_14;
  }
  if ( v6 == v7 )
  {
LABEL_14:
    v9 = v5 + 1;
    if ( v3[2] < v9 )
    {
      v10 = qvector_reserve(*(_QWORD *)(a1 + 8), *v3, v9, 4);
      v11 = v3[1];
      *v3 = v10;
      v6 = (_DWORD *)(v10 + 4 * v11);
    }
    *v6 = v4;
    v8 = 0;
    ++v3[1];
  }
  else
  {
    return (unsigned int)-1;
  }
  return v8;
}


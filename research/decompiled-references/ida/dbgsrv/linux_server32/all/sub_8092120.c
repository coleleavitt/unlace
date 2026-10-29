/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092120
// Address: 0x08092120

//----- (08092120) --------------------------------------------------------
_DWORD *__usercall sub_8092120@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, _DWORD *s1, int a5)
{
  _DWORD *v5; // ebp
  _DWORD *v7; // edx
  unsigned int v9; // ecx
  const void *v10; // ecx
  size_t v11; // eax
  int v12; // eax
  _DWORD *v14; // [esp+0h] [ebp-24h]

  v5 = *(_DWORD **)(a1 + 4 * a3);
  if ( v5 )
  {
    v7 = (_DWORD *)*v5;
    v9 = *(_DWORD *)(*v5 + 12);
    while ( 1 )
    {
      if ( a5 == v9 )
      {
        v10 = (const void *)v7[1];
        v11 = *(s1 - 3);
        if ( v11 == *((_DWORD *)v10 - 3) )
        {
          v14 = v7;
          if ( !v11 )
            break;
          v12 = memcmp(s1, v10, v11);
          v7 = v14;
          if ( !v12 )
            break;
        }
      }
      if ( !*v7 )
        return nullptr;
      v9 = *(_DWORD *)(*v7 + 12);
      v5 = v7;
      if ( a3 != v9 % a2 )
        return nullptr;
      v7 = (_DWORD *)*v7;
    }
  }
  return v5;
}

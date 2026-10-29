/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A950
// Address: 0x0003A950

//----- (0003A950) --------------------------------------------------------
_DWORD *__cdecl sub_3A950(_DWORD *a1, void *src, size_t n)
{
  size_t v3; // edx
  _DWORD *v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // esi
  const void *v7; // eax
  char *v8; // eax
  char v10; // [esp+7h] [ebp-15h] BYREF
  unsigned int v11; // [esp+8h] [ebp-14h]

  v3 = n;
  v4 = a1;
  v11 = __readgsdword(0x14u);
  if ( n )
  {
    v5 = a1[1];
    v6 = 0x7FFFFFFF;
    if ( !__CFADD__(n, v5) )
      v6 = n + v5;
    v7 = src;
    if ( v5 >= v6 )
    {
      if ( v5 != v6 )
      {
        v10 = 0;
        sub_43860((char **)a1, v6, &v10);
        v7 = src;
        v3 = n;
        v4 = a1;
      }
    }
    else
    {
      if ( a1[2] >= v6 )
      {
        v8 = (char *)*a1;
      }
      else
      {
        v8 = (char *)qvector_reserve((int)a1, (void *)*a1, v6, 1u);
        *a1 = v8;
      }
      memset(&v8[a1[1]], 0, v6 - a1[1]);
      v4 = a1;
      a1[1] = v6;
      v3 = n;
      v7 = src;
    }
    memcpy((void *)(*v4 + v5), v7, v3);
    return a1;
  }
  return v4;
}

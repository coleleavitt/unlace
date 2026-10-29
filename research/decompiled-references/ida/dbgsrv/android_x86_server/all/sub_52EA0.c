/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52EA0
// Address: 0x00052EA0

//----- (00052EA0) --------------------------------------------------------
int __cdecl sub_52EA0(_DWORD *a1, char *s2)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // esi
  const char *v6; // eax
  bool v7; // zf
  int result; // eax
  _DWORD *v9; // eax
  size_t v10; // eax
  unsigned int v11; // edi
  void *v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  size_t v15; // [esp+8h] [ebp-14h]

  v2 = a1;
  if ( s2 )
  {
    v3 = a1[1];
    v4 = v3;
    while ( --v4 >= 0 )
    {
      v5 = *(_DWORD **)(*v2 + 4 * v3 - 4);
      v6 = byte_EF875;
      if ( v5[1] )
        v6 = (const char *)*v5;
      v7 = strcmp(v6, s2) == 0;
      v3 = v4;
      v2 = a1;
      if ( v7 )
      {
        result = -1;
        if ( v5[17] )
          return result;
        sub_53050(v5);
        v9 = v5 + 17;
        goto LABEL_19;
      }
    }
  }
  v5 = operator new(0x48u);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[9] = 0;
  v5[8] = 0;
  v5[11] = 0;
  v5[10] = 0;
  v5[13] = 0;
  v5[12] = 0;
  v5[16] = 0;
  v5[15] = 0;
  v5[14] = 0;
  if ( s2 && (v10 = strlen(s2)) != 0 )
  {
    v15 = v10;
    v11 = v10 + 1;
    v12 = (void *)*v5;
    if ( v5[2] < v11 )
    {
      v12 = qvector_reserve((int)v5, v12, v11, 1u);
      *v5 = v12;
    }
    v5[1] = v11;
    memmove(v12, s2, v15);
    *(_BYTE *)(*v5 + v15) = 0;
  }
  else
  {
    v5[1] = 0;
  }
  v13 = (int)a1;
  v4 = a1[1];
  if ( a1[2] >= (unsigned int)(v4 + 1) )
  {
    v14 = (_DWORD *)*a1;
  }
  else
  {
    v14 = qvector_reserve((int)a1, (void *)*a1, v4 + 1, 4u);
    v13 = (int)a1;
    *a1 = v14;
  }
  v14[a1[1]] = v5;
  ++*(_DWORD *)(v13 + 4);
  v9 = v5 + 17;
LABEL_19:
  *v9 = -1;
  v5[3] = 0;
  return v4;
}

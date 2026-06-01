/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_896C0
// Address: 0x000896C0

//----- (000896C0) --------------------------------------------------------
char *__cdecl sub_896C0(int a1, char *a2)
{
  int v2; // edx
  char *result; // eax
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edi
  _BYTE *v11; // eax
  _BYTE *v12; // ecx
  char *v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // esi
  char *v18; // eax
  int v19; // [esp+8h] [ebp-24h]
  size_t v20; // [esp+10h] [ebp-1Ch]
  int v21; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]

  v2 = a1;
  result = a2;
  v4 = 12 * *((_DWORD *)a2 + 1);
  if ( v4 )
  {
    v5 = *(_DWORD *)a2;
    do
    {
      result = strchr(*(const char **)v5, 61);
      v2 = a1;
      if ( result )
      {
        v22 = v4;
        v6 = *(_DWORD *)(v5 + 4);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v6 != 1 )
          {
            v8 = *(_DWORD *)(a1 + 4);
            v9 = v8 - 1;
            if ( !v8 )
              v9 = 0;
            v20 = v6 - 1;
            v10 = v9 + v6;
            v21 = v9 + v7;
            if ( *(_DWORD *)(a1 + 8) >= v10 )
            {
              v12 = *(_BYTE **)a1;
            }
            else
            {
              v19 = v9;
              v11 = qvector_reserve(a1, *(void **)a1, v10, 1u);
              v2 = a1;
              v12 = v11;
              v9 = v19;
              *(_DWORD *)a1 = v12;
            }
            *(_DWORD *)(v2 + 4) = v10;
            v12[v21] = 0;
            memcpy((void *)(*(_DWORD *)v2 + v9), *(const void **)v5, v20);
            v2 = a1;
          }
        }
        v13 = *(char **)v2;
        v14 = *(_DWORD *)(v2 + 4);
        v15 = v14 - 1;
        if ( !v14 )
          v15 = 0;
        v16 = v15 + 2;
        if ( *(_DWORD *)(v2 + 8) < (unsigned int)(v15 + 2) )
        {
          v13 = (char *)qvector_reserve(v2, v13, v15 + 2, 1u);
          v16 = v15 + 2;
          v2 = a1;
          *(_DWORD *)a1 = v13;
        }
        *(_DWORD *)(v2 + 4) = v16;
        v13[v15] = 0;
        result = *(char **)v2;
        *(_BYTE *)(*(_DWORD *)v2 + v15 + 1) = 0;
        v4 = v22;
      }
      v5 += 12;
      v4 -= 12;
    }
    while ( v4 );
  }
  v17 = *(_DWORD *)(v2 + 4);
  if ( v17 >= 2 )
  {
    if ( *(_DWORD *)(v2 + 8) >= v17 + 1 )
    {
      v18 = *(char **)v2;
    }
    else
    {
      v18 = (char *)qvector_reserve(v2, *(void **)v2, v17 + 1, 1u);
      v2 = a1;
      *(_DWORD *)a1 = v18;
    }
    *(_DWORD *)(v2 + 4) = v17 + 1;
    v18[v17 - 1] = 0;
    result = *(char **)v2;
    *(_BYTE *)(*(_DWORD *)v2 + v17) = 0;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf8_utf16
// Address: 0x000A3330

//----- (000A3330) --------------------------------------------------------
char __cdecl utf8_utf16(int a1, int a2, int a3)
{
  int v3; // esi
  unsigned int v4; // eax
  char result; // al
  int v6; // eax
  int v7; // edi
  unsigned int utf8_char; // eax
  __int16 v9; // dx
  __int16 v10; // dx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  unsigned int v15; // esi
  _WORD *v16; // eax
  int v17; // eax
  int v18; // edi
  _WORD *v19; // eax
  __int16 v20; // [esp+Ch] [ebp-20h]
  __int16 v21; // [esp+Ch] [ebp-20h]
  int v22; // [esp+10h] [ebp-1Ch]
  int v23; // [esp+14h] [ebp-18h]

  v3 = a3;
  v4 = 16;
  if ( a3 > 0 )
    v4 = a3;
  if ( *(_DWORD *)(a1 + 8) < v4 )
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, v4, 2u);
  result = 1;
  if ( v3 )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = v6;
      utf8_char = get_utf8_char((char **)&a2);
      v9 = utf8_char;
      v23 = v7;
      if ( utf8_char )
      {
        if ( utf8_char == -1 )
          return 0;
        if ( utf8_char > 0xFFFF )
        {
          v10 = utf8_char;
          v11 = ((utf8_char - 0x10000) >> 10) & 0x3FF | 0xD800;
          v12 = a1;
          v13 = *(_DWORD *)(a1 + 4);
          v14 = v13 - 1;
          if ( !v13 )
            v14 = 0;
          v22 = v14;
          v15 = v14 + 2;
          if ( *(_DWORD *)(a1 + 8) >= v15 )
          {
            v16 = *(_WORD **)a1;
          }
          else
          {
            v20 = v10;
            v16 = qvector_reserve(a1, *(void **)a1, v15, 2u);
            v10 = v20;
            v12 = a1;
            *(_DWORD *)a1 = v16;
          }
          *(_DWORD *)(v12 + 4) = v15;
          v16[v22] = v11;
          *(_WORD *)(*(_DWORD *)v12 + 2 * v22 + 2) = 0;
          v9 = v10 & 0x3FF | 0xDC00;
          goto LABEL_19;
        }
      }
      else
      {
        if ( v3 < 0 )
          return 1;
        ++a2;
      }
      v12 = a1;
LABEL_19:
      v17 = *(_DWORD *)(v12 + 4);
      v18 = v17 - 1;
      if ( !v17 )
        v18 = 0;
      if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v18 + 2) )
      {
        v19 = *(_WORD **)v12;
      }
      else
      {
        v21 = v9;
        v19 = qvector_reserve(v12, *(void **)v12, v18 + 2, 2u);
        v9 = v21;
        v12 = a1;
        *(_DWORD *)a1 = v19;
      }
      *(_DWORD *)(v12 + 4) = v18 + 2;
      v19[v18] = v9;
      *(_WORD *)(*(_DWORD *)v12 + 2 * v18 + 2) = 0;
      v6 = v23 + 1;
      v3 = a3;
      if ( a3 >= 0 && v23 >= a3 )
        return 1;
    }
  }
  return result;
}

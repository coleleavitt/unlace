/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf8_utf16
// Address: 0x0007565C

//----- (0007565C) --------------------------------------------------------
int __fastcall utf8_utf16(int a1, unsigned __int8 *a2, signed int a3)
{
  int v3; // r4
  int result; // r0
  int v6; // r0
  int v7; // r7
  unsigned int utf8_char; // r6
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r7
  _WORD *v12; // r0
  int v13; // r0
  int v14; // r4
  _WORD *v15; // r0
  int v16; // [sp+10h] [bp-10h]
  int v17; // [sp+14h] [bp-Ch]
  unsigned __int8 *v18; // [sp+18h] [bp-8h] BYREF

  v3 = a3;
  v18 = a2;
  if ( a3 <= 0 )
    a3 = 16;
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)a3 )
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a3, 2u);
  result = 1;
  if ( v3 )
  {
    v6 = 1;
    v16 = v3;
    do
    {
      v7 = v6;
      utf8_char = get_utf8_char(&v18);
      result = 0;
      v17 = v7;
      if ( utf8_char )
      {
        if ( utf8_char == -1 )
          return result;
        if ( HIWORD(utf8_char) )
        {
          v9 = (((utf8_char - 0x10000) >> 10) & 0x3FF) - 10240;
          v10 = *(_DWORD *)(a1 + 4);
          v11 = v10 - 1;
          if ( !v10 )
            v11 = 0;
          if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v11 + 2) )
          {
            v12 = *(_WORD **)a1;
          }
          else
          {
            v12 = qvector_reserve(a1, *(void **)a1, v11 + 2, 2u);
            LOWORD(v9) = (((utf8_char - 0x10000) >> 10) & 0x3FF) - 10240;
            *(_DWORD *)a1 = v12;
          }
          *(_DWORD *)(a1 + 4) = v11 + 2;
          v12[v11] = v9;
          *(_WORD *)(*(_DWORD *)a1 + 2 * v11 + 2) = 0;
          LOWORD(utf8_char) = (utf8_char & 0x3FF) - 9216;
        }
      }
      else
      {
        if ( v3 < 0 )
          return 1;
        ++v18;
      }
      v13 = *(_DWORD *)(a1 + 4);
      v14 = v13 - 1;
      if ( !v13 )
        v14 = 0;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v14 + 2) )
      {
        v15 = *(_WORD **)a1;
      }
      else
      {
        v15 = qvector_reserve(a1, *(void **)a1, v14 + 2, 2u);
        *(_DWORD *)a1 = v15;
      }
      *(_DWORD *)(a1 + 4) = v14 + 2;
      v15[v14] = utf8_char;
      *(_WORD *)(*(_DWORD *)a1 + 2 * v14 + 2) = 0;
      v6 = v17 + 1;
      v3 = v16;
    }
    while ( v16 < 0 || v17 < v16 );
    return 1;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487650
// Address: 0x0000000000487650

//----- (0000000000487650) ----------------------------------------------------
__int64 __fastcall sub_487650(__int64 a1)
{
  __int64 v1; // x6
  unsigned int v2; // w2
  _WORD *v3; // x1
  _WORD *v4; // x3
  __int16 v5; // w0
  unsigned int v6; // w5
  int v8; // w0
  __int64 v9; // x1
  _WORD *v10; // x1
  unsigned int v11; // w0
  unsigned int v12; // w2
  int v13; // w5
  unsigned int v14; // w5
  int v15; // w5
  unsigned int v16; // w5

  v1 = a1;
  v2 = *(unsigned __int16 *)(a1 + 4);
  if ( *(_WORD *)(a1 + 4) )
  {
    if ( (v2 & 0xFF00) != 0 )
    {
      v3 = (_WORD *)(a1 + 4);
      v4 = (_WORD *)(a1 + 22);
      v5 = 0;
      while ( 1 )
      {
        *v3++ = v5 | (v2 >> 8);
        v5 = (unsigned __int8)v2 << 8;
        if ( v3 == v4 )
          break;
        v2 = (unsigned __int16)*v3;
      }
      v6 = -8;
      if ( !*(_WORD *)(v1 + 4) )
        return v6;
    }
    do
    {
      sub_487230(v1);
      v16 = v15 - 1;
    }
    while ( *(_WORD *)(v1 + 4) );
    return v16;
  }
  else
  {
    v8 = *(unsigned __int16 *)(a1 + 6);
    v6 = 0;
    if ( (v8 & 0x8000) != 0 )
      return v6;
    if ( !v8 )
    {
      do
      {
        v9 = *(_QWORD *)(v1 + 14);
        *(_QWORD *)(v1 + 4) = *(_QWORD *)(v1 + 6);
        *(_QWORD *)(v1 + 12) = v9;
        *(_WORD *)(v1 + 20) = 0;
        v6 += 16;
        if ( v6 == 128 )
          return v6;
        LOWORD(v8) = *(_WORD *)(v1 + 6);
      }
      while ( !(_WORD)v8 );
    }
    while ( (v8 & 0xFF00) == 0 )
    {
      v10 = (_WORD *)(v1 + 20);
      LOWORD(v11) = 0;
      do
      {
        v12 = (unsigned __int16)*v10;
        *v10-- = v11 | ((_WORD)v12 << 8);
        v11 = v12 >> 8;
      }
      while ( v10 != (_WORD *)(v1 + 2) );
      LOWORD(v8) = *(_WORD *)(v1 + 6);
      v6 += 8;
    }
    if ( (v8 & 0x8000) != 0 )
      return v6;
    do
    {
      sub_487278(v1);
      v14 = v13 + 1;
    }
    while ( (*(__int16 *)(v1 + 6) & 0x80000000) == 0 );
    return v14;
  }
}
// 48772C: variable 'v1' is possibly undefined
// 487734: variable 'v13' is possibly undefined
// 48775C: variable 'v15' is possibly undefined

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CB010
// Address: 0x00000000000CB010

//----- (00000000000CB010) ----------------------------------------------------
__int64 __fastcall sub_CB010(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x11
  int v6; // w12
  int v7; // w12
  __int64 v8; // x12
  __int64 v9; // x12
  __int64 v10; // x13
  unsigned __int8 *v11; // x14
  int v12; // t1
  unsigned __int8 *v13; // x14
  int v14; // t1
  unsigned int v15; // w13
  unsigned int v16; // w14

  v2 = a2 + (a2 >> 3) + (a2 >> 8) + (a2 >> 9) + 4;
  v3 = a2 + 7 + (a2 >> 5) + (a2 >> 7) + (a2 >> 11);
  if ( !a1
    || !a1[8]
    || !a1[9]
    || (v4 = a1[7]) == 0
    || *(_QWORD **)v4 != a1
    || ((v6 = *(_DWORD *)(v4 + 8), (unsigned int)(v6 - 57) > 0x38)
     || ((1LL << ((unsigned __int8)v6 - 57)) & 0x100400400011001LL) == 0)
    && v6 != 42
    && v6 != 666 )
  {
    if ( v2 <= v3 )
      v2 = a2 + 7 + (a2 >> 5) + (a2 >> 7) + (a2 >> 11);
    return v2 + 6;
  }
  v7 = *(_DWORD *)(v4 + 48);
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      if ( v7 == 1 )
      {
        v8 = 6;
        if ( *(_DWORD *)(v4 + 172) )
          v8 = 10;
      }
      else
      {
        v8 = 6;
      }
      goto LABEL_34;
    }
    v9 = *(_QWORD *)(v4 + 56);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 24) )
      {
        v10 = (unsigned int)(*(_DWORD *)(v9 + 32) + 2) + 18LL;
        v11 = *(unsigned __int8 **)(v9 + 40);
        if ( !v11 )
          goto LABEL_29;
      }
      else
      {
        v10 = 18;
        v11 = *(unsigned __int8 **)(v9 + 40);
        if ( !v11 )
        {
LABEL_29:
          v13 = *(unsigned __int8 **)(v9 + 56);
          if ( v13 )
          {
            do
            {
              v14 = *v13++;
              ++v10;
            }
            while ( v14 );
          }
          if ( *(_DWORD *)(v9 + 68) )
            v8 = v10 + 2;
          else
            v8 = v10;
          goto LABEL_34;
        }
      }
      do
      {
        v12 = *v11++;
        ++v10;
      }
      while ( v12 );
      goto LABEL_29;
    }
    v8 = 18;
  }
  else
  {
    v8 = 0;
  }
LABEL_34:
  v15 = *(_DWORD *)(v4 + 84);
  v16 = *(_DWORD *)(v4 + 136);
  if ( v15 == 15 && v16 == 15 )
    return a2 + 7 + (a2 >> 12) + (a2 >> 14) + (a2 >> 25) + v8;
  if ( v15 <= v16 && *(_DWORD *)(v4 + 196) )
    return v2 + v8;
  return v3 + v8;
}

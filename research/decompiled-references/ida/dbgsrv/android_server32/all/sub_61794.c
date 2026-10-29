/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61794
// Address: 0x00061794

//----- (00061794) --------------------------------------------------------
_DWORD *__fastcall sub_61794(_DWORD *a1, int *a2)
{
  int *v3; // r5
  _DWORD *result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r5
  int v8; // r7
  int v9; // r6
  int v10; // r4
  const char *v11; // r0
  bool v12; // zf
  const char *v13; // r0
  int v14; // r2
  _DWORD *v15; // [sp+4h] [bp-18h]
  _DWORD *v16; // [sp+Ch] [bp-10h]
  _DWORD *v17; // [sp+10h] [bp-Ch]
  int v18; // [sp+14h] [bp-8h]

  v3 = a1 + 38;
  sub_61A00((char **)a1 + 38, a2);
  v17 = a1;
  result = (_DWORD *)a1[39];
  if ( (int)result >= 1 )
  {
    v5 = *v3;
    v6 = 0;
    while ( 1 )
    {
      ++v6;
      if ( !*(_DWORD *)(*(_DWORD *)v5 + 8) )
        break;
      v5 += 12;
      if ( v6 >= (int)result )
        return result;
    }
    if ( v5 )
    {
      result = *(_DWORD **)(*(_DWORD *)v5 + 16);
      if ( result )
      {
        result = a1;
        v7 = a1[14];
        if ( v7 >= 1 )
        {
          v15 = a1 + 22;
          v16 = a1 + 20;
          v8 = 32;
          do
          {
            v18 = v17[13];
            v9 = v18 + v8;
            v10 = *(_DWORD *)(v18 + v8 - 16);
            v11 = &byte_B3CBE;
            if ( v10 )
              v11 = *(const char **)(v9 - 20);
            v12 = strcmp(v11, ".debug_info") == 0;
            result = v16;
            if ( v12
              || (!v10 ? (v13 = &byte_B3CBE) : (v13 = *(const char **)(v9 - 20)),
                  v12 = strcmp(v13, ".debug_types") == 0,
                  result = v15,
                  v12) )
            {
              v14 = *(_DWORD *)(v18 + v8 + 4);
              *result = *(_DWORD *)(v18 + v8);
              result[1] = v14;
              result += 2;
            }
            --v7;
            v8 += 104;
          }
          while ( v7 );
        }
      }
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B468
// Address: 0x0003B468

//----- (0003B468) --------------------------------------------------------
unsigned int __fastcall sub_3B468(_DWORD *a1, const char *a2, int *a3)
{
  unsigned int v3; // r4
  int v4; // r7
  unsigned int v5; // r5
  const char *v6; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r4
  int v10; // r7
  const char *v11; // r0
  int v12; // r0
  unsigned int v13; // r4
  int v14; // r7
  const char *v15; // r0
  int v16; // r0
  const char *v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v22; // [sp+4h] [bp-10h]
  char *s2; // [sp+10h] [bp-4h]

  v3 = a1[18];
  s2 = (char *)a2;
  if ( v3 )
  {
    v4 = a1[17];
    v5 = 0;
    while ( 1 )
    {
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v4 + 4) )
        v6 = *(const char **)v4;
      v7 = strcmp(v6, a2);
      v8 = 1;
      if ( !v7 )
        break;
      v4 += 12;
      ++v5;
      a2 = s2;
      if ( v5 >= v3 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v9 = a1[21];
    if ( v9 )
    {
      v10 = a1[20];
      v5 = 0;
      while ( 1 )
      {
        v11 = &byte_B3CBE;
        if ( *(_DWORD *)(v10 + 4) )
          v11 = *(const char **)v10;
        v12 = strcmp(v11, a2);
        v8 = 2;
        if ( !v12 )
          break;
        v10 += 12;
        ++v5;
        a2 = s2;
        if ( v5 >= v9 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v22 = a1[16];
      v13 = *(_DWORD *)(v22 + 56);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v22 + 52);
        v5 = 0;
        while ( 1 )
        {
          v15 = &byte_B3CBE;
          if ( *(_DWORD *)(v14 + 4) )
            v15 = *(const char **)v14;
          v16 = strcmp(v15, a2);
          v8 = 3;
          if ( !v16 )
            break;
          v14 += 40;
          ++v5;
          a2 = s2;
          if ( v5 >= v13 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        v17 = a2;
        v18 = sub_41100(v22, a2);
        v5 = -1;
        v8 = 5;
        if ( !v18 )
        {
          v19 = sub_41550((_DWORD *)a1[16], v17);
          v8 = 6;
          if ( v19 == 0x7FFFFFFF )
          {
            if ( off_DD62C )
            {
              v20 = off_DD62C(s2);
              v8 = 4;
              if ( !v20 )
                v8 = 0;
            }
            else
            {
              v8 = 0;
            }
          }
        }
      }
    }
  }
  if ( a3 )
    *a3 = v8;
  return v5;
}
// B3CBE: using guessed type char byte_B3CBE;
// DD62C: using guessed type int (__fastcall *off_DD62C)(_DWORD);

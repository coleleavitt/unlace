/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A1A4
// Address: 0x0003A1A4

//----- (0003A1A4) --------------------------------------------------------
int __fastcall sub_3A1A4(_DWORD *a1)
{
  char *v2; // r0
  unsigned int v3; // r6
  int v4; // r7
  int v5; // r5
  const char *v6; // r0
  unsigned int v7; // r1
  int v8; // r6
  int v9; // r5
  int v10; // r7
  const char *v11; // r0
  int v12; // r5
  const char *v13; // r0
  int v14; // r1
  int result; // r0
  _DWORD *v16; // [sp+0h] [bp-Ch]
  int *v17; // [sp+0h] [bp-Ch]
  unsigned int v18; // [sp+4h] [bp-8h]
  char *s2; // [sp+8h] [bp-4h]

  if ( a1[7] )
    v2 = (char *)a1[6];
  else
    v2 = &byte_B3CBE;
  s2 = v2;
  v16 = a1;
  v3 = a1[21];
  if ( v3 )
  {
    v4 = a1[20];
    v5 = 0;
    while ( 1 )
    {
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v4 + 4) )
        v6 = *(const char **)v4;
      if ( !strcmp(v6, s2) )
        break;
      v4 += 12;
      if ( ++v5 >= v3 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v7 = v16[18];
    v17 = v16 + 17;
    v18 = v7;
    if ( v7 )
    {
      v8 = *v17;
      v9 = 0;
      v10 = *v17;
      while ( 1 )
      {
        v11 = &byte_B3CBE;
        if ( *(_DWORD *)(v10 + 4) )
          v11 = *(const char **)v10;
        if ( !strcmp(v11, s2) )
          break;
        v10 += 12;
        if ( ++v9 >= v18 )
        {
          v12 = 0;
          while ( 1 )
          {
            v13 = &byte_B3CBE;
            if ( *(_DWORD *)(v8 + 4) )
              v13 = *(const char **)v8;
            if ( !strcmp(v13, s2) )
              goto LABEL_22;
            v8 += 12;
            if ( ++v12 >= v18 )
              goto LABEL_21;
          }
        }
      }
    }
    else
    {
LABEL_21:
      v14 = sub_3BBC0((int)v17, s2);
      result = 0;
      if ( v14 != -1 )
        return result;
    }
  }
LABEL_22:
  set_error_string(0, s2);
  return set_qerrno(52);
}
// B3CBE: using guessed type char byte_B3CBE;

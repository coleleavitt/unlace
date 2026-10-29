/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77C2C
// Address: 0x00077C2C

//----- (00077C2C) --------------------------------------------------------
int __fastcall sub_77C2C(int *a1, FILE *stream)
{
  unsigned __int8 *v2; // r6
  int v4; // r4
  char *v6; // r0
  unsigned int v7; // r2
  int v8; // r6
  int v9; // r1
  char *v10; // r8
  int v11; // r3
  char *v12; // r2
  unsigned int v14; // r8
  _BOOL4 v15; // r6
  unsigned int v16; // r2
  unsigned int v17; // r6
  char *v18; // r0

  v2 = nullptr;
  v4 = 0;
  a1[1] = 0;
  while ( !feof(stream) )
  {
    v7 = a1[1];
    v6 = (char *)*a1;
    if ( v7 )
    {
      v8 = v7 + 1023;
      if ( v7 == -1023 )
      {
        v9 = -1023;
        if ( v6 )
        {
          a1[1] = v8;
          sub_77E08(v6);
          v9 = a1[1];
          v6 = (char *)v8;
          *a1 = v8;
          a1[2] = v8;
        }
        v2 = sub_77B74(&v6[v4], v9 - v4, stream);
        if ( !v2 )
        {
LABEL_22:
          v15 = 1;
          goto LABEL_24;
        }
        goto LABEL_8;
      }
      v14 = v7 + 1024;
      if ( v7 >= v7 + 1024 )
      {
        a1[1] = v14;
        goto LABEL_21;
      }
    }
    else
    {
      v8 = 1024;
      v14 = 1025;
    }
    if ( a1[2] < v14 )
    {
      v6 = (char *)sub_77EB0((int)a1, v6, v14, 1u);
      v7 = a1[1];
      *a1 = (int)v6;
    }
    memset(&v6[v7], 0, v14 - v7);
    v6 = (char *)*a1;
    a1[1] = v14;
LABEL_21:
    v6[v8] = 0;
    v2 = sub_77B74((char *)(*a1 + v4), a1[1] - v4, stream);
    if ( !v2 )
      goto LABEL_22;
LABEL_8:
    v10 = (char *)*a1;
    v4 += strlen((const char *)(*a1 + v4));
    if ( v4 )
    {
      v11 = v4 - 1;
      v12 = a1[1] | (v4 - 1) ? &v10[v11] : &byte_D39C4;
      if ( *v12 == 10 )
      {
        --v4;
        if ( !v11 )
        {
LABEL_14:
          if ( v10 )
          {
            a1[1] = v4;
            sub_77E08(v10);
            *a1 = v4;
            a1[2] = v4;
          }
          return v4;
        }
LABEL_28:
        v16 = a1[1];
        v17 = v4 + 1;
        if ( v4 + 1 > v16 )
        {
          if ( v17 > a1[2] )
          {
            v18 = (char *)sub_77EB0((int)a1, v10, v4 + 1, 1u);
            v16 = a1[1];
            v10 = v18;
            *a1 = (int)v18;
          }
          memset(&v10[v16], 0, v17 - v16);
          a1[1] = v17;
          v10 = (char *)*a1;
        }
        else if ( v4 + 1 < v16 )
        {
          a1[1] = v17;
        }
        v10[v4] = 0;
        return v4;
      }
    }
  }
  v15 = v2 == nullptr;
LABEL_24:
  if ( v4 )
    v15 = 0;
  if ( !v15 )
  {
    v10 = (char *)*a1;
    if ( !v4 )
      goto LABEL_14;
    goto LABEL_28;
  }
  return -1;
}
// D39C4: using guessed type char byte_D39C4;

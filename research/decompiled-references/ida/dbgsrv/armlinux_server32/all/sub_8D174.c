/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D174
// Address: 0x0008D174

//----- (0008D174) --------------------------------------------------------
int __fastcall sub_8D174(int *a1, unsigned __int8 *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // r6
  int v6; // r9
  unsigned int v7; // r12
  bool v8; // cc
  int v9; // r8
  const void *v10; // r0
  int v11; // r6
  size_t v12; // r7
  size_t v14; // r2
  size_t v16; // r2
  char *v17; // r0
  char *v18; // r4

  v4 = a1[1];
  if ( a4 )
  {
    if ( v4 > a3 )
    {
      v6 = *a1;
      v7 = v4 - a3;
      v8 = a4 > v4 - a3;
      v9 = *a2;
      v10 = (const void *)(*a1 + a3);
      v11 = v4 + v6;
      if ( !v8 )
      {
        v12 = 1 - a4;
        v14 = 1 - a4 + v7;
        if ( v14 )
        {
          while ( 1 )
          {
            v17 = (char *)memchr(v10, v9, v14);
            v18 = v17;
            if ( !v17 )
              break;
            if ( !memcmp(v17, a2, a4) )
              return (int)&v18[-v6];
            v10 = v18 + 1;
            v16 = v11 - (_DWORD)(v18 + 1);
            if ( a4 <= v16 )
            {
              v14 = v12 + v16;
              if ( v14 )
                continue;
            }
            return -1;
          }
        }
      }
    }
    return -1;
  }
  else if ( v4 < a3 )
  {
    return -1;
  }
  else
  {
    return a3;
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81A8C
// Address: 0x00081A8C

//----- (00081A8C) --------------------------------------------------------
int __fastcall sub_81A8C(int *a1, unsigned __int8 *a2, unsigned int a3, size_t a4)
{
  int v4; // r9
  unsigned int v5; // r6
  int result; // r0
  unsigned int v7; // r12
  const void *v8; // r0
  bool v9; // cc
  int v10; // r6
  int v11; // r10
  size_t v12; // r7
  size_t v14; // r2
  size_t v16; // r2
  char *v17; // r0
  char *v18; // r4

  v4 = *a1;
  v5 = *(_DWORD *)(*a1 - 12);
  if ( v5 < a3 )
    result = -1;
  else
    result = a3;
  if ( a4 )
  {
    if ( v5 > a3 )
    {
      v7 = v5 - a3;
      v8 = (const void *)(v4 + a3);
      v9 = a4 > v5 - a3;
      v10 = v5 + v4;
      v11 = *a2;
      if ( !v9 )
      {
        v12 = 1 - a4;
        v14 = 1 - a4 + v7;
        if ( v14 )
        {
          while ( 1 )
          {
            v17 = (char *)memchr(v8, v11, v14);
            v18 = v17;
            if ( !v17 )
              break;
            if ( !memcmp(v17, a2, a4) )
              return (int)&v18[-v4];
            v8 = v18 + 1;
            v16 = v10 - (_DWORD)(v18 + 1);
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
  return result;
}

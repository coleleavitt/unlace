/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85A4C
// Address: 0x00085A4C

//----- (00085A4C) --------------------------------------------------------
int __fastcall sub_85A4C(unsigned __int8 **a1, unsigned __int8 *a2, unsigned int a3)
{
  int v3; // r4
  unsigned __int8 *v5; // r6
  unsigned __int8 *v7; // r3
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r4
  unsigned int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r7
  int v14; // r2
  unsigned int v15; // r0
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r0
  unsigned __int8 *v20; // [sp+4h] [bp-18h]
  unsigned __int8 *v21; // [sp+8h] [bp-14h]
  int v22; // [sp+Ch] [bp-10h]
  unsigned int v23; // [sp+10h] [bp-Ch]
  unsigned __int8 *v24; // [sp+18h] [bp-4h]
  unsigned __int8 *v25; // [sp+18h] [bp-4h]

  v3 = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v5 = a1[7];
        if ( v5 )
        {
          if ( *(unsigned __int8 ***)v5 == a1 )
          {
            v7 = a2;
            v8 = *((_DWORD *)v5 + 1);
            switch ( v8 )
            {
              case '9':
              case 'E':
              case 'I':
                goto LABEL_8;
              case ':':
              case ';':
              case '<':
              case '=':
              case '>':
              case '?':
              case '@':
              case 'A':
              case 'B':
              case 'C':
              case 'D':
              case 'F':
              case 'G':
              case 'H':
              case 'J':
              case 'K':
              case 'L':
              case 'M':
                return v3;
              default:
                if ( v8 == 666 || v8 == 42 )
                {
LABEL_8:
                  if ( a2 )
                  {
                    v9 = *((_DWORD *)v5 + 6);
                    if ( v9 != 2 && (v8 == 42 || v9 != 1) && !*((_DWORD *)v5 + 29) )
                    {
                      v22 = *((_DWORD *)v5 + 6);
                      if ( v9 == 1 )
                      {
                        v10 = a3;
                        v24 = v7;
                        v11 = sub_8EC00((unsigned int)a1[12], v7, a3);
                        a3 = v10;
                        v7 = v24;
                        v9 = 1;
                        a1[12] = (unsigned __int8 *)v11;
                      }
                      v3 = 0;
                      *((_DWORD *)v5 + 6) = 0;
                      v12 = *((_DWORD *)v5 + 11);
                      if ( v12 <= a3 )
                      {
                        if ( !v9 )
                        {
                          *(_WORD *)(*((_DWORD *)v5 + 17) + 2 * *((_DWORD *)v5 + 19) - 2) = 0;
                          v25 = v7;
                          v13 = a3;
                          memset(*((void **)v5 + 17), 0, 2 * *((_DWORD *)v5 + 19) - 2);
                          a3 = v13;
                          v7 = v25;
                          *((_DWORD *)v5 + 1453) = 0;
                          *((_DWORD *)v5 + 23) = 0;
                          *((_DWORD *)v5 + 27) = 0;
                          v12 = *((_DWORD *)v5 + 11);
                        }
                        v7 += a3 - v12;
                      }
                      else
                      {
                        v12 = a3;
                      }
                      v21 = a1[1];
                      a1[1] = (unsigned __int8 *)v12;
                      v20 = *a1;
                      *a1 = v7;
                      sub_85CA0(v5);
                      v14 = *((_DWORD *)v5 + 27);
                      v15 = *((_DWORD *)v5 + 29);
                      if ( v15 >= 3 )
                      {
                        do
                        {
                          v16 = 2 - v15;
                          v23 = v15 - 2;
                          v17 = v14;
                          do
                          {
                            v18 = (*(unsigned __int8 *)(*((_DWORD *)v5 + 14) + v17 + 2)
                                 ^ (*((_DWORD *)v5 + 18) << *((_DWORD *)v5 + 22)))
                                & *((_DWORD *)v5 + 21);
                            *((_DWORD *)v5 + 18) = v18;
                            *(_WORD *)(*((_DWORD *)v5 + 16) + 2 * (*((_DWORD *)v5 + 13) & v17)) = *(_WORD *)(*((_DWORD *)v5 + 17) + 2 * v18);
                            *(_WORD *)(*((_DWORD *)v5 + 17) + 2 * *((_DWORD *)v5 + 18)) = v17;
                            ++v16;
                            ++v17;
                          }
                          while ( v16 );
                          *((_DWORD *)v5 + 29) = 2;
                          *((_DWORD *)v5 + 27) = v23 + v14;
                          sub_85CA0(v5);
                          v14 = *((_DWORD *)v5 + 27);
                          v15 = *((_DWORD *)v5 + 29);
                        }
                        while ( v15 > 2 );
                      }
                      *((_DWORD *)v5 + 1453) = v15;
                      *((_DWORD *)v5 + 29) = 0;
                      *((_DWORD *)v5 + 30) = 2;
                      v19 = v14 + v15;
                      *((_DWORD *)v5 + 23) = v19;
                      *((_DWORD *)v5 + 24) = 2;
                      *((_DWORD *)v5 + 26) = 0;
                      *((_DWORD *)v5 + 27) = v19;
                      *a1 = v20;
                      a1[1] = v21;
                      *((_DWORD *)v5 + 6) = v22;
                    }
                  }
                }
                break;
            }
          }
        }
      }
    }
  }
  return v3;
}

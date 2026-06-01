/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461180
// Address: 0x00461180

//----- (00461180) --------------------------------------------------------
char __stdcall sub_461180(_DWORD *a1, unsigned int a2, char a3)
{
  int v4; // esi
  _BYTE *v5; // edx
  int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned __int64 *v10; // esi
  char v11; // cl
  unsigned __int8 *v13; // [esp+1Ch] [ebp-4h] BYREF
  signed int v14; // [esp+24h] [ebp+4h]

  if ( a1 )
  {
    v4 = a1[5];
    if ( !v4 )
      return 1;
    v5 = (_BYTE *)a1[4];
    if ( (char)*v5 >= 0 )
    {
      v6 = 1 << (*v5 & 0xF);
      if ( v6 <= 8 )
      {
        v7 = a2;
        if ( a2 + a1[1] >= a2 )
        {
          v14 = a2 - a1[3];
          if ( v14 )
          {
            v8 = (unsigned int)&v5[v4];
            v13 = v5 + 1;
            if ( v5 + 1 < &v5[v4] )
            {
              while ( 1 )
              {
                v9 = sub_4541E0(&v13, v8);
                if ( v9 + v6 <= v9 || v9 + v6 >= a1[1] )
                  return 0;
                v10 = (unsigned __int64 *)(v9 + *a1);
                if ( v10 )
                {
                  v11 = a3;
                  if ( a3 )
                  {
                    sub_461340(v10, (unsigned int *)v10, v6);
                    v11 = a3;
                  }
                  switch ( v6 )
                  {
                    case 1:
                      *(_BYTE *)v10 += v14;
                      break;
                    case 2:
                      *(_WORD *)v10 += v14;
                      break;
                    case 4:
                      *(_DWORD *)v10 += v14;
                      break;
                    case 8:
                      *v10 += v14;
                      break;
                    default:
                      break;
                  }
                  if ( v11 )
                    sub_461340(v10, (unsigned int *)v10, v6);
                }
                if ( (unsigned int)v13 >= v8 )
                {
                  v7 = a2;
                  break;
                }
              }
            }
            a1[3] = v7;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
// 461243: the case 16 was optimized away because edi.4<9

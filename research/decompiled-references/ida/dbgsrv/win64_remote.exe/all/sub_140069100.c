/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140069100
// Address: 0x0000000140069100

//----- (0000000140069100) ----------------------------------------------------
char __fastcall sub_140069100(_QWORD *a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // r10
  char *v7; // r9
  int v8; // esi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 *v13; // rbx
  _BYTE *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = a1[5];
    if ( !v6 )
      return 1;
    v7 = (char *)a1[4];
    if ( *v7 >= 0 )
    {
      v8 = 1 << (*v7 & 0xF);
      if ( v8 <= 8 && a2 + a1[1] >= a2 )
      {
        v9 = a2 - a1[3];
        if ( a2 != a1[3] )
        {
          v10 = (unsigned __int64)&v7[v6];
          v15 = v7 + 1;
          if ( v7 + 1 < &v7[v6] )
          {
            do
            {
              v11 = sub_14005B690((unsigned __int64 *)&v15, v10);
              v12 = v11 + v8;
              if ( (unsigned int)v12 <= v11 || v12 >= a1[1] )
                return 0;
              v13 = (__int64 *)(*a1 + v11);
              if ( v13 )
              {
                if ( a3 )
                  sub_140069260((__int64 *)(*a1 + v11), (__int64 *)(*a1 + v11), v8);
                switch ( v8 )
                {
                  case 1:
                    *(_BYTE *)v13 += v9;
                    break;
                  case 2:
                    *(_WORD *)v13 += v9;
                    break;
                  case 4:
                    *(_DWORD *)v13 += v9;
                    break;
                  case 8:
                    *v13 += v9;
                    break;
                }
                if ( a3 )
                  sub_140069260(v13, v13, v8);
              }
            }
            while ( (unsigned __int64)v15 < v10 );
          }
          a1[3] = a2;
        }
        return 1;
      }
    }
  }
  return 0;
}
// 1400691E5: conditional instruction was optimized away because esi.4 is in (==0|==3|5..7|<0)

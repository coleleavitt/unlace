char __fastcall sub_A56B20(_QWORD *a1)
{
  __int64 *v1; // rax
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // esi

  v1 = (__int64 *)a1[4];
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (int)v2 > 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        while ( 1 )
        {
          LOBYTE(v1) = (*(_BYTE *)(a1[90] + 4 * i + 3) >> 4) & 3;
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = sub_9B1230((__int64)a1, i);
            if ( (_BYTE)v1 )
            {
              v1 = (__int64 *)(a1[87] + 24LL * (*(_DWORD *)(a1[90] + 4 * i) & 0xFFFFFFF));
              v4 = *v1;
              if ( *v1 )
              {
                LODWORD(v1) = 5 * *(_DWORD *)(v4 - 4);
                v5 = v4 + 40LL * *(unsigned int *)(v4 - 4);
                if ( v5 != v4 )
                {
                  while ( 1 )
                  {
                    v6 = *(_DWORD *)(v4 + 32);
                    if ( v6 != -1 && v6 != (_DWORD)i )
                    {
                      LOBYTE(v1) = sub_9B1230((__int64)a1, v6);
                      if ( !(_BYTE)v1 )
                        break;
                    }
                    v4 += 40;
                    if ( v4 == v5 )
                      goto LABEL_4;
                  }
                  if ( v5 != v4 )
                    break;
                }
              }
            }
          }
LABEL_4:
          if ( v2 == ++i )
            return (char)v1;
        }
        v7 = i;
        LOBYTE(v1) = sub_A55750((__int64)a1, v7, *(_DWORD *)(v4 + 32), (int *)v4, 0);
      }
    }
  }
  return (char)v1;
}


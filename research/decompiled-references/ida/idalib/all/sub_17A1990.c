__int64 __fastcall sub_17A1990(__int64 *a1, __int64 *a2)
{
  unsigned int v2; // r12d
  size_t v3; // rdx
  size_t v4; // rdx
  size_t v5; // rdx
  size_t v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  size_t v10; // rdx

  v2 = 0;
  v3 = a1[10];
  if ( a2[10] == v3 && (!v3 || !memcmp((const void *)a1[9], (const void *)a2[9], v3)) )
  {
    v4 = a1[4];
    v2 = 0;
    if ( v4 == a2[4] && (!v4 || !memcmp((const void *)a1[3], (const void *)a2[3], v4)) )
    {
      v5 = a1[6];
      v2 = 0;
      if ( v5 == a2[6] && (!v5 || !memcmp((const void *)a1[5], (const void *)a2[5], v5)) )
      {
        v6 = a1[8];
        v2 = 0;
        if ( v6 == a2[8] && (!v6 || !memcmp((const void *)a1[7], (const void *)a2[7], v6)) )
        {
          v7 = a1[1];
          v8 = *a1;
          v2 = 0;
          v9 = *a2;
          if ( v7 - *a1 == a2[1] - *a2 )
          {
            if ( v8 == v7 )
            {
              return 1;
            }
            else
            {
              v10 = *(_QWORD *)(v8 + 8);
              if ( *(_QWORD *)(v9 + 8) == v10 )
              {
                do
                {
                  if ( v10 && memcmp(*(const void **)v8, *(const void **)v9, v10) )
                    break;
                  v8 += 32;
                  v9 += 32;
                  if ( v7 == v8 )
                    return 1;
                  v10 = *(_QWORD *)(v8 + 8);
                }
                while ( v10 == *(_QWORD *)(v9 + 8) );
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return v2;
}

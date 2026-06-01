/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39790
// Address: 0x0000000000039790

//----- (0000000000039790) ----------------------------------------------------
void __fastcall sub_39790(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // x19
  char **v4; // x20
  __int64 v5; // x29
  char *v6; // x21
  unsigned __int64 v7; // x23
  __int64 v8; // x24
  unsigned __int64 i; // x25
  char *v10; // x22
  void *v11; // x0
  __int64 v12; // x21
  __int64 v13; // x25
  void **v14; // x26
  char *v15; // x20
  __int64 v16; // x27
  _QWORD *v17; // x27
  unsigned __int64 v18; // x28
  unsigned __int64 v19; // t1
  __int64 v20; // x19
  __int64 v21; // x29
  unsigned __int64 j; // x22
  char *v23; // x23
  void *v24; // x0
  _QWORD *v25; // [xsp+8h] [xbp-68h]

  if ( a2 )
  {
    v2 = a2;
    sub_39790(a1, *a2);
    sub_39790(a1, v2[1]);
    v4 = (char **)v2[5];
    if ( v4 )
    {
      v5 = v2[6];
      if ( v5 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = (unsigned __int64)v4[1];
          if ( v7 )
          {
            v8 = 0;
            for ( i = 1; ; ++i )
            {
              if ( *(int *)&v6[v8] >= -1 )
              {
                v10 = &v6[v8];
                v11 = *(void **)&v6[v8 + 8];
                if ( v11 )
                {
                  *((_QWORD *)v10 + 2) = 0;
                  qfree(v11);
                  *((_QWORD *)v10 + 1) = 0;
                  *(_QWORD *)&v6[v8 + 24] = 0;
                }
                *(_DWORD *)&v6[v8] = -2;
              }
              if ( i >= v7 )
                break;
              v6 = *v4;
              v8 += 32;
            }
            v6 = *v4;
          }
          v4[1] = nullptr;
          qfree(v6);
          *v4 = nullptr;
          v4[2] = nullptr;
        }
        if ( v5 != 1 )
        {
          v12 = 1;
          v25 = v2;
          do
          {
            v13 = v2[5];
            v14 = (void **)(v13 + 48 * v12);
            v15 = (char *)*v14;
            if ( *v14 )
            {
              v16 = v13 + 48 * v12;
              v19 = *(_QWORD *)(v16 + 8);
              v17 = (_QWORD *)(v16 + 8);
              v18 = v19;
              if ( v19 )
              {
                v20 = v5;
                v21 = 0;
                for ( j = 1; ; ++j )
                {
                  if ( *(int *)&v15[v21] >= -1 )
                  {
                    v23 = &v15[v21];
                    v24 = *(void **)&v15[v21 + 8];
                    if ( v24 )
                    {
                      *((_QWORD *)v23 + 2) = 0;
                      qfree(v24);
                      *((_QWORD *)v23 + 1) = 0;
                      *(_QWORD *)&v15[v21 + 24] = 0;
                    }
                    *(_DWORD *)&v15[v21] = -2;
                  }
                  if ( j >= v18 )
                    break;
                  v15 = (char *)*v14;
                  v21 += 32;
                }
                v15 = (char *)*v14;
                v5 = v20;
                v2 = v25;
              }
              *v17 = 0;
              qfree(v15);
              *v14 = nullptr;
              *(_QWORD *)(v13 + 48 * v12 + 16) = 0;
            }
            ++v12;
          }
          while ( v12 != v5 );
        }
        v4 = (char **)v2[5];
      }
      v2[6] = 0;
      qfree(v4);
    }
    operator delete(v2);
  }
}

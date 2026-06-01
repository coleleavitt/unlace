/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B52E
// Address: 0x0001B52E

//----- (0001B52E) --------------------------------------------------------
void __fastcall sub_1B52E(int a1, _DWORD *a2)
{
  _DWORD *v2; // r6
  void **v4; // r4
  int v5; // r5
  char *v6; // r0
  int i; // r5
  char *v8; // r0
  char *v9; // r4
  char *v10; // r6
  void *v11; // r0
  int v12; // r4
  int v13; // r7
  int v14; // r1
  char *v15; // r5
  int v16; // r2
  int v17; // r4
  char *v18; // r0
  char *v19; // r6
  char *v20; // r5
  void *v21; // r0
  void *v22; // r0
  int v23; // r6
  _DWORD *v24; // r1
  int v25; // [sp+0h] [bp-2Ch]
  int v26; // [sp+0h] [bp-2Ch]
  _DWORD *v27; // [sp+4h] [bp-28h]
  _DWORD *v28; // [sp+4h] [bp-28h]
  int v29; // [sp+Ch] [bp-20h]
  _DWORD *v30; // [sp+14h] [bp-18h]
  void **v31; // [sp+18h] [bp-14h]
  unsigned int v32; // [sp+18h] [bp-14h]
  unsigned int v33; // [sp+1Ch] [bp-10h]
  void **v34; // [sp+1Ch] [bp-10h]
  char *v35; // [sp+20h] [bp-Ch]
  char *v36; // [sp+20h] [bp-Ch]
  unsigned int v37; // [sp+28h] [bp-4h]
  unsigned int j; // [sp+28h] [bp-4h]

  if ( a2 )
  {
    v2 = a2;
    sub_1B52E(a1, *a2);
    sub_1B52E(a1, v2[1]);
    v4 = (void **)v2[5];
    if ( v4 )
    {
      if ( v2[6] )
      {
        v5 = v2[6];
        v6 = (char *)*v4;
        if ( *v4 )
        {
          v33 = (unsigned int)v4[1];
          if ( v33 )
          {
            v31 = (void **)v2[5];
            v25 = v2[6];
            v27 = v2;
            v37 = 1;
            for ( i = 16; ; i += 24 )
            {
              v35 = v6;
              v8 = &v6[i];
              v9 = v8 - 8;
              v10 = v8 - 16;
              if ( *((int *)v8 - 4) >= -1 )
              {
                v11 = *((void **)v8 - 2);
                if ( v11 )
                {
                  *((_DWORD *)v9 + 1) = 0;
                  qfree(v11);
                  *(_DWORD *)v9 = 0;
                  *(_DWORD *)&v35[i] = 0;
                }
                *(_DWORD *)v10 = -2;
              }
              if ( v37 >= v33 )
                break;
              ++v37;
              v6 = (char *)*v31;
            }
            v4 = v31;
            v6 = (char *)*v31;
            v2 = v27;
            v5 = v25;
          }
          v4[1] = nullptr;
          qfree(v6);
          v4[2] = nullptr;
          *v4 = nullptr;
        }
        if ( v5 != 1 )
        {
          v12 = v5;
          v13 = 1;
          v28 = v2;
          v26 = v5;
          do
          {
            v14 = v2[5];
            v15 = *(char **)(v14 + 24 * v13);
            v16 = v14 + 24 * v13;
            if ( v15 )
            {
              v30 = (_DWORD *)(v16 + 4);
              v32 = *(_DWORD *)(v16 + 4);
              v29 = v2[5];
              v34 = (void **)(v14 + 24 * v13);
              if ( v32 )
              {
                v17 = 16;
                for ( j = 1; ; ++j )
                {
                  v36 = v15;
                  v18 = &v15[v17];
                  v19 = &v15[v17 - 8];
                  v20 = &v15[v17 - 16];
                  if ( *((int *)v19 - 2) >= -1 )
                  {
                    v21 = *((void **)v18 - 2);
                    if ( v21 )
                    {
                      *((_DWORD *)v19 + 1) = 0;
                      qfree(v21);
                      *(_DWORD *)v19 = 0;
                      *(_DWORD *)&v36[v17] = 0;
                    }
                    *(_DWORD *)v20 = -2;
                  }
                  if ( j >= v32 )
                    break;
                  v17 += 24;
                  v15 = (char *)*v34;
                }
                v22 = *v34;
                v23 = v26;
                v24 = v30;
              }
              else
              {
                v23 = v12;
                v24 = (_DWORD *)(v16 + 4);
                v22 = v15;
              }
              *v24 = 0;
              qfree(v22);
              *v34 = nullptr;
              *(_DWORD *)(v29 + 24 * v13 + 8) = 0;
              v12 = v23;
              v2 = v28;
            }
            ++v13;
          }
          while ( v13 != v12 );
        }
        v4 = (void **)v2[5];
      }
      v2[6] = 0;
      qfree(v4);
    }
    operator delete(v2);
  }
}

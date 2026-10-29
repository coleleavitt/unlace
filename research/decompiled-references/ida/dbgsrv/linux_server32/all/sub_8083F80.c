/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8083F80
// Address: 0x08083F80

//----- (08083F80) --------------------------------------------------------
void __usercall sub_8083F80(_DWORD *a1@<eax>)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  _DWORD *i; // ebp
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  void *v14; // edx
  void *v15; // eax
  void *v16; // eax
  _DWORD *v17; // esi
  void *v18; // eax
  _DWORD *v19; // edi
  void *v20; // eax
  _DWORD *v21; // ebp
  void *v22; // eax
  void *v23; // eax
  _DWORD *v24; // esi
  void *v25; // eax
  _DWORD *v26; // ebp
  void *v27; // eax
  _DWORD *v28; // edi
  _DWORD *v29; // [esp+0h] [ebp-38h]
  _DWORD *v30; // [esp+4h] [ebp-34h]
  _DWORD *v31; // [esp+8h] [ebp-30h]
  _DWORD *v32; // [esp+Ch] [ebp-2Ch]
  _DWORD *v33; // [esp+10h] [ebp-28h]
  _DWORD *v34; // [esp+14h] [ebp-24h]
  _DWORD *v35; // [esp+18h] [ebp-20h]

  v1 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = (_DWORD *)v1[3];
      if ( v2 )
      {
        while ( 1 )
        {
          v3 = (_DWORD *)v2[3];
          if ( v3 )
          {
            v32 = v2;
            v4 = v1;
            while ( 1 )
            {
              v5 = (_DWORD *)v3[3];
              if ( v5 )
              {
                v33 = v3;
                do
                {
                  v6 = v5;
                  v7 = (_DWORD *)v5[3];
                  if ( v7 )
                  {
                    v34 = v6;
                    v35 = v4;
                    while ( 1 )
                    {
                      v8 = (_DWORD *)v7[3];
                      if ( v8 )
                      {
                        while ( 1 )
                        {
                          if ( v8[3] )
                          {
                            v29 = v7;
                            for ( i = (_DWORD *)v8[3]; ; i = v17 )
                            {
                              v10 = (_DWORD *)i[3];
                              if ( v10 )
                              {
                                v30 = v8;
                                do
                                {
                                  v11 = v10;
                                  v12 = (_DWORD *)v10[3];
                                  while ( v12 )
                                  {
                                    sub_8083F80();
                                    v13 = v12;
                                    v12 = (_DWORD *)v12[2];
                                    v14 = (void *)v13[4];
                                    if ( v14 )
                                    {
                                      v31 = v13;
                                      v13[5] = 0;
                                      sub_80CF780(v14);
                                      v13 = v31;
                                    }
                                    operator delete(v13, 0x20u);
                                  }
                                  v15 = (void *)v11[4];
                                  v10 = (_DWORD *)v11[2];
                                  if ( v15 )
                                  {
                                    v11[5] = 0;
                                    sub_80CF780(v15);
                                  }
                                  operator delete(v11, 0x20u);
                                }
                                while ( v10 );
                                v8 = v30;
                              }
                              v16 = (void *)i[4];
                              v17 = (_DWORD *)i[2];
                              if ( v16 )
                              {
                                i[5] = 0;
                                sub_80CF780(v16);
                              }
                              operator delete(i, 0x20u);
                              if ( !v17 )
                                break;
                            }
                            v7 = v29;
                          }
                          v20 = (void *)v8[4];
                          v21 = (_DWORD *)v8[2];
                          if ( v20 )
                          {
                            v8[5] = 0;
                            sub_80CF780(v20);
                          }
                          operator delete(v8, 0x20u);
                          if ( !v21 )
                            break;
                          v8 = v21;
                        }
                      }
                      v18 = (void *)v7[4];
                      v19 = (_DWORD *)v7[2];
                      if ( v18 )
                      {
                        v7[5] = 0;
                        sub_80CF780(v18);
                      }
                      operator delete(v7, 0x20u);
                      if ( !v19 )
                        break;
                      v7 = v19;
                    }
                    v6 = v34;
                    v4 = v35;
                  }
                  v22 = (void *)v6[4];
                  v5 = (_DWORD *)v6[2];
                  if ( v22 )
                  {
                    v6[5] = 0;
                    sub_80CF780(v22);
                  }
                  operator delete(v6, 0x20u);
                }
                while ( v5 );
                v3 = v33;
              }
              v23 = (void *)v3[4];
              v24 = (_DWORD *)v3[2];
              if ( v23 )
              {
                v3[5] = 0;
                sub_80CF780(v23);
              }
              operator delete(v3, 0x20u);
              if ( !v24 )
                break;
              v3 = v24;
            }
            v1 = v4;
            v2 = v32;
          }
          v25 = (void *)v2[4];
          v26 = (_DWORD *)v2[2];
          if ( v25 )
          {
            v2[5] = 0;
            sub_80CF780(v25);
          }
          operator delete(v2, 0x20u);
          if ( !v26 )
            break;
          v2 = v26;
        }
      }
      v27 = (void *)v1[4];
      v28 = (_DWORD *)v1[2];
      if ( v27 )
      {
        v1[5] = 0;
        sub_80CF780(v27);
      }
      operator delete(v1, 0x20u);
      if ( !v28 )
        break;
      v1 = v28;
    }
  }
}

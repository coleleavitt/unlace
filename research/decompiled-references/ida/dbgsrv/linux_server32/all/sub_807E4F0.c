/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807E4F0
// Address: 0x0807E4F0

//----- (0807E4F0) --------------------------------------------------------
void __usercall sub_807E4F0(_DWORD *a1@<eax>)
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
  int v12; // esi
  void *v13; // eax
  void *v14; // eax
  void *v15; // edx
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
  void *v29; // eax
  _DWORD *v30; // [esp+0h] [ebp-38h]
  _DWORD *v31; // [esp+4h] [ebp-34h]
  void *v32; // [esp+8h] [ebp-30h]
  _DWORD *v33; // [esp+Ch] [ebp-2Ch]
  _DWORD *v34; // [esp+10h] [ebp-28h]
  _DWORD *v35; // [esp+14h] [ebp-24h]
  _DWORD *v36; // [esp+18h] [ebp-20h]

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
            v33 = v2;
            v4 = v1;
            while ( 1 )
            {
              v5 = (_DWORD *)v3[3];
              if ( v5 )
              {
                v34 = v3;
                do
                {
                  v6 = v5;
                  v7 = (_DWORD *)v5[3];
                  if ( v7 )
                  {
                    v35 = v6;
                    v36 = v4;
                    while ( 1 )
                    {
                      v8 = (_DWORD *)v7[3];
                      if ( v8 )
                      {
                        while ( 1 )
                        {
                          if ( v8[3] )
                          {
                            v30 = v7;
                            for ( i = (_DWORD *)v8[3]; ; i = v17 )
                            {
                              v10 = (_DWORD *)i[3];
                              if ( v10 )
                              {
                                v31 = v8;
                                do
                                {
                                  v11 = v10;
                                  v12 = v10[3];
                                  while ( v12 )
                                  {
                                    sub_807E4F0(*(_DWORD **)(v12 + 12));
                                    v13 = (void *)v12;
                                    v12 = *(_DWORD *)(v12 + 8);
                                    v32 = v13;
                                    sub_8089430((int)v13 + 28);
                                    v14 = v32;
                                    v15 = *((void **)v32 + 4);
                                    if ( v15 )
                                    {
                                      *((_DWORD *)v32 + 5) = 0;
                                      sub_80CF780(v15);
                                      v14 = v32;
                                    }
                                    operator delete(v14, 0x30u);
                                  }
                                  v10 = (_DWORD *)v11[2];
                                  sub_8089430((int)(v11 + 7));
                                  v16 = (void *)v11[4];
                                  if ( v16 )
                                  {
                                    v11[5] = 0;
                                    sub_80CF780(v16);
                                  }
                                  operator delete(v11, 0x30u);
                                }
                                while ( v10 );
                                v8 = v31;
                              }
                              v17 = (_DWORD *)i[2];
                              sub_8089430((int)(i + 7));
                              v18 = (void *)i[4];
                              if ( v18 )
                              {
                                i[5] = 0;
                                sub_80CF780(v18);
                              }
                              operator delete(i, 0x30u);
                              if ( !v17 )
                                break;
                            }
                            v7 = v30;
                          }
                          v21 = (_DWORD *)v8[2];
                          sub_8089430((int)(v8 + 7));
                          v22 = (void *)v8[4];
                          if ( v22 )
                          {
                            v8[5] = 0;
                            sub_80CF780(v22);
                          }
                          operator delete(v8, 0x30u);
                          if ( !v21 )
                            break;
                          v8 = v21;
                        }
                      }
                      v19 = (_DWORD *)v7[2];
                      sub_8089430((int)(v7 + 7));
                      v20 = (void *)v7[4];
                      if ( v20 )
                      {
                        v7[5] = 0;
                        sub_80CF780(v20);
                      }
                      operator delete(v7, 0x30u);
                      if ( !v19 )
                        break;
                      v7 = v19;
                    }
                    v6 = v35;
                    v4 = v36;
                  }
                  v5 = (_DWORD *)v6[2];
                  sub_8089430((int)(v6 + 7));
                  v23 = (void *)v6[4];
                  if ( v23 )
                  {
                    v6[5] = 0;
                    sub_80CF780(v23);
                  }
                  operator delete(v6, 0x30u);
                }
                while ( v5 );
                v3 = v34;
              }
              v24 = (_DWORD *)v3[2];
              sub_8089430((int)(v3 + 7));
              v25 = (void *)v3[4];
              if ( v25 )
              {
                v3[5] = 0;
                sub_80CF780(v25);
              }
              operator delete(v3, 0x30u);
              if ( !v24 )
                break;
              v3 = v24;
            }
            v1 = v4;
            v2 = v33;
          }
          v26 = (_DWORD *)v2[2];
          sub_8089430((int)(v2 + 7));
          v27 = (void *)v2[4];
          if ( v27 )
          {
            v2[5] = 0;
            sub_80CF780(v27);
          }
          operator delete(v2, 0x30u);
          if ( !v26 )
            break;
          v2 = v26;
        }
      }
      v28 = (_DWORD *)v1[2];
      sub_8089430((int)(v1 + 7));
      v29 = (void *)v1[4];
      if ( v29 )
      {
        v1[5] = 0;
        sub_80CF780(v29);
      }
      operator delete(v1, 0x30u);
      if ( !v28 )
        break;
      v1 = v28;
    }
  }
}

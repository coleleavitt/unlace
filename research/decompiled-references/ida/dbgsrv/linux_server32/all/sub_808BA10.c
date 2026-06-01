/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808BA10
// Address: 0x0808BA10

//----- (0808BA10) --------------------------------------------------------
void __usercall sub_808BA10(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // ebp
  _DWORD *i; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  int v9; // esi
  void *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // edi
  _DWORD *v13; // ebp
  _DWORD *v14; // ebp
  _DWORD *v15; // esi
  _DWORD *v16; // edi
  _DWORD *v17; // ebp
  _DWORD *v18; // esi
  _DWORD *v19; // [esp+0h] [ebp-38h]
  void *v20; // [esp+0h] [ebp-38h]
  _DWORD *v21; // [esp+4h] [ebp-34h]
  _DWORD *v22; // [esp+8h] [ebp-30h]
  _DWORD *v23; // [esp+Ch] [ebp-2Ch]
  _DWORD *v24; // [esp+10h] [ebp-28h]
  _DWORD *v25; // [esp+14h] [ebp-24h]
  void *v26; // [esp+18h] [ebp-20h]

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
            v22 = v2;
            v23 = v1;
            while ( 1 )
            {
              if ( v3[3] )
              {
                v24 = v3;
                for ( i = (_DWORD *)v3[3]; ; i = v15 )
                {
                  v5 = (_DWORD *)i[3];
                  if ( v5 )
                  {
                    v25 = i;
                    while ( 1 )
                    {
                      v6 = (_DWORD *)v5[3];
                      if ( v6 )
                      {
                        while ( 1 )
                        {
                          v7 = (_DWORD *)v6[3];
                          if ( v7 )
                          {
                            while ( 1 )
                            {
                              v8 = (_DWORD *)v7[3];
                              if ( v8 )
                              {
                                v19 = v5;
                                v21 = v7;
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  while ( v9 )
                                  {
                                    sub_808BA10(*(_DWORD **)(v9 + 12));
                                    v10 = (void *)v9;
                                    v9 = *(_DWORD *)(v9 + 8);
                                    v26 = v10;
                                    sub_8089430((int)v10 + 20);
                                    operator delete(v26, 0x28u);
                                  }
                                  v11 = (_DWORD *)v8[2];
                                  sub_8089430((int)(v8 + 5));
                                  operator delete(v8, 0x28u);
                                  if ( !v11 )
                                    break;
                                  v8 = v11;
                                }
                                v5 = v19;
                                v7 = v21;
                              }
                              v13 = (_DWORD *)v7[2];
                              v20 = v7;
                              sub_8089430((int)(v7 + 5));
                              operator delete(v20, 0x28u);
                              if ( !v13 )
                                break;
                              v7 = v13;
                            }
                          }
                          v14 = (_DWORD *)v6[2];
                          sub_8089430((int)(v6 + 5));
                          operator delete(v6, 0x28u);
                          if ( !v14 )
                            break;
                          v6 = v14;
                        }
                      }
                      v12 = (_DWORD *)v5[2];
                      sub_8089430((int)(v5 + 5));
                      operator delete(v5, 0x28u);
                      if ( !v12 )
                        break;
                      v5 = v12;
                    }
                    i = v25;
                  }
                  v15 = (_DWORD *)i[2];
                  sub_8089430((int)(i + 5));
                  operator delete(i, 0x28u);
                  if ( !v15 )
                    break;
                }
                v3 = v24;
              }
              v16 = (_DWORD *)v3[2];
              sub_8089430((int)(v3 + 5));
              operator delete(v3, 0x28u);
              if ( !v16 )
                break;
              v3 = v16;
            }
            v2 = v22;
            v1 = v23;
          }
          v17 = (_DWORD *)v2[2];
          sub_8089430((int)(v2 + 5));
          operator delete(v2, 0x28u);
          if ( !v17 )
            break;
          v2 = v17;
        }
      }
      v18 = (_DWORD *)v1[2];
      sub_8089430((int)(v1 + 5));
      operator delete(v1, 0x28u);
      if ( !v18 )
        break;
      v1 = v18;
    }
  }
}

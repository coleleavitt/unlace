/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809ED80
// Address: 0x0809ED80

//----- (0809ED80) --------------------------------------------------------
void __usercall sub_809ED80(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // ebp
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  _DWORD *v13; // ebp
  _DWORD *i; // esi
  void *v15; // eax
  _DWORD *v16; // esi
  _DWORD *v17; // ebp
  _DWORD *v18; // ebp
  _DWORD *v19; // esi
  _DWORD *v20; // edi
  _DWORD *v21; // ebp
  _DWORD *v22; // esi
  _DWORD *v23; // [esp+0h] [ebp-34h]
  _DWORD *v24; // [esp+0h] [ebp-34h]
  _DWORD *v25; // [esp+4h] [ebp-30h]
  _DWORD *v26; // [esp+8h] [ebp-2Ch]
  _DWORD *v27; // [esp+Ch] [ebp-28h]
  _DWORD *v28; // [esp+10h] [ebp-24h]
  _DWORD *v29; // [esp+14h] [ebp-20h]

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
            v26 = v2;
            v4 = v1;
            while ( 1 )
            {
              v5 = (_DWORD *)v3[3];
              if ( v5 )
              {
                v27 = v3;
                v6 = v4;
                while ( 1 )
                {
                  v7 = (_DWORD *)v5[3];
                  if ( v7 )
                  {
                    v28 = v5;
                    v8 = v6;
                    while ( 1 )
                    {
                      v9 = (_DWORD *)v7[3];
                      while ( v9 )
                      {
                        v10 = (_DWORD *)v9[3];
                        v11 = v9;
                        if ( v10 )
                        {
                          while ( 1 )
                          {
                            if ( v10[3] )
                            {
                              v23 = v7;
                              v12 = (_DWORD *)v10[3];
                              v13 = v10;
                              v25 = v11;
                              while ( 1 )
                              {
                                for ( i = (_DWORD *)v12[3]; i; v12 = v29 )
                                {
                                  v29 = v12;
                                  sub_809ED80();
                                  v15 = i;
                                  i = (_DWORD *)i[2];
                                  operator delete(v15, 0x34u);
                                }
                                v16 = (_DWORD *)v12[2];
                                operator delete(v12, 0x34u);
                                if ( !v16 )
                                  break;
                                v12 = v16;
                              }
                              v7 = v23;
                              v11 = v25;
                              v10 = v13;
                            }
                            v24 = v11;
                            v18 = (_DWORD *)v10[2];
                            operator delete(v10, 0x34u);
                            v11 = v24;
                            if ( !v18 )
                              break;
                            v10 = v18;
                          }
                        }
                        v9 = (_DWORD *)v11[2];
                        operator delete(v11, 0x34u);
                      }
                      v17 = (_DWORD *)v7[2];
                      operator delete(v7, 0x34u);
                      if ( !v17 )
                        break;
                      v7 = v17;
                    }
                    v6 = v8;
                    v5 = v28;
                  }
                  v19 = (_DWORD *)v5[2];
                  operator delete(v5, 0x34u);
                  if ( !v19 )
                    break;
                  v5 = v19;
                }
                v4 = v6;
                v3 = v27;
              }
              v20 = (_DWORD *)v3[2];
              operator delete(v3, 0x34u);
              if ( !v20 )
                break;
              v3 = v20;
            }
            v1 = v4;
            v2 = v26;
          }
          v21 = (_DWORD *)v2[2];
          operator delete(v2, 0x34u);
          if ( !v21 )
            break;
          v2 = v21;
        }
      }
      v22 = (_DWORD *)v1[2];
      operator delete(v1, 0x34u);
      if ( !v22 )
        break;
      v1 = v22;
    }
  }
}

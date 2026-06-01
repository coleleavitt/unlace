/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18A48
// Address: 0x00018A48

//----- (00018A48) --------------------------------------------------------
void __fastcall sub_18A48(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r3
  _DWORD *v4; // r8
  int v5; // r7
  int i; // r11
  char *v7; // r0
  char *v8; // r10
  int v9; // r9
  int j; // r4
  int *v11; // r3
  void *v12; // r0
  void *v13; // r0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_18A48(a1, v2[3]);
      v3 = (_DWORD *)v2[5];
      v4 = (_DWORD *)v2[2];
      if ( v3 )
      {
        v5 = v2[6];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = (char *)v3[6 * i];
            v8 = (char *)&v3[6 * i];
            if ( v7 )
            {
              v9 = *((_DWORD *)v8 + 1);
              if ( v9 )
              {
                for ( j = 0; j != v9; ++j )
                {
                  v11 = (int *)&v7[24 * j];
                  if ( *v11 >= -1 )
                  {
                    v12 = (void *)v11[2];
                    if ( v12 )
                    {
                      v11[3] = 0;
                      sub_77E08(v12);
                    }
                  }
                  v7 = *(char **)v8;
                }
              }
              *((_DWORD *)v8 + 1) = 0;
              sub_77E08(v7);
            }
            v3 = (_DWORD *)v2[5];
          }
        }
        v2[6] = 0;
        sub_77E08(v3);
      }
      v13 = v2;
      v2 = v4;
      sub_80648(v13);
    }
    while ( v4 );
  }
}

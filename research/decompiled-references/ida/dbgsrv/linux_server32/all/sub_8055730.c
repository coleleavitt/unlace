/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055730
// Address: 0x08055730

//----- (08055730) --------------------------------------------------------
void __usercall sub_8055730(_DWORD *a1@<eax>)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  char *v3; // eax
  int v4; // ecx
  int v5; // ebp
  void **v6; // ebx
  char *v7; // edx
  void *v8; // ebp
  void *v9; // edi
  void **v10; // esi
  int *v11; // eax
  void *v12; // ebx
  int v13; // [esp+4h] [ebp-2Ch]
  int v14; // [esp+8h] [ebp-28h]
  _DWORD *v15; // [esp+Ch] [ebp-24h]
  _DWORD *v16; // [esp+10h] [ebp-20h]

  if ( a1 )
  {
    v1 = a1;
    do
    {
      sub_8055730();
      v2 = v1;
      v15 = v1;
      v1 = (_DWORD *)v1[2];
      v3 = (char *)v2[5];
      if ( v3 )
      {
        v4 = v2[6];
        if ( v4 )
        {
          v13 = v4;
          v5 = 0;
          v16 = v1;
          do
          {
            v6 = (void **)&v3[24 * v5];
            v7 = (char *)*v6;
            if ( *v6 )
            {
              if ( v6[1] )
              {
                v14 = v5;
                v8 = v6[1];
                v9 = nullptr;
                v10 = v6;
                do
                {
                  v11 = (int *)&v7[16 * (_DWORD)v9];
                  if ( *v11 >= -1 )
                  {
                    v12 = (void *)v11[1];
                    if ( v12 )
                    {
                      v11[2] = 0;
                      sub_80CF780(v12);
                      v7 = (char *)*v10;
                    }
                  }
                  v9 = (char *)v9 + 1;
                }
                while ( v8 != v9 );
                v5 = v14;
                v6 = v10;
              }
              v6[1] = nullptr;
              sub_80CF780(v7);
              v3 = (char *)v15[5];
            }
            ++v5;
          }
          while ( v13 != v5 );
          v1 = v16;
        }
        v15[6] = 0;
        sub_80CF780(v3);
      }
      operator delete(v15, 0x20u);
    }
    while ( v1 );
  }
}

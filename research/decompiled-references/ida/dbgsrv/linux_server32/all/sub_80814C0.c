/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80814C0
// Address: 0x080814C0

//----- (080814C0) --------------------------------------------------------
void __cdecl sub_80814C0(int a1)
{
  int v1; // esi
  void **v2; // eax
  void **v3; // esi
  void *v4; // eax
  char *v5; // ecx
  void *v6; // ebp
  void *i; // edi
  char *v8; // eax
  void *v9; // edx
  void *v10; // eax
  void *v11; // ebp
  void *j; // edi
  int v13; // edx
  void *v14; // eax
  void *v15; // eax
  void **v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h]

  v1 = a1;
  v2 = *(void ***)a1;
  v17 = *(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4);
  if ( v17 != *(_DWORD *)a1 )
  {
    v16 = *(void ***)a1;
    do
    {
      v3 = (void **)*v16;
      if ( *v16 )
      {
        v4 = v3[14];
        if ( v4 )
        {
          v3[15] = nullptr;
          sub_80CF780(v4);
        }
        v5 = (char *)v3[11];
        if ( v5 )
        {
          v6 = v3[12];
          if ( v6 )
          {
            for ( i = nullptr; i != v6; i = (char *)i + 1 )
            {
              v8 = &v5[16 * (_DWORD)i];
              v9 = *((void **)v8 + 1);
              if ( v9 )
              {
                *((_DWORD *)v8 + 2) = 0;
                sub_80CF780(v9);
                v5 = (char *)v3[11];
              }
            }
          }
          v3[12] = nullptr;
          sub_80CF780(v5);
        }
        v10 = v3[8];
        if ( v10 )
        {
          v11 = v3[9];
          if ( v11 )
          {
            for ( j = nullptr; j != v11; j = (char *)j + 1 )
            {
              v13 = 5 * (_DWORD)j;
              sub_8089430((int)v10 + 4 * v13);
              v10 = v3[8];
            }
          }
          v3[9] = nullptr;
          sub_80CF780(v10);
        }
        v14 = v3[4];
        if ( v14 )
        {
          v3[5] = nullptr;
          sub_80CF780(v14);
        }
        v15 = *v3;
        if ( *v3 )
        {
          v3[1] = nullptr;
          sub_80CF780(v15);
        }
        operator delete(v3, 0x48u);
      }
      ++v16;
    }
    while ( (void **)v17 != v16 );
    v1 = a1;
    v2 = *(void ***)a1;
  }
  if ( v2 )
  {
    *(_DWORD *)(v1 + 4) = 0;
    sub_80CF780(v2);
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 8) = 0;
  }
  sub_80811C0(v1);
  sub_80894E0((_DWORD *)(v1 + 36));
  sub_8095010(*(void ***)(v1 + 12));
  *(_DWORD *)(v1 + 12) = 0;
  sub_809B320(*(void **)(v1 + 16));
  *(_DWORD *)(v1 + 16) = 0;
}

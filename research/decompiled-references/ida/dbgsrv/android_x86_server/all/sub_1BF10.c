/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BF10
// Address: 0x0001BF10

//----- (0001BF10) --------------------------------------------------------
void __cdecl sub_1BF10(int a1, void **ptr)
{
  void **v2; // edi
  int **v3; // ecx
  int *v4; // edi
  unsigned int v5; // edx
  int v6; // esi
  unsigned int v7; // ebx
  void *v8; // eax
  int **v9; // esi
  int v10; // eax
  int *v11; // esi
  unsigned int v12; // ebx
  int v13; // edi
  unsigned int v14; // ecx
  void *v15; // eax
  int **v16; // [esp+10h] [ebp-2Ch]
  int *v17; // [esp+14h] [ebp-28h]
  unsigned int v18; // [esp+14h] [ebp-28h]
  int **v19; // [esp+18h] [ebp-24h]
  unsigned int v20; // [esp+18h] [ebp-24h]
  char *v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  _DWORD *v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]

  v2 = ptr;
  if ( ptr )
  {
    sub_1BF10(a1, *ptr);
    sub_1BF10(a1, ptr[1]);
    v3 = (int **)ptr[5];
    if ( v3 )
    {
      v21 = (char *)ptr[6];
      if ( v21 )
      {
        v4 = *v3;
        if ( *v3 )
        {
          v5 = (unsigned int)v3[1];
          if ( v5 )
          {
            v6 = 0;
            v7 = 1;
            v19 = (int **)ptr[5];
            v17 = v3[1];
            if ( *v4 < -1 )
              goto LABEL_12;
LABEL_9:
            v8 = (void *)v4[v6 + 1];
            if ( v8 )
            {
              v4[v6 + 2] = 0;
              qfree(v8);
              v4[v6 + 1] = 0;
              v4[v6 + 3] = 0;
              v3 = v19;
              v5 = (unsigned int)v17;
            }
            v4[v6] = -2;
LABEL_12:
            while ( v7 < v5 )
            {
              v4 = *v3;
              v6 += 4;
              ++v7;
              if ( (*v3)[v6] >= -1 )
                goto LABEL_9;
            }
            v4 = *v3;
          }
          v3[1] = nullptr;
          v9 = v3;
          qfree(v4);
          *v9 = nullptr;
          v9[2] = nullptr;
        }
        v2 = ptr;
        if ( v21 != (_BYTE *)&dword_0 + 1 )
        {
          v10 = 1;
          do
          {
            v24 = v10;
            v23 = v2[5];
            v22 = 3 * v10;
            v11 = (int *)v23[6 * v10];
            if ( v11 )
            {
              v16 = (int **)&v23[6 * v10];
              v12 = (unsigned int)v16[1];
              if ( v12 )
              {
                v13 = 0;
                v14 = 1;
                v18 = (unsigned int)v16[1];
                if ( *v11 < -1 )
                  goto LABEL_25;
LABEL_22:
                v15 = (void *)v11[v13 + 1];
                if ( v15 )
                {
                  v20 = v14;
                  v11[v13 + 2] = 0;
                  qfree(v15);
                  v11[v13 + 1] = 0;
                  v11[v13 + 3] = 0;
                  v12 = v18;
                  v14 = v20;
                }
                v11[v13] = -2;
LABEL_25:
                while ( v14 < v12 )
                {
                  v11 = *v16;
                  v13 += 4;
                  ++v14;
                  if ( (*v16)[v13] >= -1 )
                    goto LABEL_22;
                }
                v11 = *v16;
              }
              v23[2 * v22 + 1] = 0;
              qfree(v11);
              *v16 = nullptr;
              v23[2 * v22 + 2] = 0;
              v2 = ptr;
            }
            v10 = v24 + 1;
          }
          while ( (char *)(v24 + 1) != v21 );
        }
        v3 = (int **)v2[5];
      }
      v2[6] = nullptr;
      qfree(v3);
    }
    operator delete(v2);
  }
}
// 0: using guessed type int dword_0;

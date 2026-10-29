/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CF90
// Address: 0x0008CF90

//----- (0008CF90) --------------------------------------------------------
int __cdecl sub_8CF90(int a1, int *a2, unsigned int *a3, int a4)
{
  int v4; // esi
  int *v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  void **v10; // eax
  int *v11; // edi
  int *v12; // esi
  unsigned int v13; // eax
  int *v14; // eax
  _DWORD *v15; // ecx
  unsigned int v16; // edx
  _DWORD *v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  const void *v20; // edx
  void *v21; // eax
  _DWORD *v22; // edi
  _DWORD *v23; // esi
  unsigned int *v25; // [esp+Ch] [ebp-40h]
  unsigned int v26; // [esp+10h] [ebp-3Ch]
  const void *v27; // [esp+10h] [ebp-3Ch]
  _DWORD *v28; // [esp+14h] [ebp-38h]
  _DWORD *v29; // [esp+14h] [ebp-38h]
  _DWORD **v30; // [esp+1Ch] [ebp-30h]
  _DWORD *v31; // [esp+20h] [ebp-2Ch]
  int v32; // [esp+24h] [ebp-28h]
  void **v33[9]; // [esp+28h] [ebp-24h] BYREF

  v4 = a4;
  v33[4] = (void **)__readgsdword(0x14u);
  if ( a4 > 0 )
  {
    v30 = (_DWORD **)(a1 + 172);
    v6 = (int *)(a1 + 176);
    v7 = 0;
    do
    {
      v8 = *a3;
      v32 = v7;
      v26 = *a3;
      if ( a3[2] > 1 )
      {
        v25 = a3;
        v11 = (int *)*v6;
        if ( *v6 )
        {
          v12 = v6;
          while ( 1 )
          {
            v13 = v11[4];
            if ( v8 >= v13 )
            {
              if ( v13 >= v8 )
                goto LABEL_22;
              v12 = v11 + 1;
              v14 = (int *)v11[1];
              if ( !v14 )
                goto LABEL_22;
            }
            else
            {
              v14 = (int *)*v11;
              v12 = v11;
              if ( !*v11 )
              {
                v12 = v11;
                goto LABEL_22;
              }
            }
            v11 = v14;
          }
        }
        v11 = v6;
        v12 = v6;
LABEL_22:
        v15 = (_DWORD *)*v12;
        if ( *v12 )
        {
          a3 = v25;
          v16 = v26;
        }
        else
        {
          v28 = operator new(0x114u);
          v28[4] = v26;
          memset(v28 + 5, 0, 0x100u);
          v28[13] = -1;
          v28[14] = -1;
          v28[15] = -1;
          memset(v28 + 16, 0, 0xCCu);
          *v28 = 0;
          v28[1] = 0;
          v28[2] = v11;
          *v12 = (int)v28;
          v17 = (_DWORD *)**v30;
          if ( v17 )
          {
            *v30 = v17;
            v18 = *v12;
          }
          else
          {
            v18 = (int)v28;
          }
          a3 = v25;
          sub_2D500(*(_DWORD *)(a1 + 176), v18);
          ++*(_DWORD *)(a1 + 180);
          v16 = *v25;
          v15 = v28;
        }
        v15[5] = v16;
        if ( v15 + 5 != a3 )
        {
          v19 = a3[2];
          if ( v19 < 2 )
          {
            v15[7] = 0;
          }
          else
          {
            v20 = (const void *)v25[1];
            if ( v15[8] >= v19 )
            {
              v21 = (void *)v15[6];
            }
            else
            {
              v31 = v15 + 6;
              v29 = v15;
              v27 = (const void *)v25[1];
              v21 = qvector_reserve((int)(v15 + 6), (void *)v15[6], v19, 1u);
              v20 = v27;
              v15 = v29;
              *v31 = v21;
            }
            v15[7] = v19;
            v22 = v15;
            memmove(v21, v20, v19 - 1);
            v15 = v22;
            *(_BYTE *)(v22[6] + v19 - 1) = 0;
          }
          a3 = v25;
        }
        v15[9] = a3[4];
        v23 = v15;
        sub_88B60(v15 + 10, (int)(a3 + 5));
        memcpy(v23 + 13, a3 + 8, 0xE0u);
        v4 = a4;
        v6 = (int *)(a1 + 176);
      }
      else
      {
        v9 = *v6;
        if ( *v6 )
        {
          v10 = (void **)v6;
          do
          {
            if ( *(_DWORD *)(v9 + 16) >= v26 )
              v10 = (void **)v9;
            v9 = *(_DWORD *)(v9 + 4 * (*(_DWORD *)(v9 + 16) < v26));
          }
          while ( v9 );
          v6 = (int *)(a1 + 176);
          if ( v10 != (void **)(a1 + 176) && v26 >= (unsigned int)v10[4] )
          {
            v33[2] = v10;
            sub_8E830(v33, (int)v30, v10);
            v6 = (int *)(a1 + 176);
          }
        }
      }
      v7 = v32 + 1;
      a3 += 64;
    }
    while ( v32 + 1 != v4 );
  }
  if ( a2 )
    *a2 = v4;
  return 1;
}

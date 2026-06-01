/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42990
// Address: 0x00042990

//----- (00042990) --------------------------------------------------------
unsigned int __cdecl sub_42990(char **a1, unsigned int a2)
{
  unsigned int v2; // eax
  char *v3; // esi
  unsigned int v4; // ecx
  char *v5; // eax
  int v6; // ecx
  int v7; // edx
  __int64 v8; // xmm0_8
  int v9; // ecx
  __int64 v10; // xmm0_8
  int v11; // ecx
  unsigned int v12; // edx
  char *v13; // eax
  __int64 v14; // xmm0_8
  unsigned int v15; // ecx
  char *v16; // eax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // xmm0_8
  int v20; // ecx
  __int64 v21; // xmm0_8
  int v22; // ecx
  unsigned int v23; // edx
  char *v24; // eax
  __int64 v25; // xmm0_8
  unsigned int v27; // [esp+8h] [ebp-54h]
  char *v28; // [esp+Ch] [ebp-50h]
  char *v29; // [esp+Ch] [ebp-50h]
  __int128 v30; // [esp+10h] [ebp-4Ch] BYREF
  __int64 v31; // [esp+20h] [ebp-3Ch]
  __int128 v32; // [esp+30h] [ebp-2Ch]
  __int64 v33; // [esp+40h] [ebp-1Ch]
  unsigned int v34; // [esp+48h] [ebp-14h]

  v34 = __readgsdword(0x14u);
  v2 = (unsigned int)a1[1];
  if ( v2 != a2 )
  {
    v30 = 0;
    v31 = 0;
    if ( v2 <= a2 )
    {
      if ( v2 < a2 )
      {
        v3 = *a1;
        v27 = (unsigned int)a1[2];
        if ( *a1 > (char *)&v30 || &v3[24 * v27] <= (char *)&v30 )
        {
          v15 = a2;
          if ( v27 < a2 )
          {
            v3 = (char *)qvector_reserve((int)a1, nullptr, a2, 0x18u);
            v29 = a1[2];
            a1[2] = (char *)v27;
            v16 = *a1;
            v17 = (int)(a1[1] - 1);
            if ( v17 >= 0 )
            {
              v18 = 0;
              do
              {
                *(_QWORD *)&v3[v18 + 16] = *(_QWORD *)&v16[v18 + 16];
                v19 = *(_QWORD *)&v16[v18];
                *(_QWORD *)&v3[v18 + 8] = *(_QWORD *)&v16[v18 + 8];
                *(_QWORD *)&v3[v18] = v19;
                v18 += 24;
                --v17;
              }
              while ( v17 >= 0 );
              v16 = *a1;
            }
            qfree(v16);
            *a1 = v3;
            a1[2] = v29;
            v2 = (unsigned int)a1[1];
            v15 = a2;
          }
          if ( v2 < v15 )
          {
            v20 = 3 * v2;
            *(_QWORD *)&v3[8 * v20 + 16] = v31;
            v21 = v30;
            *(_QWORD *)&v3[8 * v20 + 8] = *((_QWORD *)&v30 + 1);
            *(_QWORD *)&v3[8 * v20] = v21;
            if ( v2 + 1 != a2 )
            {
              v22 = 24 * v2 + 24;
              v23 = a2 - 1 - v2;
              do
              {
                v24 = *a1;
                *(_QWORD *)&v24[v22 + 16] = v31;
                v25 = v30;
                *(_QWORD *)&v24[v22 + 8] = *((_QWORD *)&v30 + 1);
                *(_QWORD *)&v24[v22] = v25;
                v22 += 24;
                --v23;
              }
              while ( v23 );
            }
          }
        }
        else
        {
          v33 = v31;
          v32 = v30;
          v4 = a2;
          if ( v27 < a2 )
          {
            v3 = (char *)qvector_reserve((int)a1, nullptr, a2, 0x18u);
            v28 = a1[2];
            a1[2] = (char *)v27;
            v5 = *a1;
            v6 = (int)(a1[1] - 1);
            if ( v6 >= 0 )
            {
              v7 = 0;
              do
              {
                *(_QWORD *)&v3[v7 + 16] = *(_QWORD *)&v5[v7 + 16];
                v8 = *(_QWORD *)&v5[v7];
                *(_QWORD *)&v3[v7 + 8] = *(_QWORD *)&v5[v7 + 8];
                *(_QWORD *)&v3[v7] = v8;
                v7 += 24;
                --v6;
              }
              while ( v6 >= 0 );
              v5 = *a1;
            }
            qfree(v5);
            *a1 = v3;
            a1[2] = v28;
            v2 = (unsigned int)a1[1];
            v4 = a2;
          }
          if ( v2 < v4 )
          {
            v9 = 3 * v2;
            *(_QWORD *)&v3[8 * v9 + 16] = v33;
            v10 = v32;
            *(_QWORD *)&v3[8 * v9 + 8] = *((_QWORD *)&v32 + 1);
            *(_QWORD *)&v3[8 * v9] = v10;
            if ( v2 + 1 != a2 )
            {
              v11 = 24 * v2 + 24;
              v12 = a2 - 1 - v2;
              do
              {
                v13 = *a1;
                *(_QWORD *)&v13[v11 + 16] = v33;
                v14 = v32;
                *(_QWORD *)&v13[v11 + 8] = *((_QWORD *)&v32 + 1);
                *(_QWORD *)&v13[v11] = v14;
                v11 += 24;
                --v12;
              }
              while ( v12 );
            }
          }
        }
        a1[1] = (char *)a2;
      }
    }
    else
    {
      a1[1] = (char *)a2;
    }
  }
  return __readgsdword(0x14u);
}

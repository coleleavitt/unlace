/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B6DC0
// Address: 0x000B6DC0

//----- (000B6DC0) --------------------------------------------------------
unsigned int __cdecl sub_B6DC0(_DWORD *a1, unsigned int *a2)
{
  unsigned int *v2; // edi
  int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // eax
  char *v7; // edx
  char *v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD *v11; // edi
  char *v12; // eax
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // edi
  _DWORD *v16; // edi
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // edx
  _BYTE *v27; // ecx
  int v28; // esi
  char *v29; // eax
  char v30; // dl
  int v31; // edi
  unsigned int v33; // [esp+4h] [ebp-38h]
  _BYTE *v34; // [esp+4h] [ebp-38h]
  char *v35; // [esp+8h] [ebp-34h]
  char *v36; // [esp+8h] [ebp-34h]
  int v37; // [esp+8h] [ebp-34h]
  int v38; // [esp+Ch] [ebp-30h]
  int v39; // [esp+Ch] [ebp-30h]
  __int64 v40; // [esp+10h] [ebp-2Ch] BYREF
  int v41; // [esp+18h] [ebp-24h]
  __int64 v42; // [esp+1Ch] [ebp-20h]
  int v43; // [esp+24h] [ebp-18h]
  unsigned int v44; // [esp+28h] [ebp-14h]

  v2 = a2;
  v44 = __readgsdword(0x14u);
  a1[1] = 0;
  if ( *a2 < a2[1] )
  {
    v3 = unpack_dd(a2, a2[1]);
    v4 = a1;
    v5 = v3;
    v6 = a1[1];
    if ( v6 != v5 )
    {
      v40 = 0;
      LOBYTE(v41) = 0;
      if ( v6 <= v5 )
      {
        if ( v6 >= v5 )
        {
          v5 = v6;
        }
        else
        {
          v33 = a1[2];
          v7 = (char *)*a1;
          if ( *a1 > (unsigned int)&v40 || *a1 + 12 * v33 <= (unsigned int)&v40 )
          {
            if ( v33 < v5 )
            {
              v36 = (char *)qvector_reserve((int)a1, nullptr, v5, 0xCu);
              v39 = a1[2];
              a1[2] = v33;
              v12 = (char *)*a1;
              v13 = a1[1] - 1;
              if ( v13 < 0 )
              {
                v15 = a1;
              }
              else
              {
                v14 = 0;
                do
                {
                  *(_DWORD *)&v36[v14 + 8] = *(_DWORD *)&v12[v14 + 8];
                  *(_QWORD *)&v36[v14] = *(_QWORD *)&v12[v14];
                  v14 += 12;
                  --v13;
                }
                while ( v13 >= 0 );
                v15 = a1;
                v12 = (char *)*a1;
              }
              qfree(v12);
              v7 = v36;
              *v15 = v36;
              v15[2] = v39;
              v6 = v15[1];
            }
            v16 = a1;
            if ( v6 < v5 )
            {
              v17 = 3 * v6;
              *(_DWORD *)&v7[4 * v17 + 8] = v41;
              *(_QWORD *)&v7[4 * v17] = v40;
              v16 = a1;
              if ( v6 + 1 != v5 )
              {
                v18 = 12 * v6 + 12;
                v19 = v5 - 1 - v6;
                do
                {
                  v20 = *v16;
                  *(_DWORD *)(v20 + v18 + 8) = v41;
                  v16 = a1;
                  *(_QWORD *)(v20 + v18) = v40;
                  v18 += 12;
                  --v19;
                }
                while ( v19 );
              }
            }
          }
          else
          {
            LOBYTE(v43) = v41;
            v42 = v40;
            if ( v33 < v5 )
            {
              v35 = (char *)qvector_reserve((int)a1, nullptr, v5, 0xCu);
              v38 = a1[2];
              a1[2] = v33;
              v8 = (char *)*a1;
              v9 = a1[1] - 1;
              if ( v9 < 0 )
              {
                v11 = a1;
              }
              else
              {
                v10 = 0;
                do
                {
                  *(_DWORD *)&v35[v10 + 8] = *(_DWORD *)&v8[v10 + 8];
                  *(_QWORD *)&v35[v10] = *(_QWORD *)&v8[v10];
                  v10 += 12;
                  --v9;
                }
                while ( v9 >= 0 );
                v11 = a1;
                v8 = (char *)*a1;
              }
              qfree(v8);
              v7 = v35;
              *v11 = v35;
              v11[2] = v38;
              v6 = v11[1];
            }
            v16 = a1;
            if ( v6 < v5 )
            {
              v21 = 3 * v6;
              *(_DWORD *)&v7[4 * v21 + 8] = v43;
              *(_QWORD *)&v7[4 * v21] = v42;
              v16 = a1;
              if ( v6 + 1 != v5 )
              {
                v22 = 12 * v6 + 12;
                v23 = v5 - 1 - v6;
                do
                {
                  v24 = *v16;
                  *(_DWORD *)(v24 + v22 + 8) = v43;
                  v16 = a1;
                  *(_QWORD *)(v24 + v22) = v42;
                  v22 += 12;
                  --v23;
                }
                while ( v23 );
              }
            }
          }
          v16[1] = v5;
          v25 = v16;
          v2 = a2;
          v4 = v25;
        }
      }
      else
      {
        a1[1] = v5;
      }
    }
    v26 = 12 * v5;
    if ( 12 * v5 )
    {
      v27 = (_BYTE *)(*v4 + 8);
      v28 = 0;
      do
      {
        v29 = (char *)*v2;
        v37 = v26;
        if ( *v2 >= v2[1] )
          v30 = 0;
        else
          v30 = *v29++;
        *v2 = (unsigned int)v29;
        v34 = v27;
        *v27 = v30;
        v31 = v28 + unpack_dd(v2, v2[1]);
        *((_DWORD *)v34 - 2) = v31;
        v28 = v31 + unpack_dd(a2, a2[1]);
        v2 = a2;
        *((_DWORD *)v34 - 1) = v28;
        v27 = v34 + 12;
        v26 = v37 - 12;
      }
      while ( v37 != 12 );
    }
  }
  return __readgsdword(0x14u);
}

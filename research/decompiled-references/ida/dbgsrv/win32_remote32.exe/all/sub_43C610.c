/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C610
// Address: 0x0043C610

//----- (0043C610) --------------------------------------------------------
int __stdcall sub_43C610(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // edx
  int v6; // ecx
  int *v7; // edi
  unsigned int *v8; // esi
  bool v9; // cc
  unsigned int v10; // ebx
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int *v14; // edx
  unsigned int v15; // ecx
  int *v16; // eax
  int v17; // eax
  _DWORD *v18; // ebx
  _DWORD *v19; // esi
  unsigned int *v20; // esi
  int v22; // eax
  char *v23; // ebx
  int v24; // ecx
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // ebx
  _DWORD *v28; // [esp-Ch] [ebp-4Ch]
  int v29; // [esp-8h] [ebp-48h]
  _DWORD v30[2]; // [esp+10h] [ebp-30h] BYREF
  int v31; // [esp+18h] [ebp-28h]
  int *v32; // [esp+1Ch] [ebp-24h]
  int v33; // [esp+20h] [ebp-20h]
  char *v34; // [esp+24h] [ebp-1Ch]
  unsigned int v35; // [esp+28h] [ebp-18h] BYREF
  int v36; // [esp+2Ch] [ebp-14h] BYREF
  int v37; // [esp+30h] [ebp-10h]
  int v38; // [esp+3Ch] [ebp-4h]
  int *v39; // [esp+48h] [ebp+8h]
  unsigned int *v40; // [esp+50h] [ebp+10h]

  v5 = a4;
  v6 = 0;
  v37 = 0;
  if ( a4 > 0 )
  {
    v7 = (int *)(a1 + 168);
    v8 = (unsigned int *)(a3 + 4);
    v39 = (int *)(a1 + 168);
    v40 = (unsigned int *)(a3 + 4);
    do
    {
      v9 = v8[1] <= 1;
      v10 = *(v8 - 1);
      v35 = v10;
      if ( v9 )
      {
        v11 = *v7;
        v12 = v11;
        v13 = *(_DWORD *)(v11 + 4);
        v14 = (int *)(v11 + 4);
        if ( !*(_BYTE *)(v13 + 13) )
        {
          do
          {
            v15 = *(_DWORD *)(v13 + 16);
            if ( v15 >= v10 )
            {
              if ( *(_BYTE *)(v12 + 13) && v10 < v15 )
                v12 = v13;
              v11 = v13;
              v13 = *(_DWORD *)v13;
            }
            else
            {
              v13 = *(_DWORD *)(v13 + 8);
            }
          }
          while ( !*(_BYTE *)(v13 + 13) );
          v6 = v37;
        }
        v16 = (int *)v12;
        if ( *(_BYTE *)(v12 + 13) )
          v16 = v14;
        v17 = *v16;
        while ( !*(_BYTE *)(v17 + 13) )
        {
          if ( v10 >= *(_DWORD *)(v17 + 16) )
          {
            v17 = *(_DWORD *)(v17 + 8);
          }
          else
          {
            v12 = v17;
            v17 = *(_DWORD *)v17;
          }
        }
        v36 = v11;
        v18 = (_DWORD *)*v39;
        if ( v11 == *(_DWORD *)*v39 && *(_BYTE *)(v12 + 13) )
        {
          v7 = v39;
          sub_4089B0(v39, (int)v39, (int *)v18[1]);
          v6 = v37;
          v18[1] = v18;
          *v18 = v18;
          v18[2] = v18;
          v39[1] = 0;
        }
        else
        {
          if ( v11 != v12 )
          {
            do
            {
              sub_40B5E0(&v36);
              v19 = (_DWORD *)sub_40BA90((int ***)v39, v11);
              sub_40AD70(v19 + 5);
              sub_4627F2(v19);
              v11 = v36;
              v38 = -1;
            }
            while ( v36 != v12 );
            v6 = v37;
          }
          v7 = v39;
        }
        v20 = v40;
      }
      else
      {
        sub_408C10(v7, v30, &v35);
        v22 = v31;
        if ( *(_BYTE *)(v31 + 13) || v10 < *(_DWORD *)(v31 + 16) )
        {
          if ( v7[1] == 15561475 )
            sub_403E20();
          v36 = *v7;
          v32 = v7;
          v38 = 1;
          v33 = 0;
          v23 = (char *)sub_4627C2(0x114u);
          *((_DWORD *)v23 + 4) = v35;
          sub_464890((__m128i *)(v23 + 20), 0, 0x100u);
          v34 = v23 + 20;
          *((_DWORD *)v23 + 6) = 0;
          *((_DWORD *)v23 + 7) = 0;
          *((_DWORD *)v23 + 8) = 0;
          *((_DWORD *)v23 + 10) = 0;
          *((_DWORD *)v23 + 11) = 0;
          *((_DWORD *)v23 + 12) = 0;
          *((_DWORD *)v23 + 13) = -1;
          *((_DWORD *)v23 + 16) = 0;
          v24 = 8;
          *((_DWORD *)v23 + 17) = 0;
          *((_DWORD *)v23 + 18) = 0;
          v25 = v23 + 76;
          *((_DWORD *)v23 + 14) = -1;
          *((_DWORD *)v23 + 15) = -1;
          do
          {
            *v25 = 0;
            v25 += 6;
            *(v25 - 5) = 0;
            *(v25 - 4) = 0;
            *(v25 - 3) = 0;
            *(v25 - 2) = 0;
            *(v25 - 1) = 0;
            --v24;
          }
          while ( v24 );
          v26 = v36;
          v29 = v30[1];
          *(_DWORD *)v23 = v36;
          v28 = (_DWORD *)v30[0];
          *((_DWORD *)v23 + 1) = v26;
          *((_DWORD *)v23 + 2) = v26;
          *((_WORD *)v23 + 6) = 0;
          v33 = 0;
          v38 = -1;
          v22 = sub_403C10(v7, v28, v29, (int)v23);
          v8 = v40;
        }
        v27 = v22;
        *(_DWORD *)(v22 + 20) = *(v8 - 1);
        sub_403330(v22 + 24, v8);
        *(_DWORD *)(v27 + 36) = v8[3];
        sub_43A9B0((void **)(v27 + 40), v8 + 4);
        qmemcpy((void *)(v27 + 52), v8 + 7, 0xD8u);
        v20 = v40;
        v7 = v39;
        v6 = v37;
        *(_BYTE *)(v27 + 268) = *((_BYTE *)v40 + 244);
        *(_DWORD *)(v27 + 272) = v40[62];
      }
      v5 = a4;
      ++v6;
      v8 = v20 + 64;
      v37 = v6;
      v40 = v8;
    }
    while ( v6 < a4 );
  }
  if ( a2 )
    *a2 = v5;
  return 1;
}

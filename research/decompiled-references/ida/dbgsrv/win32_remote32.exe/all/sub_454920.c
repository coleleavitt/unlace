/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454920
// Address: 0x00454920

//----- (00454920) --------------------------------------------------------
int __usercall sub_454920@<eax>(__m128i a1@<xmm0>, int a2, char *a3, char a4)
{
  int v4; // edi
  _DWORD *v5; // eax
  __m128i *EnvironmentStringsW; // eax
  __m128i *v7; // ecx
  int v8; // esi
  unsigned int v9; // edx
  char *v10; // ebx
  int v11; // esi
  int v12; // ebx
  int v13; // edx
  __m128i *v14; // eax
  int v15; // esi
  __m128i *v16; // eax
  int v17; // esi
  __m128i *v18; // eax
  unsigned int *v19; // ebx
  unsigned int v20; // esi
  unsigned int *v21; // eax
  unsigned int v22; // edx
  _WORD *v23; // eax
  _WORD *v24; // ecx
  unsigned int *v25; // esi
  int v26; // ebx
  int v27; // ecx
  unsigned int v28; // eax
  LPVOID v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  unsigned int v34; // eax
  LPVOID v35; // eax
  int v36; // esi
  int v37; // esi
  void *v39; // [esp+10h] [ebp-38h] BYREF
  int v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+18h] [ebp-30h]
  __m128i *v42; // [esp+1Ch] [ebp-2Ch] BYREF
  int v43; // [esp+20h] [ebp-28h]
  unsigned int v44; // [esp+24h] [ebp-24h]
  void *v45[2]; // [esp+28h] [ebp-20h] BYREF
  int v46; // [esp+30h] [ebp-18h]
  int v47; // [esp+34h] [ebp-14h]
  unsigned int *v48; // [esp+38h] [ebp-10h] BYREF
  int v49; // [esp+44h] [ebp-4h]

  v4 = a2;
  v45[1] = nullptr;
  v5 = sub_4627C2(0x28u);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 6) = 257;
  v45[0] = v5;
  v49 = 0;
  if ( a4 )
  {
    EnvironmentStringsW = (__m128i *)GetEnvironmentStringsW();
    sub_454520(a1, (int *)v45, EnvironmentStringsW);
  }
  v7 = nullptr;
  v8 = 0;
  v9 = 0;
  v42 = nullptr;
  v43 = 0;
  v44 = 0;
  v10 = a3;
  LOBYTE(v49) = 1;
  if ( *a3 )
  {
    do
    {
      if ( sub_464F10(v10, 0x3Du) )
      {
        v39 = nullptr;
        v40 = 0;
        v41 = 0;
        LOBYTE(v49) = 2;
        if ( sub_45AAC0((int)&v39, (int)v10, -1) )
        {
          v11 = v40 != 0 ? v40 - 1 : 0;
          if ( v11 )
          {
            v12 = v43 != 0 ? v43 - 1 : 0;
            v13 = v12 + v11;
            if ( v12 + v11 + 1 <= v44 )
            {
              v14 = v42;
            }
            else
            {
              v14 = (__m128i *)sub_453B00((int)&v42, v42, v12 + v11 + 1, 2u);
              v42 = v14;
              v13 = v12 + v11;
            }
            v43 = v13 + 1;
            v14->m128i_i16[v13] = 0;
            sub_464310((unsigned int)v42 + 2 * v12, (unsigned int)v39, 2 * v11);
            v10 = a3;
          }
          v15 = v43 != 0 ? v43 - 1 : 0;
          if ( v15 + 2 <= v44 )
          {
            v16 = v42;
          }
          else
          {
            v16 = (__m128i *)sub_453B00((int)&v42, v42, v15 + 2, 2u);
            v42 = v16;
          }
          v43 = v15 + 2;
          v16->m128i_i16[v15] = 0;
          v42->m128i_i16[v15 + 1] = 0;
        }
        LOBYTE(v49) = 3;
        if ( v39 )
        {
          v40 = 0;
          sub_453A20(v39);
          v39 = nullptr;
          v41 = 0;
        }
        LOBYTE(v49) = 1;
      }
      v10 += strlen(v10) + 1;
      a3 = v10;
    }
    while ( *v10 );
    v9 = v44;
    v8 = v43;
    v7 = v42;
  }
  v17 = v8 != 0 ? v8 - 1 : 0;
  if ( v17 + 2 > v9 )
  {
    v7 = (__m128i *)sub_453B00((int)&v42, v7, v17 + 2, 2u);
    v42 = v7;
  }
  v43 = v17 + 2;
  v7->m128i_i16[v17] = 0;
  v42->m128i_i16[v17 + 1] = 0;
  v18 = (__m128i *)&dword_48A0F4;
  if ( v43 )
    v18 = v42;
  sub_454520(a1, (int *)v45, v18);
  v19 = (unsigned int *)v45[0];
  v20 = 1;
  v21 = *(unsigned int **)v45[0];
  v48 = v21;
  if ( v21 != v45[0] )
  {
    do
    {
      v20 += (v21[5] != 0 ? v21[5] - 1 : 0) + (v21[8] != 0 ? v21[8] - 1 + 2 : 2);
      sub_40B5E0((int *)&v48);
      v21 = v48;
    }
    while ( v48 != v19 );
  }
  v22 = *(_DWORD *)(a2 + 8);
  if ( v20 <= v22 )
  {
    v24 = *(_WORD **)a2;
  }
  else
  {
    v23 = sub_453B00(a2, *(void **)a2, v20, 2u);
    v19 = (unsigned int *)v45[0];
    v24 = v23;
    *(_DWORD *)a2 = v23;
    v22 = *(_DWORD *)(a2 + 8);
  }
  v25 = (unsigned int *)*v19;
  v48 = v25;
  if ( v25 != v19 )
  {
    do
    {
      v26 = v25[5] != 0 ? v25[5] - 1 : 0;
      if ( v26 )
      {
        v27 = *(_DWORD *)(v4 + 4) != 0 ? *(_DWORD *)(v4 + 4) - 1 : 0;
        v47 = v27;
        v28 = v26 + v27 + 1;
        v46 = v28;
        if ( v28 > *(_DWORD *)(v4 + 8) )
        {
          v29 = sub_453B00(v4, *(void **)v4, v26 + v27 + 1, 2u);
          v27 = v47;
          *(_DWORD *)v4 = v29;
          v28 = v46;
        }
        *(_DWORD *)(v4 + 4) = v28;
        *(_WORD *)(*(_DWORD *)v4 + 2 * (v27 + v26)) = 0;
        v4 = a2;
        sub_464310(*(_DWORD *)a2 + 2 * v27, v25[4], 2 * v26);
      }
      v30 = *(_DWORD *)(v4 + 4) != 0 ? *(_DWORD *)(v4 + 4) - 1 : 0;
      v31 = v30 + 2;
      if ( (unsigned int)(v30 + 2) > *(_DWORD *)(v4 + 8) )
      {
        *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v30 + 2, 2u);
        v31 = v30 + 2;
      }
      *(_DWORD *)(v4 + 4) = v31;
      *(_WORD *)(*(_DWORD *)v4 + 2 * v30) = 61;
      *(_WORD *)(*(_DWORD *)v4 + 2 * v30 + 2) = 0;
      v32 = v25[8] != 0 ? v25[8] - 1 : 0;
      v46 = v32;
      if ( v32 )
      {
        v33 = *(_DWORD *)(v4 + 4) != 0 ? *(_DWORD *)(v4 + 4) - 1 : 0;
        v34 = v32 + v33 + 1;
        v47 = v34;
        if ( v34 > *(_DWORD *)(v4 + 8) )
        {
          v35 = sub_453B00(v4, *(void **)v4, v32 + v33 + 1, 2u);
          v32 = v46;
          *(_DWORD *)v4 = v35;
          v34 = v47;
        }
        *(_DWORD *)(v4 + 4) = v34;
        *(_WORD *)(*(_DWORD *)v4 + 2 * (v33 + v32)) = 0;
        v4 = a2;
        sub_464310(*(_DWORD *)a2 + 2 * v33, v25[7], 2 * v32);
      }
      v36 = *(_DWORD *)(v4 + 4) != 0 ? *(_DWORD *)(v4 + 4) - 1 : 0;
      if ( (unsigned int)(v36 + 2) > *(_DWORD *)(v4 + 8) )
        *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v36 + 2, 2u);
      *(_DWORD *)(v4 + 4) = v36 + 2;
      *(_WORD *)(*(_DWORD *)v4 + 2 * v36) = 0;
      *(_WORD *)(*(_DWORD *)v4 + 2 * v36 + 2) = 0;
      sub_40B5E0((int *)&v48);
      v25 = v48;
    }
    while ( v48 != v45[0] );
    v22 = *(_DWORD *)(v4 + 8);
    v24 = *(_WORD **)v4;
  }
  v37 = *(_DWORD *)(v4 + 4) != 0 ? *(_DWORD *)(v4 + 4) - 1 : 0;
  if ( v37 + 2 > v22 )
  {
    v24 = sub_453B00(v4, *(void **)v4, v37 + 2, 2u);
    *(_DWORD *)v4 = v24;
  }
  *(_DWORD *)(v4 + 4) = v37 + 2;
  v24[v37] = 0;
  *(_WORD *)(*(_DWORD *)v4 + 2 * v37 + 2) = 0;
  LOBYTE(v49) = 4;
  if ( v42 )
  {
    v43 = 0;
    sub_453A20(v42);
    v42 = nullptr;
    v44 = 0;
  }
  sub_43FC10(v45, (int)v45, *((_DWORD *)v45[0] + 1));
  return sub_4627F2(v45[0]);
}
// 48A0F4: using guessed type int dword_48A0F4;

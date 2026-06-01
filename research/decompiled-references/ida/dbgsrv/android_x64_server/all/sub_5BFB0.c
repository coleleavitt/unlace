/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BFB0
// Address: 0x000000000005BFB0

//----- (000000000005BFB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_5BFB0(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v5; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  char *v17; // rdx
  char *v18; // rdx
  char *v19; // rdx
  char *v20; // rdx
  unsigned __int64 v22; // rdx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // rsi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char *v37; // rdx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  char *v41; // rdx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  char *v45; // rdx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  char *v49; // rdx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int128 v53; // [rsp+0h] [rbp-68h]
  __int128 v54; // [rsp+10h] [rbp-58h]
  __int128 v55; // [rsp+20h] [rbp-48h]
  __int128 v56; // [rsp+30h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 <= a2 )
  {
    if ( v5 >= a2 )
      return __readfsqword(0x28u);
    v7 = *(char **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &v7[64 * v8] <= a3 )
    {
      if ( v8 < a2 )
      {
        v7 = (char *)qvector_reserve(a1, *(char **)a1, a2, 0x40u);
        *(_QWORD *)a1 = v7;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        v22 = v5 << 6;
        v23 = *(_OWORD *)a3;
        v24 = *((_OWORD *)a3 + 1);
        v25 = *((_OWORD *)a3 + 2);
        *(_OWORD *)&v7[v22 + 48] = *((_OWORD *)a3 + 3);
        *(_OWORD *)&v7[v22 + 32] = v25;
        *(_OWORD *)&v7[v22 + 16] = v24;
        *(_OWORD *)&v7[v22] = v23;
        v26 = v5 + 1;
        if ( v5 + 1 != a2 )
        {
          v27 = a2 - 2 - v5;
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v28 = v22 + 64;
            v29 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3);
            v30 = 0;
            do
            {
              v31 = *(char **)a1;
              v32 = *(_OWORD *)a3;
              v33 = *((_OWORD *)a3 + 1);
              v34 = *((_OWORD *)a3 + 2);
              *(_OWORD *)&v31[v28 + 48] = *((_OWORD *)a3 + 3);
              *(_OWORD *)&v31[v28 + 32] = v34;
              *(_OWORD *)&v31[v28 + 16] = v33;
              *(_OWORD *)&v31[v28] = v32;
              --v30;
              v28 += 64LL;
            }
            while ( v29 != v30 );
            v26 = v5 + 1 - v30;
          }
          if ( v27 >= 3 )
          {
            v35 = a2 - v26;
            v36 = v26 << 6;
            do
            {
              v37 = *(char **)a1;
              v38 = *(_OWORD *)a3;
              v39 = *((_OWORD *)a3 + 1);
              v40 = *((_OWORD *)a3 + 2);
              *(_OWORD *)&v37[v36 + 48] = *((_OWORD *)a3 + 3);
              *(_OWORD *)&v37[v36 + 32] = v40;
              *(_OWORD *)&v37[v36 + 16] = v39;
              *(_OWORD *)&v37[v36] = v38;
              v41 = *(char **)a1;
              v42 = *(_OWORD *)a3;
              v43 = *((_OWORD *)a3 + 1);
              v44 = *((_OWORD *)a3 + 2);
              *(_OWORD *)&v41[v36 + 112] = *((_OWORD *)a3 + 3);
              *(_OWORD *)&v41[v36 + 96] = v44;
              *(_OWORD *)&v41[v36 + 80] = v43;
              *(_OWORD *)&v41[v36 + 64] = v42;
              v45 = *(char **)a1;
              v46 = *(_OWORD *)a3;
              v47 = *((_OWORD *)a3 + 1);
              v48 = *((_OWORD *)a3 + 2);
              *(_OWORD *)&v45[v36 + 176] = *((_OWORD *)a3 + 3);
              *(_OWORD *)&v45[v36 + 160] = v48;
              *(_OWORD *)&v45[v36 + 144] = v47;
              *(_OWORD *)&v45[v36 + 128] = v46;
              v49 = *(char **)a1;
              v50 = *(_OWORD *)a3;
              v51 = *((_OWORD *)a3 + 1);
              v52 = *((_OWORD *)a3 + 2);
              *(_OWORD *)&v49[v36 + 240] = *((_OWORD *)a3 + 3);
              *(_OWORD *)&v49[v36 + 224] = v52;
              *(_OWORD *)&v49[v36 + 208] = v51;
              *(_OWORD *)&v49[v36 + 192] = v50;
              v36 += 256LL;
              v35 -= 4LL;
            }
            while ( v35 );
          }
        }
      }
    }
    else
    {
      v56 = *((_OWORD *)a3 + 3);
      v55 = *((_OWORD *)a3 + 2);
      v54 = *((_OWORD *)a3 + 1);
      v53 = *(_OWORD *)a3;
      if ( v8 < a2 )
      {
        v7 = (char *)qvector_reserve(a1, v7, a2, 0x40u);
        *(_QWORD *)a1 = v7;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        v9 = v5 << 6;
        *(_OWORD *)&v7[v9 + 48] = v56;
        *(_OWORD *)&v7[v9 + 32] = v55;
        *(_OWORD *)&v7[v9 + 16] = v54;
        *(_OWORD *)&v7[v9] = v53;
        v10 = v5 + 1;
        if ( v5 + 1 != a2 )
        {
          v11 = a2 - 2 - v5;
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v12 = v9 + 64;
            v13 = 0;
            do
            {
              v14 = *(char **)a1;
              *(_OWORD *)&v14[v12 + 48] = v56;
              *(_OWORD *)&v14[v12 + 32] = v55;
              *(_OWORD *)&v14[v12 + 16] = v54;
              *(_OWORD *)&v14[v12] = v53;
              --v13;
              v12 += 64LL;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3) != v13 );
            v10 = v5 + 1 - v13;
          }
          if ( v11 >= 3 )
          {
            v15 = a2 - v10;
            v16 = v10 << 6;
            do
            {
              v17 = *(char **)a1;
              *(_OWORD *)&v17[v16 + 48] = v56;
              *(_OWORD *)&v17[v16 + 32] = v55;
              *(_OWORD *)&v17[v16 + 16] = v54;
              *(_OWORD *)&v17[v16] = v53;
              v18 = *(char **)a1;
              *(_OWORD *)&v18[v16 + 112] = v56;
              *(_OWORD *)&v18[v16 + 96] = v55;
              *(_OWORD *)&v18[v16 + 80] = v54;
              *(_OWORD *)&v18[v16 + 64] = v53;
              v19 = *(char **)a1;
              *(_OWORD *)&v19[v16 + 176] = v56;
              *(_OWORD *)&v19[v16 + 160] = v55;
              *(_OWORD *)&v19[v16 + 144] = v54;
              *(_OWORD *)&v19[v16 + 128] = v53;
              v20 = *(char **)a1;
              *(_OWORD *)&v20[v16 + 240] = v56;
              *(_OWORD *)&v20[v16 + 224] = v55;
              *(_OWORD *)&v20[v16 + 208] = v54;
              *(_OWORD *)&v20[v16 + 192] = v53;
              v16 += 256LL;
              v15 -= 4LL;
            }
            while ( v15 );
          }
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __readfsqword(0x28u);
}

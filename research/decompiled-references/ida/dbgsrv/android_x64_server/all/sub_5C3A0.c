/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C3A0
// Address: 0x000000000005C3A0

//----- (000000000005C3A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_5C3A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  char *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  char *v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rdx
  char *v16; // rdx
  char *v17; // rdx
  char *v18; // rdx
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdi
  char *v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  char *v31; // rdx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  char *v34; // rdx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  char *v37; // rdx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  char *v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // [rsp+0h] [rbp-58h]
  __int128 v44; // [rsp+10h] [rbp-48h]
  __int128 v45; // [rsp+20h] [rbp-38h]
  __int64 v46; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 <= a2 )
  {
    if ( v4 >= a2 )
      return __readfsqword(0x28u);
    v6 = *(char **)a1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 > a3 || (unsigned __int64)&v6[56 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        v6 = (char *)qvector_reserve(a1, *(char **)a1, a2, 0x38u);
        *(_QWORD *)a1 = v6;
        v4 = *(_QWORD *)(a1 + 8);
      }
      if ( v4 < a2 )
      {
        v20 = 56 * v4;
        *(_QWORD *)&v6[v20 + 48] = *(_QWORD *)(a3 + 48);
        v21 = *(_OWORD *)a3;
        v22 = *(_OWORD *)(a3 + 16);
        *(_OWORD *)&v6[v20 + 32] = *(_OWORD *)(a3 + 32);
        *(_OWORD *)&v6[v20 + 16] = v22;
        *(_OWORD *)&v6[v20] = v21;
        v23 = v4 + 1;
        if ( v4 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v4) & 3) != 0 )
          {
            v24 = v20 + 56;
            v25 = 0;
            do
            {
              v26 = *(char **)a1;
              *(_QWORD *)&v26[v24 + 48] = *(_QWORD *)(a3 + 48);
              v27 = *(_OWORD *)a3;
              v28 = *(_OWORD *)(a3 + 16);
              *(_OWORD *)&v26[v24 + 32] = *(_OWORD *)(a3 + 32);
              *(_OWORD *)&v26[v24 + 16] = v28;
              *(_OWORD *)&v26[v24] = v27;
              --v25;
              v24 += 56;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v4) & 3) != v25 );
            v23 = v4 + 1 - v25;
          }
          if ( a2 - 2 - v4 >= 3 )
          {
            v29 = a2 - v23;
            v30 = 56 * v23;
            do
            {
              v31 = *(char **)a1;
              *(_QWORD *)&v31[v30 + 48] = *(_QWORD *)(a3 + 48);
              v32 = *(_OWORD *)a3;
              v33 = *(_OWORD *)(a3 + 16);
              *(_OWORD *)&v31[v30 + 32] = *(_OWORD *)(a3 + 32);
              *(_OWORD *)&v31[v30 + 16] = v33;
              *(_OWORD *)&v31[v30] = v32;
              v34 = *(char **)a1;
              *(_QWORD *)&v34[v30 + 104] = *(_QWORD *)(a3 + 48);
              v35 = *(_OWORD *)a3;
              v36 = *(_OWORD *)(a3 + 16);
              *(_OWORD *)&v34[v30 + 88] = *(_OWORD *)(a3 + 32);
              *(_OWORD *)&v34[v30 + 72] = v36;
              *(_OWORD *)&v34[v30 + 56] = v35;
              v37 = *(char **)a1;
              *(_QWORD *)&v37[v30 + 160] = *(_QWORD *)(a3 + 48);
              v38 = *(_OWORD *)a3;
              v39 = *(_OWORD *)(a3 + 16);
              *(_OWORD *)&v37[v30 + 144] = *(_OWORD *)(a3 + 32);
              *(_OWORD *)&v37[v30 + 128] = v39;
              *(_OWORD *)&v37[v30 + 112] = v38;
              v40 = *(char **)a1;
              *(_QWORD *)&v40[v30 + 216] = *(_QWORD *)(a3 + 48);
              v41 = *(_OWORD *)a3;
              v42 = *(_OWORD *)(a3 + 16);
              *(_OWORD *)&v40[v30 + 200] = *(_OWORD *)(a3 + 32);
              *(_OWORD *)&v40[v30 + 184] = v42;
              *(_OWORD *)&v40[v30 + 168] = v41;
              v30 += 224;
              v29 -= 4LL;
            }
            while ( v29 );
          }
        }
      }
    }
    else
    {
      v46 = *(_QWORD *)(a3 + 48);
      v45 = *(_OWORD *)(a3 + 32);
      v44 = *(_OWORD *)(a3 + 16);
      v43 = *(_OWORD *)a3;
      if ( v7 < a2 )
      {
        v6 = (char *)qvector_reserve(a1, v6, a2, 0x38u);
        *(_QWORD *)a1 = v6;
        v4 = *(_QWORD *)(a1 + 8);
      }
      if ( v4 < a2 )
      {
        v8 = 56 * v4;
        *(_QWORD *)&v6[v8 + 48] = v46;
        *(_OWORD *)&v6[v8 + 32] = v45;
        *(_OWORD *)&v6[v8 + 16] = v44;
        *(_OWORD *)&v6[v8] = v43;
        v9 = v4 + 1;
        if ( v4 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v4) & 3) != 0 )
          {
            v10 = v8 + 56;
            v11 = 0;
            do
            {
              v12 = *(char **)a1;
              *(_QWORD *)&v12[v10 + 48] = v46;
              *(_OWORD *)&v12[v10 + 32] = v45;
              *(_OWORD *)&v12[v10 + 16] = v44;
              *(_OWORD *)&v12[v10] = v43;
              --v11;
              v10 += 56;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v4) & 3) != v11 );
            v9 = v4 + 1 - v11;
          }
          if ( a2 - 2 - v4 >= 3 )
          {
            v13 = a2 - v9;
            v14 = 56 * v9;
            do
            {
              v15 = *(char **)a1;
              *(_QWORD *)&v15[v14 + 48] = v46;
              *(_OWORD *)&v15[v14 + 32] = v45;
              *(_OWORD *)&v15[v14 + 16] = v44;
              *(_OWORD *)&v15[v14] = v43;
              v16 = *(char **)a1;
              *(_QWORD *)&v16[v14 + 104] = v46;
              *(_OWORD *)&v16[v14 + 88] = v45;
              *(_OWORD *)&v16[v14 + 72] = v44;
              *(_OWORD *)&v16[v14 + 56] = v43;
              v17 = *(char **)a1;
              *(_QWORD *)&v17[v14 + 160] = v46;
              *(_OWORD *)&v17[v14 + 144] = v45;
              *(_OWORD *)&v17[v14 + 128] = v44;
              *(_OWORD *)&v17[v14 + 112] = v43;
              v18 = *(char **)a1;
              *(_QWORD *)&v18[v14 + 216] = v46;
              *(_OWORD *)&v18[v14 + 200] = v45;
              *(_OWORD *)&v18[v14 + 184] = v44;
              *(_OWORD *)&v18[v14 + 168] = v43;
              v14 += 224;
              v13 -= 4LL;
            }
            while ( v13 );
          }
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __readfsqword(0x28u);
}

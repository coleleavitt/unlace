/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6FD0
// Address: 0x00000000000A6FD0

//----- (00000000000A6FD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6FD0(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v5; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // rdx
  char *v18; // rdx
  char *v19; // rdx
  char *v20; // rdx
  __int64 v22; // rdx
  __int128 v23; // xmm0
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  char *v29; // rsi
  __int128 v30; // xmm0
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  char *v33; // rdx
  __int128 v34; // xmm0
  char *v35; // rdx
  __int128 v36; // xmm0
  char *v37; // rdx
  __int128 v38; // xmm0
  char *v39; // rdx
  __int128 v40; // xmm0
  __int128 v41; // [rsp+0h] [rbp-48h]
  __int128 v42; // [rsp+10h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 <= a2 )
  {
    if ( v5 >= a2 )
      return __readfsqword(0x28u);
    v7 = *(char **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &v7[32 * v8] <= a3 )
    {
      if ( v8 < a2 )
      {
        v7 = (char *)qvector_reserve(a1, *(char **)a1, a2, 0x20u);
        *(_QWORD *)a1 = v7;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        v22 = 32 * v5;
        v23 = *(_OWORD *)a3;
        *(_OWORD *)&v7[v22 + 16] = *((_OWORD *)a3 + 1);
        *(_OWORD *)&v7[v22] = v23;
        v24 = v5 + 1;
        if ( v5 + 1 != a2 )
        {
          v25 = a2 - 2 - v5;
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v26 = v22 + 32;
            v27 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3);
            v28 = 0;
            do
            {
              v29 = *(char **)a1;
              v30 = *(_OWORD *)a3;
              *(_OWORD *)&v29[v26 + 16] = *((_OWORD *)a3 + 1);
              *(_OWORD *)&v29[v26] = v30;
              --v28;
              v26 += 32;
            }
            while ( v27 != v28 );
            v24 = v5 + 1 - v28;
          }
          if ( v25 >= 3 )
          {
            v31 = a2 - v24;
            v32 = 32 * v24;
            do
            {
              v33 = *(char **)a1;
              v34 = *(_OWORD *)a3;
              *(_OWORD *)&v33[v32 + 16] = *((_OWORD *)a3 + 1);
              *(_OWORD *)&v33[v32] = v34;
              v35 = *(char **)a1;
              v36 = *(_OWORD *)a3;
              *(_OWORD *)&v35[v32 + 48] = *((_OWORD *)a3 + 1);
              *(_OWORD *)&v35[v32 + 32] = v36;
              v37 = *(char **)a1;
              v38 = *(_OWORD *)a3;
              *(_OWORD *)&v37[v32 + 80] = *((_OWORD *)a3 + 1);
              *(_OWORD *)&v37[v32 + 64] = v38;
              v39 = *(char **)a1;
              v40 = *(_OWORD *)a3;
              *(_OWORD *)&v39[v32 + 112] = *((_OWORD *)a3 + 1);
              *(_OWORD *)&v39[v32 + 96] = v40;
              v32 += 128;
              v31 -= 4LL;
            }
            while ( v31 );
          }
        }
      }
    }
    else
    {
      v42 = *((_OWORD *)a3 + 1);
      v41 = *(_OWORD *)a3;
      if ( v8 < a2 )
      {
        v7 = (char *)qvector_reserve(a1, v7, a2, 0x20u);
        *(_QWORD *)a1 = v7;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        v9 = 32 * v5;
        *(_OWORD *)&v7[v9 + 16] = v42;
        *(_OWORD *)&v7[v9] = v41;
        v10 = v5 + 1;
        if ( v5 + 1 != a2 )
        {
          v11 = a2 - 2 - v5;
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v12 = v9 + 32;
            v13 = 0;
            do
            {
              v14 = *(char **)a1;
              *(_OWORD *)&v14[v12 + 16] = v42;
              *(_OWORD *)&v14[v12] = v41;
              --v13;
              v12 += 32;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3) != v13 );
            v10 = v5 + 1 - v13;
          }
          if ( v11 >= 3 )
          {
            v15 = a2 - v10;
            v16 = 32 * v10;
            do
            {
              v17 = *(char **)a1;
              *(_OWORD *)&v17[v16 + 16] = v42;
              *(_OWORD *)&v17[v16] = v41;
              v18 = *(char **)a1;
              *(_OWORD *)&v18[v16 + 48] = v42;
              *(_OWORD *)&v18[v16 + 32] = v41;
              v19 = *(char **)a1;
              *(_OWORD *)&v19[v16 + 80] = v42;
              *(_OWORD *)&v19[v16 + 64] = v41;
              v20 = *(char **)a1;
              *(_OWORD *)&v20[v16 + 112] = v42;
              *(_OWORD *)&v20[v16 + 96] = v41;
              v16 += 128;
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

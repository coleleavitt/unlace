/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E730
// Address: 0x000000010001E730

//----- (000000010001E730) ----------------------------------------------------
__int64 __fastcall sub_10001E730(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rdx
  char *v11; // rdx
  unsigned __int64 v13; // r15
  void *v14; // rax
  unsigned __int64 v15; // r8
  char *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // r8
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  char *v25; // r8
  __int128 v26; // xmm0
  __int128 v27; // xmm2
  __int128 v28; // [rsp+0h] [rbp-60h]
  __int128 v29; // [rsp+10h] [rbp-50h]
  __int128 v30; // [rsp+20h] [rbp-40h]
  __int64 v31; // [rsp+30h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 >= a2 )
      return __stack_chk_guard;
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 56 * v4 > a3 )
    {
      v31 = *(_QWORD *)(a3 + 48);
      v30 = *(_OWORD *)(a3 + 32);
      v29 = *(_OWORD *)(a3 + 16);
      v28 = *(_OWORD *)a3;
      if ( v4 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x38u);
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v5 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          v6 = *(char **)a1;
          v7 = 56 * v3;
          *(_QWORD *)&v6[v7 + 48] = v31;
          *(_OWORD *)&v6[v7 + 32] = v30;
          *(_OWORD *)&v6[v7 + 16] = v29;
          *(_OWORD *)&v6[v7] = v28;
          v5 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v8 = 56 * v5;
          v9 = a2 - v5;
          do
          {
            v10 = *(char **)a1;
            *(_QWORD *)&v10[v8 + 48] = v31;
            *(_OWORD *)&v10[v8 + 32] = v30;
            *(_OWORD *)&v10[v8 + 16] = v29;
            *(_OWORD *)&v10[v8] = v28;
            v11 = *(char **)a1;
            *(_OWORD *)&v11[v8 + 72] = v29;
            *(_OWORD *)&v11[v8 + 88] = v30;
            *(_QWORD *)&v11[v8 + 104] = v31;
            *(_OWORD *)&v11[v8 + 56] = v28;
            v8 += 112;
            v9 -= 2LL;
          }
          while ( v9 );
        }
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v13 = a3;
        v14 = qvector_reserve(a1, *(void **)a1, a2, 0x38u);
        a3 = v13;
        *(_QWORD *)a1 = v14;
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v15 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          v16 = *(char **)a1;
          v17 = 56 * v3;
          *(_QWORD *)&v16[v17 + 48] = *(_QWORD *)(a3 + 48);
          v18 = *(_OWORD *)a3;
          v19 = *(_OWORD *)(a3 + 16);
          *(_OWORD *)&v16[v17 + 32] = *(_OWORD *)(a3 + 32);
          *(_OWORD *)&v16[v17 + 16] = v19;
          *(_OWORD *)&v16[v17] = v18;
          v15 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v20 = 56 * v15;
          v21 = a2 - v15;
          do
          {
            v22 = *(char **)a1;
            *(_QWORD *)&v22[v20 + 48] = *(_QWORD *)(a3 + 48);
            v23 = *(_OWORD *)a3;
            v24 = *(_OWORD *)(a3 + 16);
            *(_OWORD *)&v22[v20 + 32] = *(_OWORD *)(a3 + 32);
            *(_OWORD *)&v22[v20 + 16] = v24;
            *(_OWORD *)&v22[v20] = v23;
            v25 = *(char **)a1;
            v26 = *(_OWORD *)a3;
            v27 = *(_OWORD *)(a3 + 32);
            *(_OWORD *)&v25[v20 + 72] = *(_OWORD *)(a3 + 16);
            *(_OWORD *)&v25[v20 + 88] = v27;
            *(_QWORD *)&v25[v20 + 104] = *(_QWORD *)(a3 + 48);
            *(_OWORD *)&v25[v20 + 56] = v26;
            v20 += 112;
            v21 -= 2LL;
          }
          while ( v21 );
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __stack_chk_guard;
}

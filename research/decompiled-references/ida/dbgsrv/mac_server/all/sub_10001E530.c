/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E530
// Address: 0x000000010001E530

//----- (000000010001E530) ----------------------------------------------------
__int64 __fastcall sub_10001E530(__int64 a1, unsigned __int64 a2, _OWORD *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // rdx
  char *v11; // rdx
  _OWORD *v13; // r15
  void *v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // r8
  __int128 v22; // xmm0
  char *v23; // r8
  __int128 v24; // xmm0
  __int128 v25; // [rsp+0h] [rbp-40h]
  __int128 v26; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 >= a2 )
      return __stack_chk_guard;
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= (unsigned __int64)a3 && *(_QWORD *)a1 + 32 * v4 > (unsigned __int64)a3 )
    {
      v26 = a3[1];
      v25 = *a3;
      if ( v4 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v5 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          v6 = *(char **)a1;
          v7 = 32 * v3;
          *(_OWORD *)&v6[v7 + 16] = v26;
          *(_OWORD *)&v6[v7] = v25;
          v5 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v8 = a2 - v5;
          v9 = 32 * v5;
          do
          {
            v10 = *(char **)a1;
            *(_OWORD *)&v10[v9 + 16] = v26;
            *(_OWORD *)&v10[v9] = v25;
            v11 = *(char **)a1;
            *(_OWORD *)&v11[v9 + 48] = v26;
            *(_OWORD *)&v11[v9 + 32] = v25;
            v9 += 64;
            v8 -= 2LL;
          }
          while ( v8 );
        }
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v13 = a3;
        v14 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
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
          v17 = 32 * v3;
          v18 = *a3;
          *(_OWORD *)&v16[v17 + 16] = a3[1];
          *(_OWORD *)&v16[v17] = v18;
          v15 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v19 = a2 - v15;
          v20 = 32 * v15;
          do
          {
            v21 = *(char **)a1;
            v22 = *a3;
            *(_OWORD *)&v21[v20 + 16] = a3[1];
            *(_OWORD *)&v21[v20] = v22;
            v23 = *(char **)a1;
            v24 = *a3;
            *(_OWORD *)&v23[v20 + 48] = a3[1];
            *(_OWORD *)&v23[v20 + 32] = v24;
            v20 += 64;
            v19 -= 2LL;
          }
          while ( v19 );
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __stack_chk_guard;
}

void __fastcall sub_179EA70(__int64 *a1, int a2, const __m128i *a3)
{
  __int32 v3; // eax
  __int64 v4; // r15
  __m128i v5; // xmm0
  int *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rbp
  _DWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // rsi
  _QWORD *v21; // r14
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  char v26; // [rsp+Fh] [rbp-89h]
  int v27; // [rsp+10h] [rbp-88h]
  unsigned __int64 v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+28h] [rbp-70h] BYREF
  int v30; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v31[28]; // [rsp+34h] [rbp-64h]
  __int32 v32; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+54h] [rbp-44h]

  v3 = a3[1].m128i_i32[0];
  v4 = *a1;
  v5 = _mm_loadu_si128(a3);
  v30 = a2;
  v6 = &v30;
  v7 = *(_QWORD *)v4;
  v8 = *(unsigned int *)(v4 + 12);
  v32 = v3;
  v9 = *(unsigned int *)(v4 + 8);
  v10 = a3->m128i_u64[1];
  a3->m128i_i64[0] = 0;
  *(_OWORD *)v31 = 0;
  v11 = v9 + 1;
  *(__m128i *)&v31[12] = v5;
  v33 = 0;
  v12 = v7 + 40 * v9;
  if ( v11 > v8 )
  {
    v28 = -1;
    v26 = 0;
    if ( v7 <= (unsigned __int64)&v30 && v12 > (unsigned __int64)&v30 )
    {
      v26 = 1;
      v28 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)&v31[-v7 - 4] >> 3);
    }
    v15 = sub_2237400(v4, v4 + 16, v11, 40, &v29);
    v16 = *(_DWORD **)v4;
    v17 = (_QWORD *)(*(_QWORD *)v4 + 40LL * *(unsigned int *)(v4 + 8));
    if ( *(_QWORD **)v4 != v17 )
    {
      v18 = v15;
      do
      {
        v19 = *v16;
        v16 += 10;
        v18 += 40;
        *(_DWORD *)(v18 - 40) = v19;
        v20 = *(_QWORD *)(v16 - 9);
        *(_QWORD *)(v18 - 16) = 0;
        *(_QWORD *)(v18 - 36) = v20;
        LODWORD(v20) = *(v16 - 2);
        *(_QWORD *)(v18 - 24) = 0;
        *(_DWORD *)(v18 - 8) = v20;
        *(_QWORD *)(v18 - 16) = *((_QWORD *)v16 - 2);
        *(_QWORD *)(v18 - 24) = *((_QWORD *)v16 - 3);
        *((_QWORD *)v16 - 3) = 0;
      }
      while ( v17 != (_QWORD *)v16 );
      v21 = *(_QWORD **)v4;
      v17 = (_QWORD *)(*(_QWORD *)v4 + 40LL * *(unsigned int *)(v4 + 8));
      if ( *(_QWORD **)v4 != v17 )
      {
        do
        {
          v17 -= 5;
          v22 = v17[2];
          if ( v22 )
          {
            v23 = v17[3];
            if ( v23 )
              sub_1580C40(v23, v22);
          }
        }
        while ( v21 != v17 );
        v17 = *(_QWORD **)v4;
      }
    }
    v24 = v29;
    if ( (_QWORD *)(v4 + 16) != v17 )
    {
      v27 = v29;
      free(v17);
      v24 = v27;
    }
    *(_DWORD *)(v4 + 12) = v24;
    v25 = *(unsigned int *)(v4 + 8);
    *(_QWORD *)v4 = v15;
    v12 = v15 + 40 * v25;
    if ( v26 )
      v6 = (int *)(v15 + 40 * v28);
  }
  *(_DWORD *)v12 = *v6;
  v13 = *(_QWORD *)(v6 + 1);
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 4) = v13;
  LODWORD(v13) = v6[8];
  *(_QWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 32) = v13;
  *(_QWORD *)(v12 + 24) = *((_QWORD *)v6 + 3);
  *(_QWORD *)(v12 + 16) = *((_QWORD *)v6 + 2);
  *((_QWORD *)v6 + 2) = 0;
  v14 = *(_QWORD *)&v31[12];
  ++*(_DWORD *)(v4 + 8);
  if ( v10 )
  {
    if ( v14 )
      sub_1580C40(v10, v14);
  }
}

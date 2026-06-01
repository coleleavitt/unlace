__int64 __fastcall sub_2131D40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r13
  __m128i v13; // xmm0
  bool v14; // cc
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // rax
  void *v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __m128 *v26; // r13
  __int64 v27; // rax
  __m128i v28; // xmm2
  int v29; // edx
  __int64 v30; // rdi
  unsigned int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __m128i v35; // xmm1
  void *v36; // rdi
  __int64 v37; // rsi
  __m128i v38; // xmm3
  unsigned int v39; // eax
  __int64 v40; // rax
  __m128i v42; // xmm4
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  char *v45; // r13
  __int64 v46; // [rsp+8h] [rbp-90h]
  __int64 v47; // [rsp+10h] [rbp-88h]
  __int64 v48; // [rsp+18h] [rbp-80h]
  __m128 *v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+28h] [rbp-70h]
  __m128 v51; // [rsp+30h] [rbp-68h] BYREF
  void *v52; // [rsp+48h] [rbp-50h]
  unsigned int v53; // [rsp+50h] [rbp-48h]

  v2 = sub_2153C00(a1);
  v50 = sub_2124B50(v2);
  v48 = a1 + 48;
LABEL_2:
  v5 = *(int **)(a1 + 48);
  v6 = *v5;
  if ( *v5 != 9 )
  {
    while ( v6 )
    {
      v7 = *(unsigned int *)(a1 + 56);
      *(_BYTE *)(a1 + 177) = 0;
      v8 = v5 + 10;
      v9 = v7;
      v10 = 40 * v7;
      v11 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v7 - 40) >> 3);
      v12 = v11;
      if ( v10 > 0x28 )
      {
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)(v8 + 2));
          v14 = *(v8 - 2) <= 0x40u;
          *(v8 - 10) = *v8;
          *((__m128i *)v8 - 2) = v13;
          if ( !v14 )
          {
            v15 = *((void **)v8 - 2);
            if ( v15 )
              operator delete[](v15);
          }
          v16 = *((_QWORD *)v8 + 3);
          v8 += 10;
          *((_QWORD *)v8 - 7) = v16;
          LODWORD(v16) = *(v8 - 2);
          *(v8 - 2) = 0;
          *(v8 - 12) = v16;
          --v12;
        }
        while ( v12 );
        v9 = *(_DWORD *)(a1 + 56);
        v5 = *(int **)(a1 + 48);
      }
      v17 = (unsigned int)(v9 - 1);
      *(_DWORD *)(a1 + 56) = v17;
      v18 = &v5[10 * v17];
      if ( (unsigned int)v18[8] > 0x40 )
      {
        v19 = *((void **)v18 + 3);
        if ( v19 )
          operator delete[](v19);
      }
      if ( *(_DWORD *)(a1 + 56) )
        goto LABEL_2;
      sub_2127580(&v51, v48, v11, (unsigned int)v5, v3, v4);
      v20 = *(unsigned int *)(a1 + 56);
      v21 = *(_QWORD *)(a1 + 48);
      v22 = 5 * v20;
      v23 = v20 + 1;
      v24 = 8 * v22;
      v25 = v21 + v24;
      if ( v21 == v21 + v24 )
      {
        if ( v23 > *(unsigned int *)(a1 + 60) )
        {
          sub_2131530(v48, v23);
          v25 = *(_QWORD *)(a1 + 48) + 40LL * *(unsigned int *)(a1 + 56);
        }
        v42 = _mm_loadu_si128((const __m128i *)&v51.m128_u16[4]);
        *(_DWORD *)v25 = v51.m128_i32[0];
        v43 = v53;
        *(__m128i *)(v25 + 8) = v42;
        *(_DWORD *)(v25 + 32) = v43;
        if ( v43 > 0x40 )
          sub_2205510(v25 + 24);
        else
          *(_QWORD *)(v25 + 24) = v52;
        ++*(_DWORD *)(a1 + 56);
      }
      else
      {
        v49 = &v51;
        v26 = &v51;
        if ( v23 > *(unsigned int *)(a1 + 60) )
        {
          if ( v21 > (unsigned __int64)&v51 || v25 <= (unsigned __int64)&v51 )
          {
            v26 = &v51;
            sub_2131530(v48, v23);
            v21 = *(_QWORD *)(a1 + 48);
            v24 = 40LL * *(unsigned int *)(a1 + 56);
            v25 = v21 + v24;
          }
          else
          {
            v45 = (char *)&v51 - v21;
            sub_2131530(v48, v23);
            v21 = *(_QWORD *)(a1 + 48);
            v26 = (__m128 *)&v45[v21];
            v24 = 40LL * *(unsigned int *)(a1 + 56);
            v49 = v26;
            v25 = v21 + v24;
          }
        }
        v27 = v21 + v24 - 40;
        v28 = _mm_loadu_si128((const __m128i *)(v27 + 8));
        *(_DWORD *)v25 = *(_DWORD *)v27;
        v29 = *(_DWORD *)(v27 + 32);
        *(__m128i *)(v25 + 8) = v28;
        *(_DWORD *)(v25 + 32) = v29;
        *(_QWORD *)(v25 + 24) = *(_QWORD *)(v27 + 24);
        v30 = *(_QWORD *)(a1 + 48);
        *(_DWORD *)(v27 + 32) = 0;
        v31 = *(_DWORD *)(a1 + 56);
        v32 = v30 + 40LL * v31;
        v33 = v32 - 40;
        v34 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v32 - 40 - v21) >> 3);
        if ( (__int64)(v32 - 40 - v21) > 0 )
        {
          do
          {
            v33 -= 40;
            v32 -= 40;
            v35 = _mm_loadu_si128((const __m128i *)(v33 + 8));
            v14 = *(_DWORD *)(v32 + 32) <= 0x40u;
            *(_DWORD *)v32 = *(_DWORD *)v33;
            *(__m128i *)(v32 + 8) = v35;
            if ( !v14 )
            {
              v36 = *(void **)(v32 + 24);
              if ( v36 )
              {
                v47 = v32;
                v46 = v33;
                operator delete[](v36);
                v32 = v47;
                v33 = v46;
              }
            }
            *(_QWORD *)(v32 + 24) = *(_QWORD *)(v33 + 24);
            *(_DWORD *)(v32 + 32) = *(_DWORD *)(v33 + 32);
            *(_DWORD *)(v33 + 32) = 0;
            --v34;
          }
          while ( v34 );
          v31 = *(_DWORD *)(a1 + 56);
          v30 = *(_QWORD *)(a1 + 48);
        }
        v37 = v31 + 1;
        *(_DWORD *)(a1 + 56) = v37;
        if ( (unsigned __int64)v49 >= v21 && v30 + 40 * v37 > (unsigned __int64)v49 )
          v26 = (__m128 *)((char *)v26 + 40);
        v38 = _mm_loadu_si128((const __m128i *)&v26->m128_u16[4]);
        v14 = *(_DWORD *)(v21 + 32) <= 0x40u;
        *(_DWORD *)v21 = v26->m128_i32[0];
        *(__m128i *)(v21 + 8) = v38;
        if ( v14 && (v39 = v26[2].m128_u32[0], v39 <= 0x40) )
        {
          v44 = v26[1].m128_u64[1];
          *(_DWORD *)(v21 + 32) = v39;
          *(_QWORD *)(v21 + 24) = v44;
        }
        else
        {
          sub_22056A0(v21 + 24, &v26[1].m128_u16[4]);
        }
      }
      if ( v53 <= 0x40 || !v52 )
        goto LABEL_2;
      operator delete[](v52);
      v5 = *(int **)(a1 + 48);
      v6 = *v5;
      if ( *v5 == 9 )
        break;
    }
  }
  v40 = sub_2153C00(a1);
  sub_2124B50(v40);
  return v50;
}

void __fastcall sub_8793F0(__int64 a1, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // r14
  __int64 v6; // r12
  int v7; // r8d
  int v8; // esi
  __m128i *v9; // rbx
  unsigned int v10; // r9d
  size_t v11; // r15
  __m128i *v12; // r12
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // esi
  __int64 v22; // r9
  __m128i *v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // rcx
  int v26; // edx
  _DWORD *v27; // r13
  _DWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int32 v33; // eax
  int v34; // ecx
  int v35; // eax
  __m128i *v36; // rax
  int v37; // ecx
  __m128i *v38; // rdx
  const __m128i *v39; // r13
  __m128i *v40; // r8
  __int64 v41; // rax
  __m128i *v42; // rdx
  __m128i *v43; // rax
  __m128i v44; // xmm0
  __m128i *v45; // rax
  __int64 v46; // rdi
  unsigned int v47; // ebx
  unsigned int i; // eax
  unsigned int v49; // [rsp+0h] [rbp-48h]
  int v50; // [rsp+8h] [rbp-40h]

  if ( a2 != a3 )
  {
    v4 = a2;
    if ( a2 <= a3 )
    {
      v34 = a3;
      a3 = a2;
      v4 = v34;
    }
    v5 = *(_DWORD **)(a1 + 40);
    *((_QWORD *)v5 + 3) = 0xFFFFFFFF00000000LL;
    v6 = *(unsigned int *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(_DWORD *)(a1 + 20);
    v5[4] = a3;
    v5[5] = v4;
    if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + v8)) )
    {
      v11 = 16LL * (unsigned int)(2 * v6);
      v36 = (__m128i *)sub_186B270(v11);
      v37 = 2 * v6;
      v9 = v36;
      if ( 2 * (_DWORD)v6 )
      {
        v38 = &v36[2 * (v6 & 0x7FFFFFFF)];
        do
        {
          v36->m128i_i64[0] = 0;
          v36 += 2;
          v36[-1].m128i_i64[0] = 0;
        }
        while ( v38 != v36 );
      }
      v39 = *(const __m128i **)(a1 + 8);
      v10 = v37 - 1;
      v12 = &v9[v11 / 0x10];
      v40 = (__m128i *)&v39[*(unsigned int *)(a1 + 16)];
      if ( v39 != v40 )
      {
        do
        {
          while ( v39->m128i_i32[1] != 2 )
          {
            if ( v40 == ++v39 )
              goto LABEL_43;
          }
          v41 = 16LL * (v39->m128i_i32[0] & v10);
          v42 = &v9[(unsigned __int64)v41 / 0x10];
          if ( v11 == v41 )
          {
LABEL_52:
            if ( v9 == v42 )
            {
LABEL_59:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v43 = v9;
            while ( v43->m128i_i32[1] )
            {
              if ( v42 == ++v43 )
                goto LABEL_59;
            }
          }
          else
          {
            v43 = &v9[(unsigned __int64)v41 / 0x10];
            while ( v43->m128i_i32[1] )
            {
              if ( v12 == ++v43 )
                goto LABEL_52;
            }
          }
          v44 = _mm_loadu_si128(v39++);
          *v43 = v44;
        }
        while ( v40 != v39 );
LABEL_43:
        v40 = *(__m128i **)(a1 + 8);
      }
      if ( v40 )
      {
        v50 = v37;
        v49 = v37 - 1;
        sub_186B220(v40);
        v37 = v50;
        v10 = v49;
      }
      v4 = v5[5];
      a3 = v5[4];
      *(_QWORD *)(a1 + 8) = v9;
      v7 = 0;
      *(_DWORD *)(a1 + 16) = v37;
      *(_DWORD *)(a1 + 24) = 0;
    }
    else
    {
      v9 = *(__m128i **)(a1 + 8);
      v10 = v6 - 1;
      v11 = 16 * v6;
      v12 = &v9[v6];
    }
    v13 = a3 - v4;
    v14 = v4 - a3;
    v15 = (v4 + v4 - a3) ^ ((a3 - v4) << 8);
    v16 = (v14 - v15) ^ (v15 >> 13);
    v17 = (v13 - v15 - v16) ^ (v16 >> 12);
    v18 = (v15 - v16 - v17) ^ (v17 << 16);
    v19 = (v16 - v17 - v18) ^ (v18 >> 5);
    v20 = (v19 >> 3) ^ (v17 - v18 - v19);
    v21 = (v19 - v20 - ((v18 - v19 - v20) ^ (v20 << 10))) ^ (((v18 - v19 - v20) ^ (v20 << 10)) >> 15);
    v22 = 16LL * (v21 & v10);
    v23 = &v9[(unsigned __int64)v22 / 0x10];
    if ( v22 != v11 )
    {
      v24 = &v9[(unsigned __int64)v22 / 0x10];
      v25 = nullptr;
      while ( 1 )
      {
        v26 = v24->m128i_i32[1];
        if ( v26 == 2 )
        {
          if ( v24->m128i_i32[0] == v21 )
          {
            v27 = (_DWORD *)v24->m128i_i64[1];
            if ( *((_QWORD *)v27 + 2) == *((_QWORD *)v5 + 2) )
              goto LABEL_14;
          }
        }
        else
        {
          if ( !v26 )
          {
            if ( v25 )
              goto LABEL_29;
            v25 = v24;
            goto LABEL_30;
          }
          v25 = v24;
        }
        if ( ++v24 == v12 )
          goto LABEL_23;
      }
    }
    v25 = nullptr;
    while ( 1 )
    {
LABEL_23:
      if ( v23 == v9 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v33 = v9->m128i_i32[1];
      if ( v33 == 2 )
      {
        if ( v9->m128i_i32[0] == v21 )
        {
          v27 = (_DWORD *)v9->m128i_i64[1];
          if ( *((_QWORD *)v27 + 2) == *((_QWORD *)v5 + 2) )
            goto LABEL_14;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v25 )
LABEL_29:
            *(_DWORD *)(a1 + 24) = v7 - 1;
          else
            v25 = v9;
LABEL_30:
          v25->m128i_i32[0] = v21;
          v35 = *(_DWORD *)(a1 + 20);
          v27 = v5;
          v25->m128i_i64[1] = (__int64)v5;
          v25->m128i_i32[1] = 2;
          *(_DWORD *)(a1 + 20) = v35 + 1;
LABEL_14:
          v28 = *(_DWORD **)(a1 + 32);
          v29 = v27[6] + 1;
          v27[6] = v29;
          if ( v28 )
          {
            if ( v28 != v27 )
            {
              v30 = *(_QWORD *)v27;
              v31 = *((_QWORD **)v27 + 1);
              *v31 = *(_QWORD *)v27;
              *(_QWORD *)(v30 + 8) = v31;
              **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL) = v27;
              *((_QWORD *)v27 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
              v32 = *(_QWORD *)(a1 + 32);
              *(_QWORD *)v27 = v32;
              *(_QWORD *)(v32 + 8) = v27;
              *(_QWORD *)(a1 + 32) = v27;
            }
            if ( v5 != v27 )
            {
LABEL_18:
              if ( 2 * *(_DWORD *)(a1 + 52) < v29 )
                sub_879240((__int64 *)a1);
              return;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v27;
            *(__m128i *)v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
            if ( v5 != v27 )
              goto LABEL_18;
          }
          v45 = (__m128i *)sub_186B270(0x20u);
          v46 = *(_QWORD *)a1;
          v45[1].m128i_i64[0] = -1;
          v45[1].m128i_i64[1] = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(a1 + 40) = v45;
          *v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
          v47 = *(_DWORD *)(a1 + 60) + 1;
          *(_DWORD *)(a1 + 60) = v47;
          if ( *(_DWORD *)(sub_7E4EB0(v46) + 92) >= v47 )
          {
            v29 = v5[6];
          }
          else
          {
            *(_DWORD *)(a1 + 60) = 0;
            i = *(_DWORD *)(a1 + 48);
            if ( i < *(_DWORD *)(a1 + 20) )
            {
              sub_879240((__int64 *)a1);
              for ( i = *(_DWORD *)(a1 + 48); i < *(_DWORD *)(a1 + 20); i = *(_DWORD *)(a1 + 48) )
                sub_878D20(a1, *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL));
            }
            *(_DWORD *)(a1 + 48) = 110 * i / 0x64 + 1;
            v29 = v27[6];
          }
          goto LABEL_18;
        }
        v25 = v9;
      }
      ++v9;
    }
  }
}


__int64 __fastcall sub_4B9120(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rbx
  __int64 *v6; // r13
  _DWORD *v7; // rax
  __int16 v9; // ax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // r9
  int v17; // edi
  unsigned int v18; // r10d
  __m128i *v19; // r14
  __int64 v20; // r15
  int v21; // esi
  __int64 v22; // r10
  __m128i *v23; // r11
  __int64 *m128i_i64; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  int v30; // edx
  __m128i *v31; // rax
  __m128i *v32; // r11
  __m128i *v33; // r9
  _QWORD *v34; // rsi
  const __m128i *v35; // rbx
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __m128i *v38; // rsi
  __m128i *v39; // rdx
  size_t v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  unsigned int v42; // [rsp+10h] [rbp-68h]
  __int64 v43; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v44[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1;
  v6 = (__int64 *)a1[18];
  if ( !*(_WORD *)(a2 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v7 )
    {
      if ( *v7 == 5 && !v7[1] )
      {
        v10 = *v6;
        v11 = sub_15D1F10(a2);
        v12 = *((unsigned int *)v6 + 34);
        *((_DWORD *)v6 + 34) = v12 + 1;
        v13 = sub_15DB5C0(v10, v12, v11);
        v14 = v6[20];
        v15 = v13;
        v16 = *(unsigned int *)(v14 + 8);
        v17 = *(_DWORD *)(v14 + 16);
        v42 = 2 * v16;
        if ( 3 * (int)v16 < (unsigned int)(4 * (v17 + *(_DWORD *)(v14 + 12))) )
        {
          v41 = v6[20];
          v40 = 16LL * v42;
          v31 = (__m128i *)sub_186B270(v40);
          v14 = v41;
          v19 = v31;
          v32 = &v31[v40 / 0x10];
          if ( v42 )
          {
            if ( (v40 & 0x10) == 0 || (*v31 = 0, ++v31, v32 != v31) )
            {
              do
              {
                *v31 = 0;
                v31 += 2;
                v31[-1] = 0;
              }
              while ( v32 != v31 );
            }
          }
          v20 = (__int64)v32;
          v33 = (__m128i *)(*(_QWORD *)v41 + 16LL * *(unsigned int *)(v41 + 8));
          v18 = v42 - 1;
          if ( *(__m128i **)v41 != v33 )
          {
            v34 = v5;
            v35 = *(const __m128i **)v41;
            v36 = v34;
            do
            {
              if ( v35->m128i_i64[0] > 1uLL )
              {
                v37 = 16LL * (*(_DWORD *)(v35->m128i_i64[0] + 12) & v18);
                v38 = &v19[(unsigned __int64)v37 / 0x10];
                if ( v40 == v37 )
                {
LABEL_53:
                  if ( v19 == v38 )
                  {
LABEL_65:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v39 = v19;
                  while ( v39->m128i_i64[0] )
                  {
                    if ( v38 == ++v39 )
                      goto LABEL_65;
                  }
                }
                else
                {
                  v39 = &v19[(unsigned __int64)v37 / 0x10];
                  while ( v39->m128i_i64[0] )
                  {
                    if ( v32 == ++v39 )
                      goto LABEL_53;
                  }
                }
                *v39 = _mm_loadu_si128(v35);
              }
              ++v35;
            }
            while ( v33 != v35 );
            v33 = *(__m128i **)v41;
            v5 = v36;
            v20 = (__int64)v32;
          }
          if ( v33 )
          {
            sub_186B220(v33);
            v18 = v42 - 1;
            v14 = v41;
          }
          *(_QWORD *)v14 = v19;
          v17 = 0;
          *(_DWORD *)(v14 + 16) = 0;
          *(_DWORD *)(v14 + 8) = v42;
        }
        else
        {
          v18 = v16 - 1;
          v19 = *(__m128i **)v14;
          v40 = 16 * v16;
          v20 = *(_QWORD *)v14 + 16 * v16;
        }
        v21 = *(_DWORD *)(v15 + 12);
        v22 = 16LL * (v21 & v18);
        v23 = &v19[(unsigned __int64)v22 / 0x10];
        if ( v40 != v22 )
        {
          m128i_i64 = v19[(unsigned __int64)v22 / 0x10].m128i_i64;
          v25 = nullptr;
          while ( 1 )
          {
            v26 = *m128i_i64;
            if ( (unsigned __int64)*m128i_i64 > 1 )
            {
              if ( *(_DWORD *)(v26 + 12) == v21 && v15 == v26 )
              {
                *m128i_i64 = v15;
                m128i_i64[1] = a2;
                goto LABEL_35;
              }
            }
            else
            {
              if ( !v26 )
              {
                if ( v25 )
                  goto LABEL_63;
                v25 = m128i_i64;
                goto LABEL_64;
              }
              v25 = m128i_i64;
            }
            m128i_i64 += 2;
            if ( m128i_i64 == (__int64 *)v20 )
              goto LABEL_29;
          }
        }
        v25 = nullptr;
        while ( 1 )
        {
LABEL_29:
          if ( v23 == v19 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v27 = v19->m128i_i64[0];
          if ( v19->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v27 + 12) == v21 && v15 == v27 )
            {
              v19->m128i_i64[0] = v15;
              v19->m128i_i64[1] = a2;
              goto LABEL_35;
            }
          }
          else
          {
            if ( !v27 )
            {
              if ( v25 )
LABEL_63:
                *(_DWORD *)(v14 + 16) = v17 - 1;
              else
                v25 = (__int64 *)v19;
LABEL_64:
              *v25 = v15;
              v25[1] = a2;
              ++*(_DWORD *)(v14 + 12);
LABEL_35:
              ++*(_DWORD *)(v15 + 8);
              v44[0] = v15;
              sub_4B2920(v6 + 19, v44);
              sub_15D0A90(v6 + 10, a2, 1);
              sub_15D0A90(v6 + 3, v15, 1);
              ++*(_DWORD *)(v15 + 8);
              v44[0] = v15;
              sub_4B2920(v5 + 7, v44);
              if ( a2 != v15 )
              {
                v29 = v5[5];
                if ( v29 )
                {
                  v30 = *(_DWORD *)(v29 - 4);
                  if ( v30 )
                    *(_BYTE *)(v29 + 16LL * (unsigned int)(v30 - 1) + 8) |= 2u;
                }
              }
              v44[0] = 0;
              sub_4B2860(v5 + 11, v44);
              return 1;
            }
            v25 = (__int64 *)v19;
          }
          ++v19;
        }
      }
    }
  }
  if ( !a3 || !(unsigned __int8)sub_4B7CF0(a1[18], a2) )
  {
    ++*(_DWORD *)(a2 + 8);
    v44[0] = a2;
    sub_4B2920(a1 + 7, v44);
    v44[0] = 0;
    sub_4B2860(a1 + 11, v44);
    return 1;
  }
  v9 = *(_WORD *)(a2 + 4);
  if ( v9 == 1 )
  {
    sub_4B8F90(a1, a2);
    return 1;
  }
  if ( v9 != 2 )
  {
    if ( v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
    if ( !*(_DWORD *)(a2 + 24) )
    {
      v28 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      sub_4B19A0(a1[18]);
      ++*(_DWORD *)(a2 + 8);
      v44[0] = a2;
      sub_4B2920(a1 + 7, v44);
      v43 = 0;
      sub_4B2860(a1 + 11, &v43);
      sub_4B1840(a2, v28);
      return 1;
    }
  }
  sub_39B170((__int64)a1, a2, 0, 0, a3 - (a3 != 3));
  return 0;
}


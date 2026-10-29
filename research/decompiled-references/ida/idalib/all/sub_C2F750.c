// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_C2F750(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __m128i *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r12
  __m128i *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __m128i *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm3
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i *v22; // r15
  _QWORD *v23; // rsi
  int v24; // ebp
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // rax
  __int64 *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rdx
  bool v31; // al
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  _QWORD *v35; // rdx
  __int64 result; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __m128i v45; // xmm1
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  __m128i v49; // xmm5
  __int32 v50; // eax
  __m128i v51; // xmm6
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  _QWORD *v54; // rdx
  unsigned int v55; // [rsp+24h] [rbp-D4h]
  __m128i *v56; // [rsp+28h] [rbp-D0h]
  __int64 *v57; // [rsp+30h] [rbp-C8h]
  int v58; // [rsp+38h] [rbp-C0h]
  int v59; // [rsp+3Ch] [rbp-BCh]
  _QWORD v60[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v61; // [rsp+50h] [rbp-A8h]
  __int64 v62; // [rsp+58h] [rbp-A0h]
  _QWORD v63[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v64; // [rsp+70h] [rbp-88h]
  __int64 v65; // [rsp+78h] [rbp-80h]
  _QWORD v66[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v67; // [rsp+90h] [rbp-68h]
  __int64 v68; // [rsp+98h] [rbp-60h]
  __m128i v69; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v70[4]; // [rsp+B0h] [rbp-48h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__m128i **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  v11 = 40LL * v10;
  *(_QWORD *)a1 = sub_22300B0(v11, 8, 64, a4, a5, a6);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 40 * v8;
    v13 = (__m128i *)((char *)v9 + 40 * v8);
    v14 = sub_A4F710();
    v69.m128i_i64[1] = v15;
    v16 = *(unsigned int *)(a1 + 16);
    v69.m128i_i64[0] = v14;
    v17 = *(__m128i **)a1;
    v18 = *(_QWORD *)a1 + 40 * v16;
    if ( *(_QWORD *)a1 != v18 )
    {
      do
      {
        v19 = _mm_load_si128(&v69);
        v17 = (__m128i *)((char *)v17 + 40);
        v70[0] = 0u;
        *(__m128i *)((char *)v17 - 40) = v19;
        *(__m128i *)((char *)v17 - 24) = _mm_load_si128(v70);
      }
      while ( (__m128i *)v18 != v17 );
    }
    v61 = nullptr;
    v60[0] = sub_A4F710();
    v60[1] = v20;
    v62 = 0;
    v64 = nullptr;
    v63[0] = sub_A4F720(v11, 8);
    v63[1] = v21;
    v65 = 0;
    if ( v13 != v9 )
    {
      v22 = v9;
      while ( 1 )
      {
LABEL_8:
        if ( sub_A4F650(v22, v60) )
        {
          v32 = v22[1].m128i_i64[1];
          if ( v32 == v62 )
          {
            v33 = (_QWORD *)v22[1].m128i_i64[0];
            v34 = &v33[v32];
            if ( v33 == v34 )
              goto LABEL_27;
            v35 = v61;
            while ( *v33 == *v35 )
            {
              ++v33;
              ++v35;
              if ( v34 == v33 )
                goto LABEL_27;
            }
          }
        }
        v23 = v63;
        if ( !sub_A4F650(v22, v63) )
          goto LABEL_10;
        v37 = v22[1].m128i_i64[1];
        if ( v37 != v65 )
          goto LABEL_10;
        v38 = (_QWORD *)v22[1].m128i_i64[0];
        v23 = &v38[v37];
        if ( v38 == v23 )
          goto LABEL_27;
        if ( *v64 == *v38 )
        {
          v39 = v38 + 1;
          v40 = v64 + 1;
          if ( v23 != v39 )
          {
            while ( *v39 == *v40 )
            {
              ++v39;
              ++v40;
              if ( v23 == v39 )
              {
                v22 = (__m128i *)((char *)v22 + 40);
                if ( v13 != v22 )
                  goto LABEL_8;
                return operator delete(v9, v12, 8);
              }
            }
            goto LABEL_10;
          }
LABEL_27:
          v22 = (__m128i *)((char *)v22 + 40);
          if ( v13 == v22 )
            return operator delete(v9, v12, 8);
        }
        else
        {
LABEL_10:
          v24 = *(_DWORD *)(a1 + 16);
          if ( !v24 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v22);
            *(__m128i *)&word_10 = _mm_loadu_si128(v22 + 1);
            BUG();
          }
          v56 = *(__m128i **)a1;
          v25 = sub_A4F710();
          v67 = nullptr;
          v66[0] = v25;
          v66[1] = v26;
          v68 = 0;
          v27.m128i_i64[0] = sub_A4F720(v22, v23);
          v70[0] = 0u;
          v69 = v27;
          v58 = 1;
          v59 = v24 - 1;
          v55 = (v24 - 1) & sub_C2F3C0((unsigned __int64 *)v22, (__int64)v22[1].m128i_i64);
          v57 = nullptr;
          while ( 1 )
          {
            v28 = &v56->m128i_i64[5 * v55];
            if ( sub_A4F650(v22, v28) )
            {
              v29 = v22[1].m128i_i64[1];
              if ( v29 == v28[3] )
              {
                v46 = (_QWORD *)v22[1].m128i_i64[0];
                v47 = &v46[v29];
                if ( v46 == v47 )
                  goto LABEL_46;
                v48 = (_QWORD *)v28[2];
                if ( *v48 == *v46 )
                  break;
              }
            }
LABEL_14:
            if ( sub_A4F650(v28, v66) )
            {
              v30 = v28[3];
              if ( v30 == v68 )
              {
                v52 = (_QWORD *)v28[2];
                v53 = &v52[v30];
                if ( v52 == v53 )
                  goto LABEL_53;
                v54 = v67;
                if ( *v67 == *v52 )
                {
                  while ( 1 )
                  {
                    ++v52;
                    ++v54;
                    if ( v53 == v52 )
                      break;
                    if ( *v52 != *v54 )
                      goto LABEL_16;
                  }
LABEL_53:
                  if ( v57 )
                    v28 = v57;
                  goto LABEL_46;
                }
              }
            }
LABEL_16:
            v31 = sub_C0FAA0(v28, &v69);
            if ( !v57 )
            {
              if ( !v31 )
                v28 = nullptr;
              v57 = v28;
            }
            v55 = v59 & (v58 + v55);
            ++v58;
          }
          while ( 1 )
          {
            ++v46;
            ++v48;
            if ( v47 == v46 )
              break;
            if ( *v46 != *v48 )
              goto LABEL_14;
          }
LABEL_46:
          v49 = _mm_loadu_si128(v22);
          v50 = v22[2].m128i_i32[0];
          v22 = (__m128i *)((char *)v22 + 40);
          *(__m128i *)v28 = v49;
          v51 = _mm_loadu_si128((__m128i *)((char *)v22 - 24));
          *((_DWORD *)v28 + 8) = v50;
          *((__m128i *)v28 + 1) = v51;
          ++*(_DWORD *)(a1 + 8);
          if ( v13 == v22 )
            return operator delete(v9, v12, 8);
        }
      }
    }
    return operator delete(v9, v12, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v41 = sub_A4F710();
    v69.m128i_i64[1] = v42;
    v43 = *(unsigned int *)(a1 + 16);
    v69.m128i_i64[0] = v41;
    result = *(_QWORD *)a1;
    v44 = *(_QWORD *)a1 + 40 * v43;
    if ( *(_QWORD *)a1 != v44 )
    {
      do
      {
        v45 = _mm_load_si128(&v69);
        result += 40;
        v70[0] = 0u;
        *(__m128i *)(result - 40) = v45;
        *(__m128i *)(result - 24) = _mm_load_si128(v70);
      }
      while ( v44 != result );
    }
  }
  return result;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_C0BA10(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __m128i *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdi
  __m128i *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __m128i *v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm3
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m128i *v21; // r15
  _QWORD *v22; // rsi
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // rax
  __int64 *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rdx
  bool v30; // al
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // rdx
  __int64 result; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __m128i v44; // xmm1
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // rdx
  __m128i v48; // xmm5
  __int32 v49; // eax
  __m128i v50; // xmm6
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  _QWORD *v53; // rdx
  unsigned int v54; // [rsp+24h] [rbp-D4h]
  __m128i *v55; // [rsp+28h] [rbp-D0h]
  __int64 *v56; // [rsp+30h] [rbp-C8h]
  int v57; // [rsp+38h] [rbp-C0h]
  int v58; // [rsp+3Ch] [rbp-BCh]
  _QWORD v59[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v60; // [rsp+50h] [rbp-A8h]
  __int64 v61; // [rsp+58h] [rbp-A0h]
  _QWORD v62[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v63; // [rsp+70h] [rbp-88h]
  __int64 v64; // [rsp+78h] [rbp-80h]
  _QWORD v65[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v66; // [rsp+90h] [rbp-68h]
  __int64 v67; // [rsp+98h] [rbp-60h]
  __m128i v68; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v69[4]; // [rsp+B0h] [rbp-48h] BYREF

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
  *(_QWORD *)a1 = sub_220C370(v11, 8, 64, a4, a5, a6);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = (__m128i *)((char *)v9 + 40 * v8);
    v13 = sub_A2B9D0();
    v68.m128i_i64[1] = v14;
    v15 = *(unsigned int *)(a1 + 16);
    v68.m128i_i64[0] = v13;
    v16 = *(__m128i **)a1;
    v17 = *(_QWORD *)a1 + 40 * v15;
    if ( *(_QWORD *)a1 != v17 )
    {
      do
      {
        v18 = _mm_load_si128(&v68);
        v16 = (__m128i *)((char *)v16 + 40);
        v69[0] = 0u;
        *(__m128i *)((char *)v16 - 40) = v18;
        *(__m128i *)((char *)v16 - 24) = _mm_load_si128(v69);
      }
      while ( (__m128i *)v17 != v16 );
    }
    v60 = nullptr;
    v59[0] = sub_A2B9D0();
    v59[1] = v19;
    v61 = 0;
    v63 = nullptr;
    v62[0] = sub_A2B9E0(v11, 8);
    v62[1] = v20;
    v64 = 0;
    if ( v12 != v9 )
    {
      v21 = v9;
      while ( 1 )
      {
LABEL_8:
        if ( sub_A2B910(v21, v59) )
        {
          v31 = v21[1].m128i_i64[1];
          if ( v31 == v61 )
          {
            v32 = (_QWORD *)v21[1].m128i_i64[0];
            v33 = &v32[v31];
            if ( v32 == v33 )
              goto LABEL_27;
            v34 = v60;
            while ( *v32 == *v34 )
            {
              ++v32;
              ++v34;
              if ( v33 == v32 )
                goto LABEL_27;
            }
          }
        }
        v22 = v62;
        if ( !sub_A2B910(v21, v62) )
          goto LABEL_10;
        v36 = v21[1].m128i_i64[1];
        if ( v36 != v64 )
          goto LABEL_10;
        v37 = (_QWORD *)v21[1].m128i_i64[0];
        v22 = &v37[v36];
        if ( v37 == v22 )
          goto LABEL_27;
        if ( *v63 == *v37 )
        {
          v38 = v37 + 1;
          v39 = v63 + 1;
          if ( v22 != v38 )
          {
            while ( *v38 == *v39 )
            {
              ++v38;
              ++v39;
              if ( v22 == v38 )
              {
                v21 = (__m128i *)((char *)v21 + 40);
                if ( v12 != v21 )
                  goto LABEL_8;
                return operator delete();
              }
            }
            goto LABEL_10;
          }
LABEL_27:
          v21 = (__m128i *)((char *)v21 + 40);
          if ( v12 == v21 )
            return operator delete();
        }
        else
        {
LABEL_10:
          v23 = *(_DWORD *)(a1 + 16);
          if ( !v23 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v21);
            *(__m128i *)&word_10 = _mm_loadu_si128(v21 + 1);
            BUG();
          }
          v55 = *(__m128i **)a1;
          v24 = sub_A2B9D0();
          v66 = nullptr;
          v65[0] = v24;
          v65[1] = v25;
          v67 = 0;
          v26.m128i_i64[0] = sub_A2B9E0(v21, v22);
          v69[0] = 0u;
          v68 = v26;
          v57 = 1;
          v58 = v23 - 1;
          v54 = (v23 - 1) & sub_C0B680((unsigned __int64 *)v21, (__int64)v21[1].m128i_i64);
          v56 = nullptr;
          while ( 1 )
          {
            v27 = &v55->m128i_i64[5 * v54];
            if ( sub_A2B910(v21, v27) )
            {
              v28 = v21[1].m128i_i64[1];
              if ( v28 == v27[3] )
              {
                v45 = (_QWORD *)v21[1].m128i_i64[0];
                v46 = &v45[v28];
                if ( v45 == v46 )
                  goto LABEL_46;
                v47 = (_QWORD *)v27[2];
                if ( *v47 == *v45 )
                  break;
              }
            }
LABEL_14:
            if ( sub_A2B910(v27, v65) )
            {
              v29 = v27[3];
              if ( v29 == v67 )
              {
                v51 = (_QWORD *)v27[2];
                v52 = &v51[v29];
                if ( v51 == v52 )
                  goto LABEL_53;
                v53 = v66;
                if ( *v66 == *v51 )
                {
                  while ( 1 )
                  {
                    ++v51;
                    ++v53;
                    if ( v52 == v51 )
                      break;
                    if ( *v51 != *v53 )
                      goto LABEL_16;
                  }
LABEL_53:
                  if ( v56 )
                    v27 = v56;
                  goto LABEL_46;
                }
              }
            }
LABEL_16:
            v30 = sub_BEBD60(v27, &v68);
            if ( !v56 )
            {
              if ( !v30 )
                v27 = nullptr;
              v56 = v27;
            }
            v54 = v58 & (v57 + v54);
            ++v57;
          }
          while ( 1 )
          {
            ++v45;
            ++v47;
            if ( v46 == v45 )
              break;
            if ( *v45 != *v47 )
              goto LABEL_14;
          }
LABEL_46:
          v48 = _mm_loadu_si128(v21);
          v49 = v21[2].m128i_i32[0];
          v21 = (__m128i *)((char *)v21 + 40);
          *(__m128i *)v27 = v48;
          v50 = _mm_loadu_si128((__m128i *)((char *)v21 - 24));
          *((_DWORD *)v27 + 8) = v49;
          *((__m128i *)v27 + 1) = v50;
          ++*(_DWORD *)(a1 + 8);
          if ( v12 == v21 )
            return operator delete();
        }
      }
    }
    return operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v40 = sub_A2B9D0();
    v68.m128i_i64[1] = v41;
    v42 = *(unsigned int *)(a1 + 16);
    v68.m128i_i64[0] = v40;
    result = *(_QWORD *)a1;
    v43 = *(_QWORD *)a1 + 40 * v42;
    if ( *(_QWORD *)a1 != v43 )
    {
      do
      {
        v44 = _mm_load_si128(&v68);
        result += 40;
        v69[0] = 0u;
        *(__m128i *)(result - 40) = v44;
        *(__m128i *)(result - 24) = _mm_load_si128(v69);
      }
      while ( v43 != result );
    }
  }
  return result;
}


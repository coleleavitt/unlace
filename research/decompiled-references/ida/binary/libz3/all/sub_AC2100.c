__int64 __fastcall sub_AC2100(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int8 a7)
{
  unsigned __int64 v7; // xmm1_8
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r12d
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  int v17; // r12d
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rax
  int v21; // eax
  unsigned int *v22; // rdx
  int v23; // r13d
  __int64 v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // r13
  int v27; // edx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 result; // rax
  unsigned int *i; // rbx
  __int64 v32; // r14
  _QWORD *v33; // r13
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // esi
  size_t v41; // rdi
  unsigned int v42; // r12d
  unsigned int *v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __m128i v50; // xmm0
  _QWORD *v51; // rax
  __m128i v52; // [rsp-A0h] [rbp-A8h] BYREF
  unsigned __int64 v53; // [rsp-90h] [rbp-98h]
  unsigned __int64 v54; // [rsp-88h] [rbp-90h]
  __m128i v55; // [rsp-80h] [rbp-88h] BYREF
  _QWORD *v56; // [rsp-70h] [rbp-78h]
  unsigned int v57; // [rsp-68h] [rbp-70h]
  unsigned int v58; // [rsp-64h] [rbp-6Ch] BYREF
  unsigned int *v59; // [rsp-58h] [rbp-60h] BYREF
  __int64 v60[11]; // [rsp-50h] [rbp-58h] BYREF

  v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a6)).m128i_u64[0];
  v8 = a4;
  v9 = a3;
  ++*(_DWORD *)(a1 + 64);
  v56 = (_QWORD *)a1;
  v55.m128i_i8[0] = a7;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_DWORD *)(a1 + 8);
  LODWORD(v54) = a4;
  v57 = a5;
  v58 = a6;
  v13 = (__m128i)_mm_loadh_ps((const double *)(v10 + 8LL * a4));
  if ( dword_1C7ECF0 == a2 )
  {
    ++*(_DWORD *)(a1 + 72);
    v54 = v7;
    v55 = v13;
    v49 = sub_180C100(v11 + 8400, 48);
    v50 = _mm_load_si128(&v55);
    *(_QWORD *)v49 = off_1C567B8;
    *(_DWORD *)(v49 + 32) = v12;
    *(_QWORD *)(v49 + 8) = 2;
    *(__m128i *)(v49 + 16) = v50;
    *(_QWORD *)(v49 + 36) = v7;
    v60[0] = v49 | 3;
    return sub_8E8670(v11, v60, -2);
  }
  else
  {
    v53 = v7;
    v52 = v13;
    v14 = sub_180C100(v11 + 8400, 48);
    v15 = _mm_load_si128(&v52);
    *(_QWORD *)(v14 + 8) = 2;
    v16 = *(_QWORD *)(v11 + 8848);
    *(_DWORD *)(v14 + 32) = v12;
    *(_QWORD *)v14 = off_1C567B8;
    v17 = a2 ^ 1;
    *(__m128i *)(v14 + 16) = v15;
    *(_QWORD *)(v14 + 36) = v7;
    v18 = v14 | 3;
    v60[0] = v18;
    v19 = *(_BYTE *)(v16 + a2);
    if ( v19 == -1 )
    {
      sub_8E8670(v11, v60, v17);
    }
    else if ( !v19 )
    {
      sub_8F28B0(v11, a2, v18, 0);
    }
    v59 = nullptr;
    v20 = sub_186B270(0x10u);
    *(_DWORD *)(v20 + 8) = v17;
    v59 = (unsigned int *)(v20 + 8);
    *(_QWORD *)v20 = 0x100000002LL;
    sub_AB8CB0(&v59, &v58);
    v21 = sub_966380((__int64)v56, **(_DWORD ***)(v56[4] + 8 * v9), **(_DWORD ***)(v56[4] + 8 * v8));
    v22 = v59;
    v23 = v21 ^ 1;
    if ( !v59 || (v24 = *(v59 - 1), (_DWORD)v24 == *(v59 - 2)) )
    {
      sub_692C60(&v59);
      v22 = v59;
      v24 = *(v59 - 1);
    }
    v22[v24] = v23;
    v25 = v56;
    ++*(v22 - 1);
    sub_9936C0(v25[2], *v22 >> 1);
    sub_9936C0(v25[2], v59[1] >> 1);
    sub_9936C0(v25[2], v59[2] >> 1);
    v26 = v25[3];
    if ( *(_QWORD *)(v26 + 912) )
      sub_966E60((__int64)v25, &v59);
    if ( v59 )
      v27 = *(v59 - 1);
    else
      v27 = 0;
    sub_B69FE0(v56[2], *((_DWORD *)v56 + 2), v27, (_DWORD)v59, 0, 0, 1);
    if ( *(_QWORD *)(v26 + 912) )
      std::__ostream_insert<char,std::char_traits<char>>();
    if ( *(_DWORD *)(v56[65] + 4 * v8) == v57 )
      sub_ABDA50(v56, v54);
    v28 = a2 >> 1;
    v29 = v56[67];
    if ( v29 && (unsigned int)v28 < *(_DWORD *)(v29 - 4) && (result = *(_QWORD *)(v29 + 8 * v28)) != 0 )
    {
      for ( i = *(unsigned int **)(result + 8); i; ++*((_DWORD *)v33 - 1) )
      {
        if ( !v55.m128i_i8[0] )
        {
          v35 = v56[58];
          while ( 1 )
          {
            v36 = *i;
            do
            {
              v37 = v36;
              v36 = *(_DWORD *)(v35 + 4LL * v36);
            }
            while ( v37 != v36 );
            v38 = v54;
            do
            {
              v39 = v38;
              v38 = *(_DWORD *)(v35 + 4LL * v38);
            }
            while ( v39 != v38 );
            if ( v38 != v37 )
              break;
            result = v57;
            if ( i[1] != v57 )
              break;
            i = *((unsigned int **)i + 1);
            if ( !i )
              goto LABEL_33;
          }
        }
        v32 = *(_QWORD *)i;
        v33 = (_QWORD *)v56[144];
        if ( v33 )
        {
          v34 = *((unsigned int *)v33 - 1);
          if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
          {
            v40 = (unsigned int)(3 * v34 + 1) >> 1;
            v41 = 8 * v40 + 8;
            v42 = v40;
            if ( 8 * (int)v34 + 8 >= (unsigned int)v41 || (unsigned int)v34 >= v40 )
              JUMPOUT(0x13C688);
            v43 = (unsigned int *)sub_186B270(v41);
            v33 = v43 + 2;
            v44 = v56[144];
            if ( v44 )
            {
              v45 = *(unsigned int *)(v44 - 4);
              v46 = 0;
              v43[1] = v45;
              v47 = 8 * v45;
              if ( v47 )
              {
                do
                {
                  *(_QWORD *)&v43[v46 / 4 + 2] = *(_QWORD *)(v44 + v46);
                  v46 += 8LL;
                }
                while ( v47 != v46 );
              }
              sub_186B220((void *)(v44 - 8));
              result = (__int64)&v33[v43[1]];
            }
            else
            {
              v43[1] = 0;
              result = (__int64)(v43 + 2);
            }
            v48 = v56;
            *v43 = v42;
            v48[144] = v33;
          }
          else
          {
            result = (__int64)&v33[v34];
          }
        }
        else
        {
          v51 = (_QWORD *)sub_186B270(0x18u);
          v33 = v51 + 1;
          *v51 = 2;
          v56[144] = v51 + 1;
          result = (__int64)(v51 + 1);
        }
        *(_QWORD *)result = v32;
        i = *((unsigned int **)i + 1);
      }
LABEL_33:
      if ( v59 )
        return sub_186B220(v59 - 2);
    }
    else
    {
      result = (__int64)v59;
      if ( v59 )
        return sub_186B220(v59 - 2);
    }
  }
  return result;
}


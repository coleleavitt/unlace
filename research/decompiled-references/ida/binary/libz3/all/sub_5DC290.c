__int64 __fastcall sub_5DC290(
        __int64 a1,
        __int64 a2,
        __m128i si128,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char **exception; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  double v15; // xmm4_8
  double v16; // xmm5_8
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // r14
  __int64 v22; // rax
  __int64 v23; // r12
  _QWORD *v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r12
  unsigned int v31; // ecx
  unsigned int v32; // r14d
  __int64 *v33; // r13
  __int64 v34; // rax
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r13
  __int64 *i; // r12
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm1
  int v46; // eax
  __int64 v47; // r15
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rsi
  unsigned int v51; // r15d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rax
  int v55; // edi
  __m128 v56; // [rsp+0h] [rbp-C8h] BYREF
  double v57; // [rsp+18h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+24h] [rbp-A4h]
  __int64 v59; // [rsp+28h] [rbp-A0h]
  __m128i *v60; // [rsp+30h] [rbp-98h]
  __int64 v61; // [rsp+38h] [rbp-90h]
  _QWORD *v62; // [rsp+40h] [rbp-88h]
  _QWORD *v63; // [rsp+48h] [rbp-80h]
  __m128i v64; // [rsp+60h] [rbp-68h] BYREF
  __int64 v65[11]; // [rsp+70h] [rbp-58h] BYREF

  v59 = a1;
  v11 = sub_186B270(0xF8u);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = v11;
  v61 = v11;
  sub_63D370(v11, v12);
  sub_63DFA0(v13, a2, v14, *(double *)si128.m128i_i64, a4, a5, a6, v15, v16, a9);
  v17 = *(_QWORD **)(a2 + 32);
  v18 = 2LL * *(unsigned int *)(a2 + 40);
  v63 = &v17[v18];
  v19 = &v17[v18];
  if ( &v17[v18] != v17 )
  {
    while ( *v17 <= 1u )
    {
      v17 += 2;
      if ( v19 == v17 )
        return v61;
    }
    v62 = v17;
    if ( v63 != v17 )
    {
      v60 = &v64;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v59 + 40);
        v21 = *(_QWORD **)v62[1];
        if ( v21 )
        {
          v22 = *((unsigned int *)v21 - 1);
          if ( (_DWORD)v22 )
          {
            v23 = *v21;
            v24 = &v21[v22];
            sub_62A000(*(_QWORD *)(v59 + 40), *v21);
            v25 = (_QWORD *)(sub_186B270(0x18u) + 8);
            v26 = 1;
            *(v25 - 1) = 2;
            v27 = v25;
            while ( 1 )
            {
              ++v21;
              *v25 = v23;
              *((_DWORD *)v27 - 1) = v26;
              if ( v21 == v24 )
                break;
              while ( 1 )
              {
                v23 = *v21;
                sub_62A000(v20, *v21);
                v28 = *((_DWORD *)v27 - 1);
                if ( v28 == *((_DWORD *)v27 - 2) )
                  break;
                v29 = v28;
                ++v21;
                v26 = v28 + 1;
                v27[v29] = v23;
                *((_DWORD *)v27 - 1) = v26;
                if ( v21 == v24 )
                  goto LABEL_13;
              }
              v51 = (3 * v28 + 1) >> 1;
              v52 = 8 * v51 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v52 || v28 >= v51 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v65, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v65);
                sub_233E40((__int64)v65);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v53 = (unsigned int *)sub_186B300(v27 - 1, v52);
              v27 = v53 + 2;
              *v53 = v51;
              v54 = v53[1];
              v55 = v54;
              v25 = &v27[v54];
              v26 = (unsigned int)(v55 + 1);
            }
LABEL_13:
            v58 = 0;
            if ( (_DWORD)v26 )
            {
              while ( 1 )
              {
                v57 = *(_QWORD *)(v59 + 40);
                v30 = v27[v58];
                v31 = v58;
                v56 = _mm_loadh_ps((const double *)&v57);
                if ( !v30 )
                  break;
                sub_62A000(v57, v30);
                ++v58;
                LODWORD(v26) = *((_DWORD *)v27 - 1);
                if ( v58 < (unsigned int)v26 )
                  goto LABEL_16;
                sub_63DAD0(v61, v30, *(double *)si128.m128i_i64);
LABEL_26:
                sub_62A410(v57, v30);
LABEL_27:
                v26 = *((unsigned int *)v27 - 1);
                if ( v58 >= (unsigned int)v26 )
                  goto LABEL_28;
              }
              ++v58;
              if ( v31 + 1 >= (unsigned int)v26 )
              {
                sub_63DAD0(v61, 0, *(double *)si128.m128i_i64);
                goto LABEL_27;
              }
LABEL_16:
              v32 = v58;
              while ( 2 )
              {
                v33 = &v27[v32];
                v34 = *(unsigned int *)(v56.m128_u64[0] + 68);
                if ( (_DWORD)v34 == *(_DWORD *)(*v33 + 68) )
                {
                  if ( (_DWORD)v34 )
                  {
                    v35 = 8 * v34 + 80;
                    v36 = 80;
                    do
                    {
                      v37 = *(_QWORD *)(v56.m128_u64[0] + v36);
                      v38 = *(_QWORD *)(*v33 + v36);
                      if ( *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF8LL) + 16) != *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF8LL)
                                                                                       + 16)
                        || ((v37 & 7) == 1) != ((v38 & 7) == 1) )
                      {
                        goto LABEL_23;
                      }
                      v36 += 8;
                    }
                    while ( v35 != v36 );
                  }
                  si128 = _mm_load_si128((const __m128i *)&v56);
                  v44 = *v33;
                  v64 = si128;
                  sub_5DB580(v59, v60->m128i_i64, v44);
                  v45 = _mm_load_si128(&v64);
                  v57 = v64.m128i_i64[1];
                  v30 = v64.m128i_i64[0];
                  v46 = *((_DWORD *)v27 - 1);
                  v56 = (__m128)v45;
                  v47 = v27[v46 - 1];
                  sub_62A000(v20, v47);
                  sub_62A410(v20, *v33);
                  v48 = *((_DWORD *)v27 - 1);
                  *v33 = v47;
                  v49 = (unsigned int)(v48 - 1);
                  v50 = v27[v49];
                  *((_DWORD *)v27 - 1) = v49;
                  sub_62A410(v20, v50);
                  LODWORD(v26) = *((_DWORD *)v27 - 1);
                }
                else
                {
LABEL_23:
                  ++v32;
                }
                if ( v32 >= (unsigned int)v26 )
                {
                  sub_63DAD0(v61, v30, *(double *)si128.m128i_i64);
                  if ( v30 )
                    goto LABEL_26;
                  goto LABEL_27;
                }
                continue;
              }
            }
LABEL_28:
            v39 = (unsigned __int64)&v27[v26];
            for ( i = v27; (unsigned __int64)i < v39; ++i )
            {
              v41 = *i;
              sub_62A410(v20, v41);
            }
            sub_186B220(v27 - 1);
          }
        }
        v42 = v62 + 2;
        if ( v63 != v62 + 2 )
        {
          while ( *v42 <= 1u )
          {
            v42 += 2;
            if ( v63 == v42 )
              return v61;
          }
          v62 = v42;
          if ( v63 != v42 )
            continue;
        }
        return v61;
      }
    }
  }
  return v61;
}


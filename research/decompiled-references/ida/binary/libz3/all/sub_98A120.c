void __fastcall sub_98A120(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  _QWORD *v4; // r14
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  unsigned int v8; // esi
  __m128i *v9; // r12
  unsigned int v10; // eax
  int v11; // edi
  int v12; // ecx
  __int8 *v13; // rdx
  __int8 *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // edi
  unsigned int v18; // r11d
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // r12d
  __m128i *v22; // rax
  __m128i si128; // xmm3
  __m128i v24; // xmm2
  __m128i *v25; // rdi
  __m128i *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // r9
  _QWORD *v29; // r10
  __m128 *v30; // rbx
  unsigned int v31; // r8d
  _QWORD *v32; // rsi
  int v33; // r11d
  void *v34; // rdi
  const double *v35; // rcx
  __m128 v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // r10
  int v40; // esi
  int v41; // edx
  __int8 *v42; // rax
  _QWORD *v43; // r12
  unsigned int v44; // eax
  __int64 v45; // rdx
  int v46; // eax
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  unsigned int v49; // ebx
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rdx
  _DWORD *v53; // r13
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // r12
  char **v58; // rbp
  char **exception; // rbp
  char **v60; // rbp
  char **v61; // rbp
  int v62; // [rsp+0h] [rbp-A0h]
  _QWORD *v63; // [rsp+0h] [rbp-A0h]
  unsigned int v64; // [rsp+8h] [rbp-98h]
  _QWORD *v65; // [rsp+8h] [rbp-98h]
  int v66; // [rsp+14h] [rbp-8Ch]
  unsigned int v67; // [rsp+14h] [rbp-8Ch]
  __int64 v68; // [rsp+20h] [rbp-80h]
  _QWORD *v69; // [rsp+28h] [rbp-78h]
  _QWORD *v70; // [rsp+30h] [rbp-70h]
  __int64 v71[11]; // [rsp+48h] [rbp-58h] BYREF

  if ( a2 != a3 )
  {
    v3 = a2;
    v4 = a3;
    v6 = (_DWORD *)*a2;
    v7 = (_DWORD *)*v4;
    if ( *(_DWORD *)*v4 >= *(_DWORD *)*a2 )
    {
      v6 = (_DWORD *)*v4;
      v7 = (_DWORD *)*a2;
      v15 = v4;
      v4 = a2;
      v3 = v15;
    }
    v8 = *(_DWORD *)(a1 + 132);
    v9 = *(__m128i **)(a1 + 112);
    v10 = v8 - 1;
    if ( !*(_QWORD *)(a1 + 160) )
    {
      v16 = *(unsigned int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 152) >= (unsigned __int64)v9 + 24 * v16 )
      {
        v17 = v16 - v8;
        v18 = 2 * v8;
        if ( 2 * v8 < v8 || 2 * v17 < v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "table overflow");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = 2 * v8;
        v19 = v18 - 1;
        v69 = v3;
        v70 = v4;
        v20 = 2 * v17;
        v68 = 24LL * v18;
        while ( 1 )
        {
          v21 = v20 + v66;
          if ( __CFADD__(v20, v66) )
          {
            v58 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "table overflow");
            *v58 = (char *)off_1C63128;
            sub_2333C0(v58 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v58, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (__m128i *)sub_186B270(24LL * v21);
          si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
          v24 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
          v25 = v22;
          if ( v21 )
          {
            v26 = &v22[3 * (v21 >> 1)];
            do
            {
              *v22 = si128;
              v22 += 3;
              v22[-2] = v24;
              v22[-1] = 0;
            }
            while ( v22 != v26 );
          }
          v27 = *(unsigned int *)(a1 + 132);
          v28 = *(_QWORD **)(a1 + 112);
          *(_DWORD *)(a1 + 136) = 0;
          v29 = &v28[3 * v27];
          v30 = (__m128 *)&v25->m128i_i8[v68];
          if ( v28 == v29 )
            break;
          v31 = v20 + v66;
          v32 = v28;
          while ( (*v32 & 7LL) == 1 )
          {
LABEL_22:
            v32 += 3;
            if ( v29 == v32 )
            {
              v10 = v19;
              v33 = v66;
              v9 = v25;
              v3 = v69;
              v34 = v28;
              v4 = v70;
              goto LABEL_24;
            }
          }
          v63 = v32;
          v35 = (const double *)v32;
          v65 = v29;
          while ( 1 )
          {
            while ( 1 )
            {
              v38 = *((_QWORD *)v35 + 1);
              v39 = *((_QWORD *)v35 + 2);
              v40 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
              v41 = (*(_DWORD *)(*(_QWORD *)v39 + 12LL) - v40) ^ (v40 << 8);
              v42 = &v25->m128i_i8[24 * (v19 & (((v41 ^ ((v40 - v41) << 16)) + v41 - v40) ^ ((v40 - v41) << 10)))];
              if ( (*(_QWORD *)v42 & 7LL) != 1 )
                break;
              *(_QWORD *)v42 = 0;
              v35 = *(const double **)v35;
              ++*(_DWORD *)(a1 + 136);
              *((_QWORD *)v42 + 1) = v38;
              *((_QWORD *)v42 + 2) = v39;
              if ( !v35 )
              {
LABEL_33:
                v32 = v63;
                v29 = v65;
                goto LABEL_22;
              }
            }
            if ( (__m128 *)((char *)v25 + 24 * v21) == v30 )
              break;
            *v30 = _mm_loadh_ps((const double *)v42 + 1);
            v30 = (__m128 *)((char *)v30 + 24);
            v36 = _mm_loadh_ps(v35 + 1);
            v30[-1].m128_u64[1] = *((_QWORD *)v42 + 2);
            v37 = *((_QWORD *)v35 + 2);
            *(__m128 *)v42 = v36;
            v35 = *(const double **)v35;
            *((_QWORD *)v42 + 2) = v37;
            if ( !v35 )
              goto LABEL_33;
          }
          sub_186B220(v25);
          if ( 2 * v20 < v20 )
          {
            v60 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "table overflow");
            *v60 = (char *)off_1C63128;
            sub_2333C0(v60 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v60, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 *= 2;
        }
        v31 = v20 + v66;
        v33 = v66;
        v9 = v25;
        v3 = v69;
        v4 = v70;
        v10 = v19;
        v34 = v28;
LABEL_24:
        if ( v34 )
        {
          v67 = v31;
          v64 = v10;
          v62 = v33;
          sub_186B220(v34);
          v31 = v67;
          v10 = v64;
          v33 = v62;
        }
        *(_QWORD *)(a1 + 112) = v9;
        v6 = (_DWORD *)*v3;
        *(_DWORD *)(a1 + 120) = v31;
        v7 = (_DWORD *)*v4;
        *(_DWORD *)(a1 + 132) = v33;
        *(_QWORD *)(a1 + 152) = v30;
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 168) = 0;
      }
    }
    v11 = v7[3];
    v12 = (v6[3] - v11) ^ (v11 << 8);
    v13 = &v9->m128i_i8[24 * ((((v12 ^ ((v11 - v12) << 16)) + v12 - v11) ^ ((v11 - v12) << 10)) & v10)];
    v14 = v13;
    if ( (*(_QWORD *)v13 & 7LL) == 1 )
    {
      v48 = nullptr;
      *(_QWORD *)(a1 + 136) = _mm_add_epi32(
                                _mm_loadl_epi64((const __m128i *)(a1 + 136)),
                                _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
LABEL_39:
      v43 = *(_QWORD **)(a1 + 104);
      *((_QWORD *)v13 + 1) = v4;
      *((_QWORD *)v13 + 2) = v3;
      *(_QWORD *)v13 = v48;
      if ( v43 )
      {
        v44 = *((_DWORD *)v43 - 1);
        if ( v44 == *((_DWORD *)v43 - 2) )
        {
          v49 = (3 * v44 + 1) >> 1;
          v50 = 16 * v49 + 8;
          if ( 16 * v44 + 8 >= v50 || v44 >= v49 )
          {
            v61 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *v61 = (char *)off_1C63128;
            sub_2333C0(v61 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = sub_186B270(v50);
          v52 = *(_QWORD *)(a1 + 104);
          v53 = (_DWORD *)v51;
          v43 = (_QWORD *)(v51 + 8);
          if ( v52 )
          {
            v54 = *(unsigned int *)(v52 - 4);
            *(_DWORD *)(v51 + 4) = v54;
            v55 = 0;
            v56 = 16 * v54;
            if ( v56 )
            {
              do
              {
                *(__m128i *)&v53[v55 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v52 + v55));
                v55 += 16LL;
              }
              while ( v56 != v55 );
            }
            sub_186B220((void *)(v52 - 8));
            v47 = &v43[2 * (unsigned int)v53[1]];
            v46 = v53[1] + 1;
          }
          else
          {
            *(_DWORD *)(v51 + 4) = 0;
            v47 = (_QWORD *)(v51 + 8);
            v46 = 1;
          }
          *(_QWORD *)(a1 + 104) = v43;
          *v53 = v49;
        }
        else
        {
          v45 = v44;
          v46 = v44 + 1;
          v47 = &v43[2 * v45];
        }
      }
      else
      {
        v57 = (_QWORD *)sub_186B270(0x28u);
        *v57 = 2;
        v46 = 1;
        v43 = v57 + 1;
        *(_QWORD *)(a1 + 104) = v43;
        v47 = v43;
      }
      *v47 = v4;
      v47[1] = v3;
      *((_DWORD *)v43 - 1) = v46;
    }
    else
    {
      while ( v4 != *((_QWORD **)v14 + 1) || v3 != *((_QWORD **)v14 + 2) )
      {
        v14 = *(__int8 **)v14;
        ++*(_DWORD *)(a1 + 144);
        if ( !v14 )
        {
          v48 = *(_QWORD **)(a1 + 160);
          ++*(_DWORD *)(a1 + 140);
          if ( v48 )
          {
            *(_QWORD *)(a1 + 160) = *v48;
          }
          else
          {
            v48 = *(_QWORD **)(a1 + 152);
            *(_QWORD *)(a1 + 152) = v48 + 3;
          }
          *(__m128 *)v48 = _mm_loadh_ps((const double *)v13 + 1);
          v48[2] = *((_QWORD *)v13 + 2);
          goto LABEL_39;
        }
      }
    }
  }
}


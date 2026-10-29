__int64 __fastcall sub_B73F20(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // edx
  void *v9; // rcx
  _QWORD *v10; // r13
  _QWORD *v11; // r14
  _DWORD *v12; // rdx
  _DWORD *v13; // rsi
  unsigned int v14; // edi
  __m128i *v15; // rbp
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // r8d
  unsigned int v22; // r11d
  unsigned int v23; // r12d
  unsigned int i; // r13d
  unsigned int v25; // ebp
  __m128i *v26; // rax
  __m128i si128; // xmm3
  __m128i v28; // xmm2
  __m128i *v29; // rdi
  __m128i *v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // r9
  _QWORD *v33; // r10
  __m128 *v34; // rbx
  unsigned int v35; // r8d
  _QWORD *v36; // rsi
  int v37; // r11d
  void *v38; // rdi
  const double *v39; // rcx
  __m128 v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // r10
  int v44; // esi
  int v45; // edx
  __int8 *v46; // rax
  _QWORD *v47; // rbp
  unsigned int v48; // eax
  __int64 v49; // rdx
  _QWORD *v50; // rdx
  _QWORD *v51; // rax
  unsigned int v52; // ebx
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rdx
  _DWORD *v56; // r12
  __int64 v57; // rsi
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  _QWORD *v60; // rax
  _QWORD *v61; // rbp
  char **v62; // rbp
  int v63; // [rsp+8h] [rbp-B0h]
  _QWORD *v64; // [rsp+8h] [rbp-B0h]
  void *v65; // [rsp+8h] [rbp-B0h]
  void *v66; // [rsp+8h] [rbp-B0h]
  unsigned int v67; // [rsp+10h] [rbp-A8h]
  _QWORD *v68; // [rsp+10h] [rbp-A8h]
  __int64 v69; // [rsp+10h] [rbp-A8h]
  __int64 v70; // [rsp+10h] [rbp-A8h]
  int v71; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v72; // [rsp+1Ch] [rbp-9Ch]
  void *ptr; // [rsp+20h] [rbp-98h]
  __int64 v74; // [rsp+28h] [rbp-90h]
  __int64 v75; // [rsp+28h] [rbp-90h]
  _QWORD *v76; // [rsp+30h] [rbp-88h]
  _QWORD *v77; // [rsp+38h] [rbp-80h]
  void *v78; // [rsp+40h] [rbp-78h]
  __int64 v79; // [rsp+48h] [rbp-70h]
  __int64 v80[11]; // [rsp+60h] [rbp-58h] BYREF

  result = sub_B73C80(a1, a2);
  v7 = a1;
  v8 = *(_DWORD *)(a1 + 24);
  if ( v8 )
  {
    v9 = nullptr;
    do
    {
      result = *(_QWORD *)(v7 + 32) + 16LL * (_QWORD)v9;
      v10 = *(_QWORD **)(result + 8);
      v11 = *(_QWORD **)result;
      if ( v10 != *(_QWORD **)result )
      {
        v12 = (_DWORD *)*v11;
        v13 = (_DWORD *)*v10;
        if ( *(_DWORD *)*v10 >= *(_DWORD *)*v11 )
        {
          v12 = (_DWORD *)*v10;
          v13 = (_DWORD *)*v11;
          v10 = *(_QWORD **)result;
          v11 = *(_QWORD **)(result + 8);
        }
        v14 = *(_DWORD *)(a2 + 132);
        v15 = *(__m128i **)(a2 + 112);
        v16 = v14 - 1;
        if ( !*(_QWORD *)(a2 + 160) )
        {
          v20 = *(unsigned int *)(a2 + 120);
          if ( *(_QWORD *)(a2 + 152) >= (unsigned __int64)v15 + 24 * v20 )
          {
            v21 = v20 - v14;
            v22 = 2 * v14;
            if ( 2 * v14 < v14 || 2 * v21 < v21 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v80, "table overflow");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v80);
              sub_233E40((__int64)v80);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v77 = v11;
            v23 = v22 - 1;
            v71 = 2 * v14;
            v78 = v9;
            v74 = 24LL * v22;
            v79 = v7;
            v76 = v10;
            for ( i = 2 * v21; ; i *= 2 )
            {
              v25 = i + v71;
              if ( __CFADD__(i, v71) )
              {
                v62 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v80, "table overflow");
                *v62 = (char *)off_1C63128;
                sub_2333C0(v62 + 1, v80);
                sub_233E40((__int64)v80);
                __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v26 = (__m128i *)sub_186B270(24LL * v25);
              si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
              v28 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
              v29 = v26;
              if ( v25 )
              {
                v30 = &v26[3 * (v25 >> 1)];
                do
                {
                  *v26 = si128;
                  v26 += 3;
                  v26[-2] = v28;
                  v26[-1] = 0;
                }
                while ( v26 != v30 );
              }
              v31 = *(unsigned int *)(a2 + 132);
              v32 = *(_QWORD **)(a2 + 112);
              *(_DWORD *)(a2 + 136) = 0;
              v33 = &v32[3 * v31];
              v34 = (__m128 *)&v29->m128i_i8[v74];
              if ( v32 == v33 )
                break;
              v35 = i + v71;
              v36 = v32;
              while ( (*v36 & 7LL) == 1 )
              {
LABEL_26:
                v36 += 3;
                if ( v33 == v36 )
                {
                  v16 = v23;
                  v10 = v76;
                  v15 = v29;
                  v11 = v77;
                  v37 = v71;
                  v9 = v78;
                  v38 = v32;
                  v7 = v79;
                  goto LABEL_28;
                }
              }
              v64 = v36;
              v39 = (const double *)v36;
              v68 = v33;
              while ( 1 )
              {
                while ( 1 )
                {
                  v42 = *((_QWORD *)v39 + 1);
                  v43 = *((_QWORD *)v39 + 2);
                  v44 = *(_DWORD *)(*(_QWORD *)v42 + 12LL);
                  v45 = (*(_DWORD *)(*(_QWORD *)v43 + 12LL) - v44) ^ (v44 << 8);
                  v46 = &v29->m128i_i8[24 * (v23 & (((v45 ^ ((v44 - v45) << 16)) + v45 - v44) ^ ((v44 - v45) << 10)))];
                  if ( (*(_QWORD *)v46 & 7LL) != 1 )
                    break;
                  *(_QWORD *)v46 = 0;
                  v39 = *(const double **)v39;
                  ++*(_DWORD *)(a2 + 136);
                  *((_QWORD *)v46 + 1) = v42;
                  *((_QWORD *)v46 + 2) = v43;
                  if ( !v39 )
                  {
LABEL_36:
                    v36 = v64;
                    v33 = v68;
                    goto LABEL_26;
                  }
                }
                if ( (__m128 *)((char *)v29 + 24 * v25) == v34 )
                  break;
                *v34 = _mm_loadh_ps((const double *)v46 + 1);
                v34 = (__m128 *)((char *)v34 + 24);
                v40 = _mm_loadh_ps(v39 + 1);
                v34[-1].m128_u64[1] = *((_QWORD *)v46 + 2);
                v41 = *((_QWORD *)v39 + 2);
                *(__m128 *)v46 = v40;
                v39 = *(const double **)v39;
                *((_QWORD *)v46 + 2) = v41;
                if ( !v39 )
                  goto LABEL_36;
              }
              sub_186B220(v29);
              if ( 2 * i < i )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v80, "table overflow");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, v80);
                sub_233E40((__int64)v80);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
            }
            v35 = i + v71;
            v10 = v76;
            v15 = v29;
            v11 = v77;
            v38 = v32;
            v37 = v71;
            v9 = v78;
            v16 = v23;
            v7 = v79;
LABEL_28:
            if ( v38 )
            {
              v75 = v7;
              ptr = v9;
              v72 = v35;
              v67 = v16;
              v63 = v37;
              sub_186B220(v38);
              v7 = v75;
              v9 = ptr;
              v35 = v72;
              v16 = v67;
              v37 = v63;
            }
            *(_QWORD *)(a2 + 112) = v15;
            v12 = (_DWORD *)*v11;
            *(_DWORD *)(a2 + 120) = v35;
            v13 = (_DWORD *)*v10;
            *(_DWORD *)(a2 + 132) = v37;
            *(_QWORD *)(a2 + 152) = v34;
            *(_QWORD *)(a2 + 160) = 0;
            *(_QWORD *)(a2 + 168) = 0;
          }
        }
        v17 = v13[3];
        v18 = (v12[3] - v17) ^ (v17 << 8);
        v19 = (__int64)&v15->m128i_i64[3 * ((((v18 ^ ((v17 - v18) << 16)) + v18 - v17) ^ ((v17 - v18) << 10)) & v16)];
        result = v19;
        if ( (*(_QWORD *)v19 & 7LL) == 1 )
        {
          v51 = nullptr;
          *(_QWORD *)(a2 + 136) = _mm_add_epi32(
                                    _mm_loadl_epi64((const __m128i *)(a2 + 136)),
                                    _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
LABEL_42:
          v47 = *(_QWORD **)(a2 + 104);
          *(_QWORD *)(v19 + 8) = v10;
          *(_QWORD *)(v19 + 16) = v11;
          *(_QWORD *)v19 = v51;
          if ( v47 )
          {
            v48 = *((_DWORD *)v47 - 1);
            if ( v48 == *((_DWORD *)v47 - 2) )
            {
              v52 = (3 * v48 + 1) >> 1;
              v53 = 16 * v52 + 8;
              if ( 16 * v48 + 8 >= v53 || v48 >= v52 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v80, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v80);
                sub_233E40((__int64)v80);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v69 = v7;
              v65 = v9;
              v54 = sub_186B270(v53);
              v55 = *(_QWORD *)(a2 + 104);
              v9 = v65;
              v7 = v69;
              v56 = (_DWORD *)v54;
              v47 = (_QWORD *)(v54 + 8);
              if ( v55 )
              {
                v57 = *(unsigned int *)(v55 - 4);
                *(_DWORD *)(v54 + 4) = v57;
                v58 = 0;
                v59 = 16 * v57;
                if ( v59 )
                {
                  do
                  {
                    *(__m128i *)&v56[v58 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v55 + v58));
                    v58 += 16LL;
                  }
                  while ( v59 != v58 );
                }
                sub_186B220((void *)(v55 - 8));
                v9 = v65;
                v7 = v69;
                v50 = &v47[2 * (unsigned int)v56[1]];
                result = (unsigned int)(v56[1] + 1);
              }
              else
              {
                *(_DWORD *)(v54 + 4) = 0;
                v50 = (_QWORD *)(v54 + 8);
                result = 1;
              }
              *(_QWORD *)(a2 + 104) = v47;
              *v56 = v52;
            }
            else
            {
              v49 = v48;
              result = v48 + 1;
              v50 = &v47[2 * v49];
            }
          }
          else
          {
            v70 = v7;
            v66 = v9;
            v60 = (_QWORD *)sub_186B270(0x28u);
            v9 = v66;
            v7 = v70;
            v61 = v60;
            *v60 = 2;
            result = 1;
            v47 = v61 + 1;
            *(_QWORD *)(a2 + 104) = v47;
            v50 = v47;
          }
          *v50 = v10;
          v50[1] = v11;
          *((_DWORD *)v47 - 1) = result;
        }
        else
        {
          while ( v10 != *(_QWORD **)(result + 8) || v11 != *(_QWORD **)(result + 16) )
          {
            result = *(_QWORD *)result;
            ++*(_DWORD *)(a2 + 144);
            if ( !result )
            {
              v51 = *(_QWORD **)(a2 + 160);
              ++*(_DWORD *)(a2 + 140);
              if ( v51 )
              {
                *(_QWORD *)(a2 + 160) = *v51;
              }
              else
              {
                v51 = *(_QWORD **)(a2 + 152);
                *(_QWORD *)(a2 + 152) = v51 + 3;
              }
              *(__m128 *)v51 = _mm_loadh_ps((const double *)(v19 + 8));
              v51[2] = *(_QWORD *)(v19 + 16);
              goto LABEL_42;
            }
          }
        }
        v8 = *(_DWORD *)(v7 + 24);
      }
      v9 = (char *)v9 + 1;
    }
    while ( (unsigned int)v9 < v8 );
  }
  return result;
}


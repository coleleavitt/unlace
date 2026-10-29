__int64 __fastcall sub_6D9B60(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  unsigned int v11; // eax
  _QWORD *v12; // rax
  unsigned int v13; // r13d
  unsigned __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  unsigned __int64 *v20; // rbp
  __int64 v21; // r14
  unsigned int v22; // ebx
  __int64 v23; // rsi
  int v24; // eax
  _QWORD *v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // r15
  _QWORD *v28; // rdx
  __int64 v29; // r13
  unsigned int v30; // eax
  unsigned int v31; // r10d
  size_t v32; // rsi
  unsigned int v33; // r12d
  unsigned int *v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbp
  _QWORD *v39; // r14
  _QWORD *v40; // r15
  _QWORD *v41; // rbx
  _QWORD *v42; // r12
  unsigned int v43; // edx
  unsigned int *v44; // rcx
  unsigned __int64 v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // r11
  __int64 *v48; // r9
  unsigned __int64 v49; // rdi
  __int64 *v50; // rsi
  __int64 v51; // rsi
  unsigned __int64 v52; // r9
  __m128i v53; // xmm0
  unsigned __int64 v54; // r9
  __int64 *v55; // rsi
  __int64 v56; // rdi
  _QWORD *v57; // rsi
  unsigned int *v58; // r12
  __int64 v59; // r15
  _QWORD *v60; // rbx
  void *v61; // rdi
  _QWORD *v62; // r13
  _DWORD *v63; // rdi
  __int64 v64; // r10
  char **exception; // rbp
  __int64 v67; // [rsp+10h] [rbp-88h]
  unsigned int v68; // [rsp+10h] [rbp-88h]
  unsigned int *v69; // [rsp+18h] [rbp-80h]
  unsigned int *v70; // [rsp+18h] [rbp-80h]
  unsigned int *v71; // [rsp+18h] [rbp-80h]
  unsigned int v72; // [rsp+24h] [rbp-74h]
  unsigned int v73; // [rsp+24h] [rbp-74h]
  __int64 v74[11]; // [rsp+40h] [rbp-58h] BYREF

  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 24) + 64LL))(
            *(_QWORD *)(a1 + 24),
            a2,
            a3);
    if ( (_BYTE)v11 )
      break;
    if ( !*(_WORD *)(a2 + 4) )
    {
      v12 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v12 )
      {
        if ( __PAIR64__(a5, *(_DWORD *)(a1 + 16)) == *v12 )
        {
          v15 = *a6;
          if ( *a6 )
          {
            v16 = *(_DWORD *)(v15 - 4);
            if ( v16 == *(_DWORD *)(v15 - 8) )
            {
              v68 = (3 * v16 + 1) >> 1;
              v43 = 8 * v68 + 8;
              if ( 8 * v16 + 8 >= v43 || v16 >= (3 * v16 + 1) >> 1 )
              {
LABEL_64:
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v74, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v74);
                sub_233E40((__int64)v74);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v44 = (unsigned int *)sub_186B270(v43);
              v45 = *a6;
              v15 = (unsigned __int64)(v44 + 2);
              v46 = (_QWORD *)*a6;
              if ( *a6 )
              {
                v47 = *(unsigned int *)(v45 - 4);
                v44[1] = v47;
                v48 = (__int64 *)(v45 + 8 * v47);
                if ( (__int64 *)v45 != v48 )
                {
                  v49 = 8 * v47 - 8;
                  v50 = (__int64 *)v45;
                  if ( v49 <= 8 || v15 < v45 + 16 && v45 < (unsigned __int64)(v44 + 6) )
                  {
                    v63 = v44 + 2;
                    do
                    {
                      v64 = *v50;
                      *v50++ = 0;
                      v63 += 2;
                      *((_QWORD *)v63 - 1) = v64;
                    }
                    while ( v48 != v50 );
                  }
                  else
                  {
                    v51 = 0;
                    v52 = (v49 >> 3) + 1;
                    do
                    {
                      v53 = _mm_loadu_si128((const __m128i *)(v45 + v51 * 4));
                      *(_OWORD *)(v45 + v51 * 4) = 0;
                      *(__m128i *)&v44[v51 + 2] = v53;
                      v51 += 4;
                    }
                    while ( 4 * (v52 >> 1) != v51 );
                    if ( (v52 & 1) != 0 )
                    {
                      v54 = v52 & 0xFFFFFFFFFFFFFFFELL;
                      v55 = (__int64 *)(v45 + 8 * v54);
                      v56 = *v55;
                      *v55 = 0;
                      *(_QWORD *)(v15 + 8 * v54) = v56;
                    }
                  }
                }
                v57 = (_QWORD *)(v45 + 8 * v47);
                if ( (_DWORD)v47 )
                {
                  v70 = a3;
                  v58 = v44;
                  v73 = a5;
                  v59 = a2;
                  v60 = v46;
                  do
                  {
                    while ( *v60 )
                    {
                      v61 = (void *)(*v60++ - 8LL);
                      sub_186B220(v61);
                      if ( v60 == v57 )
                        goto LABEL_52;
                    }
                    ++v60;
                  }
                  while ( v57 != v60 );
LABEL_52:
                  v44 = v58;
                  a2 = v59;
                  a3 = v70;
                  a5 = v73;
                  v45 = *a6;
                }
                v71 = v44;
                sub_186B220((void *)(v45 - 8));
                v44 = v71;
                v19 = (_QWORD *)(v15 + 8LL * v71[1]);
                v18 = v71[1] + 1;
              }
              else
              {
                v44[1] = 0;
                v19 = v44 + 2;
                v18 = 1;
              }
              *a6 = v15;
              *v44 = v68;
            }
            else
            {
              v17 = v16;
              v18 = v16 + 1;
              v19 = (_QWORD *)(v15 + 8 * v17);
            }
          }
          else
          {
            v62 = (_QWORD *)sub_186B270(0x18u);
            *v62 = 2;
            v18 = 1;
            v15 = (unsigned __int64)(v62 + 1);
            *a6 = v15;
            v19 = (_QWORD *)v15;
          }
          *v19 = 0;
          *(_DWORD *)(v15 - 4) = v18;
          if ( *(_DWORD *)(a2 + 24) > 1u )
          {
            v67 = a1;
            v20 = a6;
            v21 = a2;
            v69 = a3;
            v22 = 1;
            v72 = a5;
            while ( 1 )
            {
              v26 = 0x7FFFFFFF8LL;
              if ( v15 )
                v26 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
              v27 = (_QWORD *)(v15 + v26);
              v28 = (_QWORD *)*v27;
              v29 = *(_QWORD *)(v21 + 8LL * v22 + 32);
              if ( *v27 )
              {
                v30 = *((_DWORD *)v28 - 1);
                if ( v30 == *((_DWORD *)v28 - 2) )
                {
                  v31 = (3 * v30 + 1) >> 1;
                  v32 = 8 * v31 + 8;
                  v33 = v31;
                  if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
                    goto LABEL_64;
                  v34 = (unsigned int *)sub_186B300(v28 - 1, v32);
                  v35 = v34[1];
                  v28 = v34 + 2;
                  *v27 = v34 + 2;
                  *v34 = v33;
                  LODWORD(v34) = v35;
                  v25 = &v28[v35];
                  v24 = (_DWORD)v34 + 1;
                }
                else
                {
                  v23 = v30;
                  v24 = v30 + 1;
                  v25 = &v28[v23];
                }
              }
              else
              {
                v36 = (_QWORD *)sub_186B270(0x18u);
                v28 = v36 + 1;
                *v36 = 2;
                v24 = 1;
                *v27 = v28;
                v25 = v28;
              }
              *v25 = v29;
              ++v22;
              *((_DWORD *)v28 - 1) = v24;
              if ( v22 >= *(_DWORD *)(v21 + 24) )
                break;
              v15 = *v20;
            }
            a2 = v21;
            a3 = v69;
            a6 = v20;
            a5 = v72;
            a1 = v67;
          }
          a2 = *(_QWORD *)(a2 + 32);
          if ( !*(_WORD *)(a2 + 4) )
            continue;
        }
      }
    }
    return 0;
  }
  v13 = v11;
  v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24), *a3);
  if ( !*a6 )
    return 0;
  if ( !*(_DWORD *)(*a6 - 4) )
    return 0;
  v38 = v37 + 32;
  if ( (unsigned __int8)sub_168D740(v37 + 32, a4) )
    return 0;
  v39 = (_QWORD *)*a6;
  if ( v39 )
  {
    v40 = &v39[*((unsigned int *)v39 - 1)];
    if ( v39 != v40 )
    {
      while ( 1 )
      {
        v41 = (_QWORD *)*v39;
        if ( *v39 )
        {
          v42 = &v41[*((unsigned int *)v41 - 1)];
          if ( v42 != v41 )
            break;
        }
LABEL_57:
        if ( v40 == ++v39 )
          return v13;
      }
      while ( !(unsigned __int8)sub_168D740(v38, *v41) )
      {
        if ( v42 == ++v41 )
          goto LABEL_57;
      }
      return 0;
    }
  }
  return v13;
}


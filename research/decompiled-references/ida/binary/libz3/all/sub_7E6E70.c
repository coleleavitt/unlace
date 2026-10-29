char *__fastcall sub_7E6E70(__int64 a1, unsigned int a2, __int64 *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  char **v6; // rbp
  char **exception; // rbp
  __int64 *v8; // r15
  __int64 *v9; // rbp
  __int64 v10; // r14
  char v11; // al
  int v12; // edx
  _QWORD *v13; // rsi
  _QWORD *v14; // rdx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rbx
  _DWORD *v19; // rax
  void *v20; // rdi
  bool v21; // si
  char *v22; // rcx
  char *v23; // rax
  __int64 v24; // rdx
  _BYTE *v25; // rdi
  char *v26; // rcx
  char *result; // rax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  char *v34; // rax
  char *v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  _QWORD *v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // rsi
  int v43; // eax
  __int64 *v44; // rsi
  char v45; // al
  int v46; // ecx
  __int64 v47; // rbx
  char *v48; // rax
  char *v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // r10
  _QWORD *v52; // rax
  unsigned __int64 v53; // rax
  unsigned int v54; // ebx
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rsi
  _QWORD *v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // r11
  __int64 v61; // [rsp+0h] [rbp-1D8h]
  void **p_ptr; // [rsp+8h] [rbp-1D0h]
  __int64 v63; // [rsp+10h] [rbp-1C8h]
  __int64 v64; // [rsp+18h] [rbp-1C0h]
  __int64 v65; // [rsp+20h] [rbp-1B8h]
  int v66; // [rsp+28h] [rbp-1B0h]
  int v67; // [rsp+30h] [rbp-1A8h]
  int v68; // [rsp+38h] [rbp-1A0h]
  __int64 v69[4]; // [rsp+40h] [rbp-198h] BYREF
  __int64 v70; // [rsp+60h] [rbp-178h]
  void *v71; // [rsp+68h] [rbp-170h]
  __int64 v72; // [rsp+70h] [rbp-168h]
  _BYTE v73[128]; // [rsp+78h] [rbp-160h] BYREF
  void *ptr; // [rsp+F8h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+100h] [rbp-D8h]
  _BYTE v76[128]; // [rsp+108h] [rbp-D0h] BYREF
  _QWORD *v77; // [rsp+188h] [rbp-50h]
  int v78[2]; // [rsp+190h] [rbp-48h] BYREF

  v70 = a1;
  v71 = v73;
  v72 = 0x1000000000LL;
  ptr = v76;
  v75 = 0x1000000000LL;
  v77 = nullptr;
  *(_QWORD *)v78 = a4;
  if ( a2 )
  {
    v8 = a3;
    p_ptr = &ptr;
    v9 = &a3[a2];
    do
    {
      v10 = *v8;
      v11 = *(_BYTE *)(*v8 + 6);
      if ( (v11 & 2) == 0 )
      {
        *(_BYTE *)(v10 + 6) = v11 | 2;
        v12 = v72;
        if ( (unsigned int)v72 >= HIDWORD(v72) )
        {
          v33 = (unsigned int)(2 * HIDWORD(v72));
          v34 = (char *)sub_186B270(8 * v33);
          v12 = v72;
          v35 = (char *)v71;
          v13 = v34;
          if ( (_DWORD)v72 )
          {
            if ( (unsigned int)(v72 - 1) <= 2 || v34 == (char *)v71 + 8 )
            {
              v53 = 0;
              a6 = 8LL * (unsigned int)v72;
              do
              {
                a5 = *(_QWORD *)&v35[v53];
                v13[v53 / 8] = a5;
                v53 += 8LL;
              }
              while ( v53 != a6 );
            }
            else
            {
              v36 = 0;
              a5 = 16LL * ((unsigned int)v72 >> 1);
              do
              {
                *(__m128i *)&v13[v36 / 8] = _mm_loadu_si128((const __m128i *)&v35[v36]);
                v36 += 16LL;
              }
              while ( v36 != a5 );
              if ( (v12 & 1) != 0 )
              {
                v37 = v12 & 0xFFFFFFFE;
                a5 = *(_QWORD *)&v35[8 * v37];
                v13[v37] = a5;
              }
            }
          }
          if ( v35 != v73 && v35 )
          {
            LODWORD(v63) = (_DWORD)v13;
            sub_186B220(v35);
            v12 = v72;
          }
          v71 = v13;
          HIDWORD(v72) = v33;
        }
        else
        {
          v13 = v71;
        }
        v13[v12] = v10;
        LODWORD(v72) = v12 + 1;
        v14 = v77;
        if ( v77 )
        {
          v15 = *((unsigned int *)v77 - 1);
          if ( (_DWORD)v15 == *((_DWORD *)v77 - 2) )
          {
            v29 = (unsigned int)(3 * v15 + 1) >> 1;
            v30 = 8 * v29 + 8;
            if ( 8 * (int)v15 + 8 >= (unsigned int)v30 || (unsigned int)v15 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v69, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v69);
              sub_233E40((__int64)v69);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (unsigned int *)sub_186B300(v77 - 1, v30);
            v32 = v31[1];
            v14 = v31 + 2;
            *v31 = v29;
            v77 = v14;
            v16 = v32 + 1;
            v14[v32] = v10;
            v31[1] = v32 + 1;
          }
          else
          {
            v16 = v15 + 1;
            v77[v15] = v10;
            *((_DWORD *)v14 - 1) = v15 + 1;
          }
        }
        else
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          v14 = v52 + 1;
          v52[1] = v10;
          v16 = 1;
          LODWORD(a4) = 2;
          v77 = v52 + 1;
          *v52 = 0x100000002LL;
        }
        if ( v16 )
        {
          while ( 1 )
          {
            v17 = (unsigned int)(v16 - 1);
            v18 = v14[v17];
            *((_DWORD *)v14 - 1) = v17;
            if ( *(_WORD *)(v18 + 4) )
              break;
            a4 = *(unsigned int *)(v18 + 24);
            v19 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
            if ( (_DWORD)a4 )
            {
              if ( !v19 || *v19 )
                break;
              v38 = v19[1];
              if ( ((v38 - 6) & 0xFFFFFFFD) == 0 )
                goto LABEL_50;
              if ( ((v38 - 2) & 0xFFFFFFFD) == 0 )
              {
                if ( (unsigned __int8)sub_15D2CB0(v70, *(_QWORD *)(v18 + 40)) )
                {
                  a4 = *(unsigned int *)(v18 + 24);
                  if ( (_DWORD)a4 )
                  {
LABEL_50:
                    v39 = v18;
                    a6 = v18 + 8 * a4;
                    do
                    {
                      a5 = *(_QWORD *)(v39 + 32);
                      v45 = *(_BYTE *)(a5 + 6);
                      if ( (v45 & 2) == 0 )
                      {
                        *(_BYTE *)(a5 + 6) = v45 | 2;
                        v46 = v72;
                        if ( (unsigned int)v72 < HIDWORD(v72) )
                        {
                          v40 = v71;
                        }
                        else
                        {
                          v65 = v39;
                          v47 = (unsigned int)(2 * HIDWORD(v72));
                          v64 = a6;
                          v63 = a5;
                          v48 = (char *)sub_186B270(8 * v47);
                          v46 = v72;
                          v49 = (char *)v71;
                          v40 = v48;
                          a5 = v63;
                          a6 = v64;
                          v39 = v65;
                          if ( (_DWORD)v72 )
                          {
                            if ( (unsigned int)(v72 - 1) <= 2 || v48 == (char *)v71 + 8 )
                            {
                              v59 = 0;
                              v60 = 8LL * (unsigned int)v72;
                              do
                              {
                                v40[v59 / 8] = *(_QWORD *)&v49[v59];
                                v59 += 8LL;
                              }
                              while ( v60 != v59 );
                            }
                            else
                            {
                              v50 = 0;
                              v51 = 16LL * ((unsigned int)v72 >> 1);
                              do
                              {
                                *(__m128i *)&v40[v50 / 8] = _mm_loadu_si128((const __m128i *)&v49[v50]);
                                v50 += 16LL;
                              }
                              while ( v51 != v50 );
                              if ( (v46 & 1) != 0 )
                                v40[v46 & 0xFFFFFFFE] = *(_QWORD *)&v49[8 * (v46 & 0xFFFFFFFE)];
                            }
                          }
                          if ( v49 != v73 && v49 )
                          {
                            v66 = (int)v40;
                            sub_186B220(v49);
                            v46 = v72;
                            v39 = v65;
                            a6 = v64;
                            a5 = v63;
                          }
                          v71 = v40;
                          HIDWORD(v72) = v47;
                        }
                        v40[v46] = a5;
                        LODWORD(v72) = v46 + 1;
                        a4 = (unsigned __int64)v77;
                        if ( v77 )
                        {
                          v41 = *((_DWORD *)v77 - 1);
                          if ( v41 == *((_DWORD *)v77 - 2) )
                          {
                            v54 = (3 * v41 + 1) >> 1;
                            v55 = 8 * v54 + 8;
                            if ( 8 * v41 + 8 >= (unsigned int)v55 || v41 >= v54 )
                            {
                              v6 = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0(v69, "Overflow encountered when expanding vector");
                              *v6 = (char *)off_1C63128;
                              sub_2333C0(v6 + 1, v69);
                              sub_233E40((__int64)v69);
                              __cxa_throw(
                                v6,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v65 = v39;
                            v64 = a6;
                            v63 = a5;
                            v56 = (unsigned int *)sub_186B300(v77 - 1, v55);
                            v57 = v56[1];
                            a4 = (unsigned __int64)(v56 + 2);
                            a5 = v63;
                            *v56 = v54;
                            v77 = (_QWORD *)a4;
                            a6 = v64;
                            LODWORD(v56) = v57;
                            v39 = v65;
                            v44 = (__int64 *)(a4 + 8 * v57);
                            v43 = (_DWORD)v56 + 1;
                          }
                          else
                          {
                            v42 = v41;
                            v43 = v41 + 1;
                            v44 = &v77[v42];
                          }
                        }
                        else
                        {
                          v65 = v39;
                          v64 = a6;
                          v63 = a5;
                          v58 = (_QWORD *)sub_186B270(0x18u);
                          a5 = v63;
                          a6 = v64;
                          *v58 = 2;
                          a4 = (unsigned __int64)(v58 + 1);
                          v39 = v65;
                          v43 = 1;
                          v77 = (_QWORD *)a4;
                          v44 = (__int64 *)a4;
                        }
                        *v44 = a5;
                        *(_DWORD *)(a4 - 4) = v43;
                      }
                      v39 += 8;
                    }
                    while ( a6 != v39 );
                  }
                }
LABEL_15:
                v14 = v77;
                if ( !v77 )
                  goto LABEL_17;
              }
            }
            else if ( v19 && *v19 != -1 )
            {
              break;
            }
            v16 = *((_DWORD *)v14 - 1);
            if ( !v16 )
              goto LABEL_17;
          }
          sub_7E7560(
            (int)v78,
            (int)p_ptr,
            v18,
            a4,
            a5,
            a6,
            v61,
            (int)p_ptr,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69[0],
            (void *)v69[1]);
          goto LABEL_15;
        }
      }
LABEL_17:
      ++v8;
    }
    while ( v8 != v9 );
    if ( v77 )
      sub_186B220(v77 - 1);
    v20 = ptr;
    v21 = ptr == v76 || ptr == nullptr;
    v22 = (char *)ptr + 8 * (unsigned int)v75;
    v23 = (char *)ptr;
    if ( ptr != v22 )
    {
      do
      {
        v24 = *(_QWORD *)v23;
        v23 += 8;
        *(_BYTE *)(v24 + 6) &= ~1u;
      }
      while ( v22 != v23 );
    }
    LODWORD(v75) = 0;
    if ( !v21 )
      sub_186B220(v20);
  }
  v25 = v71;
  v26 = (char *)v71 + 8 * (unsigned int)v72;
  result = (char *)v71;
  if ( v71 != v26 )
  {
    do
    {
      v28 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v28 + 6) &= ~2u;
    }
    while ( v26 != result );
  }
  LODWORD(v72) = 0;
  if ( v25 != v73 )
  {
    if ( v25 )
      return (char *)sub_186B220(v25);
  }
  return result;
}


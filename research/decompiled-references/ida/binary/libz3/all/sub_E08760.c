__int64 __fastcall sub_E08760(__int64 a1, const __m128i *a2, unsigned int a3, _QWORD *a4, __int64 *a5, __int64 *a6)
{
  char **exception; // rbx
  void *v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // r8
  _QWORD *v15; // r15
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r13
  _OWORD *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int8 v25; // al
  bool v26; // dl
  __int64 *v27; // r13
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  _QWORD *v33; // rbx
  _QWORD *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // r12
  __int64 v38; // rbx
  _QWORD *v39; // r13
  __int64 v40; // r15
  _DWORD *v41; // rax
  __int64 v42; // r15
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  _DWORD *v49; // rax
  unsigned int v50; // ecx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rcx
  _DWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rbx
  void *v58; // rdi
  __int64 v59; // rsi
  _QWORD *v60; // r15
  _BYTE *v61; // r12
  __int64 v62; // rax
  int v63; // edx
  __int64 v64; // rsi
  __int64 v65; // rbx
  _BYTE *v66; // rax
  char *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r9
  _QWORD *v73; // [rsp+8h] [rbp-140h]
  __int64 v74; // [rsp+10h] [rbp-138h]
  _QWORD *v75; // [rsp+18h] [rbp-130h]
  __int64 *v76; // [rsp+18h] [rbp-130h]
  __int64 v77; // [rsp+20h] [rbp-128h]
  unsigned int v78; // [rsp+28h] [rbp-120h]
  unsigned int v79; // [rsp+2Ch] [rbp-11Ch]
  __int64 **v80; // [rsp+30h] [rbp-118h]
  __int64 v83; // [rsp+48h] [rbp-100h]
  __int64 v84; // [rsp+50h] [rbp-F8h] BYREF
  void *v85; // [rsp+58h] [rbp-F0h]
  __int64 v86; // [rsp+60h] [rbp-E8h]
  int v87; // [rsp+68h] [rbp-E0h]
  __int64 v88; // [rsp+70h] [rbp-D8h] BYREF
  __int64 *v89; // [rsp+78h] [rbp-D0h]
  void *v90; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+88h] [rbp-C0h]
  _BYTE v92[184]; // [rsp+90h] [rbp-B8h] BYREF

  v10 = (void *)a2->m128i_i64[0];
  v11 = *(_DWORD *)(a1 + 704);
  v90 = v10;
  v12 = sub_DF60C0(*(_QWORD *)(a1 + 696), v11, (unsigned __int64 *)&v90);
  if ( !v12 )
    return 0;
  v13 = *(_QWORD **)(v12 + 16);
  v14 = (_QWORD *)*v13;
  if ( !*v13 || v14 == &v14[2 * *((unsigned int *)v14 - 1)] )
    return 0;
  v80 = *(__int64 ***)(v12 + 16);
  v15 = (_QWORD *)*v13;
  v83 = a3;
  v77 = 8LL * a3;
  v75 = &v14[2 * *((unsigned int *)v14 - 1)];
  v78 = a3;
  v16 = a5;
  do
  {
    v17 = *v15;
    if ( !*v15 )
    {
      if ( v78 )
        goto LABEL_7;
      v33 = (_QWORD *)v16[1];
      if ( v33 )
      {
        v34 = &v33[*((unsigned int *)v33 - 1)];
        if ( v33 < v34 )
          goto LABEL_38;
        *((_DWORD *)v33 - 1) = 0;
      }
LABEL_59:
      v48 = v15[1];
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      sub_DF6300(*a6, a6[1]);
      *a6 = v48;
      return 1;
    }
    do
    {
      if ( *(_DWORD *)(v17 - 4) != v78 )
        break;
      v33 = (_QWORD *)v16[1];
      if ( v33 )
      {
        v34 = &v33[*((unsigned int *)v33 - 1)];
        if ( v33 < v34 )
        {
          do
          {
LABEL_38:
            while ( 1 )
            {
              v35 = *v33;
              if ( *v33 )
              {
                v36 = *v16;
                v31 = (*(_DWORD *)(v35 + 8))-- == 1;
                if ( v31 )
                  break;
              }
              if ( ++v33 >= v34 )
                goto LABEL_41;
            }
            sub_15D7BC0(v36, v35);
            ++v33;
          }
          while ( v33 < v34 );
LABEL_41:
          v33 = (_QWORD *)v16[1];
          if ( !v33 )
            goto LABEL_43;
        }
        *((_DWORD *)v33 - 1) = 0;
      }
LABEL_43:
      if ( !v78 )
        goto LABEL_59;
      v37 = a4;
      v38 = 0;
      v39 = v15;
      while ( 1 )
      {
        v40 = *(_QWORD *)(*v39 + v38);
        if ( v40 == sub_15D1F10(*v37) )
        {
          v42 = *v37;
          if ( *v37 )
            ++*(_DWORD *)(v42 + 8);
          v43 = (_QWORD *)v16[1];
          if ( v43 )
          {
            v44 = *((_DWORD *)v43 - 1);
            if ( v44 == *((_DWORD *)v43 - 2) )
            {
              v50 = (3 * v44 + 1) >> 1;
              v51 = 8 * v50 + 8;
              if ( 8 * v44 + 8 >= (unsigned int)v51 || v44 >= v50 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_DF63A0((__int64 *)&v90, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v90);
                sub_233E40((__int64)&v90);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v79 = (3 * v44 + 1) >> 1;
              v52 = (unsigned int *)sub_186B300(v43 - 1, v51);
              v43 = v52 + 2;
              *v52 = v79;
              v53 = v52[1];
              v16[1] = (__int64)(v52 + 2);
              LODWORD(v52) = v53;
              v47 = &v43[v53];
              v46 = (_DWORD)v52 + 1;
            }
            else
            {
              v45 = v44;
              v46 = v44 + 1;
              v47 = &v43[v45];
            }
          }
          else
          {
            v56 = (_QWORD *)sub_186B270(0x18u);
            v43 = v56 + 1;
            *v56 = 2;
            v47 = v43;
            v46 = 1;
            v16[1] = (__int64)v43;
          }
          *v47 = v42;
          *((_DWORD *)v43 - 1) = v46;
          goto LABEL_57;
        }
        sub_DFBCB0(a1);
        sub_16669D0(&v90, *(_QWORD *)(a1 + 296));
        v41 = *(_DWORD **)(*(_QWORD *)(*v39 + v38) + 24LL);
        if ( !v41 || *v41 != 5 )
          break;
        if ( v41[1] )
          goto LABEL_64;
        v54 = *(_DWORD **)(sub_15D1F10(*v37) + 24);
        if ( !v54 || *v54 != 5 || v54[1] != 1 )
        {
          v41 = *(_DWORD **)(*(_QWORD *)(*v39 + v38) + 24LL);
          if ( !v41 || *v41 != 5 )
            break;
LABEL_64:
          if ( v41[1] != 1 )
            break;
          v49 = *(_DWORD **)(sub_15D1F10(*v37) + 24);
          if ( !v49 || *v49 != 5 || v49[1] )
            break;
        }
        v55 = sub_15E1A70((int)v90);
        v84 = v55;
        if ( v55 )
          ++*(_DWORD *)(v55 + 8);
        sub_DFA620(v16 + 1, &v84);
LABEL_57:
        v38 += 8;
        ++v37;
        if ( v77 == v38 )
        {
          v15 = v39;
          goto LABEL_59;
        }
      }
      v15 = v39 + 2;
      if ( v75 == v39 + 2 )
        goto LABEL_8;
      v17 = *v15;
    }
    while ( *v15 );
LABEL_7:
    v15 += 2;
  }
  while ( v75 != v15 );
LABEL_8:
  v18 = *v80;
  if ( *v80 )
  {
    v76 = &v18[2 * *((unsigned int *)v18 - 1)];
    if ( v18 != v76 )
    {
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 )
          break;
        v20 = 0;
LABEL_14:
        if ( v78 == v20 )
        {
          sub_DFBCB0(a1);
          v84 = *(_QWORD *)(a1 + 296);
          v21 = v84;
          v22 = (_OWORD *)sub_186B270(0x80u);
          v86 = 8;
          v85 = v22;
          v87 = 0;
          v88 = v21;
          v89 = nullptr;
          *v22 = 0;
          v22[1] = 0;
          v22[2] = 0;
          v22[3] = 0;
          v22[4] = 0;
          v22[5] = 0;
          v22[6] = 0;
          v22[7] = 0;
          if ( !v78 )
            goto LABEL_83;
          v23 = 0;
          do
          {
            v24 = sub_15D1F10(a4[v23]);
            v25 = sub_1616440(&v84, *(_QWORD *)(*v18 + 8 * v23), v24);
            v26 = (int)v23++ + 1 < v78;
          }
          while ( (v25 & v26) != 0 );
          if ( v25 )
          {
LABEL_83:
            v57 = v18[1];
            if ( v57 )
              ++*(_DWORD *)(v57 + 8);
            sub_DF6300(*a6, a6[1]);
            *a6 = v57;
            sub_1617230(&v90, &v84, v57);
            v58 = (void *)*a6;
            v59 = v91;
            *a6 = (__int64)v90;
            v90 = v58;
            sub_DF6300((__int64)v58, v59);
            v90 = v92;
            v91 = 0x1000000000LL;
            if ( v78 )
            {
              v60 = a4;
              v73 = &a4[v83];
              do
              {
                v62 = sub_15D1F10(*v60);
                v63 = v91;
                v64 = v62;
                if ( (unsigned int)v91 < HIDWORD(v91) )
                {
                  v61 = v90;
                }
                else
                {
                  v74 = v62;
                  v65 = (unsigned int)(2 * HIDWORD(v91));
                  v66 = (_BYTE *)sub_186B270(8 * v65);
                  v63 = v91;
                  v67 = (char *)v90;
                  v61 = v66;
                  v64 = v74;
                  if ( (_DWORD)v91 )
                  {
                    if ( (unsigned int)(v91 - 1) <= 2 || v66 == (char *)v90 + 8 )
                    {
                      v70 = 0;
                      v71 = 8LL * (unsigned int)v91;
                      do
                      {
                        *(_QWORD *)&v61[v70] = *(_QWORD *)&v67[v70];
                        v70 += 8;
                      }
                      while ( v70 != v71 );
                    }
                    else
                    {
                      v68 = 0;
                      v69 = 16LL * ((unsigned int)v91 >> 1);
                      do
                      {
                        *(__m128i *)&v61[v68] = _mm_loadu_si128((const __m128i *)&v67[v68]);
                        v68 += 16;
                      }
                      while ( v68 != v69 );
                      if ( (v63 & 1) != 0 )
                        *(_QWORD *)&v61[8 * (v63 & 0xFFFFFFFE)] = *(_QWORD *)&v67[8 * (v63 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v67 != v92 && v67 )
                  {
                    sub_186B220(v67);
                    v63 = v91;
                  }
                  v90 = v61;
                  HIDWORD(v91) = v65;
                }
                ++v60;
                *(_QWORD *)&v61[8 * v63] = v64;
                LODWORD(v91) = v63 + 1;
              }
              while ( v60 != v73 );
            }
            else
            {
              v61 = v92;
            }
            sub_E07B50(a1, a2, v78, (__int64)v61, *a6);
            if ( v90 && v90 != v92 )
              sub_186B220(v90);
            sub_24E680(&v88);
            if ( v85 )
              sub_186B220(v85);
            return 1;
          }
          v27 = v89;
          if ( v89 )
          {
            v28 = (unsigned __int64)&v89[*((unsigned int *)v89 - 1)];
            if ( (unsigned __int64)v89 >= v28 )
              goto LABEL_27;
            do
            {
              while ( 1 )
              {
                v29 = *v27;
                if ( *v27 )
                {
                  v30 = v88;
                  v31 = (*(_DWORD *)(v29 + 8))-- == 1;
                  if ( v31 )
                    break;
                }
                if ( (unsigned __int64)++v27 >= v28 )
                  goto LABEL_26;
              }
              sub_15D7BC0(v30, v29);
              ++v27;
            }
            while ( (unsigned __int64)v27 < v28 );
LABEL_26:
            v27 = v89;
            if ( v89 )
LABEL_27:
              sub_186B220(v27 - 1);
          }
          if ( v85 )
            sub_186B220(v85);
          v18 += 2;
          if ( v76 == v18 )
            return 0;
          v19 = *v18;
          if ( *v18 )
            break;
          v18 += 2;
          if ( v76 == v18 )
            return 0;
        }
        else
        {
          v18 += 2;
          if ( v76 == v18 )
            return 0;
        }
      }
      v20 = *(_DWORD *)(v19 - 4);
      goto LABEL_14;
    }
  }
  return 0;
}


__int64 __fastcall sub_63FC70(
        __int64 *a1,
        __int64 *a2,
        const char *a3,
        char *a4,
        int a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  char *v15; // r12
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  double v24; // xmm4_8
  double v25; // xmm5_8
  char *v26; // rdi
  __int64 v27; // r12
  __int64 v28; // r15
  char *v29; // rbx
  void *v30; // rdi
  void *v31; // rdi
  _QWORD *v32; // rbx
  void *v33; // rdi
  char *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r14
  char *v37; // rax
  void *v38; // rdi
  unsigned int v39; // ebx
  unsigned int v41; // edx
  __int64 v42; // [rsp-10h] [rbp-190h]
  __int64 v43; // [rsp-8h] [rbp-188h]
  __int64 v44; // [rsp+0h] [rbp-180h]
  int v45; // [rsp+8h] [rbp-178h]
  int v46; // [rsp+10h] [rbp-170h]
  int v47; // [rsp+18h] [rbp-168h]
  void *v48; // [rsp+18h] [rbp-168h]
  int v49; // [rsp+20h] [rbp-160h]
  void *v50; // [rsp+20h] [rbp-160h]
  int v51; // [rsp+28h] [rbp-158h]
  void *v52; // [rsp+28h] [rbp-158h]
  int v53; // [rsp+30h] [rbp-150h]
  void *v54; // [rsp+30h] [rbp-150h]
  int v55; // [rsp+38h] [rbp-148h]
  __int64 *v56; // [rsp+40h] [rbp-140h]
  int v57; // [rsp+48h] [rbp-138h]
  int v58; // [rsp+4Ch] [rbp-134h]
  unsigned int v59; // [rsp+54h] [rbp-12Ch] BYREF
  unsigned __int8 v60[4]; // [rsp+58h] [rbp-128h] BYREF
  int v61; // [rsp+5Ch] [rbp-124h] BYREF
  const char *v62; // [rsp+60h] [rbp-120h] BYREF
  __int64 v63; // [rsp+68h] [rbp-118h] BYREF
  __int64 v64; // [rsp+70h] [rbp-110h] BYREF
  __int64 v65; // [rsp+78h] [rbp-108h] BYREF
  void *ptr; // [rsp+80h] [rbp-100h] BYREF
  __int128 v67; // [rsp+88h] [rbp-F8h]
  void *v68; // [rsp+A0h] [rbp-E0h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-D8h]
  int v70; // [rsp+B8h] [rbp-C8h]
  __int16 v71; // [rsp+BCh] [rbp-C4h]
  char v72; // [rsp+BEh] [rbp-C2h]
  void *v73; // [rsp+C0h] [rbp-C0h]
  __int128 v74; // [rsp+C8h] [rbp-B8h]
  void *s; // [rsp+D8h] [rbp-A8h]
  __int64 v76; // [rsp+E0h] [rbp-A0h]
  void *v77; // [rsp+E8h] [rbp-98h]
  __int64 v78; // [rsp+F0h] [rbp-90h]
  int v79; // [rsp+F8h] [rbp-88h]
  __int64 v80; // [rsp+100h] [rbp-80h]
  void *v81[2]; // [rsp+108h] [rbp-78h] BYREF
  __int128 v82; // [rsp+118h] [rbp-68h]
  void *v83; // [rsp+128h] [rbp-58h]
  __int128 v84; // [rsp+130h] [rbp-50h]
  unsigned __int64 v85; // [rsp+148h] [rbp-38h]

  v15 = a4;
  v16 = a2;
  v58 = a5;
  v85 = __readfsqword(0x28u);
  if ( !a2 )
    v16 = (__int64 *)a1[1];
  if ( !a3 )
    return (unsigned int)-5;
  v59 = -1;
  if ( a4 )
  {
    if ( (a5 & 1) == 0 )
    {
      v17 = v16[7];
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_6932A0(a1, a4, &v59) )
    {
      if ( v59 != -1 )
        goto LABEL_8;
      v17 = v16[8];
      goto LABEL_7;
    }
  }
  else if ( (a5 & 1) == 0 )
  {
    return (unsigned int)-5;
  }
  v17 = v16[8];
  if ( !v17 || (*(_BYTE *)(v17 + 8) & 2) == 0 )
    return (unsigned int)-5;
  v41 = v59;
  if ( v59 != -1 )
  {
    if ( v59 )
      v41 = sub_62E830((__int64)a1, (__int64)v16, v59);
    v59 = v41;
    goto LABEL_8;
  }
  if ( !v15 )
    goto LABEL_8;
LABEL_7:
  if ( sub_631E40(v17, v15, v58) )
    return (unsigned int)-6;
LABEL_8:
  v18 = (__int64)v16;
  if ( (unsigned int)sub_632230(
                       (__int64)a1,
                       (__int64)v16,
                       a3,
                       v58 & 0xFFFFFFFD,
                       &v62,
                       (unsigned __int64)&v63,
                       (unsigned __int64)&v64,
                       (unsigned __int64)&v65,
                       (unsigned __int64)v60,
                       (unsigned int *)&v61) != 1 )
    return (unsigned int)-7;
  if ( v59 != -1 && v59 != v61 )
    return (unsigned int)-5;
  ptr = nullptr;
  v67 = 0;
  if ( (v58 & 8) != 0 )
  {
    v23 = sub_6319C0((__int64)&ptr, (__int64)v16, (__int64)v15, (__int64)v62, 1u, 0, nullptr);
    v20 = v42;
    v18 = v43;
    if ( !v23 )
      goto LABEL_59;
    v15 = (char *)haystack;
    if ( (_QWORD)v67 )
      v15 = (char *)ptr;
    v58 &= ~8u;
  }
  if ( (unsigned __int8)is_valid_typename(
                          v15,
                          v18,
                          v19,
                          v20,
                          v21,
                          v22,
                          v44,
                          v45,
                          v46,
                          v47,
                          v49,
                          v51,
                          v53,
                          v55,
                          (__int64)&v61) )
  {
    v68 = nullptr;
    s = v81;
    v70 = -1;
    *(_OWORD *)v81 = 0;
    v71 = 0;
    v72 = 0;
    v73 = nullptr;
    v76 = 1;
    v77 = nullptr;
    v78 = 0;
    v79 = 1065353216;
    v80 = 0;
    v83 = nullptr;
    v69 = 0;
    v74 = 0;
    v82 = 0;
    v84 = 0;
    if ( (v58 & 1) != 0 )
      sub_6A6710(a1, v16, &v68, a3, -1, 0);
    v52 = (void *)qstrdup(v62);
    v50 = (void *)qstrdup(v63);
    v54 = (void *)qstrdup(v64);
    v48 = (void *)qstrdup(v65);
    v57 = v58 | 4;
    if ( (v58 & 1) != 0 || !(unsigned __int8)sub_63B3D0((__int64)a1, (__int64)v16, a3, nullptr, 0.0, a7) )
      sub_633EC0(a1, (__int64)v16, a3, v57, nullptr);
    sub_69EB80(a1, v16, &v68, v15);
    if ( v15 )
    {
      if ( !(unsigned int)sub_63C350(
                            a1,
                            v16,
                            v15,
                            v57,
                            (char *)v52,
                            (char *)v50,
                            0.0,
                            a7,
                            (char *)v54,
                            (char *)v48,
                            v60,
                            v56,
                            nullptr,
                            0,
                            (__int64)&v68) )
      {
        sub_396090(0x59u, (unsigned int)v61, a3, v15);
LABEL_24:
        qfree(v52);
        qfree(v50);
        qfree(v54);
        qfree(v48);
        v26 = (char *)v83;
        if ( v83 )
        {
          v27 = v84;
          if ( (_QWORD)v84 )
          {
            v28 = 0;
            do
            {
              v29 = &v26[128 * v28];
              clear_tinfo_t(v29 + 64);
              v30 = *((void **)v29 + 5);
              if ( v30 )
              {
                *((_QWORD *)v29 + 6) = 0;
                qfree(v30);
              }
              v31 = *((void **)v29 + 2);
              if ( v31 )
              {
                *((_QWORD *)v29 + 3) = 0;
                qfree(v31);
              }
              v26 = (char *)v83;
              ++v28;
            }
            while ( v27 != v28 );
          }
          *(_QWORD *)&v84 = 0;
          qfree(v26);
        }
        if ( v81[1] )
        {
          *(_QWORD *)&v82 = 0;
          qfree(v81[1]);
        }
        v32 = v77;
        if ( v77 )
        {
          do
          {
            v33 = v32;
            v32 = (_QWORD *)*v32;
            operator delete(v33, 0x20u);
          }
          while ( v32 );
        }
        memset(s, 0, 8 * v76);
        v78 = 0;
        v77 = nullptr;
        if ( s != v81 )
          operator delete(s, 8 * v76);
        v34 = (char *)v73;
        if ( v73 )
        {
          if ( (_QWORD)v74 )
          {
            v35 = 0;
            v36 = v74;
            do
            {
              v37 = &v34[32 * v35];
              v38 = *(void **)v37;
              if ( *(_QWORD *)v37 )
              {
                *((_QWORD *)v37 + 1) = 0;
                qfree(v38);
                v34 = (char *)v73;
              }
              ++v35;
            }
            while ( v36 != v35 );
          }
          *(_QWORD *)&v74 = 0;
          qfree(v34);
        }
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree(v68);
        }
        v39 = 0;
        goto LABEL_49;
      }
      if ( !under_debugger )
        interr(141);
    }
    else
    {
      if ( !(unsigned int)sub_63E120(
                            a1,
                            (__int64)v16,
                            v61,
                            v58,
                            nullptr,
                            (char *)v52,
                            0.0,
                            a7,
                            a8,
                            a9,
                            v24,
                            v25,
                            a12,
                            a13,
                            (char *)v50,
                            (char *)v54,
                            (char *)v48,
                            v60,
                            nullptr,
                            0) )
        goto LABEL_24;
      if ( !under_debugger )
        interr(142);
    }
    BUG();
  }
LABEL_59:
  v39 = -10;
LABEL_49:
  if ( ptr )
    qfree(ptr);
  return v39;
}


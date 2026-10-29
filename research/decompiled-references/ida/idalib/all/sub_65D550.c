__int64 __fastcall sub_65D550(
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
  double v18; // xmm4_8
  double v19; // xmm5_8
  char *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // r15
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  _QWORD *v26; // rbx
  void *v27; // rdi
  char *v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r14
  char *v31; // rax
  void *v32; // rdi
  unsigned int v33; // ebx
  unsigned int v35; // edx
  __int64 v36; // [rsp+0h] [rbp-180h]
  int v37; // [rsp+8h] [rbp-178h]
  int v38; // [rsp+10h] [rbp-170h]
  int v39; // [rsp+18h] [rbp-168h]
  void *v40; // [rsp+18h] [rbp-168h]
  int v41; // [rsp+20h] [rbp-160h]
  void *v42; // [rsp+20h] [rbp-160h]
  int v43; // [rsp+28h] [rbp-158h]
  void *v44; // [rsp+28h] [rbp-158h]
  int v45; // [rsp+30h] [rbp-150h]
  void *v46; // [rsp+30h] [rbp-150h]
  int v47; // [rsp+38h] [rbp-148h]
  __int64 *v48; // [rsp+40h] [rbp-140h]
  int v49; // [rsp+48h] [rbp-138h]
  int v50; // [rsp+4Ch] [rbp-134h]
  unsigned int v51; // [rsp+54h] [rbp-12Ch] BYREF
  unsigned __int8 v52[4]; // [rsp+58h] [rbp-128h] BYREF
  int v53; // [rsp+5Ch] [rbp-124h] BYREF
  const char *v54; // [rsp+60h] [rbp-120h] BYREF
  __int64 v55; // [rsp+68h] [rbp-118h] BYREF
  __int64 v56; // [rsp+70h] [rbp-110h] BYREF
  __int64 v57; // [rsp+78h] [rbp-108h] BYREF
  void *ptr; // [rsp+80h] [rbp-100h] BYREF
  __int128 v59; // [rsp+88h] [rbp-F8h]
  void *v60; // [rsp+A0h] [rbp-E0h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-D8h]
  __int64 v62; // [rsp+B8h] [rbp-C8h]
  __int16 v63; // [rsp+C0h] [rbp-C0h]
  char v64; // [rsp+C2h] [rbp-BEh]
  void *v65; // [rsp+C8h] [rbp-B8h]
  __int128 v66; // [rsp+D0h] [rbp-B0h]
  void *s; // [rsp+E0h] [rbp-A0h]
  __int64 v68; // [rsp+E8h] [rbp-98h]
  void *v69; // [rsp+F0h] [rbp-90h]
  __int64 v70; // [rsp+F8h] [rbp-88h]
  int v71; // [rsp+100h] [rbp-80h]
  __int64 v72; // [rsp+108h] [rbp-78h]
  void *v73[2]; // [rsp+110h] [rbp-70h] BYREF
  __int128 v74; // [rsp+120h] [rbp-60h]
  void *v75; // [rsp+130h] [rbp-50h]
  __int128 v76; // [rsp+138h] [rbp-48h]
  unsigned __int64 v77; // [rsp+148h] [rbp-38h]

  v15 = a4;
  v16 = a2;
  v50 = a5;
  v77 = __readfsqword(0x28u);
  if ( !a2 )
    v16 = (__int64 *)a1[1];
  if ( !a3 )
    return (unsigned int)-5;
  v51 = -1;
  if ( a4 )
  {
    if ( (a5 & 1) == 0 )
    {
      v17 = v16[7];
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_6B3A20(a1, a4, &v51) )
    {
      if ( v51 != -1 )
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
  v35 = v51;
  if ( v51 != -1 )
  {
    if ( v51 )
      v35 = sub_64BE30((__int64)a1, (__int64)v16, v51);
    v51 = v35;
    goto LABEL_8;
  }
  if ( !v15 )
    goto LABEL_8;
LABEL_7:
  if ( sub_64F440(v17, v15, v50) )
    return (unsigned int)-6;
LABEL_8:
  if ( (unsigned int)sub_64F830(
                       (__int64)a1,
                       (__int64)v16,
                       a3,
                       v50 & 0xFFFFFFFD,
                       &v54,
                       (unsigned __int64)&v55,
                       (unsigned __int64)&v56,
                       (unsigned __int64)&v57,
                       (unsigned __int64)v52,
                       (unsigned int *)&v53) != 1 )
    return (unsigned int)-7;
  if ( v51 != -1 && v51 != v53 )
    return (unsigned int)-5;
  ptr = nullptr;
  v59 = 0;
  if ( (v50 & 8) != 0 )
  {
    if ( !(unsigned __int8)sub_64EFC0((__int64)&ptr, (__int64)v16, (__int64)v15, (__int64)v54, 1u, 0, nullptr) )
      goto LABEL_59;
    v15 = (char *)haystack;
    if ( (_QWORD)v59 )
      v15 = (char *)ptr;
    v50 &= ~8u;
  }
  if ( (unsigned __int8)is_valid_typename(v15, v36, v37, v38, v39, v41, v43, v45, v47, (__int64)&v53) )
  {
    v60 = nullptr;
    s = v73;
    v62 = -1;
    *(_OWORD *)v73 = 0;
    v63 = 0;
    v64 = 0;
    v65 = nullptr;
    v68 = 1;
    v69 = nullptr;
    v70 = 0;
    v71 = 1065353216;
    v72 = 0;
    v75 = nullptr;
    v61 = 0;
    v66 = 0;
    v74 = 0;
    v76 = 0;
    if ( (v50 & 1) != 0 )
      sub_6C7610(a1, v16, &v60, a3, -1, 0);
    v44 = (void *)qstrdup(v54);
    v42 = (void *)qstrdup(v55);
    v46 = (void *)qstrdup(v56);
    v40 = (void *)qstrdup(v57);
    v49 = v50 | 4;
    if ( (v50 & 1) != 0 || !(unsigned __int8)sub_658BB0((__int64)a1, (__int64)v16, a3, nullptr, 0.0, a7) )
      sub_6514C0(a1, (__int64)v16, a3, v49, nullptr);
    sub_6BF670(a1, v16, &v60, v15);
    if ( v15 )
    {
      if ( !(unsigned int)sub_659B40(
                            a1,
                            v16,
                            v15,
                            v49,
                            (char *)v44,
                            (char *)v42,
                            0.0,
                            a7,
                            (char *)v46,
                            (char *)v40,
                            v52,
                            v48,
                            nullptr,
                            0,
                            (__int64)&v60) )
      {
        sub_39ADA0(0x59u, (unsigned int)v53, a3, v15);
LABEL_24:
        qfree(v44);
        qfree(v42);
        qfree(v46);
        qfree(v40);
        v20 = (char *)v75;
        if ( v75 )
        {
          v21 = v76;
          if ( (_QWORD)v76 )
          {
            v22 = 0;
            do
            {
              v23 = &v20[144 * v22];
              clear_tinfo_t(v23 + 64);
              v24 = *((void **)v23 + 5);
              if ( v24 )
              {
                *((_QWORD *)v23 + 6) = 0;
                qfree(v24);
              }
              v25 = *((void **)v23 + 2);
              if ( v25 )
              {
                *((_QWORD *)v23 + 3) = 0;
                qfree(v25);
              }
              v20 = (char *)v75;
              ++v22;
            }
            while ( v21 != v22 );
          }
          *(_QWORD *)&v76 = 0;
          qfree(v20);
        }
        if ( v73[1] )
        {
          *(_QWORD *)&v74 = 0;
          qfree(v73[1]);
        }
        v26 = v69;
        if ( v69 )
        {
          do
          {
            v27 = v26;
            v26 = (_QWORD *)*v26;
            operator delete(v27, 0x20u);
          }
          while ( v26 );
        }
        memset(s, 0, 8 * v68);
        v70 = 0;
        v69 = nullptr;
        if ( s != v73 )
          operator delete(s, 8 * v68);
        v28 = (char *)v65;
        if ( v65 )
        {
          if ( (_QWORD)v66 )
          {
            v29 = 0;
            v30 = v66;
            do
            {
              v31 = &v28[32 * v29];
              v32 = *(void **)v31;
              if ( *(_QWORD *)v31 )
              {
                *((_QWORD *)v31 + 1) = 0;
                qfree(v32);
                v28 = (char *)v65;
              }
              ++v29;
            }
            while ( v30 != v29 );
          }
          *(_QWORD *)&v66 = 0;
          qfree(v28);
        }
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60);
        }
        v33 = 0;
        goto LABEL_49;
      }
      if ( !under_debugger )
        interr(141);
    }
    else
    {
      if ( !(unsigned int)sub_65B9E0(
                            a1,
                            (__int64)v16,
                            v53,
                            v50,
                            nullptr,
                            (char *)v44,
                            0.0,
                            a7,
                            a8,
                            a9,
                            v18,
                            v19,
                            a12,
                            a13,
                            (char *)v42,
                            (char *)v46,
                            (char *)v40,
                            v52,
                            nullptr,
                            0) )
        goto LABEL_24;
      if ( !under_debugger )
        interr(142);
    }
    BUG();
  }
LABEL_59:
  v33 = -10;
LABEL_49:
  if ( ptr )
    qfree(ptr);
  return v33;
}

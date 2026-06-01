void __fastcall sub_2288C30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  bool v10; // cc
  __int64 v11; // rax
  __int64 *v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 *v14; // r12
  const char *v15; // r13
  size_t v16; // r15
  unsigned __int64 v17; // rdx
  const char *v18; // rax
  unsigned __int8 *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  size_t v26; // r8
  const void *v27; // rax
  size_t v28; // r13
  unsigned __int64 v29; // rdx
  const char *v30; // r9
  __int64 v31; // rax
  const char *v32; // rdx
  const char *v33; // r10
  unsigned __int64 v34; // rdx
  const char **v35; // rax
  const char *v36; // r9
  __int64 v37; // rax
  const char *v38; // rdx
  const char *v39; // r10
  unsigned __int64 v40; // rdx
  const char **v41; // rax
  const char *v42; // r9
  __int64 v43; // rax
  const char *v44; // rdx
  const char *v45; // r10
  unsigned __int64 v46; // rdx
  const char **v47; // rax
  const char *v48; // r9
  __int64 v49; // rax
  const char *v50; // rdx
  const char *v51; // r10
  unsigned __int64 v52; // rdx
  const char **v53; // rax
  const char *v54; // [rsp+0h] [rbp-2D8h]
  const char *v55; // [rsp+0h] [rbp-2D8h]
  const char *v56; // [rsp+0h] [rbp-2D8h]
  const char *v57; // [rsp+0h] [rbp-2D8h]
  const char *v58; // [rsp+8h] [rbp-2D0h]
  const char *v59; // [rsp+8h] [rbp-2D0h]
  const char *v60; // [rsp+8h] [rbp-2D0h]
  const char *v61; // [rsp+8h] [rbp-2D0h]
  const void *v62; // [rsp+48h] [rbp-290h]
  const char *v63[4]; // [rsp+50h] [rbp-288h] BYREF
  __int16 v64; // [rsp+70h] [rbp-268h]
  _BYTE *v65; // [rsp+90h] [rbp-248h]
  unsigned __int64 v66; // [rsp+98h] [rbp-240h]
  void *v67; // [rsp+B0h] [rbp-228h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-220h]
  _BYTE v69[40]; // [rsp+C8h] [rbp-210h] BYREF
  void *v70; // [rsp+F0h] [rbp-1E8h] BYREF
  __m128i v71; // [rsp+F8h] [rbp-1E0h]
  _BYTE v72[40]; // [rsp+108h] [rbp-1D0h] BYREF
  void *v73; // [rsp+130h] [rbp-1A8h] BYREF
  __m128i v74; // [rsp+138h] [rbp-1A0h]
  _BYTE v75[40]; // [rsp+148h] [rbp-190h] BYREF
  void *v76; // [rsp+170h] [rbp-168h] BYREF
  __m128i v77; // [rsp+178h] [rbp-160h]
  _BYTE v78[40]; // [rsp+188h] [rbp-150h] BYREF
  __int64 *v79; // [rsp+1B0h] [rbp-128h] BYREF
  __int64 v80; // [rsp+1B8h] [rbp-120h]
  _BYTE v81[64]; // [rsp+1C0h] [rbp-118h] BYREF
  void *ptr; // [rsp+200h] [rbp-D8h] BYREF
  __m128i v83; // [rsp+208h] [rbp-D0h]
  _BYTE v84[192]; // [rsp+218h] [rbp-C0h] BYREF

  v67 = v69;
  v70 = v72;
  v73 = v75;
  v76 = v78;
  v80 = 0x400000000LL;
  v9 = 0;
  v10 = *(_BYTE *)(a2 + 32) <= 1u;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v71 = si128;
  v74 = si128;
  v77 = si128;
  v79 = (__int64 *)v81;
  if ( !v10 )
  {
    v48 = sub_116C3C0((const char **)a2, (__int64)&v67);
    v49 = (unsigned int)v80;
    v51 = v50;
    v52 = (unsigned int)v80 + 1LL;
    if ( v52 > HIDWORD(v80) )
    {
      v54 = v48;
      v58 = v51;
      sub_2237220((__int64)&v79, v81, v52, 16);
      v49 = (unsigned int)v80;
      v48 = v54;
      v51 = v58;
    }
    v53 = (const char **)&v79[2 * v49];
    *v53 = v48;
    v53[1] = v51;
    v9 = (unsigned int)(v80 + 1);
    LODWORD(v80) = v80 + 1;
  }
  if ( *(_BYTE *)(a3 + 32) > 1u )
  {
    v42 = sub_116C3C0((const char **)a3, (__int64)&v70);
    v43 = (unsigned int)v80;
    v45 = v44;
    v46 = (unsigned int)v80 + 1LL;
    if ( v46 > HIDWORD(v80) )
    {
      v56 = v42;
      v60 = v45;
      sub_2237220((__int64)&v79, v81, v46, 16);
      v43 = (unsigned int)v80;
      v42 = v56;
      v45 = v60;
    }
    v47 = (const char **)&v79[2 * v43];
    *v47 = v42;
    v47[1] = v45;
    v9 = (unsigned int)(v80 + 1);
    LODWORD(v80) = v80 + 1;
  }
  if ( *(_BYTE *)(a4 + 32) > 1u )
  {
    v36 = sub_116C3C0((const char **)a4, (__int64)&v73);
    v37 = (unsigned int)v80;
    v39 = v38;
    v40 = (unsigned int)v80 + 1LL;
    if ( v40 > HIDWORD(v80) )
    {
      v55 = v36;
      v59 = v39;
      sub_2237220((__int64)&v79, v81, v40, 16);
      v37 = (unsigned int)v80;
      v36 = v55;
      v39 = v59;
    }
    v41 = (const char **)&v79[2 * v37];
    *v41 = v36;
    v41[1] = v39;
    v9 = (unsigned int)(v80 + 1);
    LODWORD(v80) = v80 + 1;
  }
  if ( *(_BYTE *)(a5 + 32) > 1u )
  {
    v30 = sub_116C3C0((const char **)a5, (__int64)&v76);
    v31 = (unsigned int)v80;
    v33 = v32;
    v34 = (unsigned int)v80 + 1LL;
    if ( v34 > HIDWORD(v80) )
    {
      v57 = v30;
      v61 = v33;
      sub_2237220((__int64)&v79, v81, v34, 16);
      v31 = (unsigned int)v80;
      v30 = v57;
      v33 = v61;
    }
    v35 = (const char **)&v79[2 * v31];
    *v35 = v30;
    v35[1] = v33;
    v9 = (unsigned int)(v80 + 1);
    LODWORD(v80) = v80 + 1;
  }
  v11 = 2 * v9;
  v12 = &v79[v11];
  if ( v79 != &v79[v11] )
  {
    v13 = a1[1];
    v14 = v79;
    while ( 1 )
    {
      if ( !v13 )
      {
        v15 = (const char *)*v14;
        goto LABEL_17;
      }
      if ( *(_BYTE *)(*a1 + v13 - 1) != 47 )
      {
        v15 = (const char *)*v14;
        if ( v14[1] && *v15 == 47 )
          goto LABEL_10;
        v63[0] = (const char *)*v14;
        v64 = 261;
        v18 = (const char *)v14[1];
        ptr = v84;
        v83 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        v63[1] = v18;
        v19 = (unsigned __int8 *)sub_116C3C0(v63, (__int64)&ptr);
        v21 = v20;
        v65 = (_BYTE *)sub_2288A70(v19, v20, 0);
        v66 = v22;
        if ( v21 && v22 > 2 && *v65 == 47 && v65[1] == 47 )
        {
          if ( ptr != v84 )
            free(ptr);
          v13 = a1[1];
          v15 = (const char *)*v14;
LABEL_10:
          v16 = v14[1];
          v17 = v16 + v13;
          if ( v16 + v13 <= a1[2] )
          {
LABEL_11:
            if ( v16 )
            {
              memcpy((void *)(*a1 + v13), v15, v16);
              v13 = a1[1];
            }
            v13 += v16;
            goto LABEL_14;
          }
LABEL_18:
          sub_2236E10((__int64)a1, a1 + 3, v17, 1);
          v13 = a1[1];
          goto LABEL_11;
        }
        if ( ptr != v84 )
          free(ptr);
        v23 = a1[1];
        if ( (unsigned __int64)(v23 + 1) > a1[2] )
        {
          sub_2236E10((__int64)a1, a1 + 3, v23 + 1, 1);
          v23 = a1[1];
        }
        *(_BYTE *)(*a1 + v23) = 47;
        v15 = (const char *)*v14;
        v13 = a1[1] + 1LL;
        a1[1] = v13;
LABEL_17:
        v16 = v14[1];
        v17 = v16 + v13;
        if ( v16 + v13 <= a1[2] )
          goto LABEL_11;
        goto LABEL_18;
      }
      v24 = sub_2246FB0(v14, (unsigned __int8 *)"/", 1, 0);
      v25 = v14[1];
      if ( v24 > v25 )
        break;
      v13 = a1[1];
      v26 = v25 - v24;
      v27 = (const void *)(*v14 + v24);
      v28 = v26;
      v29 = v26 + v13;
      if ( v26 + v13 > a1[2] )
        goto LABEL_45;
      if ( v26 )
        goto LABEL_42;
LABEL_14:
      v14 += 2;
      a1[1] = v13;
      if ( v12 == v14 )
      {
        v12 = v79;
        goto LABEL_28;
      }
    }
    v13 = a1[1];
    if ( a1[2] >= v13 )
      goto LABEL_14;
    v27 = (const void *)(v25 + *v14);
    v29 = a1[1];
    v28 = 0;
LABEL_45:
    v62 = v27;
    sub_2236E10((__int64)a1, a1 + 3, v29, 1);
    v13 = a1[1];
    v27 = v62;
    if ( !v28 )
      goto LABEL_14;
LABEL_42:
    memcpy((void *)(*a1 + v13), v27, v28);
    v13 = v28 + a1[1];
    goto LABEL_14;
  }
LABEL_28:
  if ( v12 != (__int64 *)v81 )
    free(v12);
  if ( v76 != v78 )
    free(v76);
  if ( v73 != v75 )
    free(v73);
  if ( v70 != v72 )
    free(v70);
  if ( v67 != v69 )
    free(v67);
}

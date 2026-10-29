void __fastcall sub_2289D90(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  bool v11; // cc
  _BYTE *v12; // r8
  __int64 v13; // rax
  __int64 *v14; // r13
  char v15; // al
  __int64 *v16; // r15
  unsigned __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v19; // rbx
  unsigned __int8 *v20; // r12
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  char *v24; // rbx
  size_t v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  size_t v28; // rbx
  const void *v29; // r12
  unsigned __int64 v30; // rdx
  const char *v31; // r13
  __int64 v32; // rax
  const char *v33; // rdx
  const char *v34; // r14
  unsigned __int64 v35; // rdx
  const char **v36; // rax
  const char *v37; // r9
  __int64 v38; // rax
  const char *v39; // rdx
  const char *v40; // r10
  unsigned __int64 v41; // rdx
  const char **v42; // rax
  const char *v43; // r9
  __int64 v44; // rax
  const char *v45; // rdx
  const char *v46; // r10
  unsigned __int64 v47; // rdx
  const char **v48; // rax
  const char *v49; // r9
  __int64 v50; // rax
  const char *v51; // rdx
  const char *v52; // r10
  unsigned __int64 v53; // rdx
  const char **v54; // rax
  const void *v55; // [rsp+0h] [rbp-1C8h]
  const char *v56; // [rsp+0h] [rbp-1C8h]
  const char *v57; // [rsp+0h] [rbp-1C8h]
  const char *v58; // [rsp+0h] [rbp-1C8h]
  const char *v59; // [rsp+8h] [rbp-1C0h]
  const char *v60; // [rsp+8h] [rbp-1C0h]
  const char *v61; // [rsp+8h] [rbp-1C0h]
  char v62; // [rsp+3Fh] [rbp-189h]
  void *v63; // [rsp+40h] [rbp-188h] BYREF
  __m128i si128; // [rsp+48h] [rbp-180h]
  _BYTE v65[40]; // [rsp+58h] [rbp-170h] BYREF
  void *v66; // [rsp+80h] [rbp-148h] BYREF
  __m128i v67; // [rsp+88h] [rbp-140h]
  _BYTE v68[40]; // [rsp+98h] [rbp-130h] BYREF
  void *v69; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v70; // [rsp+C8h] [rbp-100h]
  _BYTE v71[40]; // [rsp+D8h] [rbp-F0h] BYREF
  void *v72; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v73; // [rsp+108h] [rbp-C0h]
  _BYTE v74[40]; // [rsp+118h] [rbp-B0h] BYREF
  void *ptr; // [rsp+140h] [rbp-88h] BYREF
  __int64 v76; // [rsp+148h] [rbp-80h]
  _BYTE v77[120]; // [rsp+150h] [rbp-78h] BYREF

  v63 = v65;
  v66 = v68;
  v69 = v71;
  v72 = v74;
  v76 = 0x400000000LL;
  v10 = 0;
  v11 = *(_BYTE *)(a3 + 32) <= 1u;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v67 = si128;
  v70 = si128;
  v73 = si128;
  ptr = v77;
  if ( v11 )
  {
    if ( *(_BYTE *)(a4 + 32) <= 1u )
      goto LABEL_3;
  }
  else
  {
    v37 = sub_116C3C0((const char **)a3, (__int64)&v63);
    v38 = (unsigned int)v76;
    v40 = v39;
    v41 = (unsigned int)v76 + 1LL;
    if ( v41 > HIDWORD(v76) )
    {
      v57 = v37;
      v60 = v40;
      sub_2237220((__int64)&ptr, v77, v41, 16);
      v38 = (unsigned int)v76;
      v37 = v57;
      v40 = v60;
    }
    v42 = (const char **)((char *)ptr + 16 * v38);
    *v42 = v37;
    v42[1] = v40;
    v10 = (unsigned int)(v76 + 1);
    v11 = *(_BYTE *)(a4 + 32) <= 1u;
    LODWORD(v76) = v76 + 1;
    if ( v11 )
    {
LABEL_3:
      if ( *(_BYTE *)(a5 + 32) <= 1u )
        goto LABEL_4;
      goto LABEL_61;
    }
  }
  v43 = sub_116C3C0((const char **)a4, (__int64)&v66);
  v44 = (unsigned int)v76;
  v46 = v45;
  v47 = (unsigned int)v76 + 1LL;
  if ( v47 > HIDWORD(v76) )
  {
    v56 = v43;
    v59 = v46;
    sub_2237220((__int64)&ptr, v77, v47, 16);
    v44 = (unsigned int)v76;
    v43 = v56;
    v46 = v59;
  }
  v48 = (const char **)((char *)ptr + 16 * v44);
  *v48 = v43;
  v48[1] = v46;
  v10 = (unsigned int)(v76 + 1);
  v11 = *(_BYTE *)(a5 + 32) <= 1u;
  LODWORD(v76) = v76 + 1;
  if ( !v11 )
  {
LABEL_61:
    v49 = sub_116C3C0((const char **)a5, (__int64)&v69);
    v50 = (unsigned int)v76;
    v52 = v51;
    v53 = (unsigned int)v76 + 1LL;
    if ( v53 > HIDWORD(v76) )
    {
      v58 = v49;
      v61 = v52;
      sub_2237220((__int64)&ptr, v77, v53, 16);
      v50 = (unsigned int)v76;
      v49 = v58;
      v52 = v61;
    }
    v54 = (const char **)((char *)ptr + 16 * v50);
    *v54 = v49;
    v54[1] = v52;
    v10 = (unsigned int)(v76 + 1);
    LODWORD(v76) = v76 + 1;
  }
LABEL_4:
  if ( *(_BYTE *)(a6 + 32) > 1u )
  {
    v31 = sub_116C3C0((const char **)a6, (__int64)&v72);
    v32 = (unsigned int)v76;
    v34 = v33;
    v35 = (unsigned int)v76 + 1LL;
    if ( v35 > HIDWORD(v76) )
    {
      sub_2237220((__int64)&ptr, v77, v35, 16);
      v32 = (unsigned int)v76;
    }
    v36 = (const char **)((char *)ptr + 16 * v32);
    *v36 = v31;
    v36[1] = v34;
    v10 = (unsigned int)(v76 + 1);
    LODWORD(v76) = v76 + 1;
  }
  v12 = ptr;
  v13 = 16 * v10;
  v14 = (__int64 *)((char *)ptr + v13);
  if ( (char *)ptr + v13 != ptr )
  {
    v15 = 47;
    v16 = (__int64 *)ptr;
    if ( a2 == 3 )
      v15 = 92;
    v17 = a1[1];
    v62 = v15;
    v55 = a1 + 3;
    while ( 1 )
    {
      if ( !v17 )
      {
        v19 = v16[1];
        v20 = (unsigned __int8 *)*v16;
        if ( v19 )
          goto LABEL_21;
        goto LABEL_25;
      }
      v18 = *(_BYTE *)(*a1 + v17 - 1);
      if ( v18 == 47 )
      {
        v24 = "/";
        if ( a2 != 1 )
        {
          v24 = "\\/";
          if ( !a2 )
            v24 = "/";
        }
      }
      else
      {
        if ( v18 != 92 || a2 <= 1 )
        {
          v19 = v16[1];
          v20 = (unsigned __int8 *)*v16;
          if ( !v19 )
            goto LABEL_13;
LABEL_21:
          if ( *v20 == 47 || a2 > 1 && *v20 == 92 || !v17 )
          {
LABEL_25:
            v23 = v17 + v19;
            if ( v17 + v19 > a1[2] )
              goto LABEL_26;
          }
          else
          {
LABEL_13:
            sub_2289A60(v20, v19, a2);
            v17 = a1[1];
            v21 = a1[2];
            if ( !v22 )
            {
              if ( v17 + 1 > v21 )
              {
                sub_2236E10((__int64)a1, v55, v17 + 1, 1);
                v17 = a1[1];
              }
              *(_BYTE *)(*a1 + v17) = v62;
              v20 = (unsigned __int8 *)*v16;
              v17 = a1[1] + 1LL;
              a1[1] = v17;
              v19 = v16[1];
              goto LABEL_25;
            }
            v19 = v16[1];
            v20 = (unsigned __int8 *)*v16;
            v23 = v17 + v19;
            if ( v17 + v19 > v21 )
            {
LABEL_26:
              sub_2236E10((__int64)a1, v55, v23, 1);
              v17 = a1[1];
            }
          }
          if ( v19 )
          {
            memcpy((void *)(v17 + *a1), v20, v19);
            v17 = a1[1];
          }
          v17 += v19;
          goto LABEL_18;
        }
        v24 = "\\/";
      }
      v25 = strlen(v24);
      v26 = sub_2246FB0(v16, (unsigned __int8 *)v24, v25, 0);
      v27 = v16[1];
      if ( v26 <= v27 )
      {
        v17 = a1[1];
        v28 = v27 - v26;
        v29 = (const void *)(*v16 + v26);
        v30 = v28 + v17;
        if ( v28 + v17 > a1[2] )
          goto LABEL_51;
        goto LABEL_47;
      }
      v17 = a1[1];
      if ( a1[2] < v17 )
      {
        v29 = (const void *)(*v16 + v27);
        v30 = a1[1];
        v28 = 0;
LABEL_51:
        sub_2236E10((__int64)a1, v55, v30, 1);
        v17 = a1[1];
LABEL_47:
        if ( v28 )
        {
          memcpy((void *)(v17 + *a1), v29, v28);
          v17 = a1[1] + v28;
        }
      }
LABEL_18:
      v16 += 2;
      a1[1] = v17;
      if ( v14 == v16 )
      {
        v12 = ptr;
        break;
      }
    }
  }
  if ( v12 != v77 )
    free(v12);
  if ( v72 != v74 )
    free(v72);
  if ( v69 != v71 )
    free(v69);
  if ( v66 != v68 )
    free(v66);
  if ( v63 != v65 )
    free(v63);
}

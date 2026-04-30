__int64 __fastcall sub_24CCD0(
        __int64 *a1,
        const char *a2,
        const char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // r13d
  __m128 v15; // xmm0
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  const char *v18; // rdi
  const char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  char v26; // bp
  char *v27; // rax
  size_t v28; // rax
  size_t v29; // rbx
  const char *v31; // rax
  char *v32; // rax
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  void *v40; // rdi
  size_t v41; // rbp
  char v42; // r13
  __int64 v43; // rax
  char *v44; // rax
  __int64 v45; // [rsp+0h] [rbp-1078h] BYREF
  __int128 v46; // [rsp+8h] [rbp-1070h]
  __int64 v47; // [rsp+20h] [rbp-1058h] BYREF
  __int128 v48; // [rsp+28h] [rbp-1050h]
  char s[4104]; // [rsp+40h] [rbp-1038h] BYREF
  unsigned __int64 v50; // [rsp+1048h] [rbp-30h]

  v50 = __readfsqword(0x28u);
  v11 = batch;
  if ( batch )
    return 0;
  v45 = 0;
  v46 = 0;
  if ( a3 )
  {
    sub_169A50(&v45, (__int64)"STARTITEM 0\n%s map...\n\n%%/%%*%%q", "Add");
    v15 = 0;
    v48 = 0;
    v47 = 0;
    sub_169A50(
      &v47,
      (__int64)"IDA could not find the file \"%s\".\nIf that file can be accessed, please specify its directory:",
      a3);
  }
  else
  {
    if ( *a2 )
      sub_169A50(&v45, (__int64)"STARTITEM 0\n%s map...\n\n%%/%%*%%q", "Edit");
    else
      sub_169A50(&v45, (__int64)"STARTITEM 0\n%s map...\n\n%%/%%*%%q", "Add");
    v47 = 0;
    v15 = 0;
    v48 = 0;
  }
  sub_16FAA0(&v45, (__int64)"\n\n <~S~ource     :F1:0:50::>\n <~D~estination:F2:0:50::>\n");
  s[0] = 0;
  v18 = &s1;
  if ( (_QWORD)v46 )
    LODWORD(v18) = v45;
  v19 = (const char *)sub_228210;
  if ( (int)sub_1697D0(
              (int)v18,
              (__int64)sub_228210,
              (__int64)a3,
              (__int64)&v47,
              (__int64)a2,
              (__int64)s,
              v15,
              a5,
              a6,
              a7,
              v16,
              v17,
              a10,
              a11,
              v45) > 0 )
  {
    v26 = s[0];
    if ( !*a2 )
    {
      if ( s[0] )
      {
        v27 = &s[strlen(s)];
        v20 = (unsigned __int8)*(v27 - 1);
        if ( (_BYTE)v20 == 47 || (_BYTE)v20 == 92 )
          *(v27 - 1) = 0;
      }
LABEL_12:
      sub_169630(
        (int)"The source path cannot be empty",
        (__int64)sub_228210,
        v20,
        v21,
        v22,
        v23,
        v15,
        a5,
        a6,
        a7,
        v24,
        v25,
        a10,
        a11,
        v45);
      goto LABEL_13;
    }
    v31 = &a2[strlen(a2)];
    v20 = *((unsigned __int8 *)v31 - 1);
    if ( (_BYTE)v20 == 47 || (_BYTE)v20 == 92 )
    {
      *((_BYTE *)v31 - 1) = 0;
      v42 = *a2;
      if ( v26 )
      {
        v44 = &s[strlen(s)];
        v20 = (unsigned __int8)*(v44 - 1);
        if ( (_BYTE)v20 == 47 || (_BYTE)v20 == 92 )
          *(v44 - 1) = 0;
      }
      if ( !v42 )
        goto LABEL_12;
    }
    else if ( v26 )
    {
      v32 = &s[strlen(s)];
      v33 = *(v32 - 1);
      if ( v33 == 47 || v33 == 92 )
        *(v32 - 1) = 0;
    }
    v19 = s;
    if ( !strcmp(a2, s) )
    {
      sub_169630(
        (int)"Source and destination cannot be the same",
        (__int64)s,
        v34,
        v35,
        v36,
        v37,
        v15,
        a5,
        a6,
        a7,
        v38,
        v39,
        a10,
        a11,
        v45);
      v28 = strlen(s);
      v29 = v28;
      if ( !v28 )
        goto LABEL_14;
      goto LABEL_33;
    }
LABEL_13:
    v28 = strlen(s);
    v29 = v28;
    if ( !v28 )
    {
LABEL_14:
      a1[1] = 0;
LABEL_15:
      v11 = 1;
      goto LABEL_16;
    }
LABEL_33:
    v40 = (void *)*a1;
    v41 = v28 + 1;
    if ( a1[2] < v28 + 1 )
    {
      v43 = qvector_reserve(a1, *a1, v28 + 1, 1);
      *a1 = v43;
      v40 = (void *)v43;
    }
    a1[1] = v41;
    v19 = s;
    memmove(v40, s, v29);
    *(_BYTE *)(*a1 + v29) = 0;
    goto LABEL_15;
  }
LABEL_16:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    *(double *)v15.m128_u64 = qfree(v47, v19);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v19, *(double *)v15.m128_u64);
  }
  return v11;
}

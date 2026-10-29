__int64 __fastcall sub_32C370(
        unsigned __int8 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __m128 v12; // xmm0
  char *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  _QWORD *func; // rax
  _QWORD *v18; // rbp
  char *v19; // rsi
  __int64 v20; // rdx
  unsigned int v21; // ebp
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  const char *v27; // rdx
  char *v28; // rsi
  unsigned int v29; // ebx
  char *v31; // rsi
  char *v32; // r13
  char *v33; // rdi
  unsigned int v34; // r12d
  __int64 v35; // rax
  char *v36; // rdi
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  const char *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  const char *v50; // rdx
  char *s1; // [rsp+0h] [rbp-88h] BYREF
  __int128 v52; // [rsp+8h] [rbp-80h]
  char *v53; // [rsp+20h] [rbp-68h] BYREF
  __int128 v54; // [rsp+28h] [rbp-60h]
  char *s2; // [rsp+40h] [rbp-48h] BYREF
  __int128 v56; // [rsp+48h] [rbp-40h]
  unsigned __int64 v57; // [rsp+58h] [rbp-30h]

  v12 = 0;
  v57 = __readfsqword(0x28u);
  s1 = nullptr;
  v52 = 0;
  v53 = nullptr;
  v54 = 0;
  if ( qword_8CD7E8 )
    sub_1F3900(qword_8CD7E8, (const char *)&s1, a11, a12, 0.0);
  v14 = (char *)xmmword_8CC810;
  v15 = (_QWORD *)getseg(xmmword_8CC810);
  v16 = v15;
  if ( !v15 || (char *)*v15 != v14 )
  {
LABEL_5:
    func = (_QWORD *)get_func(v14);
    v18 = func;
    if ( !func || (char *)*func != v14 )
    {
      v19 = v14;
      get_cmt(&v53, v14, a1);
      if ( a1 )
      {
        v21 = 1;
        v22 = 1084;
LABEL_9:
        v23 = itext(v22, v19, v20);
        v27 = &::s1;
        if ( (_QWORD)v54 )
          LODWORD(v27) = (_DWORD)v53;
        v28 = (_BYTE *)(elf_gnu_hash_bucket + 168);
        if ( (unsigned __int8)sub_32C2B0(
                                (int)&v53,
                                1024,
                                (int)v27,
                                (int)"%s",
                                v23,
                                v24,
                                v12,
                                a3,
                                a4,
                                a5,
                                v25,
                                v26,
                                a8,
                                a9,
                                (char)s1) )
        {
          v35 = v54;
          if ( (unsigned __int64)v54 > 1 )
          {
            trim(v53);
            v35 = v54;
          }
          v28 = (char *)&::s1;
          if ( v35 )
            v28 = v53;
          set_cmt(v14, v28, v21);
        }
LABEL_12:
        v29 = 1;
        goto LABEL_13;
      }
LABEL_26:
      v21 = 0;
      v22 = 1083;
      goto LABEL_9;
    }
    v12 = 0;
    v31 = v14;
    v56 = 0;
    s2 = nullptr;
    get_ea_name(&s2, v14, 65, 0);
    if ( a1 )
    {
      v37 = v18;
      get_func_cmt(&v53, v18, 1);
      v34 = 1;
      v39 = 1087;
    }
    else
    {
      v32 = s2;
      if ( (unsigned __int64)v56 <= 1 )
        goto LABEL_23;
      v33 = (char *)&::s1;
      if ( (_QWORD)v52 )
        v33 = s1;
      v31 = s2;
      v34 = strcmp(v33, s2);
      if ( v34 )
      {
LABEL_23:
        if ( v32 )
        {
          *(_QWORD *)&v56 = 0;
          *(double *)v12.m128_u64 = qfree(v32, v31);
        }
        v19 = v14;
        get_cmt(&v53, v14, 0);
        goto LABEL_26;
      }
      v37 = v18;
      get_func_cmt(&v53, v18, 0);
      v39 = 1088;
    }
    v40 = itext(v39, v37, v38);
    v44 = &::s1;
    if ( (_QWORD)v54 )
      LODWORD(v44) = (_DWORD)v53;
    v28 = nullptr;
    if ( (unsigned __int8)sub_2B3730(
                            (int)&v53,
                            0,
                            (int)v44,
                            (int)"%s",
                            v40,
                            v41,
                            (__m128)0LL,
                            a3,
                            a4,
                            a5,
                            v42,
                            v43,
                            a8,
                            a9,
                            (char)s1) )
    {
      v28 = (char *)&::s1;
      if ( (_QWORD)v54 )
        v28 = v53;
      set_func_cmt(v18, v28, v34);
    }
    if ( s2 )
    {
      *(_QWORD *)&v56 = 0;
      *(double *)v12.m128_u64 = qfree(s2, v28);
    }
    goto LABEL_12;
  }
  v12 = 0;
  s2 = nullptr;
  v56 = 0;
  get_segm_name(&s2, v15, 1);
  if ( (_QWORD)v56 )
  {
    v28 = s2;
    v36 = (char *)&::s1;
    if ( !(_QWORD)v52 )
      goto LABEL_34;
  }
  else
  {
    v28 = (char *)&::s1;
    if ( !(_QWORD)v52 )
      goto LABEL_39;
  }
  v36 = s1;
LABEL_34:
  if ( strcmp(v36, v28) )
  {
    if ( s2 )
    {
      *(_QWORD *)&v56 = 0;
      *(double *)v12.m128_u64 = qfree(s2, v28);
    }
    goto LABEL_5;
  }
LABEL_39:
  v29 = 0;
  if ( !a1 )
  {
    get_segment_cmt(&v53, v16, 0);
    v46 = itext(1086, v16, v45);
    v50 = &::s1;
    if ( (_QWORD)v54 )
      LODWORD(v50) = (_DWORD)v53;
    v28 = nullptr;
    if ( (unsigned __int8)sub_2B3730(
                            (int)&v53,
                            0,
                            (int)v50,
                            (int)"%s",
                            v46,
                            v47,
                            (__m128)0LL,
                            a3,
                            a4,
                            a5,
                            v48,
                            v49,
                            a8,
                            a9,
                            (char)s1) )
    {
      v28 = (char *)&::s1;
      if ( (_QWORD)v54 )
        v28 = v53;
      set_segment_cmt(v16, v28, 0);
    }
    v29 = 1;
  }
  if ( s2 )
  {
    *(_QWORD *)&v56 = 0;
    *(double *)v12.m128_u64 = qfree(s2, v28);
  }
LABEL_13:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    *(double *)v12.m128_u64 = qfree(v53, v28);
  }
  if ( s1 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(s1, v28, *(double *)v12.m128_u64);
  }
  return v29;
}

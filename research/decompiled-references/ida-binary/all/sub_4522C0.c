unsigned __int64 __fastcall sub_4522C0(
        int a1,
        __int64 a2,
        int *a3,
        unsigned __int8 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v15; // edx
  size_t v16; // rbx
  const char *v17; // rsi
  bool v18; // zf
  const char *v19; // rax
  const char *v20; // r9
  const char *v21; // rcx
  const char *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // r12
  double v27; // xmm0_8
  const char *v28; // rdi
  __int64 v29; // r14
  const char *v30; // rsi
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const void *v37; // r13
  void *v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp-8h] [rbp-E8h]
  int *v41; // [rsp+8h] [rbp-D8h]
  const char *v42; // [rsp+10h] [rbp-D0h] BYREF
  __int128 v43; // [rsp+18h] [rbp-C8h]
  void *v44; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+38h] [rbp-A8h]
  __int64 v46; // [rsp+50h] [rbp-90h] BYREF
  __int128 v47; // [rsp+58h] [rbp-88h]
  __int64 v48; // [rsp+70h] [rbp-70h] BYREF
  __int128 v49; // [rsp+78h] [rbp-68h]
  char s[24]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v51; // [rsp+A8h] [rbp-38h]

  v15 = *a3;
  v51 = __readfsqword(0x28u);
  v43 = 0;
  v42 = nullptr;
  sub_169A50((__int64 *)&v42, (__int64)"Commit #%d", v15);
  v41 = a3;
  qstrftime64(s, 20, "%F %T", *((_QWORD *)a3 + 1));
  v44 = nullptr;
  v45 = 0;
  v16 = strlen(s);
  v44 = (void *)qvector_reserve(&v44, 0, v16 + 1, 1);
  *(_QWORD *)&v45 = v16 + 1;
  memmove(v44, s, v16);
  v17 = &s1;
  *((_BYTE *)v44 + v16) = 0;
  v46 = 0;
  v18 = *((_QWORD *)v41 + 6) == 0;
  v47 = 0;
  if ( !v18 )
    v17 = *((const char **)v41 + 5);
  v19 = &s1;
  if ( *((_QWORD *)v41 + 3) )
    v19 = *((const char **)v41 + 2);
  v20 = &s1;
  if ( (_QWORD)v45 )
    v20 = (const char *)v44;
  v21 = &s1;
  if ( (_QWORD)v43 )
    v21 = v42;
  v22 = "NONE";
  if ( a4 )
    v22 = "Save";
  sub_169A50(
    &v46,
    (__int64)"BUTTON YES %s\n"
             "BUTTON NO NONE\n"
             "BUTTON CANCEL Close\n"
             "%s\n"
             "\n"
             "%%/%%*Commit\t%d\n"
             "Commit time\t%s\n"
             "User\t%s\n"
             "Site\t%s\n"
             "<~D~escription:t1::60:::>\n"
             "<->\n"
             "<~F~iles:E3::60:::>",
    v22,
    v21,
    *v41,
    v20,
    v19,
    v17);
  v23 = operator new(0x58u);
  *(_BYTE *)(v23 + 72) = a4;
  v24 = *v41;
  *(_DWORD *)(v23 + 40) = 0;
  *(_QWORD *)(v23 + 8) = 40;
  *(_QWORD *)v23 = v24;
  *(_QWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 48) = 0;
  *(_BYTE *)(v23 + 73) = 0;
  *(_DWORD *)(v23 + 76) = a1;
  *(_QWORD *)(v23 + 80) = a2;
  *(_WORD *)(v23 + 40) = 4 * (a4 ^ 1);
  *(_OWORD *)(v23 + 24) = 0;
  *(_OWORD *)(v23 + 56) = 0;
  if ( (int *)(v23 + 16) != v41 + 16 )
  {
    v25 = *((_QWORD *)v41 + 9);
    if ( v25 > 1 )
    {
      v37 = *((const void **)v41 + 8);
      v38 = (void *)qvector_reserve(v23 + 16, 0, *((_QWORD *)v41 + 9), 1);
      *(_QWORD *)(v23 + 16) = v38;
      *(_QWORD *)(v23 + 24) = v25;
      memmove(v38, v37, v25 - 1);
      *(_BYTE *)(*(_QWORD *)(v23 + 16) + v25 - 1) = 0;
    }
  }
  v26 = qalloc_or_throw(208);
  sub_451850(v26, (const char *)(unsigned int)*v41);
  v27 = 0.0;
  v48 = 0;
  v28 = &s1;
  v49 = 0;
  if ( (_QWORD)v43 )
    v28 = v42;
  v29 = sub_4FAE20(v28, 0);
  v30 = (_BYTE *)(&loc_400002 + 2);
  sub_2EF360(
    v46,
    4194308,
    (__int64)sub_451780,
    v23,
    v23 + 8,
    v26,
    (__m128)0LL,
    a6,
    a7,
    a8,
    v31,
    v32,
    a11,
    a12,
    (char)&v48);
  v35 = v40;
  if ( !v29 )
  {
    v39 = sub_49EE00(v26);
    if ( v39 )
    {
      v30 = (const char *)&off_86BB00;
      *(_QWORD *)(v39 + 2152) = 6;
      *(_QWORD *)(v39 + 2144) = &off_86BB00;
    }
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    v27 = qfree(v48, v30, v33, v34, v35);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    v27 = qfree(v46, v30, v33, v34, v35, v27);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    v27 = qfree(v44, v30, v33, v34, v35, v27);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42, v30, v33, v34, v35, v27);
  }
  return v51 - __readfsqword(0x28u);
}

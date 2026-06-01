__int64 __fastcall sub_44ED70(
        __int64 *a1,
        const char *a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v13; // rsi
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // r8
  size_t v20; // r14
  char *v21; // rbx
  __int64 v22; // rdi
  const char *v24; // r15
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // [rsp-8h] [rbp-1B8h]
  __int64 v28; // [rsp+8h] [rbp-1A8h]
  __int64 v29; // [rsp+10h] [rbp-1A0h] BYREF
  __int128 v30; // [rsp+18h] [rbp-198h]
  __int64 v31; // [rsp+30h] [rbp-180h] BYREF
  __int128 v32; // [rsp+38h] [rbp-178h]
  __int64 v33; // [rsp+50h] [rbp-160h] BYREF
  void *src; // [rsp+58h] [rbp-158h]
  __int128 v35; // [rsp+60h] [rbp-150h]
  __int64 v36; // [rsp+70h] [rbp-140h]
  __int64 v37; // [rsp+80h] [rbp-130h] BYREF
  __int64 v38; // [rsp+88h] [rbp-128h]
  __int128 v39; // [rsp+90h] [rbp-120h]
  int v40; // [rsp+A0h] [rbp-110h]
  _QWORD v41[10]; // [rsp+B0h] [rbp-100h] BYREF
  char v42; // [rsp+100h] [rbp-B0h] BYREF
  char v43; // [rsp+160h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+178h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v30 = 0;
  v29 = 0;
  sub_169A50(
    &v29,
    (__int64)"BUTTON YES* Commmit\n"
             "BUTTON NO Save\n"
             "BUTTON CANCEL Cancel\n"
             "%s\n"
             "\n"
             "%%/%%*<~D~escription:t1::60:::>\n"
             "<->\n"
             "<~F~iles:E3::60:::>\n"
             "<Force committing for unchanged files:C>>\n",
    "Commit files to new worklist");
  v33 = 40;
  src = nullptr;
  v36 = 0;
  v35 = 0;
  sub_44E690((__int64)v41, a2, 0);
  v31 = 0;
  v32 = 0;
  v13 = (const char *)&sub_44DBF0;
  v37 = 40;
  v38 = 0;
  v40 = 0;
  v39 = 0;
  v18 = sub_1697D0(
          v29,
          (__int64)&sub_44DBF0,
          (__int64)&v33,
          (__int64)&v37,
          (__int64)v41,
          (__int64)&v31,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v14,
          v15,
          a10,
          a11,
          a3);
  v19 = v27;
  v28 = v35;
  if ( (_QWORD)v35 && (v20 = v35 - 1, (_QWORD)v35 != 1) )
  {
    v24 = (const char *)src;
    v25 = (void *)*a1;
    if ( a1[2] < (unsigned __int64)v35 )
    {
      v26 = qvector_reserve(a1, *a1, v35, 1);
      *a1 = v26;
      v25 = (void *)v26;
    }
    v13 = v24;
    a1[1] = v28;
    memmove(v25, v24, v20);
    *(_BYTE *)(*a1 + v28 - 1) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38, v13, v16, v17, v19);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, v13, v16, v17, v19);
  }
  v21 = &v43;
  v41[0] = &stru_86F6A0;
  do
  {
    v22 = *((_QWORD *)v21 - 3);
    v21 -= 24;
    if ( v22 )
    {
      *((_QWORD *)v21 + 1) = 0;
      qfree(v22, v13, v16, v17, v19);
    }
  }
  while ( v21 != &v42 );
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    qfree(src, v13, v16, v17, v19);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v13, v16, v17, v19);
  }
  return v18;
}

__int64 __fastcall sub_6B7B80(
        __int64 *a1,
        __int64 a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  const char *v14; // rax
  const char **v16; // rdx
  bool v17; // zf
  __int64 *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rbx
  void **v21; // rax
  void *v22; // rdi
  int v23; // r12d
  double v24; // xmm4_8
  double v25; // xmm5_8
  char *v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rbx
  char *v30; // rax
  void *v31; // rdi
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+8h] [rbp-70h]
  __int128 v42; // [rsp+10h] [rbp-68h]
  const char *v43; // [rsp+20h] [rbp-58h]
  char v44; // [rsp+28h] [rbp-50h]
  char v45; // [rsp+29h] [rbp-4Fh]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v14 = haystack;
  v46 = __readfsqword(0x28u);
  v45 = a3;
  v16 = (const char **)*a1;
  ptr = nullptr;
  v42 = 0;
  v17 = v16[1] == nullptr;
  v40 = a1;
  v44 = 0;
  if ( !v17 )
    v14 = *v16;
  v43 = v14;
  v18 = (__int64 *)(a2 + 8);
  *(_DWORD *)(a2 + 144) = 0;
  do
  {
    v19 = *v18;
    v20 = 0;
    if ( *v18 )
    {
      do
      {
        v16 = (const char **)*(v18 - 1);
        v21 = (void **)&v16[3 * v20];
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = nullptr;
          qfree(v22);
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *v18 = 0;
    v18 += 3;
  }
  while ( v18 != (__int64 *)(a2 + 152) );
  if ( (unsigned __int8)sub_6B40D0(&v40, a2, (__int64)v16, (__int64)a4, a5, a6) )
    v23 = 0;
  else
    v23 = sub_6B4290((__int64)&v40, a2, a4, 0);
  if ( !(unsigned __int8)sub_6B77A0(&v40) )
    v23 += sub_6B4290((__int64)&v40, a2, a4, 2);
  if ( !sub_6B54B0((__int64 *)&v40, 0.0, a8, a9, a10, v24, v25, a13, a14) )
    v23 += sub_6B4290((__int64)&v40, a2, a4, 3);
  if ( *((_BYTE *)v40 + 2321) )
  {
    switch_dbctx(*(int *)(*v40 + 88));
    v33 = v42;
    sub_6B5C90(&v40, 1, v34, v35, v36);
    sub_6B5C90(&v40, 0, v37, v38, v39);
    if ( !v44 && v33 != (_QWORD)v42 )
      v23 += sub_6B4290((__int64)&v40, a2, a4, 4);
  }
  if ( !(unsigned __int8)sub_6B6250(&v40) )
    v23 += sub_6B4290((__int64)&v40, a2, a4, 5);
  v26 = (char *)ptr;
  v27 = v23;
  if ( ptr )
  {
    v28 = v42;
    if ( (_QWORD)v42 )
    {
      v29 = 0;
      do
      {
        v30 = &v26[24 * v29];
        v31 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31);
          v26 = (char *)ptr;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v26);
  }
  return v27;
}

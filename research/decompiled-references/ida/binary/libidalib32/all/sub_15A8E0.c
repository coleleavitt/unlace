__int64 __fastcall sub_15A8E0(
        _QWORD *a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rax
  const char *v11; // r12
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rsi
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // rbx
  __int64 func; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // rdi
  unsigned __int64 v27; // r14
  char *v28; // rax
  __int64 v29; // rbx
  char *v30; // rdx
  int v31; // r8d
  bool v32; // cf
  unsigned int v33; // r8d
  unsigned int v34; // r14d
  size_t v35; // rax
  size_t v36; // r15
  size_t v37; // r12
  __int64 v38; // rax
  unsigned int v39; // ebx
  int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // eax
  struct _Unwind_Exception *v44; // rbx
  __int64 v45; // [rsp+0h] [rbp-C0h]
  unsigned int v46; // [rsp+0h] [rbp-C0h]
  unsigned int s; // [rsp+8h] [rbp-B8h]
  int sb; // [rsp+8h] [rbp-B8h]
  int sc; // [rsp+8h] [rbp-B8h]
  int sd; // [rsp+8h] [rbp-B8h]
  char *sa; // [rsp+8h] [rbp-B8h]
  int v52; // [rsp+1Ch] [rbp-A4h] BYREF
  void *v53; // [rsp+20h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+28h] [rbp-98h]
  __int64 v55; // [rsp+40h] [rbp-80h]
  int v56; // [rsp+48h] [rbp-78h]
  __int64 v57; // [rsp+4Ch] [rbp-74h]
  char *v58; // [rsp+60h] [rbp-60h] BYREF
  __int128 v59; // [rsp+68h] [rbp-58h]
  unsigned __int64 v60; // [rsp+78h] [rbp-48h]
  int v61; // [rsp+80h] [rbp-40h]
  unsigned __int64 v62; // [rsp+88h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  v10 = sub_158C20((__int64)a1);
  if ( !v10 )
    return 0;
  v11 = v10;
  v14 = *(__int64 (__fastcall **)(__int64))(*a1 + 416LL);
  if ( v14 == sub_B7C80 )
  {
    v15 = a1[60];
    if ( !v15 )
    {
      v44 = (struct _Unwind_Exception *)sub_1582F0(a1);
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree();
      }
      _Unwind_Resume(v44);
    }
    s = sub_F4670((__int64)a1, v15);
  }
  else
  {
    s = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v14)(a1, 0);
  }
  v52 = -1;
  v53 = nullptr;
  v54 = 0;
  v16 = strlen(v11);
  v17 = v16 + 1;
  v18 = v16;
  v53 = (void *)qvector_reserve();
  *(_QWORD *)&v54 = v17;
  memmove(v53, v11, v18);
  *((_BYTE *)v53 + v18) = 0;
  func = get_func();
  sub_10DDF0(
    (__int64)"Searching",
    (__int64)v11,
    v20,
    v21,
    v22,
    v23,
    (__m128)0LL,
    a4,
    a5,
    a6,
    v24,
    v25,
    a9,
    a10,
    (char)&v53);
  if ( !func )
  {
    v42 = getinf();
    v43 = getinf();
    v31 = sub_15A550(&v52, v45, v43, v42, s, v11);
    goto LABEL_24;
  }
  v58 = nullptr;
  v60 = 0;
  v61 = -1;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  func_tail_iterator_set();
  v56 = -1;
  v26 = v55;
  if ( v55 )
  {
    while ( 1 )
    {
      rangeset_t_add();
      v26 = v55;
      if ( !v55 || *(_DWORD *)(v55 + 104) <= v56 + 1 )
        break;
      ++v56;
    }
    v27 = v59;
    if ( !(_QWORD)v59 )
      goto LABEL_36;
  }
  else
  {
    v27 = v59;
    if ( !(_QWORD)v59 )
    {
      v31 = -1;
      if ( !v58 )
      {
        sub_10D850();
        goto LABEL_50;
      }
      goto LABEL_23;
    }
  }
  v28 = v58;
  v29 = 0;
  while ( 1 )
  {
    v30 = &v58[8 * (int)v29];
    if ( s >= *(_DWORD *)v30 && s < *((_DWORD *)v30 + 1) )
      break;
    if ( ++v29 == v27 )
      goto LABEL_36;
  }
  if ( a2 )
  {
    if ( v29 >= 0 )
    {
      while ( 1 )
      {
        v31 = sub_15A550(
                &v52,
                v45,
                *(unsigned int *)&v28[8 * (int)v29],
                *(unsigned int *)&v28[8 * (int)v29 + 4],
                s,
                v11);
        v32 = v29-- == 0;
        if ( v32 || v31 != -1 )
          break;
        v28 = v58;
      }
LABEL_19:
      v26 = v55;
      goto LABEL_20;
    }
  }
  else if ( v29 < v27 )
  {
    while ( 1 )
    {
      v41 = sub_15A550(&v52, v45, *(unsigned int *)&v28[8 * (int)v29], *(unsigned int *)&v28[8 * (int)v29 + 4], s, v11);
      ++v29;
      v31 = v41;
      if ( v29 >= v27 || v41 != -1 )
        break;
      v28 = v58;
    }
    goto LABEL_19;
  }
LABEL_36:
  v31 = -1;
LABEL_20:
  if ( v26 )
  {
    sb = v31;
    lock_func_range();
    v31 = sb;
  }
  if ( v58 )
  {
LABEL_23:
    sc = v31;
    *(_QWORD *)&v59 = 0;
    qfree();
    v31 = sc;
  }
LABEL_24:
  sd = v31;
  sub_10D850();
  v33 = sd;
  if ( sd != -1 )
  {
    sa = (char *)s1;
    if ( (_QWORD)v54 )
      sa = (char *)v53;
    v58 = nullptr;
    v34 = v52;
    v59 = 0;
    if ( sa )
    {
      v46 = v33;
      v35 = strlen(sa);
      v36 = v35 + 1;
      v37 = v35;
      v58 = (char *)qvector_reserve();
      *(_QWORD *)&v59 = v36;
      memmove(v58, sa, v37);
      v33 = v46;
      v58[v37] = 0;
    }
    v38 = *a1;
    v60 = v34 | 0xFFFFFFFF00000000LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, char **))(v38 + 704))(a1, v33, 0, &v58);
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree();
    }
    v39 = 1;
    goto LABEL_32;
  }
LABEL_50:
  v39 = 0;
LABEL_32:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  return v39;
}


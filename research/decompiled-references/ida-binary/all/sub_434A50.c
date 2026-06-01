__int64 __fastcall sub_434A50(
        __int64 a1,
        const char *a2,
        const void **a3,
        char a4,
        char a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char a15,
        unsigned int a16,
        __int64 a17)
{
  _QWORD *v21; // rax
  const char *v22; // rsi
  unsigned int v23; // r13d
  const char *v24; // rax
  const char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __int64 v34; // rax
  __int64 v35; // rbx
  size_t v36; // r15
  size_t v37; // r14
  size_t v38; // r12
  const char *v40; // rcx
  void *v41; // rax
  const void *v42; // rsi
  _BYTE *v43; // rax
  _BYTE *v44; // rax
  void *v45; // rax
  void *v46; // rax
  const void *v47; // rsi
  char v48; // [rsp+0h] [rbp-100h]
  __int64 v49; // [rsp+0h] [rbp-100h]
  const char *v52; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v53; // [rsp+28h] [rbp-D8h]
  const char *v54; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+48h] [rbp-B8h]
  const char *v56; // [rsp+58h] [rbp-A8h]
  __int128 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+78h] [rbp-88h]
  const char *v60; // [rsp+80h] [rbp-80h]
  const char *v61; // [rsp+88h] [rbp-78h]
  __int128 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  v55 = 0;
  v54 = nullptr;
  v56 = nullptr;
  v57 = 0;
  v21 = sub_426230(a1, a2);
  v22 = (const char *)&v54;
  v23 = sub_417670((__int64)v21, (__int64)&v54, a1, (__int64)a2, (__int64)a3, (const char *)a6, a16, 1);
  if ( (_BYTE)v23 )
  {
    v58 = 80;
    v24 = &s1;
    v62 = -1;
    v59 = 0;
    v63 = -1;
    v65 = 0;
    v64 = 0;
    if ( (_QWORD)v55 )
      v24 = v54;
    v60 = v24;
    v25 = &s1;
    if ( (_QWORD)v57 )
      v25 = v56;
    v61 = v25;
    v53 = 0;
    v52 = nullptr;
    v52 = (const char *)qvector_reserve(&v52, 0, 1, 1);
    *(_QWORD *)&v53 = 1;
    *v52 = 0;
    v29 = sub_479A00(&v58, &v52, v26, v27, v28);
    if ( v29 )
    {
      v49 = v29;
      v34 = operator new(0x60u);
      *(_BYTE *)(v34 + 8) = a4;
      v35 = v34;
      v36 = *((_QWORD *)a2 + 1);
      *(_QWORD *)v34 = v49;
      *(_BYTE *)(v34 + 9) = a5 & (a3 != nullptr);
      *(_QWORD *)(v34 + 16) = 0;
      *(_BYTE *)(v34 + 10) = a15 & (a6 != 0);
      *(_OWORD *)(v34 + 24) = 0;
      if ( v36 )
      {
        v41 = (void *)qalloc_or_throw(v36);
        *(_QWORD *)(v35 + 16) = v41;
        v42 = *(const void **)a2;
        *(_QWORD *)(v35 + 32) = v36;
        memcpy(v41, v42, v36);
        *(_QWORD *)(v35 + 24) = v36;
      }
      *(_QWORD *)(v35 + 40) = 0;
      *(_OWORD *)(v35 + 48) = 0;
      if ( a3 )
      {
        v37 = (size_t)a3[1];
        if ( v37 )
        {
          v46 = (void *)qalloc_or_throw(a3[1]);
          *(_QWORD *)(v35 + 40) = v46;
          v47 = *a3;
          *(_QWORD *)(v35 + 56) = v37;
          memcpy(v46, v47, v37);
          *(_QWORD *)(v35 + 48) = v37;
        }
      }
      else
      {
        v44 = (_BYTE *)qvector_reserve(v35 + 40, 0, 1, 1);
        *(_QWORD *)(v35 + 40) = v44;
        *(_QWORD *)(v35 + 48) = 1;
        *v44 = 0;
      }
      *(_QWORD *)(v35 + 64) = 0;
      *(_OWORD *)(v35 + 72) = 0;
      if ( a6 )
      {
        v38 = *(_QWORD *)(a6 + 8);
        if ( v38 )
        {
          v45 = (void *)qalloc_or_throw(*(_QWORD *)(a6 + 8));
          *(_QWORD *)(v35 + 64) = v45;
          *(_QWORD *)(v35 + 80) = v38;
          memcpy(v45, *(const void **)a6, v38);
          *(_QWORD *)(v35 + 72) = v38;
        }
      }
      else
      {
        v43 = (_BYTE *)qvector_reserve(v35 + 64, 0, 1, 1);
        *(_QWORD *)(v35 + 64) = v43;
        *(_QWORD *)(v35 + 72) = 1;
        *v43 = 0;
      }
      v22 = (const char *)v35;
      *(_QWORD *)(v35 + 88) = a17;
      qthread_create(sub_4337D0, v35);
    }
    else
    {
      v40 = &s1;
      if ( (_QWORD)v53 )
        v40 = v52;
      v22 = v60;
      sub_169630(
        (int)"Unable to launch process: %s, with arguments: %s\nError: %s",
        (__int64)v60,
        (__int64)v61,
        (__int64)v40,
        v30,
        v31,
        (__m128)0LL,
        a8,
        a9,
        a10,
        v32,
        v33,
        a13,
        a14,
        v48);
      v23 = 0;
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v52, v22);
    }
  }
  else if ( *((_QWORD *)a2 + 1) )
  {
    sub_44F870(*(_QWORD *)a2);
  }
  else
  {
    sub_44F870(&s1);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56, v22);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54, v22);
  }
  return v23;
}

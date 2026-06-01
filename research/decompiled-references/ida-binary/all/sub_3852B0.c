__int64 *__fastcall sub_3852B0(
        __int64 *a1,
        __int64 a2,
        QT::QObject *a3,
        size_t *a4,
        __int64 *a5,
        int a6,
        __int16 a7,
        char a8)
{
  size_t v10; // rax
  void (__fastcall ***v11)(_QWORD); // rdi
  bool v12; // zf
  const char *v13; // r15
  __int64 v14; // r13
  __int64 *v15; // rbx
  char v16; // r9
  size_t v17; // rdx
  __int64 v18; // r15
  int v19; // edx
  unsigned int v20; // eax
  int v21; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  size_t v30; // r9
  size_t v31; // rcx
  const char *v32; // rsi
  size_t v33; // rax
  char *v34; // r15
  unsigned __int64 v35; // rdx
  double v36; // xmm0_8
  __int64 v37; // r8
  size_t v38; // r10
  char *v39; // rsi
  __int64 v42; // [rsp+8h] [rbp-168h]
  size_t v43; // [rsp+10h] [rbp-160h]
  size_t v45; // [rsp+18h] [rbp-158h]
  size_t na; // [rsp+28h] [rbp-148h]
  int nd; // [rsp+28h] [rbp-148h]
  int nb; // [rsp+28h] [rbp-148h]
  size_t ne; // [rsp+28h] [rbp-148h]
  size_t nc; // [rsp+28h] [rbp-148h]
  const char *v52; // [rsp+30h] [rbp-140h] BYREF
  __int128 v53; // [rsp+38h] [rbp-138h]
  _QWORD v54[4]; // [rsp+50h] [rbp-120h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+70h] [rbp-100h] BYREF
  int v56; // [rsp+78h] [rbp-F8h]
  int v57; // [rsp+7Ch] [rbp-F4h]
  __int64 v58; // [rsp+80h] [rbp-F0h]
  __int64 (__fastcall **v59)(); // [rsp+90h] [rbp-E0h] BYREF
  int v60; // [rsp+98h] [rbp-D8h]
  int v61; // [rsp+9Ch] [rbp-D4h]
  __int64 v62; // [rsp+A0h] [rbp-D0h]
  char *v63; // [rsp+B0h] [rbp-C0h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-B8h]
  char *s; // [rsp+D0h] [rbp-A0h] BYREF
  __int128 v66; // [rsp+D8h] [rbp-98h]
  void *ptr; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v68; // [rsp+F8h] [rbp-78h]
  __int128 v69; // [rsp+110h] [rbp-60h] BYREF
  __int64 v70; // [rsp+120h] [rbp-50h]
  __int64 v71; // [rsp+128h] [rbp-48h]
  int v72; // [rsp+130h] [rbp-40h]
  unsigned __int64 v73; // [rsp+138h] [rbp-38h]

  v73 = __readfsqword(0x28u);
  v10 = *a4;
  v53 = 0;
  v52 = nullptr;
  *(_QWORD *)&v69 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_23BAE0((__int64 *)&v52, &v69);
  v11 = (void (__fastcall ***)(_QWORD))v69;
  if ( (_QWORD)v69 )
  {
    v12 = (*(_DWORD *)(v69 + 8))-- == 1;
    if ( v12 )
      (**v11)(v11);
  }
  v13 = &s1;
  if ( (_QWORD)v53 )
    v13 = v52;
  sub_23A400((__int64)&qword_8CC000, v13);
  v14 = (*(__int64 (__fastcall **)(size_t))(*(_QWORD *)*a4 + 8LL))(*a4);
  v15 = (__int64 *)operator new(0xC0u);
  v16 = a8 & 1;
  v12 = *a4 == 0;
  na = *a4;
  *(_QWORD *)&v69 = na;
  if ( v12 )
  {
    sub_3845E0(v15, v14, (__int64 *)&v69, v13, a5, v16);
  }
  else
  {
    ++*(_DWORD *)(na + 8);
    sub_3845E0(v15, v14, (__int64 *)&v69, v13, a5, v16);
    v17 = na;
    nd = *(_DWORD *)(na + 8);
    *(_DWORD *)(v17 + 8) = nd - 1;
    if ( nd == 1 )
    {
      (**(void (__fastcall ***)(size_t))v17)(v17);
      if ( a3 )
        goto LABEL_11;
      goto LABEL_19;
    }
  }
  if ( a3 )
    goto LABEL_11;
LABEL_19:
  v54[2] = sub_384C20((__int64)v15, 0);
  v23 = v15[10];
  v54[1] = 0;
  v24 = *(_QWORD *)(v23 + 8);
  v54[0] = &srcdbg_place_t___vtable;
  if ( v24 )
  {
    nb = v24 - 1;
    v25 = v24 - 1;
  }
  else
  {
    nb = 0;
    v25 = 0;
  }
  v26 = sub_384C20((__int64)v15, v25);
  v56 = 0;
  v55 = &srcdbg_place_t___vtable;
  v57 = nb;
  v58 = v26;
  v62 = sub_384C20((__int64)v15, a6);
  v69 = 0;
  v71 = 0xFFFFFFFFLL;
  v59 = &srcdbg_place_t___vtable;
  v61 = a6;
  v60 = 0;
  v70 = 0;
  v72 = 1;
  WORD2(v71) = a7;
  v63 = nullptr;
  v64 = 0;
  v63 = (char *)qvector_reserve(&v63, 0, 14, 1);
  *(_QWORD *)&v64 = 14;
  strcpy(v63, "Source view: ");
  ptr = nullptr;
  v68 = 0;
  if ( v13 )
  {
    ne = strlen(v13);
    v27 = v13;
    ptr = (void *)qvector_reserve(&ptr, 0, ne + 1, 1);
    *(_QWORD *)&v68 = ne + 1;
    memmove(ptr, v13, ne);
    v31 = ne;
    *((_BYTE *)ptr + ne) = 0;
    nc = v68;
    if ( (_QWORD)v68 )
    {
      v30 = v68 - 1;
      if ( (_QWORD)v68 != 1 )
      {
        v37 = v64;
        v38 = v68 - 1;
        if ( (_QWORD)v64 )
        {
          v37 = v64 - 1;
          v38 = v30 + v64 - 1;
          nc = v68 + v64 - 1;
        }
        v39 = v63;
        if ( *((_QWORD *)&v64 + 1) < nc )
        {
          v42 = v37;
          v43 = v68 - 1;
          v45 = v38;
          v63 = (char *)qvector_reserve(&v63, v63, nc, 1);
          v37 = v42;
          v39 = v63;
          v30 = v43;
          v38 = v45;
        }
        *(_QWORD *)&v64 = nc;
        v39[v38] = 0;
        v27 = (const char *)ptr;
        memcpy(&v63[v37], ptr, v30);
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v68 = 0;
      qfree(ptr, v27, v28, v31, v29, v30);
    }
  }
  v32 = &s1;
  if ( (_QWORD)v64 )
    LODWORD(v32) = (_DWORD)v63;
  a3 = (QT::QObject *)callui(
                        148,
                        (_DWORD)v32,
                        (unsigned int)v54,
                        (unsigned int)&v55,
                        (unsigned int)&v59,
                        (unsigned int)&v69,
                        v15,
                        &unk_867D00,
                        v15,
                        a2);
  s = nullptr;
  v66 = 0;
  sub_169A50((__int64 *)&s, (__int64)"SourceView_for_%s", v13);
  if ( (_QWORD)v66 )
  {
    v33 = v66 - 1;
    v34 = s;
    v35 = (unsigned __int64)(v66 - 1) >> 63;
  }
  else
  {
    LOBYTE(v35) = 0;
    v33 = 0;
    v34 = (char *)&s1;
  }
  if ( !v34 || (_BYTE)v35 )
  {
    v33 = 0;
    if ( v34 )
      v33 = strlen(v34);
  }
  v36 = QT::QString::fromUtf8(&ptr, v33, v34);
  QT::QObject::doSetObjectName(a3, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  ((void (__fastcall *)(__int64, QT::QObject *, __int64, double))callui)(77, a3, 7, v36);
  if ( s )
  {
    *(_QWORD *)&v66 = 0;
    v36 = qfree(s, (const char *)a3);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63, (const char *)a3, v36);
  }
LABEL_11:
  v15[3] = (__int64)a3;
  v18 = ((__int64 (__fastcall *)(__int64, QT::QObject *, __int64, _QWORD))callui)(101, a3, 6, 0);
  v15[4] = v18;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64 *))callui)(77, v18, 1000, v15);
  ((void (__fastcall *)(__int64, __int64, __int64))callui)(77, v15[4], 1001);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, _QWORD *)))callui)(
    77,
    v15[4],
    1006,
    sub_3815F0);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64)))callui)(
    77,
    v15[4],
    1005,
    sub_381E80);
  ((void (__fastcall *)(__int64, __int64, __int64, void (__fastcall *)(__m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, __int64 *, int, __int64, _QWORD *)))callui)(
    77,
    v15[4],
    1002,
    sub_383DA0);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64))callui)(77, v15[4], 1007, 1);
  ((void (__fastcall *)(__int64, QT::QObject *, __int64, void (__fastcall *)(__int64, double, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, __int64, __int64, size_t, __int64)))callui)(
    77,
    a3,
    5,
    sub_383940);
  v19 = *(_DWORD *)(v18 + 216);
  v20 = v19 & 0xFFFFFFFD;
  v21 = v19 | 2;
  if ( (*(_BYTE *)(v14 + 16) & 1) != 0 )
    v20 = v21;
  *(_DWORD *)(v18 + 216) = v20;
  sub_385020(v15);
  if ( a1 )
    *a1 = v18;
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52, (const char *)a3);
  }
  return v15;
}

__int64 __fastcall sub_537F20(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _BYTE *v10; // rax
  const char *v12; // r13
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // r12
  bool v22; // zf
  __int64 v23; // rbp
  __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  int v28; // ebp
  QT::QAction *v29; // r15
  char *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  const char *v34; // rsi
  const char *v35; // rbx
  size_t v37; // rax
  const char *v38; // rdi
  char *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r13
  char *v42; // rax
  __int64 v43; // rdi
  size_t v44; // rax
  char v45; // [rsp+0h] [rbp-68h]
  const char *v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v49; // [rsp+18h] [rbp-50h]
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v10 = *(_BYTE **)(a2 + 16);
  if ( !v10 || !*v10 || *v10 == 45 && !v10[1] )
    return 0;
  v12 = *(const char **)(a2 + 8);
  if ( v12 )
  {
    if ( *v12 && (sub_531090(a1, *(const char **)(a2 + 8)) || sub_5342F0(a1, v12)) )
      return 0;
  }
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  v13 = (__int64 (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2]
                                                                                       + 88LL))(QT::QCoreApplication::self + 2);
  v14 = (**v13)(v13, a2);
  v21 = v14;
  if ( !v14 )
    return 0;
  v22 = *(_QWORD *)(v14 + 128) == 0;
  *(_DWORD *)(v14 + 124) = 1;
  v23 = *(_QWORD *)(a2 + 24);
  if ( !v22 )
  {
    sub_169700(
      (int)"Coherency check failed: _handler == nullptr\n",
      a2,
      v15,
      v16,
      v17,
      v18,
      a3,
      a4,
      a5,
      a6,
      v19,
      v20,
      a9,
      a10,
      v45);
    v24 = *(_QWORD *)(v21 + 128);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
  }
  *(_QWORD *)(v21 + 128) = v23;
  v25 = 0;
  if ( (*(_DWORD *)(a2 + 60) & 0xCu) <= 8 )
    v25 = dword_6CD680[*(_DWORD *)(a2 + 60) & 0xC];
  v26 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(v21 + 152) = v25;
  *(_QWORD *)(v21 + 144) = v26;
  if ( !*(_QWORD *)(a2 + 32) || (v27 = *(_DWORD *)(a2 + 60), (v27 & 1) != 0) )
  {
    *(_BYTE *)(v21 + 156) = 1;
    v27 = *(_DWORD *)(a2 + 60);
  }
  v28 = *(_DWORD *)(v21 + 112);
  v29 = *(QT::QAction **)(v21 + 192);
  if ( (v27 & 2) != 0 )
    v28 = *(_DWORD *)(v21 + 112) | 0x40000;
  if ( (v27 & 0x20) != 0 )
    v28 |= 0x100000u;
  if ( (v27 & 0x40) != 0 )
    v28 |= 0x200000u;
  if ( (v27 & 0x80u) != 0 )
    v28 |= 0x400000u;
  if ( (v27 & 0x100) != 0 )
    v28 |= 0x1000000u;
  *(_DWORD *)(v21 + 112) = v28;
  v30 = *(char **)(a2 + 16);
  if ( *(int *)(a2 + 60) < 0 )
  {
    v37 = 0;
    if ( v30 )
    {
      v46 = *(const char **)(a2 + 16);
      v37 = strlen(v46);
      v30 = (char *)v46;
    }
    QT::QString::fromUtf8(&ptr, v37, v30);
    QT::QAction::setText(v29, (const QT::QString *)&ptr);
  }
  else
  {
    sub_518A60((QT::QString *)&ptr, (unsigned __int8 *)v30, nullptr, *(double *)a3.m128_u64);
    QT::QAction::setText(v29, (const QT::QString *)&ptr);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QAction::setShortcutContext(v29, 2);
  if ( v12 && *v12 )
    sub_530EA0(v21, v12);
  v34 = *(const char **)(a2 + 40);
  if ( v34 && *v34 )
  {
    ptr = nullptr;
    v49 = 0;
    sub_536F00((__int64)&ptr, v34, 0, v31, v32, v33);
    v38 = &s1;
    if ( *(_QWORD *)(v21 + 40) )
      v38 = *(const char **)(v21 + 32);
    sub_4B5050(v38, &ptr, 0, 0.0, a4);
    v39 = (char *)ptr;
    if ( ptr )
    {
      v40 = v49;
      if ( (_QWORD)v49 )
      {
        v41 = 0;
        do
        {
          v42 = &v39[24 * v41];
          v43 = *(_QWORD *)v42;
          if ( *(_QWORD *)v42 )
          {
            *((_QWORD *)v42 + 1) = 0;
            v47 = v40;
            qfree(v43, (const char *)&ptr);
            v39 = (char *)ptr;
            v40 = v47;
          }
          ++v41;
        }
        while ( v40 != v41 );
      }
      *(_QWORD *)&v49 = 0;
      qfree(v39, (const char *)&ptr);
    }
  }
  sub_5378C0((_QWORD *)v21);
  v35 = *(const char **)(a2 + 48);
  if ( v35 )
  {
    if ( *v35 )
    {
      v44 = strlen(v35);
      QT::QString::fromUtf8(&ptr, v44, v35);
      QT::QAction::setToolTip(v29, (const QT::QString *)&ptr);
      if ( ptr )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
    }
  }
  if ( (v28 & 0x200000) != 0 )
    QT::QAction::setCheckable(v29, 1);
  if ( (v28 & 0x400000) != 0 )
    QT::QAction::setChecked(v29, 1);
  return v21;
}

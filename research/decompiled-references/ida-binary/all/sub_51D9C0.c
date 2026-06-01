__int64 __fastcall sub_51D9C0(
        __int64 a1,
        _DWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  void (__fastcall *v11)(void *); // rcx
  char *v12; // r9
  __int64 v13; // rdx
  bool v14; // zf
  void (__fastcall ***v15)(void *); // rbp
  void (__fastcall *v16)(void *); // rdx
  void (__fastcall *v17)(void *); // rax
  double v18; // xmm0_8
  __int64 v19; // r14
  size_t v20; // rdx
  unsigned __int8 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  size_t v29; // rbp
  int *v30; // [rsp+8h] [rbp-B0h]
  char *v31; // [rsp+10h] [rbp-A8h]
  char *v32; // [rsp+10h] [rbp-A8h]
  char *src; // [rsp+18h] [rbp-A0h]
  void *ptr[4]; // [rsp+20h] [rbp-98h] BYREF
  void *v35; // [rsp+40h] [rbp-78h] BYREF
  char *s; // [rsp+48h] [rbp-70h]
  void *v37; // [rsp+60h] [rbp-58h] BYREF
  __int128 v38; // [rsp+68h] [rbp-50h]
  unsigned __int64 v39; // [rsp+78h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v30 = (int *)(a1 + 104);
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v35, (const QT::QString *)ptr);
  v12 = s;
  v13 = *(_QWORD *)(a1 + 176);
  if ( !s )
  {
    v12 = (char *)&QT::QByteArray::_empty;
    if ( !v13 )
      goto LABEL_9;
    v14 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( !v14 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( v13 )
  {
    v14 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( !v14 )
      goto LABEL_9;
LABEL_4:
    v15 = *(void (__fastcall ****)(void *))(a1 + 176);
    v11 = refcnted_regex_t__::vfunc_0;
    v16 = **v15;
    if ( v16 == refcnted_regex_t__::vfunc_0 )
    {
      if ( v15 )
      {
        v17 = (*v15)[2];
        v31 = v12;
        if ( (char *)v17 == (char *)refcnted_regex_t__::vfunc_2 )
        {
          *v15 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
          qregfree(v15 + 2);
          operator delete(v15, 0x30u);
        }
        else
        {
          v17(v15);
        }
        v12 = v31;
      }
    }
    else
    {
      v32 = v12;
      v16(v15);
      v12 = v32;
    }
LABEL_9:
    v18 = 0.0;
    v19 = a1 + 144;
    v20 = 0;
    *(_QWORD *)(a1 + 176) = 0;
    v37 = nullptr;
    v21 = (unsigned __int8 *)&s1;
    v38 = 0;
    if ( !v12 )
      goto LABEL_10;
    goto LABEL_22;
  }
  v37 = nullptr;
  v18 = 0.0;
  v19 = a1 + 144;
  v38 = 0;
LABEL_22:
  src = v12;
  v29 = strlen(v12);
  v37 = (void *)qvector_reserve(&v37, 0, v29 + 1, 1);
  *(_QWORD *)&v38 = v29 + 1;
  memmove(v37, src, v29);
  v21 = (unsigned __int8 *)&s1;
  *((_BYTE *)v37 + v29) = 0;
  v20 = v38;
  if ( (_QWORD)v38 )
  {
    v21 = (unsigned __int8 *)v37;
    v20 = v38 - 1;
  }
LABEL_10:
  sub_4D8FE0(v19, v21, v20, (__int64)v11, 0.0);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    v18 = qfree(v37, (const char *)v21);
  }
  if ( (*(_DWORD *)(a1 + 104) & 3u) - 1 <= 1 )
    sub_4DA280(v30, (__int64)v21, v22, v23, v24, v25, v18, a4, a5, a6, v26, v27, a9, a10);
  if ( v35 && !_InterlockedSub((volatile signed __int32 *)v35, 1u) )
    free(v35);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( (*(_DWORD *)(a1 + 104) & 3u) - 1 <= 1 )
      return sub_54C290(a1, v18);
  }
  else if ( (*(_DWORD *)(a1 + 104) & 3u) - 1 <= 1 )
  {
    return sub_54C290(a1, v18);
  }
  if ( (*a2 & 3u) - 1 <= 1 || !sub_4DACA0((__int64)a2, (__int64)v30) )
    return sub_54C290(a1, v18);
  return v39 - __readfsqword(0x28u);
}

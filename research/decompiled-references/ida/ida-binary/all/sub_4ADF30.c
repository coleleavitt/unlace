__int64 __fastcall sub_4ADF30(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  void (*v13)(void); // rax
  char v14; // r9
  _BYTE *v15; // rdi
  __int64 (*v16)(); // rax
  __int64 (__fastcall *v17)(__int64); // rax
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rax
  int v21; // ecx
  __int64 (__fastcall *v22)(__int64); // rax
  unsigned __int64 (__fastcall *v23)(__int64); // rax
  QT::QAbstractScrollArea *v24; // rsi
  __int64 v25; // rsi
  int v26; // ecx
  unsigned int v27; // r14d
  int v29; // eax
  int v30[2]; // [rsp+0h] [rbp-58h] BYREF
  int v31[4]; // [rsp+8h] [rbp-50h]
  int v32[2]; // [rsp+18h] [rbp-40h]
  int v33[2]; // [rsp+28h] [rbp-30h]

  v11 = *(_QWORD *)a1;
  *(_QWORD *)v33 = __readfsqword(0x28u);
  v13 = *(void (**)(void))(v11 + 672);
  if ( v13 != nullsub_263 )
    v13();
  *(_DWORD *)(a1 + 1784) |= 1u;
  v14 = *(_BYTE *)(a2 + 64);
  *(_QWORD *)v30 = 0;
  *(_OWORD *)v31 = 0;
  *(_QWORD *)v32 = -1;
  sub_4A5780(a1, (void **)v30, a2 + 8, 0, nullptr, (v14 & 0x20) != 0, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10);
  v15 = *(_BYTE **)(a1 + 2392);
  if ( (v15[12] & 4) != 0 )
  {
    v16 = *(__int64 (**)())(*(_QWORD *)v15 + 112LL);
    if ( v16 == exc_chooser_t__::vfunc_14 )
      goto LABEL_5;
    v25 = (__int64)v30;
    v29 = ((__int64 (__fastcall *)(_BYTE *, int *))v16)(v15, v30);
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 2392);
    v29 = sub_49DDB0((__int64)v30, v25, (_BYTE *)&qword_70 + 1, 0);
  }
  v27 = 0;
  if ( !v29 )
    goto LABEL_19;
LABEL_5:
  v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 616LL);
  if ( v17 == sub_4ADEB0 )
  {
    sub_4DEC50(a1 + 104);
    v20 = *(_QWORD *)(a1 + 2384);
    *(_BYTE *)(a1 + 2024) = 0;
    *(_QWORD *)(a1 + 1792) = -1;
    if ( v20 )
      *(_DWORD *)(v20 + 216) = 15;
    v21 = *(_DWORD *)(a2 + 64);
    if ( (v21 & 0x40) != 0 )
      goto LABEL_9;
  }
  else
  {
    v17(a1);
    v21 = *(_DWORD *)(a2 + 64);
    if ( (v21 & 0x40) != 0 )
      goto LABEL_9;
  }
  sub_4A15E0(a1, a2 + 8, (unsigned __int64 *)v30, v21, 0.0, a4, a5, a6, v18, v19, a9, a10);
LABEL_9:
  v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 560LL);
  if ( v22 == sub_4A88B0 )
  {
    vault_files_dirtree_widget_t__::vfunc_30(a1 + 104);
    v23 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 568LL);
    if ( v23 == sub_4A76D0 )
    {
      if ( *(_DWORD *)(a1 + 2376) == 2 )
        v24 = *(QT::QAbstractScrollArea **)(a1 + 2384);
      else
        v24 = *(QT::QAbstractScrollArea **)(a1 + 2472);
      sub_4A72C0(a1, v24);
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64))v23)(a1, a2 + 8);
    }
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))v22)(a1, a2 + 8, 0);
  }
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    v25 = *(_QWORD *)(a1 + 2384);
  else
    v25 = *(_QWORD *)(a1 + 2472);
  sub_4A72C0(a1, (QT::QAbstractScrollArea *)v25);
  v26 = *(_DWORD *)(a1 + 2080);
  if ( v26 >= 0 )
  {
    v25 = (unsigned __int64)((v26 & 0x40) == 0) << v26;
    (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int64, _QWORD))(QT::QCoreApplication::self[2] + 176LL))(
      QT::QCoreApplication::self + 2,
      v25,
      (unsigned __int64)((v26 & 0x40) != 0) << v26,
      0);
  }
  v27 = 1;
LABEL_19:
  if ( *(_QWORD *)v30 )
  {
    *(_QWORD *)v31 = 0;
    qfree(*(_QWORD *)v30, (const char *)v25);
  }
  return v27;
}

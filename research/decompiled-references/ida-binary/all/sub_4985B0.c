__int64 __fastcall chooser_dirtree_item_model_t::lazy_loader_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5)
{
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rsi
  const char *v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  const char *v12; // rsi
  unsigned int v13; // ebx
  __int64 (*v14)(); // rax
  __int64 v16[13]; // [rsp+0h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  v16[7] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 304);
  v8 = *(_QWORD *)(v7 + 2384);
  if ( !v8 )
    return 0;
  v9 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v9 = *(const char **)a2;
  sub_496080(v16, v8, v9, a3, a4, a5);
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(_BYTE **)(v7 + 2392);
  v12 = *(const char **)(v10 + 216);
  if ( !v12 )
    v12 = *(const char **)(v10 + 208);
  v13 = 0;
  v14 = *(__int64 (**)())(*(_QWORD *)v11 + 160LL);
  if ( (v11[12] & 4) != 0 )
  {
    if ( v14 == exc_chooser_t__::vfunc_20 )
      goto LABEL_8;
LABEL_11:
    v13 = ((__int64 (__fastcall *)(_BYTE *, const char *, __int64))v14)(v11, v12, a2);
    goto LABEL_8;
  }
  if ( v14 != addon_chooser_t__::vfunc_20 )
    goto LABEL_11;
LABEL_8:
  sub_490100((__int64)v16, v12);
  return v13;
}

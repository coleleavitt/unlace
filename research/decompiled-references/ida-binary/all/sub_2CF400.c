__int64 __fastcall sub_2CF400(
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
  int v11; // eax
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int16 *v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  QT::QCoreApplication *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  double v22; // xmm4_8
  double v23; // xmm5_8
  volatile signed __int32 *v24; // rdi

  *(_BYTE *)(a2 + 12) = 0;
  v11 = QT::QKeyEvent::modifiers((QT::QKeyEvent *)a2);
  if ( !*(_BYTE *)(a1 + 1080) || (v11 & 0xFDFFFFFF) != 0 && v11 != 0x20000000 )
    return sub_1F7150(a1, a2, a3);
  v12 = *(volatile signed __int32 **)(a2 + 40);
  v13 = *(_QWORD *)(a2 + 56);
  if ( !v12 )
  {
    if ( v13 != 1 )
      return sub_1F7150(a1, a2, a3);
    v15 = *(unsigned __int16 **)(a2 + 48);
    goto LABEL_11;
  }
  _InterlockedAdd(v12, 1u);
  if ( v13 != 1 )
  {
    if ( !_InterlockedSub(v12, 1u) )
      free((void *)v12);
    return sub_1F7150(a1, a2, a3);
  }
  if ( !_InterlockedSub(v12, 1u) )
    free((void *)v12);
  v24 = *(volatile signed __int32 **)(a2 + 40);
  v15 = *(unsigned __int16 **)(a2 + 48);
  if ( !v24 )
  {
LABEL_11:
    v16 = *v15;
    goto LABEL_12;
  }
  _InterlockedAdd(v24, 1u);
  v16 = *v15;
  if ( !_InterlockedSub(v24, 1u) )
    free((void *)v24);
LABEL_12:
  if ( !(unsigned __int8)QT::QChar::isPrint((QT::QChar *)v16, a2) )
    return sub_1F7150(a1, a2, a3);
  v19 = (QT::QCoreApplication *)sub_1EB5B0(a1, a2, v17, v18, a3);
  sub_176E70(v19);
  result = sub_2CD8E0(a1, v16, v20, v21, a3, a4, a5, a6, v22, v23, a9, a10);
  *(_BYTE *)(a2 + 12) = 1;
  return result;
}

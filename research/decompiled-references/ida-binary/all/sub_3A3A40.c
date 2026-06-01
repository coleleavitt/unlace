unsigned __int64 __fastcall sub_3A3A40(
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi

  if ( sub_3839F0(*(_QWORD *)(a2 + 8)) )
  {
    v13 = sub_1F4320(a1);
    if ( v13 && (*(_BYTE *)(v13 + 216) & 2) == 0 )
    {
      sub_5392E0(a2, 0, 1);
      sub_5392A0(a2, "srcdbg:SetTabSize", 0, 1);
    }
    sub_3347B0(a2, a3, a4, a5, a6, v14, v15, a9, a10);
  }
  else if ( (unsigned int)sub_1EB590(a1, a2, v11, v12, a3) == 2 && (v19 = *(_QWORD *)(a1 + 896)) != 0
         || (unsigned int)sub_1EB590(a1, a2, v17, v18, a3) == 3 && (v19 = *(_QWORD *)(a1 + 904)) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 688LL))(v19, a2);
  }
  return sub_206150(a1, (QT::QWidget **)a2, a3);
}

__int64 __fastcall sub_2BF090(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  double v21; // xmm4_8
  double v22; // xmm5_8

  v10 = sub_2B27A0(a1, (__int64)a2, a3);
  if ( !v10 )
    return 0;
  v13 = v10;
  v14 = *(_QWORD *)(v10 + 440);
  if ( !v14 )
    return 0;
  v15 = *(_QWORD *)(v14 + 8);
  result = 0;
  if ( v15 )
  {
    if ( !(unsigned __int8)sub_2A0C20(v15, (__int64)a2, v11, v12)
      || (a2 = "HIDECANCEL\n"
               "AUTOHIDE REGISTRY\n"
               "A custom layout for the current graph exists.\n"
               "Do you want to delete it and redo the layout?",
          (unsigned int)sub_1698A0(
                          0,
                          (int)"HIDECANCEL\n"
                               "AUTOHIDE REGISTRY\n"
                               "A custom layout for the current graph exists.\n"
                               "Do you want to delete it and redo the layout?") == 1) )
    {
      sub_29BFD0(v15, a3, (__int64)a2, v17, v18);
      sub_2BB6B0(v13, a3, a4, a5, a6, v21, v22, a9, a10, (__int64)a2, v19, v20);
    }
    return 1;
  }
  return result;
}

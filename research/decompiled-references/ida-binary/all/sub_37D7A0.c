__int64 __fastcall sub_37D7A0(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  const char *v22; // rsi
  _QWORD v24[21]; // [rsp+0h] [rbp-A8h] BYREF

  v24[17] = __readfsqword(0x28u);
  if ( (int)get_segm_qty() <= 1 )
  {
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\nThe segment translation requires more than one segment",
      (__int64)a2,
      v10,
      v11,
      v12,
      v13,
      a3,
      a4,
      a5,
      a6,
      v14,
      v15,
      a9,
      a10,
      v24[0]);
    return 1;
  }
  if ( (*(_BYTE *)(get_ph(a1, a2) + 10) & 2) != 0 )
  {
    v22 = (const char *)qword_8CD748;
    sub_37D360((QT::QWidget *)v24, (__int64)qword_8CD748);
    sub_37C050(v24, v22);
    if ( (unsigned int)sub_53AB40((QT::QWidget *)v24) == 1 )
      sub_37ACE0(v24);
    TSegTransBox__::vfunc_3((QT::QDialog *)v24, v22);
    return 1;
  }
  sub_169630(
    (int)"ICON ERROR\nAUTOHIDE NONE\nThe current processor module doesn't support the segment translation",
    (__int64)a2,
    v16,
    v17,
    v18,
    v19,
    a3,
    a4,
    a5,
    a6,
    v20,
    v21,
    a9,
    a10,
    v24[0]);
  return 0;
}

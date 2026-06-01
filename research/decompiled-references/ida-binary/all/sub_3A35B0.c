__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        __int64 a19)
{
  bool v19; // zf
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  __int128 v22; // [rsp+18h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-30h]
  unsigned __int64 v24; // [rsp+38h] [rbp-20h]

  v19 = *(_WORD *)(a2 + 8) == 3005;
  v24 = __readfsqword(0x28u);
  if ( !v19 )
    return chooser_widget_t__::vfunc_5(
             a1,
             (QT::QEvent *)a2,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19);
  *(_BYTE *)(a2 + 12) = 1;
  v22 = 0;
  v21 = 0;
  v23 = -1;
  sub_4A6DB0(a1);
  sub_3A18E0(a1, (const char *)(a2 + 32), &v21, *(_QWORD *)(a2 + 16));
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, (const char *)(a2 + 32));
  }
  return 1;
}

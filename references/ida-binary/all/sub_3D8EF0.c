__int64 __fastcall sub_3D8EF0(
        __int64 a1,
        __m128i *a2,
        __m128 a3,
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
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  int v17; // r12d
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  char v25; // [rsp+0h] [rbp-B8h]
  int v26; // [rsp+4h] [rbp-B4h] BYREF
  _BYTE v27[8]; // [rsp+8h] [rbp-B0h] BYREF
  __m128i ptr[7]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3126B0((__int64)qword_8CD748) )
  {
    v26 = 0;
    if ( sub_5313F0(unk_8CA570) )
    {
      QT::QAction::shortcut((QT::QAction *)v27);
      QT::QKeySequence::toString(ptr, v27, 1);
      a2 = ptr;
      v17 = sub_3D8B00(&v26, ptr, *(double *)a3.m128_u64, a4, a5, a6, v15, v16, a9, a10, v11, v12, v13, v14);
      if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v27);
      v18 = v26;
    }
    else
    {
      v18 = 0;
      v17 = 0;
    }
    if ( !(unsigned int)sub_314220(a1) )
      sub_169700((int)"NextWin failed\n", (__int64)a2, v19, v20, v21, v22, a3, a4, a5, a6, v23, v24, a9, a10, v25);
    sub_3D8560(ptr, v17, v18, 0);
    sub_53AB40((QT::QWidget *)ptr);
    ViewSwitcher__::vfunc_3((QT::QDialog *)ptr);
  }
  return 1;
}

unsigned __int64 __fastcall swap_place_holders(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        __int64 a8,
        QT::QWidget *a9)
{
  double v9; // xmm4_8
  double v10; // xmm5_8
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *i; // rbp
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h]
  int v21[2]; // [rsp+18h] [rbp-30h]
  int v22; // [rsp+20h] [rbp-28h]
  int v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+30h] [rbp-18h]
  int v25; // [rsp+38h] [rbp-10h]
  __int64 v26; // [rsp+40h] [rbp-8h]

  sub_4D07E0(a9, ptr.m128i_i32[0], ptr.m128i_i64[1], v20, __readfsqword(0x28u), v22, v23, v24, v25, v26);
  sub_480540(&ptr, a1, a2, a3, a4, v9, v10, a7, (__int64)(QT::QCoreApplication::self + 2), a9);
  v14 = (int *)ptr.m128i_i64[0];
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
  {
    sub_1A2030((__int64)&ptr, 0, 0, 0, v12, v13);
    v14 = (int *)ptr.m128i_i64[0];
  }
  v15 = ptr.m128i_i64[1];
  v16 = (_QWORD *)ptr.m128i_i64[1];
  if ( !v14 || *v14 > 1 )
  {
    sub_1A2030((__int64)&ptr, 0, 0, 0, v12, v13);
    v15 = ptr.m128i_i64[1];
  }
  for ( i = (_QWORD *)(v15 + 8 * v20); i != v16; ++v16 )
    callui(62, *v16, *v16, v11, v12, v13);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  return *(_QWORD *)v21 - __readfsqword(0x28u);
}

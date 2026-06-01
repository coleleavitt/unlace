__int64 __fastcall sub_374570(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rbx
  __int64 *func; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v19; // rbp
  QT::QAbstractScrollArea *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 *v27; // [rsp+0h] [rbp-88h] BYREF
  int v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-78h]
  __m128i v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+40h] [rbp-48h]
  __int64 **v34; // [rsp+48h] [rbp-40h]
  _QWORD v35[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-20h] BYREF

  v36 = __readfsqword(0x28u);
  v10 = v35;
  v35[0] = *(_QWORD *)(a1 + 88);
  v35[1] = getinf(18);
  v35[2] = getinf(16);
  while ( 1 )
  {
    func = (__int64 *)get_func(*v10);
    if ( func )
      break;
    if ( ++v10 == &v36 )
      goto LABEL_4;
  }
  v19 = *func;
  if ( *func == -1 || (a2 = 0, (v20 = sub_2E1080(nullptr, nullptr, *(double *)a3.m128_u64)) == nullptr) )
  {
LABEL_4:
    sub_169630(
      (int)"IDA failed to open a new proximity browser.\n"
           "Only functions can be displayed in the proximity browser.\n"
           "Please place the cursor in a function first.",
      a2,
      v12,
      v13,
      v14,
      v15,
      a3,
      a4,
      a5,
      a6,
      v16,
      v17,
      a9,
      a10,
      (char)v27);
    return 0;
  }
  v28 = 0;
  v27 = &idaplace_t___vtable;
  v29 = v19;
  v31 = 0;
  v32 = -1;
  v33 = 3;
  v34 = &v27;
  v30 = 0;
  v34 = (__int64 **)idaplace_t__clone(&v27);
  sub_1F8A60((__int64)v20, 3, v21, v22, 0.0);
  sub_1FFC10((__int64)v20, &v30, 5, 0, v23, v24, 0.0, a4, a5, a6, v25, v26, a9, a10);
  if ( v34 )
    qfree(v34, v30.m128i_i8);
  return 1;
}

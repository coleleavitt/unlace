__int64 __fastcall sub_63EF20(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        char *a5,
        char *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        char *a15,
        char *a16,
        char *a17,
        unsigned __int8 *a18)
{
  __int64 v18; // rbx
  double v19; // xmm4_8
  double v20; // xmm5_8
  int v21; // eax
  unsigned int v22; // ebx
  char *v27[2]; // [rsp+20h] [rbp-80h] BYREF
  void *v28; // [rsp+30h] [rbp-70h]
  __int64 v29; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+48h] [rbp-58h]
  __int64 v31; // [rsp+50h] [rbp-50h]
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v18 = a2;
  v32 = __readfsqword(0x28u);
  if ( !a2 )
    v18 = a1[1];
  sub_6369F0((__int64)v27, *a1, v18, a5, a6, a15, a7, a8, a9, a10, a11, a12, a13, a14);
  v21 = sub_63E120(a1, v18, a3, a4, a5, v27[0], a7, a8, a9, a10, v19, v20, a13, a14, v27[1], a16, a17, a18, nullptr, 1);
  if ( v21 == 10 )
  {
    set_error_string();
    v22 = -3;
  }
  else
  {
    v22 = -(v21 != 0);
  }
  if ( ptr )
  {
    v31 = 0;
    qfree(ptr);
  }
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  return v22;
}


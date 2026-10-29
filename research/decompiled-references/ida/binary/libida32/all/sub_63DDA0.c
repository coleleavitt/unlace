__int64 __fastcall sub_63DDA0(
        __int64 *a1,
        __int64 *a2,
        char *a3,
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
        unsigned __int8 *a17,
        __int64 *a18)
{
  __int64 *v18; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  char *v24[2]; // [rsp+20h] [rbp-80h] BYREF
  void *v25; // [rsp+30h] [rbp-70h]
  __int64 v26; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+48h] [rbp-58h]
  __int64 v28; // [rsp+50h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-38h]

  v18 = a2;
  v29 = __readfsqword(0x28u);
  if ( !a2 )
    v18 = (__int64 *)a1[1];
  sub_6369F0((__int64)v24, *a1, (__int64)v18, a3, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v19 = sub_63C350(a1, v18, a3, a4, v24[0], v24[1], a7, a8, a15, a16, a17, a18, nullptr, 1, 0);
  if ( v19 == 10 )
  {
    set_error_string();
    v20 = -3;
  }
  else
  {
    v20 = -(v19 != 0);
  }
  if ( ptr )
  {
    v28 = 0;
    qfree(ptr);
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
  }
  return v20;
}


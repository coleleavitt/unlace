__m128i *__fastcall sub_2007280(__m128i *a1)
{
  __m128 v2; // [rsp+0h] [rbp-A8h] BYREF
  void (__fastcall *v3)(__m128 *, __m128 *, __int64); // [rsp+10h] [rbp-98h]
  __m128 v4; // [rsp+20h] [rbp-88h] BYREF
  void (__fastcall *v5)(__m128 *, __m128 *, __int64); // [rsp+30h] [rbp-78h]
  __m128 v6; // [rsp+40h] [rbp-68h] BYREF
  void (__fastcall *v7)(__m128 *, __m128 *, __int64); // [rsp+50h] [rbp-58h]
  __m128i v8; // [rsp+60h] [rbp-48h] BYREF
  void (__fastcall *v9)(__m128i *, __m128i *, __int64); // [rsp+70h] [rbp-38h]

  sub_1FF1130(&v6);
  sub_1FF10D0(&v4);
  sub_1FF13E0(&v8, (__m128i *)&v4, (__m128i *)&v6);
  sub_1FF1100(&v2);
  sub_1FF13E0(a1, (__m128i *)&v2, &v8);
  if ( v3 )
    v3(&v2, &v2, 3);
  if ( v9 )
    v9(&v8, &v8, 3);
  if ( v5 )
    v5(&v4, &v4, 3);
  if ( v7 )
    v7(&v6, &v6, 3);
  return a1;
}

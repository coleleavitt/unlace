void __fastcall sub_965990(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 **a5,
        __m128i a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rdx
  signed __int64 v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // [rsp+0h] [rbp-48h]

  v10 = (__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3) + 1) / 2;
  v11 = 8
      * (v10
       + ((0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3)
         + 1
         + ((0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3) + 1) >> 63))
        & 0xFFFFFFFFFFFFFFFELL));
  v12 = (__m128i *)((char *)a1 + v11);
  v13 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - &a1->m128i_i8[v11]) >> 3);
  v14 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
  if ( v10 <= a4 )
  {
    sub_9650D0(a1, v12->m128i_i8, a3->m128i_i8, a5, a6, a7, a8);
    sub_9650D0(v12, a2->m128i_i8, a3->m128i_i8, a5, a6, a7, a8);
    sub_9603B0(a1, v12, a2, v14, v13, a3, a5);
  }
  else
  {
    sub_965990(a1, v12, a3, a4, a5);
    sub_965990(v12, a2, a3, a4, a5);
    sub_9627C0(a1, v12, a2, v14, v13, a3, a4, (__int64)a5);
  }
}


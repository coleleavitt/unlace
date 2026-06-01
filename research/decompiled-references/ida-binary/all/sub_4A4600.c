unsigned __int64 __fastcall sub_4A4600(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rax
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  const char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v22; // [rsp+0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+18h] [rbp-60h]
  __int128 v25; // [rsp+20h] [rbp-58h]
  char v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_4E0B00(a1 + 104, a4) )
  {
    v14 = *(_QWORD *)a1;
    v26 = 0;
    v23 = 0;
    v22 = 0;
    v24 = 0;
    v25 = 0;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(v14 + 624))(a1, &v22, 7);
    if ( a2 )
      sub_4A15E0(a1, (unsigned __int64)&v22, a2, a3, 0.0, a6, a7, a8, v15, v16, a11, a12);
    v17 = (const char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 704LL))(a1, &v22, a3);
    sub_4E0B20(a1 + 104, v17, a4);
    sub_4DE2C0();
    v18 = v22;
    if ( v22 )
    {
      v19 = v23;
      if ( (_QWORD)v23 )
      {
        v20 = 0;
        do
        {
          ++v20;
          sub_4DE2C0();
          v18 = v22;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v23 = 0;
      qfree(v18, v17);
    }
  }
  return v27 - __readfsqword(0x28u);
}

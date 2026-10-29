void __fastcall __noreturn sub_79CA90(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v19; // rsi
  _BYTE v20[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-A8h]
  __int64 v22; // [rsp+38h] [rbp-A0h]
  __int64 v23; // [rsp+40h] [rbp-98h]
  __int64 v24; // [rsp+48h] [rbp-90h]
  __m128 v25; // [rsp+50h] [rbp-88h]
  __m128 v26; // [rsp+60h] [rbp-78h]
  __m128 v27; // [rsp+70h] [rbp-68h]
  __m128 v28; // [rsp+80h] [rbp-58h]
  __m128 v29; // [rsp+90h] [rbp-48h]
  __m128 v30; // [rsp+A0h] [rbp-38h]
  __m128 v31; // [rsp+B0h] [rbp-28h]
  __m128 v32; // [rsp+C0h] [rbp-18h]

  v21 = a11;
  v22 = a12;
  v23 = a13;
  v24 = a14;
  v25 = a2;
  v26 = a3;
  v27 = a4;
  v28 = a5;
  v29 = a6;
  v30 = a7;
  v31 = a8;
  v32 = a9;
  sub_3572D0((char **)(a1 + 24));
  v19 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v19 = *(const char **)(a1 + 24);
  sub_3B7400((int)"%s", v19, v15, v16, v17, v18, 0x3000000010LL, &a15, v20);
}


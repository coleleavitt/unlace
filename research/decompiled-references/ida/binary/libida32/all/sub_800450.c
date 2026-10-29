unsigned __int64 __fastcall sub_800450(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 *v14; // rbx
  size_t v15; // rax
  __int64 v16; // rbp
  size_t v17; // r12
  size_t v18; // r14
  __int64 v19; // rsi
  __int64 v21; // rax
  char s[1000]; // [rsp+20h] [rbp-4D8h] BYREF
  unsigned __int64 v23; // [rsp+408h] [rbp-F0h]
  __int64 v24; // [rsp+418h] [rbp-E0h]
  __int64 v25; // [rsp+420h] [rbp-D8h]
  __int64 v26; // [rsp+428h] [rbp-D0h]
  __int64 v27; // [rsp+430h] [rbp-C8h]
  __int64 v28; // [rsp+438h] [rbp-C0h]
  __m128 v29; // [rsp+440h] [rbp-B8h]
  __m128 v30; // [rsp+450h] [rbp-A8h]
  __m128 v31; // [rsp+460h] [rbp-98h]
  __m128 v32; // [rsp+470h] [rbp-88h]
  __m128 v33; // [rsp+480h] [rbp-78h]
  __m128 v34; // [rsp+490h] [rbp-68h]
  __m128 v35; // [rsp+4A0h] [rbp-58h]
  __m128 v36; // [rsp+4B0h] [rbp-48h]

  v24 = a10;
  v25 = a11;
  v26 = a12;
  v27 = a13;
  v28 = a14;
  v29 = a1;
  v30 = a2;
  v31 = a3;
  v32 = a4;
  v33 = a5;
  v34 = a6;
  v35 = a7;
  v36 = a8;
  v23 = __readfsqword(0x28u);
  if ( (int)qvsnprintf(s) < 0 )
    s[999] = 0;
  v14 = (__int64 *)qword_2CAA998;
  if ( qword_2CAA998 )
  {
    v15 = strlen(s);
    v16 = v14[1];
    v17 = v15;
    v18 = v15;
    if ( v16 )
    {
      --v16;
      v18 = v15 + v16;
    }
    v19 = *v14;
    if ( v14[2] < v18 + 1 )
    {
      v21 = qvector_reserve(v14, v19, v18 + 1, 1);
      *v14 = v21;
      v19 = v21;
    }
    v14[1] = v18 + 1;
    *(_BYTE *)(v19 + v18) = 0;
    memmove((void *)(v16 + *v14), s, v17);
  }
  else
  {
    sub_713900((__int64)"%s", s);
  }
  return v23 - __readfsqword(0x28u);
}


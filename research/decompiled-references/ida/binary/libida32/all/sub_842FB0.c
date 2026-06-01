__int64 __fastcall sub_842FB0(int a1, int a2, unsigned int **a3, __m128i **a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 v8; // r12
  __m128i *v9; // rbx
  _BOOL8 v10; // rsi
  unsigned int v11; // edx
  __m128i *v12; // rax
  char v13; // al
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  __m128i *v18; // [rsp+8h] [rbp-90h] BYREF
  int v19[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  int v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  char v24; // [rsp+40h] [rbp-58h]
  __m128i v25; // [rsp+44h] [rbp-54h] BYREF
  __m128i v26; // [rsp+54h] [rbp-44h] BYREF
  char v27; // [rsp+64h] [rbp-34h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-30h]

  v8 = 0;
  v28 = __readfsqword(0x28u);
  if ( a7 )
    v8 = *a7;
  v9 = *a4;
  v19[0] = a1;
  v19[1] = a2;
  v20 = a5;
  v21 = a6;
  v22 = 0;
  v18 = (__m128i *)((char *)v9->m128i_i64 + 4);
  v9->m128i_i8[0] = 113;
  v9->m128i_i8[3] = 0;
  v10 = *(*a3)++ == -2146566143;
  v11 = sub_842CF0(v19, v10, a3, (__int64 *)&v18, &v23, a7);
  if ( v11 )
  {
    if ( a7 )
      *a7 += (char *)v18 - (char *)v9;
    v12 = &v25;
    do
    {
      if ( v12->m128i_i32[0] != -1 )
      {
        v13 = v24;
        v18 = v9;
        if ( v24 == 6 )
        {
          if ( a7 )
          {
            v15 = *a7 - 33;
            if ( (unsigned __int64)(*a7 - v8) <= 0x20 )
              v15 = v8;
            *a7 = v15;
          }
          v16 = 111;
        }
        else
        {
LABEL_10:
          if ( v13 != 7 )
            goto LABEL_11;
          if ( a7 )
          {
            v17 = *a7 - 33;
            if ( (unsigned __int64)(*a7 - v8) < 0x21 )
              v17 = v8;
            *a7 = v17;
          }
          v16 = 110;
        }
        v9->m128i_i8[0] = v16;
        v9 = (__m128i *)((char *)v9 + 33);
        v9[-2] = _mm_loadu_si128(&v25);
        v9[-1] = _mm_loadu_si128(&v26);
        goto LABEL_11;
      }
      v12 = (__m128i *)((char *)v12 + 4);
    }
    while ( &v27 != (char *)v12 );
    v13 = v24;
    v18 = v9;
    if ( v24 != 6 )
      goto LABEL_10;
    if ( a7 )
      --*a7;
    v9->m128i_i8[0] = 13;
    v9 = (__m128i *)((char *)v9 + 1);
LABEL_11:
    *a4 = v9;
  }
  return v11;
}


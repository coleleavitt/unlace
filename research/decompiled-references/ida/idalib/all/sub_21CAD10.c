__int64 __fastcall sub_21CAD10(__int64 a1, char **a2, __int64 a3)
{
  char **v3; // r13
  size_t v6; // rax
  void *v7; // rdi
  size_t v8; // rbp
  __int64 result; // rax
  char **v10; // r14
  char *v11; // rbp
  char *v12; // r15
  char v13; // al
  __m128 v14; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+10h] [rbp-58h] BYREF
  char v16; // [rsp+20h] [rbp-48h]

  v3 = a2;
  v6 = j__strlen("Binary IDs: \n");
  v7 = *(void **)(a1 + 32);
  v8 = v6;
  if ( v6 > *(_QWORD *)(a1 + 24) - (_QWORD)v7 )
  {
    sub_227BF10(a1, "Binary IDs: \n", v6);
  }
  else if ( v6 )
  {
    memcpy(v7, "Binary IDs: \n", v6);
    *(_QWORD *)(a1 + 32) += v8;
  }
  result = 5 * a3;
  v10 = &a2[5 * a3];
  if ( a2 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v11 = &v3[1][(_QWORD)*v3];
        if ( *v3 != v11 )
        {
          v12 = *v3;
          v14 = _mm_loadh_ps((const double *)&off_2BE9BC8);
          do
          {
            v13 = *v12++;
            si128 = _mm_load_si128((const __m128i *)&v14);
            v16 = v13;
            sub_227C560(a1, &si128);
          }
          while ( v12 != v11 );
        }
        result = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) != result )
          break;
        v3 += 5;
        result = sub_227BF10(a1, "\n", 1);
        if ( v10 == v3 )
          return result;
      }
      v3 += 5;
      *(_BYTE *)result = 10;
      ++*(_QWORD *)(a1 + 32);
    }
    while ( v10 != v3 );
  }
  return result;
}

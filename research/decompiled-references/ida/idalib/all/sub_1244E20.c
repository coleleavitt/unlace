const char *__fastcall sub_1244E20(__int64 **a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // rax
  char *v8; // rdx
  __int64 *v9; // rbp
  char *v10; // rcx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, void *, __int64); // r13
  const char *v13; // rbp
  void *v15; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-190h]
  __int64 v17; // [rsp+10h] [rbp-188h] BYREF
  _QWORD v18[4]; // [rsp+20h] [rbp-178h] BYREF
  __int16 v19; // [rsp+40h] [rbp-158h]
  void *ptr; // [rsp+50h] [rbp-148h] BYREF
  __m128i si128; // [rsp+58h] [rbp-140h]
  _BYTE v22[304]; // [rsp+68h] [rbp-130h] BYREF

  sub_2253560(&v15, &a7);
  v7 = v16;
  v8 = (char *)v15;
  if ( !v16 )
    goto LABEL_18;
  if ( *((char *)v15 + v16 - 1) == 61 )
  {
    if ( v16 > v16 - 1 )
      v7 = v16 - 1;
    if ( v7 > 3 )
    {
LABEL_6:
      if ( *(_DWORD *)v15 == 762277485 )
      {
        v7 -= 4LL;
        v8 = (char *)v15 + 4;
        goto LABEL_8;
      }
      goto LABEL_20;
    }
    if ( !v7 )
    {
LABEL_18:
      v7 = 0;
      goto LABEL_8;
    }
  }
  else if ( v16 > 3 )
  {
    goto LABEL_6;
  }
LABEL_20:
  if ( *(_BYTE *)v15 == 109 )
  {
    --v7;
    v8 = (char *)v15 + 1;
  }
LABEL_8:
  v9 = *a1;
  v18[3] = v7;
  v18[2] = v8;
  v10 = "+";
  if ( !a2 )
    v10 = "-";
  v19 = 1283;
  v11 = *v9;
  v18[0] = v10;
  v12 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v11 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v22;
  sub_22538C0(v18, &ptr);
  v13 = (const char *)v12(v9, ptr, si128.m128i_i64[0]);
  if ( ptr != v22 )
    free(ptr);
  if ( v13 )
    strlen(v13);
  if ( v15 != &v17 )
    operator delete(v15);
  return v13;
}

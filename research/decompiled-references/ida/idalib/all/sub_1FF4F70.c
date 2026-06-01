_QWORD *__fastcall sub_1FF4F70(_QWORD *a1, __int64 a2, const void *a3, size_t a4, void **a5)
{
  size_t v9; // rax
  _BYTE *v10; // rdi
  char *v12; // rdi
  const char *v13; // [rsp+0h] [rbp-508h] BYREF
  __int16 v14; // [rsp+20h] [rbp-4E8h]
  _BYTE v15[32]; // [rsp+30h] [rbp-4D8h] BYREF
  __int16 v16; // [rsp+50h] [rbp-4B8h]
  _BYTE v17[32]; // [rsp+60h] [rbp-4A8h] BYREF
  __int16 v18; // [rsp+80h] [rbp-488h]
  _QWORD v19[4]; // [rsp+90h] [rbp-478h] BYREF
  __int16 v20; // [rsp+B0h] [rbp-458h]
  void *ptr; // [rsp+C0h] [rbp-448h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-440h]
  _BYTE v23[1072]; // [rsp+D8h] [rbp-430h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  ptr = v23;
  if ( a4 > 0x400 )
  {
    sub_2236E10(&ptr, v23, a4, 1);
    v12 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v9 = a4;
    if ( !a4 )
      goto LABEL_3;
    v12 = v23;
  }
  memcpy(v12, a3, a4);
  v9 = a4 + si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v9;
  v20 = 257;
  v18 = 257;
  v16 = 257;
  v14 = 259;
  v13 = "compile_flags.txt";
  sub_228A3B0(&ptr, &v13, v15, v17, v19);
  sub_1FF4D20(v19, ptr, si128.m128i_u64[0], a5);
  v10 = ptr;
  *a1 = v19[0];
  if ( v10 != v23 )
    free(v10);
  return a1;
}

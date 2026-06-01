const char *__fastcall clang_getTypePrettyPrinted(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _BYTE *v8; // r12
  __int64 v10; // [rsp+8h] [rbp-100h] BYREF
  _BYTE v11[32]; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v12; // [rsp+30h] [rbp-D8h]
  __int64 *v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+48h] [rbp-C0h]
  __int128 v15; // [rsp+50h] [rbp-B8h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  char v17; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+6Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+70h] [rbp-98h]
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-80h]
  _BYTE v22[112]; // [rsp+98h] [rbp-70h] BYREF

  v10 = a8;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return sub_690460();
  p_ptr = &ptr;
  v13 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  v15 = 0;
  ptr = v22;
  v14 = 2;
  v17 = 0;
  v18 = 1;
  v16 = 0;
  sub_2623850(&v13, 0, 0, 0, a5, a6);
  v12 = 257;
  sub_B2AEC0(&v10, &v13, a1, v11, 0);
  v8 = sub_6905C0(*p_ptr, (size_t)p_ptr[1]);
  v13 = &qword_4A6EA70[2];
  sub_2623770(&v13);
  if ( ptr != v22 )
    free(ptr);
  return v8;
}


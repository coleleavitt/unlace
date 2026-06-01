_QWORD *__fastcall sub_F71960(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  _BYTE *v4; // rsi
  void *v5; // rdx
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-C8h] BYREF
  int v8; // [rsp+8h] [rbp-C0h]
  __int128 v9; // [rsp+10h] [rbp-B8h]
  __int64 v10; // [rsp+20h] [rbp-A8h]
  char v11; // [rsp+28h] [rbp-A0h]
  int v12; // [rsp+2Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+30h] [rbp-98h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i si128; // [rsp+48h] [rbp-80h]
  _BYTE v16[112]; // [rsp+58h] [rbp-70h] BYREF

  v8 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v7 = &off_2BEBEE0;
  v9 = 0;
  p_ptr = &ptr;
  ptr = v16;
  v11 = 0;
  v12 = 1;
  v10 = 0;
  sub_227B8B0(&v7, 0, 0, 0);
  sub_F71500(a2, (__int64)&v7, a3, 0);
  v4 = *p_ptr;
  v5 = p_ptr[1];
  *a1 = a1 + 2;
  sub_F6EAC0(a1, v4, (__int64)v5 + (_QWORD)v4);
  v7 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v7);
  if ( ptr != v16 )
    free(ptr);
  return a1;
}

void __fastcall sub_E6F860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r12
  void *v6; // rdi
  unsigned __int64 v7; // r13
  void *v8; // rsi
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-C8h] BYREF
  int v10; // [rsp+8h] [rbp-C0h]
  __int128 v11; // [rsp+10h] [rbp-B8h]
  __int64 v12; // [rsp+20h] [rbp-A8h]
  char v13; // [rsp+28h] [rbp-A0h]
  int v14; // [rsp+2Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+30h] [rbp-98h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i si128; // [rsp+48h] [rbp-80h]
  _BYTE v18[112]; // [rsp+58h] [rbp-70h] BYREF

  v10 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v18;
  v11 = 0;
  v13 = 0;
  v9 = &off_2BEBEE0;
  v14 = 1;
  v12 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v9, 0, 0, 0);
  sub_E6F330(a1, a2, (__int64)&v9, 0, 1, v4);
  v5 = sub_227B910(a3, p_ptr[1]);
  v6 = *(void **)(v5 + 32);
  v7 = (unsigned __int64)p_ptr[1];
  v8 = *p_ptr;
  if ( v7 > *(_QWORD *)(v5 + 24) - (_QWORD)v6 )
  {
    sub_227BF10(v5, v8, p_ptr[1]);
  }
  else if ( v7 )
  {
    memcpy(v6, v8, (size_t)p_ptr[1]);
    *(_QWORD *)(v5 + 32) += v7;
  }
  v9 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v9);
  if ( ptr != v18 )
    free(ptr);
}

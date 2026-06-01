void __fastcall __noreturn sub_2221AD0(__int64 a1, unsigned __int8 a2)
{
  void (__fastcall *v2)(__int64, void *, _QWORD); // r12
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-C8h] BYREF
  int v6; // [rsp+8h] [rbp-C0h]
  __int128 v7; // [rsp+10h] [rbp-B8h]
  __int64 v8; // [rsp+20h] [rbp-A8h]
  char v9; // [rsp+28h] [rbp-A0h]
  int v10; // [rsp+2Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+30h] [rbp-98h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i si128; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v14[112]; // [rsp+58h] [rbp-70h] BYREF

  sub_2221AA0(&stru_2D0AB00);
  v2 = (void (__fastcall *)(__int64, void *, _QWORD))qword_2D0AB40;
  v3 = qword_2D0AB38;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&stru_2D0AB00);
  if ( v2 )
  {
    sub_2253560(&ptr, a1);
    v2(v3, ptr, a2);
    if ( ptr != &si128.m128i_u64[1] )
      operator delete(ptr);
  }
  else
  {
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    v5 = &off_2BEBEE0;
    v7 = 0;
    ptr = v14;
    v6 = 2;
    v9 = 0;
    v10 = 1;
    v8 = 0;
    sub_227B8B0(&v5, 0, 0, 0);
    v4 = sub_995540((__int64)&v5, "LLVM ERROR: ");
    sub_2254180(a1, v4);
    sub_995540(v4, "\n");
    sub_2221A30((char *)*p_ptr, (size_t)p_ptr[1]);
    v5 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v5);
    if ( ptr != v14 )
      free(ptr);
  }
  sub_2296D20();
  if ( !a2 )
    exit(1);
  abort();
}

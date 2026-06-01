/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054DF0
// Address: 0x0000000140054DF0

//----- (0000000140054DF0) ----------------------------------------------------
int sub_140054DF0()
{
  __m128i *v0; // rbx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF

  v0 = &si128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140099680);
  do
  {
    signal(v0->m128i_i32[0], (_crt_signal_t)Function);
    v0 = (__m128i *)((char *)v0 + 4);
  }
  while ( v0 != (__m128i *)&v3 );
  return atexit(sub_140054DE0);
}
// 140099680: using guessed type __int128 xmmword_140099680;

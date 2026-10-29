__int64 __fastcall sub_A630D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // r13d
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-188h] BYREF
  int v8; // [rsp+8h] [rbp-180h]
  __int128 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+20h] [rbp-168h]
  char v11; // [rsp+28h] [rbp-160h]
  int v12; // [rsp+2Ch] [rbp-15Ch]
  void **p_ptr; // [rsp+30h] [rbp-158h]
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __m128i si128; // [rsp+48h] [rbp-140h]
  _BYTE v16[304]; // [rsp+58h] [rbp-130h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL) > 9u )
    v4 = sub_E7BC70(a1, v3, 0);
  else
    v4 = sub_E3A9F0(a1, v3, 0);
  p_ptr = &ptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v7 = &off_2BEBEE0;
  v9 = 0;
  ptr = v16;
  v8 = 2;
  v11 = 0;
  v12 = 1;
  v10 = 0;
  sub_227B8B0(&v7, 0, 0, 0);
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v4 + 104LL))(v4, a2, &v7);
  v5 = sub_2236470(ptr, si128.m128i_i64[0]);
  v7 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v7);
  if ( ptr != v16 )
    free(ptr);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}

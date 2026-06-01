__int64 __fastcall sub_21D40E0(__int64 *a1, char a2, const char *a3)
{
  size_t v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  size_t v10; // rax
  _QWORD *v11; // rsi
  char v12; // dl
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB830);
  ptr = &si128.m128i_u64[1];
  v4 = j__strlen(a3);
  if ( v4 )
    sub_2222BB0(&ptr, a3, v4);
  else
    sub_2222BB0(&ptr, 0, 0);
  v5 = sub_2223360(a1 + 12, &ptr, &v13, off_2BE9FD0);
  if ( v5 )
  {
    v6 = v5 + 8;
  }
  else if ( a2 )
  {
    v8 = (_QWORD *)sub_21D40A0(a1, 40, 3u);
    *v8 = 0;
    v9 = v8;
    v10 = j__strlen(a3);
    v11 = v9;
    *((_WORD *)v9 + 8) = 16392;
    v12 = *((_BYTE *)v9 + 18);
    v6 = (__int64)(v9 + 1);
    *(_QWORD *)(v6 + 24) = a3;
    *(_QWORD *)(v6 + 16) = v10;
    *(_BYTE *)(v6 + 10) = v12 & 0xF0 | 5;
    *(_QWORD *)v6 = off_2BE68A0;
    sub_2223210(a1 + 12, v11, v13, off_2BE9FD0);
  }
  else
  {
    v6 = 0;
  }
  if ( ptr != &si128.m128i_u64[1] )
    free(ptr);
  return v6;
}

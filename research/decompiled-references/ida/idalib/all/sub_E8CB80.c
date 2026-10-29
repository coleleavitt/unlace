void __fastcall sub_E8CB80(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // r13
  void *v9; // rdi
  __int64 v10; // r12
  char *v11; // rsi
  void *v12; // rdi
  __int64 v13; // rax
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-D8h] BYREF
  int v16; // [rsp+18h] [rbp-D0h]
  __int128 v17; // [rsp+20h] [rbp-C8h]
  __int64 v18; // [rsp+30h] [rbp-B8h]
  char v19; // [rsp+38h] [rbp-B0h]
  int v20; // [rsp+3Ch] [rbp-ACh]
  void **p_ptr; // [rsp+40h] [rbp-A8h]
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  __m128i si128; // [rsp+58h] [rbp-90h]
  _BYTE v24[128]; // [rsp+68h] [rbp-80h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v17 = 0;
  v15 = &off_2BEBEE0;
  ptr = v24;
  v16 = 2;
  v19 = 0;
  v20 = 1;
  v18 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v15, 0, 0, 0);
  sub_E8C810(a1, a2, a3, a4, (__int64)&v15);
  if ( si128.m128i_i64[0] > 2uLL && *(_WORD *)ptr == 16191 && *((_BYTE *)ptr + 2) == 64 )
  {
    v13 = sub_227BF10(a5, ptr, si128.m128i_i64[0]);
    sub_995540(v13, "??_R4@");
    v15 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v15);
    v12 = ptr;
    if ( ptr == v24 )
      return;
    goto LABEL_7;
  }
  v7 = sub_995540(a5, "??_R4");
  v8 = v7;
  if ( si128.m128i_i64[0] > 3uLL )
  {
    v9 = *(void **)(v7 + 32);
    v10 = si128.m128i_i64[0] - 4;
    v11 = (char *)ptr + 4;
    if ( (unsigned __int64)(si128.m128i_i64[0] - 4) <= *(_QWORD *)(v7 + 24) - (_QWORD)v9 )
    {
      if ( si128.m128i_i64[0] != 4 )
      {
        memcpy(v9, v11, si128.m128i_i64[0] - 4);
        *(_QWORD *)(v8 + 32) += v10;
      }
    }
    else
    {
      sub_227BF10(v7, v11, si128.m128i_i64[0] - 4);
    }
  }
  v15 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v15);
  v12 = ptr;
  if ( ptr != v24 )
LABEL_7:
    free(v12);
}

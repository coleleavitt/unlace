__int64 __fastcall sub_21083D0(_DWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-118h] BYREF
  int v14; // [rsp+8h] [rbp-110h]
  __int128 v15; // [rsp+10h] [rbp-108h]
  __int64 v16; // [rsp+20h] [rbp-F8h]
  char v17; // [rsp+28h] [rbp-F0h]
  int v18; // [rsp+2Ch] [rbp-ECh]
  void **p_ptr; // [rsp+30h] [rbp-E8h]
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-D0h]
  _BYTE v22[192]; // [rsp+58h] [rbp-C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v22;
  sub_22538C0(a2, &ptr);
  v6 = si128.m128i_i64[0];
  v7 = sub_2107740((__int64)a1, ptr, si128.m128i_u64[0]);
  v8 = v7;
  if ( !a3 )
    goto LABEL_10;
  do
  {
    v9 = si128.m128i_i64[0];
    if ( v6 != si128.m128i_i64[0] )
    {
      if ( v6 >= si128.m128i_i64[0] )
      {
        if ( v6 > si128.m128i_i64[1] )
        {
          sub_2236E10(&ptr, v22, v6, 1);
          v9 = si128.m128i_i64[0];
        }
        if ( (char *)ptr + v9 != (char *)ptr + v6 )
          memset((char *)ptr + v9, 0, v6 - v9);
      }
      si128.m128i_i64[0] = v6;
    }
    v15 = 0;
    v14 = 2;
    v13 = &off_2BEBEE0;
    v17 = 0;
    v18 = 1;
    v16 = 0;
    p_ptr = &ptr;
    sub_227B8B0(&v13, 0, 0, 0);
    v10 = *(unsigned int *)(v8 + 16);
    *(_DWORD *)(v8 + 16) = v10 + 1;
    sub_227B910(&v13, v10);
    v13 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v13);
    v7 = sub_2107740((__int64)a1, ptr, si128.m128i_u64[0]);
LABEL_10:
    ;
  }
  while ( *(_BYTE *)(v7 + 20) );
  *(_BYTE *)(v7 + 20) = 1;
  v11 = sub_21080E0(a1, (_QWORD *)v7, a4);
  if ( ptr != v22 )
    free(ptr);
  return v11;
}

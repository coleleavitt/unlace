void __fastcall sub_225F770(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  bool v5; // zf
  _BYTE *v6; // rdi
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-B0h]
  _BYTE v9[128]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+98h] [rbp-20h]

  v3 = a3;
  v5 = *(_QWORD *)(a2 + 8) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v9;
  if ( v5 )
  {
    *(_BYTE *)(a1 + 160) &= ~1u;
    v10 = a3;
    *(_QWORD *)a1 = a1 + 24;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 128;
  }
  else
  {
    sub_9C3DB0(&ptr, (const void **)a2);
    *(_BYTE *)(a1 + 160) &= ~1u;
    v5 = si128.m128i_i64[0] == 0;
    v10 = v3;
    *(_QWORD *)a1 = a1 + 24;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 128;
    if ( !v5 )
    {
      sub_9C3C90((char **)a1, (char **)&ptr);
      v3 = v10;
    }
  }
  v6 = ptr;
  *(_QWORD *)(a1 + 152) = v3;
  if ( v6 != v9 )
    free(v6);
}

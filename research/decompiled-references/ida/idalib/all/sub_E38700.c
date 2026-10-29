void __fastcall sub_E38700(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char *v4; // rdi
  _BYTE *v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rdx
  unsigned int i; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i si128; // [rsp+18h] [rbp-50h]
  _BYTE v15[64]; // [rsp+28h] [rbp-40h] BYREF

  if ( *a2 == sub_21F90D0(a1, a2, a3) )
    sub_22010F0(&v11, a2);
  else
    sub_21FEE00(&v11, a2);
  v4 = v15;
  ptr = v15;
  v5 = v15;
  v6 = (v12 + 3) >> 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8080);
  if ( v6 )
  {
    if ( v6 > 0x14uLL )
    {
      sub_2236E10(&ptr, v15, (v12 + 3) >> 2, 1);
      v5 = ptr;
      v4 = (char *)ptr + si128.m128i_i64[0];
    }
    if ( &v5[v6] != v4 )
    {
      memset(v4, 0, &v5[v6] - v4);
      v5 = ptr;
    }
    si128.m128i_i64[0] = v6;
    v7 = 0;
    for ( i = 4 * (v6 + 0x3FFFFFFF); ; i -= 4 )
    {
      v10 = i >> 6;
      v9 = v12 > 0x40 ? *((_QWORD *)v11 + v10) : (unsigned __int64)*(&v11 + v10);
      v5[v7++] = byte_23F57E0[(v9 >> i) & 0xF];
      v5 = ptr;
      if ( !i )
        break;
    }
  }
  sub_227BF10(*a1, v5, v6);
  if ( ptr != v15 )
    free(ptr);
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

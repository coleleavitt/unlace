void __fastcall sub_9568C0(unsigned __int16 **a1)
{
  void *v2; // rax
  __int64 v3; // rax
  unsigned __int16 *v4; // rbp
  unsigned __int8 **v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // [rsp+8h] [rbp-90h] BYREF
  void *v9; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-80h]
  char v11; // [rsp+1Ch] [rbp-7Ch]
  void *v12; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-70h]
  unsigned __int8 v14; // [rsp+2Ch] [rbp-6Ch]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  _BYTE v17[80]; // [rsp+48h] [rbp-50h] BYREF

  v2 = (void *)**a1;
  v14 = 0;
  v13 = 16;
  v12 = v2;
  sub_2587BE0(&ptr, &v12, 18);
  v11 = 0;
  v10 = si128.m128i_i32[0];
  v9 = ptr;
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  v3 = *(_QWORD *)a1[1];
  si128.m128i_i32[0] = 18;
  ptr = (void *)(v3 & 0x3FFFF);
  sub_25863C0(&ptr, &v9);
  v4 = a1[2];
  v14 = 0;
  v13 = si128.m128i_i32[0];
  v12 = ptr;
  v8 = sub_A16CE0(*((_QWORD *)v4 + 25), *(_QWORD *)a1[3]);
  v5 = (unsigned __int8 **)sub_A2E1B0(v4, &v8, 2179, 0);
  if ( v5 )
  {
    ptr = v17;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40((unsigned int)&v12, (unsigned int)&ptr, 10, v14 ^ 1, 0, 1, 0);
    sub_838D50(v5, ptr, si128.m128i_u64[0]);
    if ( ptr != v17 )
      free(ptr);
    v6 = (__int64)a1[4];
    if ( *(_DWORD *)(v6 + 48) )
      v7 = 1;
    else
      v7 = *(_BYTE *)(sub_8E5480(v6) + 51) ^ 1u;
    sub_8D6BF0(v5, v7);
    sub_8D6E40(v5, *(_QWORD *)a1[5]);
  }
  *(_BYTE *)a1[6] = 1;
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}


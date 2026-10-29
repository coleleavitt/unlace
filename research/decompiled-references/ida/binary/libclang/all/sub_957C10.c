void __fastcall sub_957C10(__int64 a1)
{
  void *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned __int8 **v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // [rsp+8h] [rbp-A0h] BYREF
  void *v9; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-90h]
  char v11; // [rsp+1Ch] [rbp-8Ch]
  void *v12; // [rsp+20h] [rbp-88h]
  unsigned int v13; // [rsp+28h] [rbp-80h]
  char v14; // [rsp+2Ch] [rbp-7Ch]
  void *v15; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-70h]
  unsigned __int8 v17; // [rsp+3Ch] [rbp-6Ch]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _BYTE v20[80]; // [rsp+58h] [rbp-50h] BYREF

  v2 = **(void ***)a1;
  v17 = 0;
  v16 = 64;
  v15 = v2;
  sub_2587BE0(&ptr, &v15, 66);
  v11 = 0;
  v10 = si128.m128i_i32[0];
  v9 = ptr;
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  v3 = **(_QWORD **)(a1 + 8);
  si128.m128i_i32[0] = 66;
  sub_2585A50(&ptr, v3, 1);
  v14 = 0;
  v13 = si128.m128i_i32[0];
  v12 = ptr;
  if ( si128.m128i_i32[0] > 0x40u )
    sub_2585B30(&ptr);
  sub_25863C0(&ptr, &v9);
  v4 = *(_QWORD *)(a1 + 16);
  v17 = 0;
  v16 = si128.m128i_i32[0];
  v15 = ptr;
  v8 = sub_A16CE0(*(_QWORD *)(v4 + 200), **(_QWORD **)(a1 + 24));
  v5 = (unsigned __int8 **)sub_A2E1B0(v4, &v8, 2179, 0);
  if ( v5 )
  {
    ptr = v20;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40((unsigned int)&v15, (unsigned int)&ptr, 10, v17 ^ 1, 0, 1, 0);
    sub_838D50(v5, ptr, si128.m128i_u64[0]);
    if ( ptr != v20 )
      free(ptr);
    v6 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v6 + 48) )
      v7 = 1;
    else
      v7 = *(_BYTE *)(sub_8E5480(v6) + 51) ^ 1u;
    sub_8D6BF0(v5, v7);
    sub_8D6E40(v5, **(_QWORD **)(a1 + 40));
  }
  **(_BYTE **)(a1 + 48) = 1;
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}


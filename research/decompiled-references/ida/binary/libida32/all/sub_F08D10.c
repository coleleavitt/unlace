void __fastcall sub_F08D10(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rbx
  char v5; // bp
  int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  void *v13; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-A0h]
  void *v15[2]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v16[16]; // [rsp+20h] [rbp-88h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __m128i si128; // [rsp+38h] [rbp-70h]
  _BYTE v19[96]; // [rsp+48h] [rbp-60h] BYREF

  v3 = sub_F41400(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v4 = *(_QWORD *)(a1 + 1096);
  v5 = *(_BYTE *)(a1 + 1104);
  v6 = v3;
  v7 = v4;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, 6, 1, 0);
    v7 = *(_QWORD *)(a1 + 1096);
  }
  v8 = sub_971800(v7, " ");
  v9 = *(void **)(a2 + 16);
  v10 = v8;
  v11 = *(unsigned int *)(a2 + 24);
  v12 = (unsigned __int64)(v11 + 63) >> 6;
  if ( v12 > 1 )
  {
    sub_21E18D0(&v13, v11, v12, v9);
  }
  else
  {
    v14 = v11;
    if ( (unsigned int)v11 > 0x40 )
      sub_21E1730(&v13, v9, 0);
    else
      v13 = v9;
  }
  ptr = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  sub_21E7D50((unsigned int)&v13, (unsigned int)&ptr, 10, v6, 0, 1, 0);
  v15[0] = v16;
  sub_F009D0(v15, ptr, (__int64)ptr + si128.m128i_i64[0]);
  if ( ptr != v19 )
    free(ptr);
  sub_22581D0(v10, v15[0], v15[1]);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}


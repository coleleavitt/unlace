void __fastcall sub_1065040(__int64 a1, const __m128i *a2, __int64 a3)
{
  __m128i *v5; // rax
  unsigned __int64 v6; // rdx
  size_t v7; // r12
  unsigned __int64 v8; // rdx
  char *v9; // rax
  size_t v10; // r12
  unsigned __int64 v11; // rdx
  char *v12; // rdi
  void *v13; // [rsp+0h] [rbp-48h] BYREF
  size_t v14; // [rsp+8h] [rbp-40h]
  char v15[56]; // [rsp+10h] [rbp-38h] BYREF

  sub_10094E0(a1, a2, a3);
  *(_QWORD *)(a1 + 520) = a3;
  *(_QWORD *)a1 = &off_2C04998;
  *(_DWORD *)(a1 + 512) = 0;
  v13 = v15;
  strcpy(v15, "E-m:e");
  v14 = 5;
  sub_974DF0((__int64)&v13, 5u, 0, "-p:32:16:32", 0xBu);
  v5 = (__m128i *)v13;
  v14 = 16;
  *((_BYTE *)v13 + 16) = 0;
  v6 = *(_QWORD *)v15;
  if ( v5 == (__m128i *)v15 )
    v6 = 15;
  if ( v6 < 0x2B )
  {
    sub_974DF0((__int64)&v13, 0x10u, 0, "-i8:8:8-i16:16:16-i32:16:32", 0x1Bu);
  }
  else
  {
    v5[1] = _mm_load_si128(xmmword_2385720);
    qmemcpy(&v5[2], "6-i32:16:32", 11);
  }
  v14 = 43;
  *((_BYTE *)v13 + 43) = 0;
  v7 = v14;
  if ( 0x7FFFFFFFFFFFFFFFLL - v14 <= 8 )
    goto LABEL_23;
  v8 = v13 == v15 ? 15LL : *(_QWORD *)v15;
  if ( v14 + 9 > v8 )
  {
    sub_974DF0((__int64)&v13, v14, 0, "-n8:16:32", 9u);
  }
  else
  {
    v9 = (char *)v13 + v14;
    *(_QWORD *)v9 = 0x333A36313A386E2DLL;
    v9[8] = 50;
  }
  v14 = v7 + 9;
  *((_BYTE *)v13 + v7 + 9) = 0;
  v10 = v14;
  if ( 0x7FFFFFFFFFFFFFFFLL - v14 <= 0xA )
LABEL_23:
    std::__throw_length_error("basic_string::append");
  if ( v13 == v15 )
    v11 = 15;
  else
    v11 = *(_QWORD *)v15;
  if ( v14 + 11 > v11 )
    sub_974DF0((__int64)&v13, v14, 0, "-a:0:16-S16", 0xBu);
  else
    qmemcpy((char *)v13 + v14, "-a:0:16-S16", 11);
  v14 = v10 + 11;
  *((_BYTE *)v13 + v10 + 11) = 0;
  sub_1009A40((_QWORD *)a1, v13, v14, (__int64)&byte_22CD811);
  v12 = (char *)v13;
  *(_BYTE *)(a1 + 9) = 16;
  *(_DWORD *)(a1 + 136) = 6;
  *(_QWORD *)(a1 + 144) = 0x500000005LL;
  *(_BYTE *)(a1 + 31) = 16;
  *(_BYTE *)(a1 + 15) = 16;
  if ( v12 != v15 )
    operator delete(v12);
}


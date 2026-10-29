void __fastcall sub_225CAE0(__int64 a1)
{
  void *v1; // rdx
  size_t v2; // r14
  void *v3; // rdx
  void *v4; // rdx
  __int64 v5; // rbx
  char v6; // al
  int v7; // eax
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  size_t v10; // r15
  size_t v11; // rdx
  __int64 v12; // rbp
  signed __int64 v13; // rax
  __m128i *v14; // rdi
  void *s1; // [rsp+0h] [rbp-88h] BYREF
  size_t v16; // [rsp+8h] [rbp-80h]
  __m128i v17; // [rsp+10h] [rbp-78h] BYREF
  void *v18[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v19; // [rsp+30h] [rbp-58h] BYREF
  char v20; // [rsp+40h] [rbp-48h]

  v1 = *(void **)a1;
  s1 = &v17;
  if ( v1 == (void *)(a1 + 16) )
  {
    v17 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  }
  else
  {
    s1 = v1;
    v17.m128i_i64[0] = *(_QWORD *)(a1 + 16);
  }
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(void **)(a1 + 32);
  *(_QWORD *)a1 = a1 + 16;
  v18[0] = &v19;
  v16 = v2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( v3 == (void *)(a1 + 48) )
  {
    v19 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  }
  else
  {
    v18[0] = v3;
    v19.m128i_i64[0] = *(_QWORD *)(a1 + 48);
  }
  v4 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  v5 = a1;
  v6 = *(_BYTE *)(a1 + 64);
  *(_QWORD *)(a1 + 40) = 0;
  v18[1] = v4;
  *(_BYTE *)(a1 + 48) = 0;
  v20 = v6;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v5 - 64);
    v11 = v2;
    v12 = v5 - 72;
    if ( v10 <= v2 )
      v11 = *(_QWORD *)(v5 - 64);
    if ( !v11 )
      break;
    v7 = memcmp(s1, *(const void **)(v5 - 72), v11);
    if ( !v7 )
      break;
    if ( v7 >= 0 )
      goto LABEL_15;
LABEL_8:
    sub_A0AAD0(v5, (_QWORD *)(v5 - 72));
    v8 = (_QWORD *)(v5 - 40);
    v9 = v5 + 32;
    v5 -= 72;
    sub_A0AAD0(v9, v8);
    v2 = v16;
    *(_BYTE *)(v12 + 136) = *(_BYTE *)(v12 + 64);
  }
  v13 = v2 - v10;
  if ( (__int64)(v2 - v10) <= 0x7FFFFFFF && (v13 < (__int64)0xFFFFFFFF80000000LL || (int)v13 < 0) )
    goto LABEL_8;
LABEL_15:
  sub_A0AAD0(v5, &s1);
  sub_A0AAD0(v5 + 32, v18);
  v14 = (__m128i *)v18[0];
  *(_BYTE *)(v5 + 64) = v20;
  if ( v14 != &v19 )
    operator delete(v14);
  if ( s1 != &v17 )
    operator delete(s1);
}

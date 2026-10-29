__m128 *__fastcall sub_225E8D0(__m128 *a1, __int64 a2, __m128i *a3, __int64 a4)
{
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // r8d
  char *v11; // rdx
  char *v12; // rsi
  int v13; // eax
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  char v16; // r14
  __int64 v17; // rax
  int v18; // r15d
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  _BYTE *v22; // rdi
  size_t v24; // rax
  __int64 v25; // [rsp+8h] [rbp-1E0h] BYREF
  __m128i *v26; // [rsp+10h] [rbp-1D8h]
  unsigned int v27; // [rsp+1Ch] [rbp-1CCh]
  void *v28; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-1C0h]
  __m128i v30; // [rsp+30h] [rbp-1B8h] BYREF
  char *s[2]; // [rsp+40h] [rbp-1A8h] BYREF
  __m128i v32; // [rsp+50h] [rbp-198h]
  __int64 v33; // [rsp+60h] [rbp-188h]
  void *v34; // [rsp+70h] [rbp-178h] BYREF
  __m128i si128; // [rsp+78h] [rbp-170h]
  _BYTE v36[136]; // [rsp+88h] [rbp-160h] BYREF
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v38[24]; // [rsp+118h] [rbp-D0h] BYREF
  int v39; // [rsp+130h] [rbp-B8h]
  int v40; // [rsp+138h] [rbp-B0h]
  char v41; // [rsp+140h] [rbp-A8h]

  v6 = *(_BYTE *)(a2 + 328) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v34 = v36;
  if ( v6 || (*(_BYTE *)(a2 + 320) & 1) != 0 )
  {
    v33 = a3[2].m128i_i64[0];
    *(__m128i *)s = _mm_loadu_si128(a3);
    v32 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    sub_22538C0((const char **)a3, (__int64)&v34);
    LOWORD(v39) = 261;
    ptr = *(void **)(a2 + 168);
    *(_QWORD *)v38 = *(_QWORD *)(a2 + 176);
    sub_228E8C0(&ptr, &v34);
    LOWORD(v33) = 261;
    s[0] = (char *)v34;
    s[1] = (char *)si128.m128i_i64[0];
  }
  v7 = operator new(0x58u);
  *(_QWORD *)(v7 + 8) = 0x100000001LL;
  *(_QWORD *)v7 = off_2BEBB20;
  v25 = v7 + 16;
  *(_QWORD *)(v7 + 24) = v7 + 40;
  *(_QWORD *)(v7 + 16) = &off_2BEB838;
  *(_QWORD *)(v7 + 32) = 0;
  *(_BYTE *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 56) = 9;
  *(_QWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  *(_BYTE *)(v7 + 80) = 1;
  v26 = (__m128i *)(v7 + 64);
  v8 = operator new(0x70u);
  *(_QWORD *)(v8 + 8) = 0x100000001LL;
  *(_QWORD *)v8 = off_2C362F8;
  memset((void *)(v8 + 16), 0, 0x60u);
  v9 = *(volatile signed __int32 **)(v7 + 72);
  *(_BYTE *)(v8 + 60) = 1;
  *(_QWORD *)(v8 + 24) = v8 + 40;
  *(_QWORD *)(v8 + 104) = 0xFFFF00000000LL;
  *(_DWORD *)(v8 + 56) = 9;
  *(_QWORD *)(v7 + 64) = v8 + 16;
  *(_QWORD *)(v7 + 72) = v8;
  if ( v9 )
    sub_4343A0(v9);
  v10 = *(unsigned __int8 *)(v7 + 80);
  ptr = &v38[16];
  *(__m128i *)v38 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( BYTE1(v33) == 1 && (unsigned __int8)v33 <= 6u && ((1LL << v33) & 0x7A) != 0 )
  {
    switch ( (char)v33 )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v11 = s[1];
        v12 = s[0];
        break;
      case 1:
        v11 = nullptr;
        v12 = nullptr;
        break;
      case 3:
        v12 = s[0];
        v11 = nullptr;
        if ( s[0] )
        {
          v27 = v10;
          v26 = (__m128i *)s[0];
          v24 = j__strlen(s[0]);
          v12 = s[0];
          v10 = v27;
          v11 = (char *)v24;
        }
        break;
      case 4:
        v12 = *(char **)s[0];
        v11 = *((char **)s[0] + 1);
        break;
    }
  }
  else
  {
    LODWORD(v26) = v10;
    sub_22538C0((const char **)s, (__int64)&ptr);
    v11 = *(char **)v38;
    v10 = (unsigned int)v26;
    v12 = (char *)ptr;
  }
  v13 = sub_228CAB0(*(_QWORD *)(v7 + 64), v12, v11, v10);
  v14 = ptr;
  *(_DWORD *)a4 = v13;
  *(_QWORD *)(a4 + 8) = v15;
  if ( v14 != &v38[16] )
    free(v14);
  ptr = nullptr;
  *(_QWORD *)v38 = 0;
  v38[8] = 1;
  v16 = sub_12E96C0((__int64 *)(v7 + 64), (__int64 *)&ptr);
  if ( *(_QWORD *)v38 )
    sub_4343A0(*(volatile signed __int32 **)v38);
  if ( !v16 )
  {
    v17 = *(_QWORD *)(v7 + 64);
    v18 = *(_DWORD *)(v17 + 40);
    if ( v18 == 9 )
    {
      sub_228CE30(&ptr, v17 + 8);
      if ( (v41 & 1) == 0 )
        v18 = v40;
      v17 = *(_QWORD *)(v7 + 64);
    }
    v19 = *(_BYTE **)(v17 + 8);
    v20 = (__int64)&v19[*(_QWORD *)(v17 + 16)];
    v28 = &v30;
    v26 = &v30;
    sub_2259C30(&v28, v19, v20);
    ptr = &v38[8];
    if ( v28 == &v30 )
    {
      *(__m128i *)&v38[8] = _mm_load_si128(&v30);
    }
    else
    {
      ptr = v28;
      *(_QWORD *)&v38[8] = v30.m128i_i64[0];
    }
    v21 = v29;
    v29 = 0;
    v30.m128i_i8[0] = 0;
    *(_QWORD *)v38 = v21;
    v28 = &v30;
    v39 = v18;
    sub_A0AAD0(v7 + 24, &ptr);
    v22 = ptr;
    *(_DWORD *)(v7 + 56) = v39;
    if ( v22 != &v38[8] )
      operator delete(v22);
    if ( v28 != &v30 )
      operator delete(v28);
  }
  v25 = v7;
  v6 = *(_QWORD *)(v7 + 32) == 0;
  *a1 = _mm_loadh_ps((const double *)&v25);
  if ( v6 )
  {
    *a1 = 0;
    sub_4343A0((volatile signed __int32 *)v7);
  }
  if ( v34 != v36 )
    free(v34);
  return a1;
}

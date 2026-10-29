__int64 __fastcall Z3_get_symbol_string(__int64 a1, unsigned __int64 a2, int a3, int a4, int a5, int a6)
{
  char v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v11; // r10
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 *v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 *v17; // rax
  __int64 *v18; // r11
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // r14
  __int64 v25; // r14
  int v26; // [rsp+0h] [rbp-158h]
  void *v27; // [rsp+8h] [rbp-150h]
  __int64 v28; // [rsp+8h] [rbp-150h]
  int v29; // [rsp+10h] [rbp-148h]
  __int64 *v30; // [rsp+10h] [rbp-148h]
  __int64 v31; // [rsp+18h] [rbp-140h]
  int v32; // [rsp+20h] [rbp-138h]
  int v33[2]; // [rsp+28h] [rbp-130h] BYREF
  void *src; // [rsp+30h] [rbp-128h] BYREF
  __int64 v35; // [rsp+38h] [rbp-120h]
  __int64 v36; // [rsp+40h] [rbp-118h] BYREF
  int v37; // [rsp+48h] [rbp-110h]
  void *v38[2]; // [rsp+50h] [rbp-108h] BYREF
  __m128i si128; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v40; // [rsp+70h] [rbp-E8h]
  __m128i v41; // [rsp+80h] [rbp-D8h]
  __m128i v42; // [rsp+90h] [rbp-C8h]
  __m128i v43; // [rsp+A0h] [rbp-B8h]
  __m128i v44; // [rsp+B0h] [rbp-A8h]
  __m128i v45; // [rsp+C0h] [rbp-98h]
  __m128i v46; // [rsp+D0h] [rbp-88h]
  __m128i v47; // [rsp+E0h] [rbp-78h]
  __m128i v48; // [rsp+F0h] [rbp-68h]
  __m128i v49[5]; // [rsp+100h] [rbp-58h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_299690();
  *(_QWORD *)v33 = a2;
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = a2 & 7;
  if ( v8 != 1 )
  {
    sub_180CE20(
      (int)v38,
      (int)v33,
      a3,
      a4,
      a5,
      a6,
      v26,
      v27,
      v29,
      v31,
      v32,
      v33[0],
      (int)src,
      v35,
      v36,
      v37,
      (int)v38[0],
      (int)v38[1],
      si128.m128i_i32[0],
      si128.m128i_i32[2],
      v40.m128i_i32[0],
      v40.m128i_i32[2],
      v41.m128i_i32[0],
      v41.m128i_i32[2],
      v42.m128i_i32[0],
      v42.m128i_i32[2],
      v43.m128i_i32[0],
      (void *)v43.m128i_i64[1],
      v44.m128i_i32[0],
      v44.m128i_i64[1]);
    v9 = sub_24ED70((_QWORD *)a1, (__int64)v38);
    if ( v38[0] != &si128 )
      operator delete(v38[0], si128.m128i_i64[0] + 1);
    goto LABEL_6;
  }
  v11 = a2 >> 3;
  v12 = a2 >> 3;
  if ( v12 <= 9 )
  {
    LOBYTE(v36) = 0;
    src = &v36;
    v15 = &v36;
LABEL_26:
    v24 = v12 + 48;
    goto LABEL_27;
  }
  v13 = a2 >> 3;
  v14 = 1;
  while ( 1 )
  {
    if ( v13 <= 0x63 )
    {
      ++v14;
      goto LABEL_17;
    }
    if ( v13 <= 0x3E7 )
    {
      v14 += 2;
      goto LABEL_17;
    }
    if ( v13 <= 0x270F )
      break;
    v14 += 4;
    if ( v13 <= 0x1869F )
      goto LABEL_17;
    v13 /= 0x2710u;
  }
  v14 += 3;
LABEL_17:
  LOBYTE(v36) = 0;
  v8 = v14;
  src = &v36;
  v15 = &v36;
  v35 = 0;
  if ( v14 > 0xF )
  {
    if ( v14 <= 0x1DuLL )
    {
      v28 = 30;
      v16 = 31;
    }
    else
    {
      v28 = v14;
      v16 = v14 + 1LL;
    }
    v17 = (__int64 *)operator new(v16);
    v18 = (__int64 *)src;
    v11 = a2 >> 3;
    v15 = v17;
    *(_BYTE *)v17 = *(_BYTE *)src;
    if ( v18 != &v36 )
    {
      v30 = v17;
      operator delete(v18, v36 + 1);
      LODWORD(v11) = a2 >> 3;
      v15 = v30;
    }
    src = v15;
    v36 = v28;
  }
  v19 = v14 - 1;
  *(__m128i *)v38 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  v40 = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
  v41 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  v42 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  v43 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  v44 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  v45 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  v46 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  v47 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  v48 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v49[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)v49 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  if ( (unsigned int)v11 > 0x63 )
  {
    do
    {
      v20 = v12 % 0x64;
      v21 = v12;
      v12 /= 0x64u;
      v22 = 2 * v20;
      *((_BYTE *)v15 + v19) = *((_BYTE *)v38 + (unsigned int)(v22 + 1));
      v23 = v19 - 1;
      v19 -= 2;
      *((_BYTE *)v15 + v23) = *((_BYTE *)v38 + v22);
    }
    while ( v21 > 0x270F );
    if ( v21 <= 0x3E7 )
      goto LABEL_26;
  }
  v25 = 2 * v12;
  *((_BYTE *)v15 + 1) = *((_BYTE *)v38 + (unsigned int)(v25 + 1));
  v24 = *((_BYTE *)v38 + v25);
LABEL_27:
  *(_BYTE *)v15 = v24;
  v35 = v8;
  *((_BYTE *)src + v8) = 0;
  v9 = sub_24ED70((_QWORD *)a1, (__int64)&src);
  if ( src != &v36 )
    operator delete(src, v36 + 1);
LABEL_6:
  if ( v7 )
    byte_1C7EBA0 = 1;
  return v9;
}


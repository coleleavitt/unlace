__int64 *__fastcall sub_102F9E0(__int64 *a1, const __m128i *a2, __int64 a3)
{
  __int64 v5; // rbx
  bool v6; // zf
  bool v7; // r15
  char *v8; // rsi
  size_t v9; // r14
  size_t v10; // r9
  unsigned __int64 v11; // rdx
  __m128i si128; // xmm0
  __m128i *v13; // rax
  char *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rax
  size_t v17; // r14
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rsi
  unsigned __int64 v20; // r9
  char *v21; // rsi
  char *v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // esi
  __int64 v25; // rdi
  int v26; // edx
  int v27; // eax
  size_t v28; // r14
  unsigned __int64 v29; // rdx
  char *v30; // rax
  __m128i v31; // xmm0
  char *v32; // rcx
  bool v34; // [rsp+7h] [rbp-61h]
  size_t v35; // [rsp+8h] [rbp-60h]
  void *v36; // [rsp+10h] [rbp-58h] BYREF
  size_t v37; // [rsp+18h] [rbp-50h]
  _QWORD v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = operator new(0x288u);
  sub_1023250(v5, a2, a3);
  v6 = *(_DWORD *)(v5 + 260) == 15;
  *(_BYTE *)(v5 + 344) = 1;
  *(_QWORD *)(v5 + 152) = 0x400000004LL;
  *(_QWORD *)v5 = &off_2BDF900;
  *(_BYTE *)(v5 + 33) = 64;
  *(_BYTE *)(v5 + 23) = 64;
  if ( v6 )
  {
    v26 = *(_DWORD *)(v5 + 264);
    v27 = *(_DWORD *)(v5 + 268);
    v7 = 1;
    if ( v26 != 27 )
      v7 = v26 == 0;
    v8 = "e-m:e";
    v34 = v27 == 1;
    if ( v27 == 1 )
      v8 = "e-m:x";
  }
  else
  {
    v34 = 0;
    v7 = 0;
    v8 = "e-m:e";
  }
  v36 = v38;
  sub_1014B80(&v36, v8, (__int64)(v8 + 5));
  v9 = v37;
  if ( 0x7FFFFFFFFFFFFFFFLL - v37 <= 0x39 )
    goto LABEL_46;
  v10 = v37 + 58;
  if ( v36 == v38 )
    v11 = 15;
  else
    v11 = v38[0];
  if ( v10 > v11 )
  {
    v35 = v37 + 58;
    sub_974DF0((__int64)&v36, v37, 0, "-p:32:32-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-", 0x3Au);
    v10 = v35;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2385570);
    v13 = (__m128i *)((char *)v36 + v37);
    qmemcpy((char *)v36 + v37 + 48, "-i128:128-", 10);
    *v13 = si128;
    v13[1] = _mm_load_si128((const __m128i *)&xmmword_2385580);
    v13[2] = _mm_load_si128((const __m128i *)&xmmword_2385590);
  }
  v37 = v10;
  v14 = "f80:32";
  *((_BYTE *)v36 + v9 + 58) = 0;
  v15 = 7LL - !v7;
  if ( v7 )
    v14 = "f80:128";
  if ( v15 > 0x7FFFFFFFFFFFFFFFLL - v37 )
LABEL_46:
    std::__throw_length_error("basic_string::append");
  v16 = v36;
  v17 = v15 + v37;
  if ( v36 == v38 )
    v18 = 15;
  else
    v18 = v38[0];
  if ( v17 > v18 )
  {
    sub_974DF0((__int64)&v36, v37, 0, v14, v15);
LABEL_26:
    v16 = v36;
    goto LABEL_27;
  }
  v19 = (char *)v36 + v37;
  if ( (unsigned int)v15 >= 8 )
  {
    v20 = (unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v19 = *(_QWORD *)v14;
    *(_QWORD *)((char *)v19 + (unsigned int)v15 - 8) = *(_QWORD *)&v14[(unsigned int)v15 - 8];
    v21 = (char *)v19 - v20;
    v22 = (char *)(v14 - v21);
    if ( (((_DWORD)v15 + (_DWORD)v21) & 0xFFFFFFF8) >= 8 )
    {
      v23 = (v15 + (_DWORD)v21) & 0xFFFFFFF8;
      v24 = 0;
      do
      {
        v25 = v24;
        v24 += 8;
        *(_QWORD *)(v20 + v25) = *(_QWORD *)&v22[v25];
      }
      while ( v24 < v23 );
    }
    goto LABEL_26;
  }
  if ( (v15 & 4) != 0 )
  {
    *(_DWORD *)v19 = *(_DWORD *)v14;
    *(_DWORD *)((char *)v19 + (unsigned int)v15 - 4) = *(_DWORD *)&v14[(unsigned int)v15 - 4];
    v16 = v36;
  }
  else if ( (_DWORD)v15 )
  {
    *(_BYTE *)v19 = *v14;
    v16 = v36;
    if ( (v15 & 2) != 0 )
    {
      *(_WORD *)((char *)v19 + (unsigned int)v15 - 2) = *(_WORD *)&v14[(unsigned int)v15 - 2];
      v16 = v36;
    }
  }
LABEL_27:
  v37 = v17;
  v16[v17] = 0;
  v28 = v37;
  if ( 0x7FFFFFFFFFFFFFFFLL - v37 <= 0x13 )
    goto LABEL_46;
  if ( v36 == v38 )
    v29 = 15;
  else
    v29 = v38[0];
  if ( v37 + 20 > v29 )
  {
    sub_974DF0((__int64)&v36, v37, 0, "-n8:16:32-a:0:32-S32", 0x14u);
  }
  else
  {
    v30 = (char *)v36 + v37;
    v31 = _mm_load_si128((const __m128i *)&xmmword_23855A0);
    *((_DWORD *)v30 + 4) = 842224429;
    *(__m128i *)v30 = v31;
  }
  v37 = v28 + 20;
  v32 = "_";
  *((_BYTE *)v36 + v28 + 20) = 0;
  if ( !v34 )
    v32 = (char *)&byte_22CD811;
  sub_1009A40((_QWORD *)v5, v36, v37, (__int64)v32);
  if ( v36 != v38 )
    operator delete(v36);
  *a1 = v5;
  *(_QWORD *)v5 = &off_2BE00F0;
  *(_BYTE *)(v5 + 278) = 1;
  return a1;
}


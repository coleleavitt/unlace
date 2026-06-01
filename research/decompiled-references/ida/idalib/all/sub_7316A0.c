unsigned __int64 __fastcall sub_7316A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  int v9; // ecx
  void *v10; // rdx
  unsigned __int64 v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // r13
  int v14; // ecx
  bool v15; // cf
  unsigned __int64 v16; // r15
  unsigned int v17; // eax
  __m128i v18; // xmm1
  int v19; // r14d
  char *v20; // rax
  const char *v21; // rcx
  __m128i v22; // xmm2
  char *v23; // rdi
  __int64 v24; // rcx
  unsigned __int16 v25; // r14
  const char *v26; // rsi
  const char *v27; // rdi
  unsigned int v28; // eax
  char *v30; // [rsp+0h] [rbp-98h]
  int v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  const char *v33; // [rsp+8h] [rbp-90h]
  __m128i v34; // [rsp+10h] [rbp-88h] BYREF
  __m128i v35; // [rsp+20h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+48h] [rbp-50h]
  int v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v40 = __readfsqword(0x28u);
  v32 = a2 - a1;
  if ( (__int64)(a2 - a1) > 40 )
  {
    v6 = 0xCCCCCCCCCCCCCCCDLL * (v32 >> 3);
    v7 = (v6 - 2) / 2;
    v8 = a1 + 40 * v7;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 32);
      v10 = *(void **)v8;
      v11 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)v8 = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v8 + 8));
      v39 = v9;
      v38 = v11;
      ptr = v10;
      *(_OWORD *)(v8 + 8) = 0;
      v37 = v12;
      sub_730D00(a1, v7, v6, (unsigned __int64)&ptr);
      if ( ptr )
        qfree(ptr);
      v8 -= 40;
      if ( !v7 )
        break;
      --v7;
    }
  }
  if ( a2 < a3 )
  {
    v13 = 0xCCCCCCCCCCCCCCCDLL * (v32 >> 3);
    while ( 1 )
    {
      v25 = *(_WORD *)(v4 + 32);
      v15 = v25 < *(_WORD *)(a1 + 32);
      if ( v25 == *(_WORD *)(a1 + 32) )
      {
        v14 = *(unsigned __int16 *)(v4 + 34);
        v15 = (unsigned __int16)v14 < *(_WORD *)(a1 + 34);
        if ( (_WORD)v14 == *(_WORD *)(a1 + 34) )
          break;
      }
      if ( v15 )
      {
        v14 = *(unsigned __int16 *)(v4 + 34);
        v16 = *(_QWORD *)(v4 + 24);
LABEL_13:
        v18 = _mm_loadu_si128((const __m128i *)(v4 + 8));
        *(_OWORD *)(v4 + 8) = 0;
        v19 = v25 | (v14 << 16);
        v20 = *(char **)v4;
        *(_QWORD *)v4 = 0;
        v21 = *(const char **)a1;
        v22 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        *(_OWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0;
        v23 = *(char **)v4;
        if ( *(_QWORD *)v4 )
        {
          *(_QWORD *)(v4 + 8) = 0;
          v33 = v21;
          v30 = v20;
          v35 = v22;
          v34 = v18;
          qfree(v23);
          v22 = _mm_load_si128(&v35);
          v18 = _mm_load_si128(&v34);
          v21 = v33;
          v20 = v30;
        }
        *(_QWORD *)v4 = v21;
        *(__m128i *)(v4 + 8) = v22;
        v24 = *(_QWORD *)(a1 + 24);
        v38 = v16;
        *(_QWORD *)(v4 + 24) = v24;
        LOWORD(v24) = *(_WORD *)(a1 + 32);
        v39 = v19;
        *(_WORD *)(v4 + 32) = v24;
        LOWORD(v24) = *(_WORD *)(a1 + 34);
        ptr = v20;
        *(_WORD *)(v4 + 34) = v24;
        v37 = v18;
        sub_730D00(a1, 0, v13, (unsigned __int64)&ptr);
        if ( ptr )
          qfree(ptr);
      }
LABEL_17:
      v4 += 40LL;
      if ( v4 >= a3 )
        return v40 - __readfsqword(0x28u);
    }
    v16 = *(_QWORD *)(v4 + 24);
    if ( v16 == *(_QWORD *)(a1 + 24) )
    {
      v26 = haystack;
      if ( *(_QWORD *)(a1 + 8) )
        v26 = *(const char **)a1;
      v27 = haystack;
      if ( *(_QWORD *)(v4 + 8) )
        v27 = *(const char **)v4;
      v31 = *(unsigned __int16 *)(v4 + 34);
      v28 = strcmp(v27, v26);
      v14 = v31;
      v17 = v28 >> 31;
    }
    else
    {
      LOBYTE(v17) = v16 < *(_QWORD *)(a1 + 24);
    }
    if ( !(_BYTE)v17 )
      goto LABEL_17;
    goto LABEL_13;
  }
  return v40 - __readfsqword(0x28u);
}

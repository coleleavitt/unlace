__int64 __fastcall sub_E590(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // edx
  _BYTE *v11; // rax
  int v12; // ebx
  __int64 v13; // r15
  size_t v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned __int64 v22; // rbp
  __int64 v23; // rsi
  __m128i si128; // xmm0
  size_t v25; // r13
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-C0h]
  size_t v28; // [rsp+10h] [rbp-B8h]
  __int64 v29; // [rsp+18h] [rbp-B0h]
  _BYTE src[104]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 472);
  v31 = __readfsqword(0x28u);
  v7 = qlseek(v5, 0, 1);
  v8 = *(_QWORD *)(a1 + 480);
  v29 = v7 - v8;
  if ( qlseek(*(_QWORD *)(a1 + 472), a3 + v8, 0) == -1 )
  {
    sub_E410(a2, (__int64)"bad offset %08x", a3);
    v17 = 0;
    goto LABEL_16;
  }
  v9 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v9);
    *a2 = 0;
    a2[2] = 0;
  }
  while ( 1 )
  {
    v10 = qlread(*(_QWORD *)(a1 + 472), src, 100);
    if ( v10 < 0 )
      break;
    v11 = src;
    v12 = 0;
    if ( v10 )
    {
      do
      {
        if ( !*v11 )
          break;
        ++v12;
        ++v11;
      }
      while ( v10 != v12 );
      v25 = v12;
    }
    else
    {
      v25 = 0;
    }
    v13 = a2[1];
    v14 = v25;
    if ( v13 )
    {
      --v13;
      v14 = v25 + v13;
    }
    v15 = *a2;
    v16 = v14 + 1;
    if ( a2[2] < v14 + 1 )
    {
      v28 = v14;
      v27 = v14 + 1;
      v19 = qvector_reserve(a2, v15, v16, 1);
      v14 = v28;
      v16 = v27;
      *a2 = v19;
      v15 = v19;
    }
    a2[1] = v16;
    *(_BYTE *)(v15 + v14) = 0;
    memmove((void *)(v13 + *a2), src, v25);
    if ( v12 != 100 )
    {
      v17 = 1;
      goto LABEL_16;
    }
  }
  v20 = a2[1];
  if ( !v20 )
  {
    v23 = *a2;
    v22 = 17;
    v21 = 16;
    if ( (unsigned __int64)a2[2] >= 0x11 )
      goto LABEL_19;
LABEL_22:
    v26 = qvector_reserve(a2, v23, v22, 1);
    *a2 = v26;
    v23 = v26;
    goto LABEL_19;
  }
  v21 = v20 + 15;
  v22 = v20 + 16;
  v23 = *a2;
  --v20;
  if ( a2[2] < v22 )
    goto LABEL_22;
LABEL_19:
  si128 = _mm_load_si128((const __m128i *)&xmmword_224F0);
  a2[1] = v22;
  *(_BYTE *)(v23 + v21) = 0;
  *(__m128i *)(*a2 + v20) = si128;
  v17 = 0;
LABEL_16:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v29, 0);
  return v17;
}


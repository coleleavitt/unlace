__int64 __fastcall Z3_rcf_mk_roots(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __m128i *exception; // rax
  __m128i *v5; // rbp
  char *v6; // rax
  __int64 *v7; // r14
  char v8; // al
  __int64 *v9; // r15
  int v10; // ebp
  _QWORD *v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // rsi
  int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v31; // rax
  __int64 v32; // r14
  __int64 v33; // [rsp+8h] [rbp-80h]
  char v34; // [rsp+10h] [rbp-78h]
  unsigned int v35; // [rsp+14h] [rbp-74h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  void *v40; // [rsp+28h] [rbp-60h]
  _QWORD v41[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v42[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a3;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  BYTE3(v40) = v8;
  if ( v8 )
  {
    sub_29F420(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    v36 = a4;
    HIDWORD(v40) = a2;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, nullptr);
      goto LABEL_35;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    v36 = 0;
    HIDWORD(v40) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
  }
  v9 = &v7[a2];
  v10 = 1;
  v11 = nullptr;
  v12 = 0;
  do
  {
    v16 = sub_24F090(a1);
    v41[0] = *v7;
    v17 = sub_16FCF80(v16, v41);
    v18 = *v7;
    if ( !v17 )
      v12 = v10;
    if ( v11 )
    {
      v19 = *((_DWORD *)v11 - 1);
      if ( v19 == *((_DWORD *)v11 - 2) )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v41[0] = v42;
          v5 = exception;
          v6 = (char *)operator new(0x2Bu);
          v5->m128i_i64[1] = (__int64)v6;
          v41[0] = v42;
          strcpy(v6, "Overflow encountered when expanding vector");
          v5->m128i_i64[0] = (__int64)off_1C63128;
          v5[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v41[1] = 0;
          v42[0] = 0;
          sub_233E40((__int64)v41);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (3 * v19 + 1) >> 1;
        v33 = *v7;
        v22 = (unsigned int *)sub_186B300(v11 - 1, v21);
        v23 = v22[1];
        v11 = v22 + 2;
        v18 = v33;
        *v22 = v35;
        LODWORD(v22) = v23;
        v15 = &v11[v23];
        v14 = (_DWORD)v22 + 1;
      }
      else
      {
        v13 = v19;
        v14 = v19 + 1;
        v15 = &v11[v13];
      }
    }
    else
    {
      v33 = *v7;
      v31 = (_QWORD *)sub_186B270(0x18u);
      v11 = v31 + 1;
      *v31 = 2;
      v18 = v33;
      v14 = 1;
      v15 = v11;
    }
    ++v7;
    *v15 = v18;
    ++v10;
    *((_DWORD *)v11 - 1) = v14;
  }
  while ( v7 != v9 );
  if ( !v12 )
  {
    sub_24EA30(a1, 3u, nullptr);
    goto LABEL_31;
  }
  *((_DWORD *)v11 - 1) = v12;
  v41[0] = 0;
  v24 = sub_24F090(a1);
  sub_16FE790(v24, *((_DWORD *)v11 - 1), (int)v11, (int)v41, v25, v26, (int)v41, v33, v34, v36, a4, v40);
  v27 = v41[0];
  if ( !v41[0] )
  {
    if ( !BYTE3(v40) )
    {
LABEL_41:
      sub_186B220(v11 - 1);
      return 0;
    }
    v12 = 0;
    if ( HIDWORD(v40) )
      goto LABEL_27;
    sub_186B220(v11 - 1);
LABEL_35:
    v12 = 0;
    goto LABEL_32;
  }
  v12 = *(_DWORD *)(v41[0] - 4LL);
  if ( !v12 )
  {
    if ( BYTE3(v40) )
    {
      if ( !HIDWORD(v40) )
      {
        sub_186B220((void *)(v41[0] - 8LL));
        sub_186B220(v11 - 1);
        goto LABEL_35;
      }
LABEL_27:
      v32 = 0;
      do
      {
        sub_2BB770(*(_QWORD *)(v37 + 8 * v32), 3, (unsigned int)v32);
        ++v32;
      }
      while ( HIDWORD(v40) != v32 );
      if ( v41[0] )
        sub_186B220((void *)(v41[0] - 8LL));
LABEL_31:
      sub_186B220(v11 - 1);
      if ( !BYTE3(v40) )
        return v12;
LABEL_32:
      byte_1C7EBA0 = 1;
      return v12;
    }
    sub_186B220((void *)(v41[0] - 8LL));
    goto LABEL_41;
  }
  if ( v12 == 1 )
  {
    v29 = 0;
    goto LABEL_21;
  }
  v28 = 0;
  do
  {
    *(__m128i *)(v39 + v28) = _mm_loadu_si128((const __m128i *)(v27 + v28));
    v28 += 16;
  }
  while ( 16LL * (v12 >> 1) != v28 );
  if ( (v12 & 1) != 0 )
  {
    v29 = v12 & 0xFFFFFFFE;
LABEL_21:
    *(_QWORD *)(v39 + 8 * v29) = *(_QWORD *)(v27 + 8 * v29);
  }
  if ( BYTE3(v40) )
  {
    if ( !HIDWORD(v40) )
    {
      sub_186B220((void *)(v27 - 8));
      sub_186B220(v11 - 1);
      goto LABEL_32;
    }
    goto LABEL_27;
  }
  sub_186B220((void *)(v27 - 8));
  sub_186B220(v11 - 1);
  return v12;
}


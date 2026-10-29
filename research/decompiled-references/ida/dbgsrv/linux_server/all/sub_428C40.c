/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428C40
// Address: 0x0000000000428C40

//----- (0000000000428C40) ----------------------------------------------------
__int64 __fastcall sub_428C40(__int64 a1, void **a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rdi
  int v12; // edx
  _BYTE *v13; // rax
  int v14; // ebx
  char *v15; // r15
  size_t v16; // r9
  void *v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  void *v21; // rax
  char *v22; // rbx
  __int64 v23; // r15
  unsigned __int64 v24; // rbp
  void *v25; // rsi
  __m128i si128; // xmm0
  size_t v27; // r13
  void *v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-C0h]
  size_t v30; // [rsp+10h] [rbp-B8h]
  __int64 v31; // [rsp+18h] [rbp-B0h]
  _BYTE src[104]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 472);
  v33 = __readfsqword(0x28u);
  v7 = sub_47F740(v5, 0, 1);
  v8 = *(_QWORD *)(a1 + 480);
  v31 = v7 - v8;
  if ( sub_47F740(*(_QWORD *)(a1 + 472), a3 + v8, 0) == -1 )
  {
    sub_4172B0((__int64)a2, "bad offset %08x", a3);
    v19 = 0;
    goto LABEL_16;
  }
  v11 = *a2;
  if ( *a2 )
  {
    a2[1] = nullptr;
    j__free(v11);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  while ( 1 )
  {
    v12 = sub_47F6E0(*(_QWORD *)(a1 + 472), src, 100, v9, v10);
    if ( v12 < 0 )
      break;
    v13 = src;
    v14 = 0;
    if ( v12 )
    {
      do
      {
        if ( !*v13 )
          break;
        ++v14;
        ++v13;
      }
      while ( v12 != v14 );
      v27 = v14;
    }
    else
    {
      v27 = 0;
    }
    v15 = (char *)a2[1];
    v16 = v27;
    if ( v15 )
    {
      --v15;
      v16 = (size_t)&v15[v27];
    }
    v17 = *a2;
    v18 = v16 + 1;
    if ( (unsigned __int64)a2[2] < v16 + 1 )
    {
      v30 = v16;
      v29 = v16 + 1;
      v21 = sub_481540((__int64)a2, v17, v18, 1u);
      v16 = v30;
      v18 = v29;
      *a2 = v21;
      v17 = v21;
    }
    a2[1] = (void *)v18;
    *((_BYTE *)v17 + v16) = 0;
    memmove((char *)*a2 + (_QWORD)v15, src, v27);
    if ( v14 != 100 )
    {
      v19 = 1;
      goto LABEL_16;
    }
  }
  v22 = (char *)a2[1];
  if ( !v22 )
  {
    v25 = *a2;
    v24 = 17;
    v23 = 16;
    if ( (unsigned __int64)a2[2] >= 0x11 )
      goto LABEL_19;
LABEL_22:
    v28 = sub_481540((__int64)a2, v25, v24, 1u);
    *a2 = v28;
    v25 = v28;
    goto LABEL_19;
  }
  v23 = (__int64)(v22 + 15);
  v24 = (unsigned __int64)(v22 + 16);
  v25 = *a2;
  --v22;
  if ( (unsigned __int64)a2[2] < v24 )
    goto LABEL_22;
LABEL_19:
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F520);
  a2[1] = (void *)v24;
  *((_BYTE *)v25 + v23) = 0;
  *(__m128i *)&v22[(_QWORD)*a2] = si128;
  v19 = 0;
LABEL_16:
  sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v31, 0);
  return v19;
}
// 428CF0: variable 'v9' is possibly undefined
// 428CF0: variable 'v10' is possibly undefined
// 48F520: using guessed type __int128 xmmword_48F520;

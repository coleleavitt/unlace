__int64 __fastcall sub_286FA0(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ebx
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  size_t v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r14
  void *v15; // r12
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 *v22; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  char *v27; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-148h]
  unsigned __int64 v33; // [rsp+0h] [rbp-148h]
  int v34; // [rsp+8h] [rbp-140h]
  int v35; // [rsp+Ch] [rbp-13Ch]
  int v36; // [rsp+Ch] [rbp-13Ch]
  char v37; // [rsp+1Fh] [rbp-129h] BYREF
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-120h]
  char v40[64]; // [rsp+40h] [rbp-108h] BYREF
  char v41[16]; // [rsp+80h] [rbp-C8h] BYREF
  char v42[88]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-60h]
  __int64 v44; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v45; // [rsp+108h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  sub_283F90((__int64)v40, a1);
  v4 = *(_DWORD *)(a1 + 424);
  v5 = v43;
  v6 = (*(_QWORD *)(a1 + 416) == 0)
     + -252645135 * (unsigned int)((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
     + (unsigned int)((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
     - 252645135 * (unsigned int)((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1
     - v4;
  if ( (*(_QWORD *)(a1 + 416) == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
     + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1 >= v4 + (int)v44 )
    v6 = (unsigned int)v44;
  v34 = v6;
  if ( (int)v6 > 0 )
  {
    v7 = 0;
    do
    {
      n[0] = 0;
      v13 = sub_284860(a1, v7);
      if ( *(_QWORD *)(v13 + 16) > 1u )
        tag_remove(&src, *(_QWORD *)(v13 + 8), 0);
      v14 = n[0];
      v15 = nullptr;
      if ( n[0] )
      {
        v15 = (void *)qalloc_or_throw(n[0]);
        memcpy(v15, src, v14);
      }
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)a2;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v8 + 1) )
      {
        v16 = qvector_reserve(a2, v9, v8 + 1, 24);
        *(_QWORD *)a2 = v16;
        v8 = *(_QWORD *)(a2 + 8);
        v9 = v16;
      }
      v10 = v9 + 24 * v8;
      *(_QWORD *)v10 = v15;
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
      v11 = n[0];
      ++*(_QWORD *)(a2 + 8);
      v12 = (v11 == 0) + v11 - 1;
      if ( v12 >= v5 )
        v5 = v12;
      ++v7;
    }
    while ( v7 != v34 );
    v17 = v5 + 1;
    v18 = 0;
    v19 = v5 + 1;
    v20 = v19 + 1;
    while ( 1 )
    {
      v21 = *(_QWORD *)a2;
      v37 = 32;
      v22 = (__int64 *)(v18 + v21);
      v23 = v22[1];
      if ( v23 - 1 < v19 )
      {
        *(_BYTE *)(*v22 + v23 - 1) = 32;
        v23 = v22[1];
      }
      v24 = *v22;
      if ( v20 < v23 )
        goto LABEL_23;
      if ( v23 < v20 )
        break;
LABEL_24:
      *(_BYTE *)(v24 + v19) = 0;
      v27 = &byte_8CBC80;
      v6 = v18 + *(_QWORD *)a2;
      if ( *(_QWORD *)(v6 + 8) | v5 )
        v27 = (char *)(v5 + *(_QWORD *)v6);
      v18 += 24;
      *v27 = 10;
      if ( 24LL * v34 == v18 )
        goto LABEL_27;
    }
    v25 = v22[2];
    if ( (unsigned __int64)&v37 < v24 || (unsigned __int64)&v37 >= v24 + v25 )
    {
      if ( v25 >= v20
        || (v35 = v17,
            v32 = v20,
            v30 = qvector_reserve(v22, v24, v20, 1),
            v20 = v32,
            v24 = v30,
            v17 = v35,
            *v22 = v30,
            v23 = v22[1],
            v23 < v32) )
      {
        do
        {
          v29 = v23;
          *(_BYTE *)(v24 + v23++) = 32;
          v24 = *v22;
        }
        while ( v19 != v29 );
      }
    }
    else if ( v25 >= v20
           || (v36 = v17,
               v33 = v20,
               v31 = qvector_reserve(v22, v24, v20, 1),
               v20 = v33,
               v24 = v31,
               v17 = v36,
               *v22 = v31,
               v23 = v22[1],
               v23 < v33) )
    {
      do
      {
        v26 = v23;
        *(_BYTE *)(v24 + v23++) = 32;
        v24 = *v22;
      }
      while ( v19 != v26 );
    }
LABEL_23:
    v22[1] = v20;
    goto LABEL_24;
  }
  v17 = v43 + 1;
LABEL_27:
  *(_DWORD *)(a2 + 24) = v17 * v34;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v42);
  QT::QFont::~QFont((QT::QFont *)v41);
  if ( src )
  {
    n[0] = 0;
    qfree(src, (const char *)v6);
  }
  return 1;
}

void __fastcall sub_13D970(__int64 a1, const __m128i *a2, int a3)
{
  _QWORD *exception; // rdi
  __int64 *v4; // rbp
  unsigned __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rbx
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __m128i v17; // xmm1
  char v18; // r15
  unsigned __int64 v19; // rbx
  char v20; // dl
  _BYTE *v21; // rax
  __int64 v22; // rdx
  const __m128i *v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 1344);
  v23[1] = (const __m128i *)__readfsqword(0x28u);
  v5 = *v4;
  if ( !a3 )
  {
    if ( v5 )
    {
      v6 = (__int64 *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v6 )
      {
        while ( (*(_BYTE *)v6 & 2) == 0 )
        {
          while ( (int)sub_2533C0(a2) < 0 )
          {
            v6 = (__int64 *)v6[1];
            if ( (*(_BYTE *)v6 & 2) != 0 )
              return;
          }
          if ( (int)sub_2533C0(v6 + 3) >= 0 )
          {
            if ( (__int64 *)*v4 == v6 )
              return;
            goto LABEL_18;
          }
          v6 = (__int64 *)v6[2];
        }
      }
      else
      {
LABEL_18:
        sub_13D240((unsigned __int64 **)v4, v6);
      }
    }
    return;
  }
  v23[0] = a2;
  if ( !v5 )
  {
    v16 = qalloc(48);
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( !v16 )
      goto LABEL_36;
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(__m128i *)(v16 + 8) = v17;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *v4 = v16;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
    *(__m128i *)(*v4 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v4, (__m128i)(unsigned __int64)*v4);
    *(_QWORD *)*v4 &= ~1uLL;
    *(_QWORD *)*v4 |= 2uLL;
    v5 = *v4;
LABEL_10:
    v8 = qalloc(48);
    v12 = v8;
    if ( v8 )
    {
      *(_OWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)v8 = 0;
      v13 = _mm_loadu_si128(a2);
      *(_DWORD *)(v8 + 40) = 0;
      *(__m128i *)(v8 + 24) = v13;
      *(_QWORD *)v8 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = _mm_loadl_epi64((const __m128i *)v4);
      *(_QWORD *)v8 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v14, v14);
      if ( *v4 == v5 )
      {
        *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
        *(_QWORD *)(*v4 + 8) = v8;
        *(_QWORD *)(*v4 + 16) = v8;
        v22 = *(_QWORD *)v8 & 2LL;
        *(_QWORD *)v8 &= ~1uLL;
        *(_QWORD *)v8 = v22 | *v4 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v8;
        if ( *(_QWORD *)(*v4 + 8) == v5 )
          *(_QWORD *)(*v4 + 8) = v8;
        sub_13D5E0(v4, (__int64 *)v8, v9, v10, v11);
      }
      ++v4[1];
      v15 = v12 + 24;
      goto LABEL_16;
    }
LABEL_36:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !v4[1] )
    goto LABEL_10;
  v18 = 1;
  v19 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v19 & 2) != 0 )
  {
    v20 = 1;
LABEL_25:
    v15 = sub_13D820((__m128i *)v4, (unsigned __int64 *)v5, v20, v23) + 24;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v15 = v19 + 24;
    if ( (int)sub_2533C0(a2) < 0 )
    {
      v21 = *(_BYTE **)(v19 + 8);
      v18 = 1;
      goto LABEL_29;
    }
    if ( (int)sub_2533C0(v19 + 24) >= 0 )
      break;
    v21 = *(_BYTE **)(v19 + 16);
    v18 = 0;
LABEL_29:
    if ( (*v21 & 2) != 0 )
      goto LABEL_30;
    v19 = (unsigned __int64)v21;
  }
  if ( !v19 )
  {
LABEL_30:
    v20 = v18;
    v5 = v19;
    goto LABEL_25;
  }
LABEL_16:
  *(_DWORD *)(v15 + 16) = a3;
}

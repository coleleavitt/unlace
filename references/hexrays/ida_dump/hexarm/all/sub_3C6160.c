__int64 __fastcall sub_3C6160(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v14; // rbp
  _BYTE *v15; // rdi
  _BYTE *v16; // rdi
  unsigned __int64 *v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  const void *v23; // r8
  void *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  const void *v27; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v28; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 112);
  v30 = __readfsqword(0x28u);
  v28 = nullptr;
  v29 = 0;
  LOBYTE(v7) = sub_2B81A0(v5, (__int64)&v28, a3);
  v8 = v7;
  if ( !(_BYTE)v7 )
    goto LABEL_2;
  v9 = v28;
  if ( !v28 )
    return 0;
  v10 = *v28;
  v19 = 24;
  v20 = *v28 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v20 )
    goto LABEL_26;
  if ( (*(_BYTE *)(*v28 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
LABEL_19:
    v8 = 0;
LABEL_4:
    if ( !v29 )
    {
      *v9 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL | v10 & 3;
      v11 = v28;
      v12 = (__m128i)(unsigned __int64)v28;
      *v28 &= ~1uLL;
      *(__m128i *)(v11 + 1) = _mm_unpacklo_epi64(v12, v12);
      *v28 |= 2u;
      goto LABEL_6;
    }
    v14 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_15:
      *v28 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL | *v28 & 3;
      v17 = v28;
      v18 = (__m128i)(unsigned __int64)v28;
      *v28 &= ~1uLL;
      *(__m128i *)(v17 + 1) = _mm_unpacklo_epi64(v18, v18);
      *v28 |= 2u;
      v29 = 0;
LABEL_6:
      if ( v28 )
        qfree(v28);
      return v8;
    }
    v15 = *(_BYTE **)(v14 + 8);
    if ( (*v15 & 2) != 0 )
    {
      v16 = *(_BYTE **)(v14 + 16);
      if ( (*v16 & 2) != 0 )
        goto LABEL_36;
    }
    else
    {
      sub_3C5850((__int64)v15);
      v16 = *(_BYTE **)(v14 + 16);
      if ( (*v16 & 2) != 0 )
        goto LABEL_12;
    }
    sub_3C5850((__int64)v16);
LABEL_12:
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
LABEL_13:
      if ( v10 > 3 )
        qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
      goto LABEL_15;
    }
LABEL_36:
    clear_tinfo_t(v14 + 56);
    v25 = *(_QWORD *)(v14 + 32);
    if ( v25 )
    {
      *(_QWORD *)(v14 + 40) = 0;
      qfree(v25);
    }
    *(_QWORD *)v14 |= 2uLL;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)(v20 + 24);
    v19 = v20 + 24;
    if ( a4 < v21 )
    {
      v20 = *(_QWORD *)(v20 + 8);
      goto LABEL_22;
    }
    if ( v21 >= a4 )
      break;
    v20 = *(_QWORD *)(v20 + 16);
LABEL_22:
    if ( (*(_BYTE *)v20 & 2) != 0 )
      goto LABEL_19;
  }
  if ( v28 == (unsigned __int64 *)v20 )
    goto LABEL_19;
LABEL_26:
  if ( a1 != (__int64 *)(v20 + 32) )
  {
    v22 = *(_QWORD *)(v19 + 16);
    if ( v22 > 1 )
    {
      v23 = *(const void **)(v19 + 8);
      v24 = (void *)*a1;
      if ( a1[2] < v22 )
      {
        v27 = *(const void **)(v19 + 8);
        v26 = qvector_reserve(a1, *a1, *(_QWORD *)(v19 + 16), 1);
        *a1 = v26;
        v23 = v27;
        v24 = (void *)v26;
      }
      a1[1] = v22;
      memmove(v24, v23, v22 - 1);
      *(_BYTE *)(*a1 + v22 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  copy_tinfo_t(a1 + 3, v19 + 32);
LABEL_2:
  v9 = v28;
  if ( v28 )
  {
    v10 = *v28;
    goto LABEL_4;
  }
  return v8;
}

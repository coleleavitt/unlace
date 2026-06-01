__int64 __fastcall sub_3C0B20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 *v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v13; // rbp
  _BYTE *v14; // rdi
  _BYTE *v15; // rdi
  unsigned __int64 *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  const void *v22; // r8
  void *v23; // rdi
  __int64 v24; // rax
  const void *v25; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v26; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 112);
  v28 = __readfsqword(0x28u);
  v26 = 0;
  v27 = 0;
  v7 = sub_2B4F10(v5, &v26);
  if ( !(_BYTE)v7 )
    goto LABEL_2;
  v8 = v26;
  if ( !v26 )
    return 0;
  v9 = *v26;
  v18 = 24;
  v19 = *v26 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v19 )
    goto LABEL_26;
  if ( (*(_BYTE *)(*v26 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
LABEL_19:
    v7 = 0;
LABEL_4:
    if ( !v27 )
    {
      *v8 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL | v9 & 3;
      v10 = v26;
      v11 = (__m128i)(unsigned __int64)v26;
      *v26 &= ~1uLL;
      *(__m128i *)(v10 + 1) = _mm_unpacklo_epi64(v11, v11);
      *v26 |= 2u;
      goto LABEL_6;
    }
    v13 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_15:
      *v26 = (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFCLL | *v26 & 3;
      v16 = v26;
      v17 = (__m128i)(unsigned __int64)v26;
      *v26 &= ~1uLL;
      *(__m128i *)(v16 + 1) = _mm_unpacklo_epi64(v17, v17);
      *v26 |= 2u;
      v27 = 0;
LABEL_6:
      if ( v26 )
        qfree();
      return v7;
    }
    v14 = *(_BYTE **)(v13 + 8);
    if ( (*v14 & 2) != 0 )
    {
      v15 = *(_BYTE **)(v13 + 16);
      if ( (*v15 & 2) != 0 )
        goto LABEL_36;
    }
    else
    {
      sub_3C0210((__int64)v14);
      v15 = *(_BYTE **)(v13 + 16);
      if ( (*v15 & 2) != 0 )
        goto LABEL_12;
    }
    sub_3C0210((__int64)v15);
LABEL_12:
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
LABEL_13:
      if ( v9 > 3 )
        qfree();
      goto LABEL_15;
    }
LABEL_36:
    clear_tinfo_t();
    if ( *(_QWORD *)(v13 + 32) )
    {
      *(_QWORD *)(v13 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v13 |= 2uLL;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)(v19 + 24);
    v18 = v19 + 24;
    if ( a4 < v20 )
    {
      v19 = *(_QWORD *)(v19 + 8);
      goto LABEL_22;
    }
    if ( v20 >= a4 )
      break;
    v19 = *(_QWORD *)(v19 + 16);
LABEL_22:
    if ( (*(_BYTE *)v19 & 2) != 0 )
      goto LABEL_19;
  }
  if ( v26 == (unsigned __int64 *)v19 )
    goto LABEL_19;
LABEL_26:
  if ( a1 != v19 + 32 )
  {
    v21 = *(_QWORD *)(v18 + 16);
    if ( v21 > 1 )
    {
      v22 = *(const void **)(v18 + 8);
      v23 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v21 )
      {
        v25 = *(const void **)(v18 + 8);
        v24 = qvector_reserve();
        *(_QWORD *)a1 = v24;
        v22 = v25;
        v23 = (void *)v24;
      }
      *(_QWORD *)(a1 + 8) = v21;
      memmove(v23, v22, v21 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v21 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  copy_tinfo_t();
LABEL_2:
  v8 = v26;
  if ( v26 )
  {
    v9 = *v26;
    goto LABEL_4;
  }
  return v7;
}

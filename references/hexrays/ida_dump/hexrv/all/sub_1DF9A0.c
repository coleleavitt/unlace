unsigned __int64 __fastcall sub_1DF9A0(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v10; // dl
  char v11; // al
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm1
  _BYTE *v16; // rcx
  char v17; // [rsp+7h] [rbp-81h] BYREF
  const __m128i *v18; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 *v19; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h]
  _BYTE v23[40]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v21 = a3;
  v22 = a4;
  sub_30DB40(v23, a5);
  v6 = (unsigned __int64 *)a1->m128i_i64[0];
  v18 = (const __m128i *)&v21;
  if ( !v6 )
  {
    v14 = qalloc(72);
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v14 + 64) = 0;
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(_OWORD *)(v14 + 48) = 0;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v14 + 8) = v15;
    a1->m128i_i64[0] = v14;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v6 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v7 = sub_86FD0(a1, v6, 1, &v18);
    goto LABEL_4;
  }
  v19 = v6;
  v17 = 1;
  v20 = 0;
  if ( a2 && (unsigned __int8)sub_84980((unsigned __int64 *)a1, (__int64)&v21, a2, (unsigned __int64 *)&v19, &v17, &v20) )
  {
    v8 = v20;
    if ( !v20 )
    {
      v7 = sub_86FD0(a1, v19, v17, &v18);
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v11 = 1;
  while ( 1 )
  {
    v12 = *(_BYTE *)(v8 + 32);
    if ( (unsigned __int8)v22 < v12 )
    {
LABEL_22:
      v16 = *(_BYTE **)(v8 + 8);
      v11 = 1;
      goto LABEL_23;
    }
    if ( v12 >= (unsigned __int8)v22 )
    {
      v13 = *(_QWORD *)(v8 + 24);
      if ( v21 < v13 )
        goto LABEL_22;
      if ( v21 <= v13 )
        break;
    }
    v16 = *(_BYTE **)(v8 + 16);
    v11 = 0;
LABEL_23:
    if ( (*v16 & 2) != 0 )
      goto LABEL_19;
    v8 = (unsigned __int64)v16;
  }
  if ( v8 )
    goto LABEL_5;
LABEL_19:
  v10 = v11;
  v6 = (unsigned __int64 *)v8;
LABEL_12:
  v7 = sub_86FD0(a1, v6, v10, &v18);
LABEL_4:
  v8 = v7;
LABEL_5:
  sub_30DA80(v23);
  return v8;
}

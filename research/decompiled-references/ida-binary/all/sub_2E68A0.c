unsigned __int64 __fastcall sub_2E68A0(__int64 **a1, const char *a2, __int64 *a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 *v5; // rbx
  bool v6; // zf
  _BYTE *v7; // rdx
  size_t v9; // rbp
  __int64 v10; // r12
  void *v11; // rax
  const void *v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  __m128i v14; // [rsp+8h] [rbp-70h] BYREF
  void *v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __m128i v18; // [rsp+48h] [rbp-30h]
  unsigned __int64 v19; // [rsp+58h] [rbp-20h]

  v3 = *a3;
  v4 = _mm_loadu_si128((const __m128i *)(a3 + 1));
  v19 = __readfsqword(0x28u);
  v5 = *a1;
  *a3 = 0;
  *(_OWORD *)(a3 + 1) = 0;
  v6 = *a2 == 0;
  v13 = v3;
  v14 = v4;
  if ( v6 )
    goto LABEL_4;
  v7 = (_BYTE *)v5[2];
  if ( v7 )
  {
    if ( *v7 )
    {
LABEL_4:
      free_result_vec(&v13);
      goto LABEL_5;
    }
    v3 = v13;
    v4 = _mm_loadu_si128(&v14);
  }
  v9 = v5[5];
  v10 = *v5;
  v18 = v4;
  v17 = v3;
  v13 = 0;
  v15 = nullptr;
  v14 = 0;
  v16 = 0;
  if ( v9 )
  {
    v11 = (void *)qalloc_or_throw(v9);
    v12 = (const void *)v5[4];
    v15 = v11;
    *((_QWORD *)&v16 + 1) = v9;
    memcpy(v11, v12, v9);
    *(_QWORD *)&v16 = v9;
  }
  a2 = (const char *)&v15;
  sub_468FD0(v10, &v15, &v17);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (const char *)&v15);
  }
  if ( v17 )
  {
    v18.m128i_i64[0] = 0;
    qfree(v17, (const char *)&v15);
  }
LABEL_5:
  if ( v13 )
  {
    v14.m128i_i64[0] = 0;
    qfree(v13, a2);
  }
  return v19 - __readfsqword(0x28u);
}

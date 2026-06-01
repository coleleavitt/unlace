unsigned __int64 __fastcall sub_4C05C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r15
  int v9; // edx
  __int64 place_class; // r13
  _DWORD *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // r15
  size_t v14; // r8
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rbp
  const void *v19; // rbp
  void *v20; // rdi
  const void *v21; // r13
  void *v22; // rax
  __m128i v23; // [rsp+10h] [rbp-98h] BYREF
  __m128i v24; // [rsp+20h] [rbp-88h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h]
  void *dest[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v27; // [rsp+48h] [rbp-60h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v30 = __readfsqword(0x28u);
  switch_dbctx(v4);
  v6 = 88 * a3;
  v7 = v6 + **(_QWORD **)(a2 + 40);
  v8 = *(_QWORD *)(v7 + 72);
  if ( v8 != -1 )
  {
    v9 = *(_DWORD *)(a1 + 48);
    v23 = 0;
    v24.m128i_i64[0] = 0;
    v24.m128i_i64[1] = -1;
    v25 = 0;
    v28 = -1;
    v29 = -1;
    *(_OWORD *)dest = 0;
    v27 = 0;
    place_class = get_place_class(nullptr, nullptr, v9);
    v11 = nullptr;
    if ( place_class )
    {
      v11 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      dest[0] = v11;
    }
    v11[2] = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 8LL);
    v23 = _mm_loadu_si128((const __m128i *)v7);
    v24 = _mm_loadu_si128((const __m128i *)(v7 + 16));
    v12 = *(_DWORD *)(v7 + 32);
    v28 = v8;
    LODWORD(v25) = v12;
    *((_QWORD *)dest[0] + 2) = v8;
    if ( &dest[1] != (void **)(v7 + 48) )
    {
      v13 = *(_QWORD *)(v7 + 56);
      if ( v13 && (v14 = v13 - 1, v13 != 1) )
      {
        v19 = *(const void **)(v7 + 48);
        v20 = dest[1];
        if ( *((_QWORD *)&v27 + 1) < v13 )
        {
          dest[1] = (void *)qvector_reserve(&dest[1], dest[1], v13, 1);
          v14 = v13 - 1;
          v20 = dest[1];
        }
        *(_QWORD *)&v27 = v13;
        memmove(v20, v19, v14);
        *((_BYTE *)dest[1] + v13 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v27 = 0;
      }
    }
    v15 = **(_QWORD **)(a1 + 40) + v6;
    if ( (__m128i *)v15 != &v23 )
    {
      v16 = *(void **)(v15 + 40);
      if ( v16 )
      {
        qfree(v16);
        *(_QWORD *)(v15 + 40) = 0;
      }
      *(__m128i *)v15 = _mm_load_si128(&v23);
      *(__m128i *)(v15 + 16) = _mm_load_si128(&v24);
      *(_DWORD *)(v15 + 32) = v25;
      if ( dest[0] )
        *(_QWORD *)(v15 + 40) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)dest[0] + 16LL))(dest[0]);
    }
    if ( (void **)(v15 + 48) != &dest[1] )
    {
      v17 = v27;
      if ( (unsigned __int64)v27 > 1 )
      {
        v21 = dest[1];
        v22 = *(void **)(v15 + 48);
        if ( *(_QWORD *)(v15 + 64) < (unsigned __int64)v27 )
        {
          v22 = (void *)qvector_reserve(v15 + 48, *(_QWORD *)(v15 + 48), v27, 1);
          *(_QWORD *)(v15 + 48) = v22;
        }
        *(_QWORD *)(v15 + 56) = v17;
        memmove(v22, v21, v17 - 1);
        *(_BYTE *)(*(_QWORD *)(v15 + 48) + v17 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v15 + 56) = 0;
      }
    }
    *(_QWORD *)(v15 + 72) = v28;
    *(_DWORD *)(v15 + 80) = v29;
    sub_4C0590(&v23);
  }
  return v30 - __readfsqword(0x28u);
}

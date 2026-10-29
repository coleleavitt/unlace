unsigned __int64 __fastcall sub_4A9B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // rdx
  __int64 place_class; // rbp
  _DWORD *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // r15
  size_t v14; // r8
  __int64 v15; // r13
  __int64 v16; // rbp
  const void *v18; // rbx
  void *v19; // rdi
  const void *v20; // rbx
  void *v21; // rax
  __m128i v22; // [rsp+10h] [rbp-98h] BYREF
  __m128i v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  void *dest[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v28 = __readfsqword(0x28u);
  switch_dbctx(v4);
  v6 = 80 * a3;
  v7 = **(_QWORD **)(a2 + 40) + 80 * a3;
  v8 = *(_DWORD *)(v7 + 72);
  if ( v8 != -1 )
  {
    v9 = *(unsigned int *)(a1 + 48);
    v22 = 0;
    v23.m128i_i64[0] = 0;
    v23.m128i_i64[1] = -1;
    v24 = 0;
    v27 = -1;
    *(_OWORD *)dest = 0;
    v26 = 0;
    place_class = get_place_class(0, 0, v9);
    v11 = nullptr;
    if ( place_class )
    {
      v11 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      dest[0] = v11;
    }
    v11[2] = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 8LL);
    v22 = _mm_loadu_si128((const __m128i *)v7);
    v23 = _mm_loadu_si128((const __m128i *)(v7 + 16));
    v12 = *(_DWORD *)(v7 + 32);
    LODWORD(v27) = v8;
    LODWORD(v24) = v12;
    *((_DWORD *)dest[0] + 3) = v8;
    if ( &dest[1] != (void **)(v7 + 48) )
    {
      v13 = *(_QWORD *)(v7 + 56);
      if ( v13 && (v14 = v13 - 1, v13 != 1) )
      {
        v18 = *(const void **)(v7 + 48);
        v19 = dest[1];
        if ( *((_QWORD *)&v26 + 1) < v13 )
        {
          dest[1] = (void *)qvector_reserve(&dest[1], dest[1], v13, 1);
          v14 = v13 - 1;
          v19 = dest[1];
        }
        *(_QWORD *)&v26 = v13;
        memmove(v19, v18, v14);
        *((_BYTE *)dest[1] + v13 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v26 = 0;
      }
    }
    v15 = **(_QWORD **)(a1 + 40) + v6;
    sub_49FBF0((__m128i *)v15, &v22);
    if ( (void **)(v15 + 48) != &dest[1] )
    {
      v16 = v26;
      if ( (unsigned __int64)v26 > 1 )
      {
        v20 = dest[1];
        v21 = *(void **)(v15 + 48);
        if ( *(_QWORD *)(v15 + 64) < (unsigned __int64)v26 )
        {
          v21 = (void *)qvector_reserve(v15 + 48, *(_QWORD *)(v15 + 48), v26, 1);
          *(_QWORD *)(v15 + 48) = v21;
        }
        *(_QWORD *)(v15 + 56) = v16;
        memmove(v21, v20, v16 - 1);
        *(_BYTE *)(*(_QWORD *)(v15 + 48) + v16 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v15 + 56) = 0;
      }
    }
    *(_QWORD *)(v15 + 72) = v27;
    sub_4A9B00(&v22);
  }
  return v28 - __readfsqword(0x28u);
}


unsigned __int64 __fastcall sub_4BED40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v7; // rbx
  int v8; // ebp
  int v10; // edx
  __int64 v11; // r15
  __int64 place_class; // rax
  _DWORD *v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rbp
  const void *v19; // rbx
  void *v20; // rax
  size_t v21; // r8
  const void *v22; // rbx
  void *v23; // rdi
  __m128i v24; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-98h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  void *src[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v28; // [rsp+48h] [rbp-70h]
  __int64 v29; // [rsp+58h] [rbp-60h]
  int v30; // [rsp+60h] [rbp-58h]
  int v31; // [rsp+68h] [rbp-50h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v32 = __readfsqword(0x28u);
  switch_dbctx(v4);
  v6 = 96 * a3;
  v7 = **(_QWORD **)(a2 + 40) + 96 * a3;
  v8 = *(_DWORD *)(v7 + 80);
  if ( v8 )
  {
    v10 = *(_DWORD *)(a1 + 48);
    v24 = 0;
    v11 = *(_QWORD *)(v7 + 72);
    v25.m128i_i64[0] = 0;
    v25.m128i_i64[1] = -1;
    v26 = 0;
    v29 = -2;
    v30 = 0;
    v31 = -1;
    *(_OWORD *)src = 0;
    v28 = 0;
    place_class = get_place_class(nullptr, nullptr, v10);
    if ( place_class )
    {
      v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      src[0] = v13;
    }
    else
    {
      v13 = src[0];
    }
    v13[2] = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 8LL);
    v24 = _mm_loadu_si128((const __m128i *)v7);
    v25 = _mm_loadu_si128((const __m128i *)(v7 + 16));
    v14 = *(_DWORD *)(v7 + 32);
    v30 = v8;
    LODWORD(v26) = v14;
    v15 = src[0];
    v29 = v11;
    *((_DWORD *)src[0] + 3) = v8;
    v15[2] = v11;
    if ( &src[1] != (void **)(v7 + 48) )
    {
      v16 = *(_QWORD *)(v7 + 56);
      if ( !v16 || (v21 = v16 - 1, v16 == 1) )
      {
        *(_QWORD *)&v28 = 0;
      }
      else
      {
        v22 = *(const void **)(v7 + 48);
        v23 = src[1];
        if ( *((_QWORD *)&v28 + 1) < v16 )
        {
          src[1] = (void *)qvector_reserve(&src[1], src[1], v16, 1);
          v21 = v16 - 1;
          v23 = src[1];
        }
        *(_QWORD *)&v28 = v16;
        memmove(v23, v22, v21);
        *((_BYTE *)src[1] + v16 - 1) = 0;
      }
    }
    v17 = **(_QWORD **)(a1 + 40) + v6;
    sub_4B50E0((__m128i *)v17, &v24);
    if ( (void **)(v17 + 48) != &src[1] )
    {
      v18 = v28;
      if ( (unsigned __int64)v28 < 2 )
      {
        *(_QWORD *)(v17 + 56) = 0;
      }
      else
      {
        v19 = src[1];
        v20 = *(void **)(v17 + 48);
        if ( *(_QWORD *)(v17 + 64) < (unsigned __int64)v28 )
        {
          v20 = (void *)qvector_reserve(v17 + 48, *(_QWORD *)(v17 + 48), v28, 1);
          *(_QWORD *)(v17 + 48) = v20;
        }
        *(_QWORD *)(v17 + 56) = v18;
        memmove(v20, v19, v18 - 1);
        *(_BYTE *)(*(_QWORD *)(v17 + 48) + v18 - 1) = 0;
      }
    }
    *(_QWORD *)(v17 + 72) = v29;
    *(_DWORD *)(v17 + 80) = v30;
    *(_DWORD *)(v17 + 88) = v31;
    sub_4BED10(&v24);
  }
  return v32 - __readfsqword(0x28u);
}

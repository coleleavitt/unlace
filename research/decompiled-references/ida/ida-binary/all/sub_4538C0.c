unsigned __int64 __fastcall sub_4538C0(_QWORD *a1, __int64 a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __m128i si128; // xmm0
  char *v9; // r14
  _QWORD *v10; // r13
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+8h] [rbp-98h]
  __int64 v25; // [rsp+18h] [rbp-88h]
  __int64 v26; // [rsp+20h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-70h]
  __int64 v28; // [rsp+38h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-58h]
  __int64 v30; // [rsp+50h] [rbp-50h]
  int v31; // [rsp+60h] [rbp-40h]
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v24 = 0;
  v23 = 0;
  v5 = qvector_reserve(&v23, 0, 47, 1);
  v23 = v5;
  *(_QWORD *)&v24 = 47;
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_5DDA90);
  *(__m128i *)(v5 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DDCA0);
  *(__m128i *)(v5 + 30) = _mm_load_si128((const __m128i *)&xmmword_5DDAB0);
  *(_BYTE *)(v23 + 46) = 0;
  sub_429100((__int64)a1, a2, 65, (__int64)&v23, 0, 11);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, a3);
  }
  *a1 = &local_files_dirtree_widget_t___vtable;
  a1[2] = local_files_dirtree_widget_t___vtable_at__16;
  a1[30] = local_files_dirtree_widget_t___vtable_at__240;
  a1[38] = local_files_dirtree_widget_t___vtable_at__304;
  a1[311] = local_files_dirtree_widget_t___vtable_at__2488;
  v6 = operator new(0x30u);
  *(_QWORD *)v6 = &unk_8725A0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 24) = 0;
  v7 = qvector_reserve(v6 + 16, 0, 22, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDCB0);
  *(_QWORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 24) = 22;
  *(__m128i *)v7 = si128;
  *(_QWORD *)(v7 + 13) = 0x73656C69665F6C61LL;
  *(_BYTE *)(*(_QWORD *)(v6 + 16) + 21LL) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)v6 = &local_files_dirspec_t___vtable;
  v9 = (char *)operator new(8u);
  *(_QWORD *)v9 = create_dirtree(v9, v6);
  v10 = (_QWORD *)operator new(0x190u);
  sub_42ACB0((__int64)&v23, 384);
  sub_197020(&v23, "Name", 32, 0, nullptr);
  sub_197020(&v23, "Size", 0xFFFFFFFFLL, 196608, nullptr);
  v11 = v9;
  v31 |= 8u;
  sub_42F6D0((__int64)v10, (__int64)v9, v6, (__int64)&v23, (__int64)a1, 0);
  if ( v29 )
  {
    v30 = 0;
    *(double *)si128.m128i_i64 = qfree(v29, v9);
  }
  if ( v27 )
  {
    v28 = 0;
    *(double *)si128.m128i_i64 = qfree(v27, v9, *(double *)si128.m128i_i64);
  }
  v12 = v25;
  if ( v25 )
  {
    v13 = v26;
    if ( v26 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 *)(v12 + 24 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v16, v11, *(double *)si128.m128i_i64);
          v12 = v25;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    v26 = 0;
    *(double *)si128.m128i_i64 = qfree(v12, v11, *(double *)si128.m128i_i64);
  }
  v17 = v23;
  if ( v23 )
  {
    v18 = v24;
    if ( (_QWORD)v24 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v17 + 24 * v19);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v21, v11, *(double *)si128.m128i_i64);
          v17 = v23;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v17, v11, *(double *)si128.m128i_i64);
  }
  *v10 = &local_files_item_model_t___vtable;
  sub_42B4F0(a1, v6, (__int64)v10);
  return v32 - __readfsqword(0x28u);
}

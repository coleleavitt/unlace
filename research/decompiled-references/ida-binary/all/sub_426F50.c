unsigned __int64 __fastcall sub_426F50(_QWORD *a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __m128i si128; // xmm0
  char *v13; // r14
  _QWORD *v14; // r13
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdi
  const char *v27; // [rsp-10h] [rbp-C0h]
  __int64 v28; // [rsp+10h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+18h] [rbp-98h]
  __int64 v30; // [rsp+28h] [rbp-88h]
  __int64 v31; // [rsp+30h] [rbp-80h]
  __int64 v32; // [rsp+40h] [rbp-70h]
  __int64 v33; // [rsp+48h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-58h]
  __int64 v35; // [rsp+60h] [rbp-50h]
  int v36; // [rsp+70h] [rbp-40h]
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v29 = 0;
  v28 = 0;
  v9 = qvector_reserve(&v28, 0, 47, 1);
  v28 = v9;
  *(_QWORD *)&v29 = 47;
  *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_5DDA90);
  *(__m128i *)(v9 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DDAA0);
  *(__m128i *)(v9 + 30) = _mm_load_si128((const __m128i *)&xmmword_5DDAB0);
  *(_BYTE *)(v28 + 46) = 0;
  sub_429100((_DWORD)a1, a2, a4, (unsigned int)&v28, a5, 25, a3);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, v27);
  }
  *a1 = &vault_files_dirtree_widget_t___vtable;
  a1[2] = vault_files_dirtree_widget_t___vtable_at__16;
  a1[30] = vault_files_dirtree_widget_t___vtable_at__240;
  a1[38] = vault_files_dirtree_widget_t___vtable_at__304;
  a1[311] = vault_files_dirtree_widget_t___vtable_at__2488;
  v10 = operator new(0x30u);
  *(_QWORD *)v10 = &unk_8725A0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_OWORD *)(v10 + 24) = 0;
  v11 = qvector_reserve(v10 + 16, 0, 22, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDAC0);
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 24) = 22;
  *(__m128i *)v11 = si128;
  *(_QWORD *)(v11 + 13) = 0x73656C69665F746CLL;
  *(_BYTE *)(*(_QWORD *)(v10 + 16) + 21LL) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)v10 = &vault_files_dirspec_t___vtable;
  v13 = (char *)operator new(8u);
  *(_QWORD *)v13 = create_dirtree(v13, v10);
  v14 = (_QWORD *)operator new(0x190u);
  sub_42ACB0(&v28, 384);
  sub_197020(&v28, "Name", 32, 0, nullptr);
  sub_197020(&v28, "Size", 0xFFFFFFFFLL, 196608, nullptr);
  sub_197020(&v28, "Commited", 0xFFFFFFFFLL, 0, nullptr);
  v15 = v13;
  v36 |= 8u;
  sub_42F6D0(v14, v13, v10, &v28, a1, 1);
  if ( v34 )
  {
    v35 = 0;
    *(double *)si128.m128i_i64 = qfree(v34, v13);
  }
  if ( v32 )
  {
    v33 = 0;
    *(double *)si128.m128i_i64 = qfree(v32, v13, *(double *)si128.m128i_i64);
  }
  v16 = v30;
  if ( v30 )
  {
    v17 = v31;
    if ( v31 )
    {
      v18 = 0;
      do
      {
        v19 = (__int64 *)(v16 + 24 * v18);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v20, v15, *(double *)si128.m128i_i64);
          v16 = v30;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    v31 = 0;
    *(double *)si128.m128i_i64 = qfree(v16, v15, *(double *)si128.m128i_i64);
  }
  v21 = v28;
  if ( v28 )
  {
    v22 = v29;
    if ( (_QWORD)v29 )
    {
      v23 = 0;
      do
      {
        v24 = (__int64 *)(v21 + 24 * v23);
        v25 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v25, v15, *(double *)si128.m128i_i64);
          v21 = v28;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v29 = 0;
    *(double *)si128.m128i_i64 = qfree(v21, v15, *(double *)si128.m128i_i64);
  }
  *v14 = &vault_files_item_model_t___vtable;
  sub_42B4F0(a1, v10, v14, *(double *)si128.m128i_i64);
  return v37 - __readfsqword(0x28u);
}

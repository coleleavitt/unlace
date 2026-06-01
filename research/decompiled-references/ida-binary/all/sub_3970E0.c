unsigned __int64 __fastcall sub_3970E0(__int64 a1, const __m128i *a2)
{
  _QWORD *v3; // r12
  __m128i v4; // xmm0
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  double v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 strlist_api; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  const char *v15; // rcx
  const char *v16; // rdx
  const char *v17; // rdx
  const char *v18; // rcx
  const char *v19; // rax
  _DWORD *v21; // rsi
  __int64 v22; // rax
  struct _Unwind_Exception *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rdi
  const char *v26; // [rsp+0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+8h] [rbp-60h]
  const char *v28; // [rsp+20h] [rbp-48h] BYREF
  __int128 v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0x2008404000004LL;
  v3 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  v4 = _mm_loadl_epi64((const __m128i *)&off_8683E0);
  v5 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &stru_86F6A0;
  v6 = (_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_8683C0);
  v7 = 0.0;
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v6 != v5 );
  *(_DWORD *)(a1 + 176) = 0;
  v8 = *(unsigned int *)(a1 + 12);
  v9 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v23 = (struct _Unwind_Exception *)interr(3449, a2, v8, v9, 0.0);
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          v7 = qfree(v26, a2->m128i_i8);
        }
        v24 = *(_QWORD *)(a1 + 184);
        if ( v24 )
        {
          *(_QWORD *)(a1 + 192) = 0;
          v7 = qfree(v24, a2->m128i_i8, v7);
        }
        *(_QWORD *)a1 = &stru_86F6A0;
        while ( 1 )
        {
          v25 = *(v6 - 3);
          v6 -= 3;
          if ( v25 )
          {
            v6[1] = 0;
            v7 = qfree(v25, a2->m128i_i8, v7);
          }
          if ( v6 == v3 )
            _Unwind_Resume(v23);
        }
      }
      BUG();
    }
    v8 = (unsigned int)v8 & 0xFE07FFFF;
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v8;
  }
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v10 = _mm_loadu_si128(a2);
  *(_QWORD *)a1 = strings_chooser_t___vtable;
  *(__m128i *)(a1 + 208) = v10;
  strlist_api = get_strlist_api(a1, a2, v8, v9);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)strlist_api + 56LL))(strlist_api, a1 + 208);
  v13 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 224) = v12;
  if ( v13 != -1 )
  {
    v26 = nullptr;
    v27 = 0;
    sub_396E40((__int64 *)&v26, v13);
    v14 = *(_QWORD *)(a1 + 216);
    v28 = nullptr;
    v29 = 0;
    sub_396E40((__int64 *)&v28, v14);
    v15 = &s1;
    if ( (_QWORD)v29 )
    {
      v15 = v28;
      v16 = &s1;
      if ( !(_QWORD)v27 )
        goto LABEL_9;
    }
    else
    {
      v16 = &s1;
      if ( !(_QWORD)v27 )
      {
LABEL_9:
        sub_169A50((__int64 *)(a1 + 184), (__int64)"Strings from %s to %s", v16, v15);
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree(v28, "Strings from %s to %s", v17, v18);
        }
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26, "Strings from %s to %s");
        }
        goto LABEL_13;
      }
    }
    v16 = v26;
    goto LABEL_9;
  }
  v21 = *(_DWORD **)(a1 + 184);
  if ( *(_QWORD *)(a1 + 200) <= 7u )
  {
    v22 = qvector_reserve(a1 + 184, v21, 8, 1);
    *(_QWORD *)(a1 + 184) = v22;
    v21 = (_DWORD *)v22;
  }
  *(_QWORD *)(a1 + 192) = 8;
  *v21 = 1769108563;
  *(_DWORD *)((char *)v21 + 3) = 1936158313;
  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 7LL) = 0;
LABEL_13:
  v19 = &s1;
  if ( *(_QWORD *)(a1 + 192) )
    v19 = *(const char **)(a1 + 184);
  *(_QWORD *)(a1 + 40) = v19;
  *(_DWORD *)(a1 + 72) = 80;
  return v30 - __readfsqword(0x28u);
}

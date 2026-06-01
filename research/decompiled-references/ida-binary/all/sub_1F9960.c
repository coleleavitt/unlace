__int64 __fastcall sub_1F9960(_QWORD *a1, __m128i *a2, const char *a3, __int64 a4)
{
  __int64 v6; // rax
  const char *v9; // rsi
  unsigned int v10; // ebx
  const __m128i *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  __m128i *v15; // [rsp+0h] [rbp-70h] BYREF
  __int128 v16; // [rsp+8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-58h]
  __int64 v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-40h]
  unsigned __int64 v21; // [rsp+40h] [rbp-30h]

  v6 = *a1;
  v21 = __readfsqword(0x28u);
  v16 = 0;
  v17 = 0;
  v9 = (const char *)&v15;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __m128i **, __int128 *, __m128i *, _QWORD))(v6 + 680))(
         a1,
         &v15,
         &v16,
         a2,
         0)
    && (v9 = a3, (unsigned __int8)bookmarks_t_get(v15, a3, a4, a1[91]))
    && (v9 = (const char *)v15,
        v10 = (*(__int64 (__fastcall **)(_QWORD *, __m128i *, _QWORD))(*a1 + 688LL))(a1, v15, 0),
        (_BYTE)v10) )
  {
    v12 = v15;
    if ( v15 != a2 )
    {
      v13 = a2[2].m128i_i64[1];
      if ( v13 )
      {
        qfree(v13, v9);
        a2[2].m128i_i64[1] = 0;
      }
      *a2 = _mm_loadu_si128(v12);
      a2[1] = _mm_loadu_si128(v12 + 1);
      a2[2].m128i_i32[0] = v12[2].m128i_i32[0];
      v14 = v12[2].m128i_i64[1];
      if ( v14 )
        a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v20 )
    qfree(v20, v9);
  return v10;
}

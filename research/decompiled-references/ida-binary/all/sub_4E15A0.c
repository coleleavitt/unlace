unsigned __int64 __fastcall sub_4E15A0(__int64 **a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // rdx
  _BYTE *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  size_t v19; // r13
  __int64 v20; // r14
  _WORD *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rdi
  const char *v26; // rdx
  __int64 v27; // rax
  void *v28; // rdi
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v31; // [rsp+8h] [rbp-40h]
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v4 = (__int64 *)(a4 + 24);
  v6 = a2[106].m128i_i64[1];
  v7 = _mm_loadu_si128(a2 + 107);
  v32 = __readfsqword(0x28u);
  ++a2[114].m128i_i32[2];
  v8 = *(v4 - 3);
  *a1 = (__int64 *)a2;
  a2[106].m128i_i64[1] = v8;
  v9 = *(v4 - 2);
  a1[1] = nullptr;
  a2[107].m128i_i64[0] = v9;
  v10 = *(v4 - 1);
  a1[2] = nullptr;
  a2[107].m128i_i64[1] = v10;
  *(v4 - 3) = v6;
  *((__m128i *)v4 - 1) = v7;
  sub_4DE2E0(a2[108].m128i_i64, v4);
  v11 = *a1;
  v31 = 0;
  src = nullptr;
  v11[223] = v12;
  v14 = sub_4DF260(v11 + 213, (__int64 *)&src, v11, v13, 0.0);
  v15 = *((_QWORD *)&v31 + 1);
  v16 = src;
  if ( v14 )
  {
    v17 = v31;
    if ( (_QWORD)v31 )
    {
      v18 = v31 + 6;
      v19 = v31 - 1;
      v20 = v31 + 5;
      if ( *((_QWORD *)&v31 + 1) >= (unsigned __int64)(v31 + 6) )
      {
        *(_QWORD *)&v31 = v31 + 6;
        *((_BYTE *)src + v20) = 0;
        if ( v17 == 1 )
          goto LABEL_5;
        goto LABEL_20;
      }
    }
    else
    {
      if ( *((_QWORD *)&v31 + 1) > 6u )
      {
        *(_QWORD *)&v31 = 7;
        *((_BYTE *)src + 6) = 0;
        goto LABEL_5;
      }
      v19 = 0;
      v18 = 7;
      v20 = 6;
    }
    src = (void *)qvector_reserve(&src, src, v18, 1);
    *(_QWORD *)&v31 = v18;
    *((_BYTE *)src + v20) = 0;
    if ( !v19 )
    {
LABEL_5:
      v21 = src;
      *(_DWORD *)src = 1734439492;
      v21[2] = 10016;
      v22 = v31;
      if ( (_QWORD)v31 )
      {
        v23 = v31 + 1;
        v24 = v31;
        v16 = src;
        v22 = v31 - 1;
        if ( *((_QWORD *)&v31 + 1) >= (unsigned __int64)(v31 + 1) )
        {
LABEL_7:
          *(_QWORD *)&v31 = v23;
          v16[v24] = 0;
          *((_BYTE *)src + v22) = 39;
          goto LABEL_11;
        }
      }
      else
      {
        v16 = src;
        v23 = 2;
        v24 = 1;
        if ( *((_QWORD *)&v31 + 1) >= 2u )
          goto LABEL_7;
      }
      src = (void *)qvector_reserve(&src, v16, v23, 1);
      v16 = src;
      goto LABEL_7;
    }
LABEL_20:
    memmove((char *)src + 6, src, v19);
    goto LABEL_5;
  }
  if ( *((_QWORD *)&v31 + 1) <= 0xAu )
  {
    src = (void *)qvector_reserve(&src, src, 11, 1);
    v16 = src;
  }
  v15 = 29549;
  *(_QWORD *)&v31 = 11;
  qmemcpy(v16, "Drag items", 10);
  *((_BYTE *)src + 10) = 0;
LABEL_11:
  v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64))(QT::QCoreApplication::self[2] + 88LL))(
          QT::QCoreApplication::self + 2,
          v16,
          v15);
  v26 = &s1;
  if ( (_QWORD)v31 )
    v26 = (const char *)src;
  v27 = (*(__int64 (__fastcall **)(__int64, const char *, const char *))(*(_QWORD *)v25 + 88LL))(v25, "Drag items", v26);
  v28 = src;
  a1[2] = (__int64 *)v27;
  *(_DWORD *)(v27 + 8) = 0;
  if ( v28 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v28, "Drag items");
  }
  return v32 - __readfsqword(0x28u);
}

__int64 __fastcall sub_38ACB0(__int64 a1, double a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  const char *v6; // rax
  void *v7; // r12
  size_t v8; // r13
  __int64 v9; // rcx
  size_t v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r13
  const char *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // eax
  __m128i v19; // xmm0
  int v20; // eax
  void *v21; // rax
  size_t v22; // [rsp+8h] [rbp-B0h]
  int v23; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v24; // [rsp+18h] [rbp-A0h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall **v27)(); // [rsp+50h] [rbp-68h] BYREF
  int v28; // [rsp+58h] [rbp-60h]
  int v29; // [rsp+5Ch] [rbp-5Ch]
  __m128i v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v23 = 0;
  LOBYTE(v3) = sub_386940(a1, &v23, a2);
  v4 = v3;
  if ( !(_BYTE)v3 )
    return v4;
  v6 = sub_253270(*(_QWORD *)(a1 + 32), (unsigned __int64 *)&v24, 1);
  src = nullptr;
  v7 = (void *)v6;
  v26 = 0;
  if ( !v6 )
  {
    v13 = 2;
    v10 = 0;
    goto LABEL_12;
  }
  v8 = strlen(v6);
  src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
  *(_QWORD *)&v26 = v8 + 1;
  memmove(src, v7, v8);
  *((_BYTE *)src + v8) = 0;
  v12 = v26;
  v7 = src;
  if ( !(_QWORD)v26 )
  {
    if ( *((_QWORD *)&v26 + 1) > 1u )
    {
      *(_QWORD *)&v26 = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_7;
    }
    v10 = 0;
    v13 = 2;
LABEL_12:
    v22 = v10;
    v21 = (void *)qvector_reserve(&src, v7, v13, 1);
    v10 = v22;
    src = v21;
    *(_QWORD *)&v26 = v13;
    *((_BYTE *)v21 + v22 + 1) = 0;
    if ( !v22 )
      goto LABEL_7;
LABEL_13:
    memmove((char *)src + 1, src, v10);
    goto LABEL_7;
  }
  v13 = v26 + 1;
  v10 = v26 - 1;
  if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
    goto LABEL_12;
  *(_QWORD *)&v26 = v26 + 1;
  *((_BYTE *)src + v12) = 0;
  if ( v12 != 1 )
    goto LABEL_13;
LABEL_7:
  v14 = s1;
  *(_BYTE *)src = 10;
  v15 = *(_QWORD *)(a1 + 32);
  if ( (_QWORD)v26 )
    v14 = (const char *)src;
  sub_257EB0(v15, &v24, v14, v9, v10, v11);
  sub_2B1DD0(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL));
  sub_38A720(a1, 1u, v16);
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_DWORD *)(a1 + 44) + 1;
  v19 = _mm_loadl_epi64((const __m128i *)*(_QWORD *)(a1 + 32));
  v28 = 0;
  v29 = v18;
  v27 = off_4C6C58;
  v20 = *(_DWORD *)(a1 + 52);
  v30 = _mm_unpacklo_epi64(v19, v19);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    69,
    v17,
    &v27,
    0,
    (unsigned int)(v20 + 1),
    &callui);
  if ( src )
  {
    *(_QWORD *)&v26 = 0;
    qfree(src);
  }
  return v4;
}

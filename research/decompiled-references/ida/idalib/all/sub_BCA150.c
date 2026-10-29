__int64 __fastcall sub_BCA150(_BYTE *a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rax
  __int32 v7; // eax
  __int64 *v8; // r12
  const __m128i *v9; // rbx
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 (*v16)(); // rdx
  __int64 (*v17)(); // rax
  __m128i v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+10h] [rbp-38h]
  __int64 v20; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7744);
  if ( v6 != sub_BC7660 && !((unsigned __int8 (__fastcall *)(_BYTE *, const __m128i *, __int64))v6)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
    goto LABEL_4;
  v15 = *(_QWORD *)a1;
  v16 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v16 != sub_BC5900 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, const __m128i *))v16)(a1, a2) )
    {
      v15 = *(_QWORD *)a1;
      goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v17 = *(__int64 (**)())(v15 + 6728);
  if ( v17 != sub_BC7230 && !((unsigned __int8 (__fastcall *)(_BYTE *, const __m128i *))v17)(a1, a2) )
    return 0;
LABEL_4:
  if ( *(_QWORD *)(a3 + 8)
    && (a2[2].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0
    && !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 88LL))(a1) )
  {
    return 0;
  }
  v7 = a2[1].m128i_i32[1];
  if ( v7 )
  {
    v8 = (__int64 *)(a3 + 32);
    v9 = a2 + 3;
    v10 = a3 + 8LL * (unsigned int)(v7 - 1) + 40;
    while ( 1 )
    {
      v11 = _mm_loadu_si128(v9);
      v12 = v9[1].m128i_i64[0];
      v20 = *v8;
      v13 = *(_QWORD *)a1;
      v18 = v11;
      v19 = v12;
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __m128i *))(v13 + 112))(a1, &v18) )
        break;
      ++v8;
      v9 = (const __m128i *)((char *)v9 + 24);
      if ( (__int64 *)v10 == v8 )
        return 1;
    }
    return 0;
  }
  return 1;
}

__int64 __fastcall sub_16B340(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // bp
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v12; // rdi
  struct _Unwind_Exception *v13; // rbx
  __m128i v14; // [rsp+0h] [rbp-88h] BYREF
  __m128i v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  __m128i v17; // [rsp+30h] [rbp-58h] BYREF
  __m128i v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  unsigned __int64 v21; // [rsp+68h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 480) )
  {
    sub_158B30(a1);
    goto LABEL_18;
  }
  v6 = *(_QWORD *)(a1 + 472);
  v7 = a1;
  v8 = a3;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 440));
  v16 = v6;
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 456));
  if ( a2 == 1 )
  {
    v15.m128i_i32[3] = 0;
    a1 = *(_QWORD *)(a1 + 888);
  }
  else
  {
    v12 = 0;
    if ( *(_BYTE *)(v7 + 992) && *(_DWORD *)(v7 + 472) == 1 )
      v12 = *(_QWORD *)(v7 + 856);
    (*(void (__fastcall **)(__int64, unsigned __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 136LL))(
      v12,
      &v15.m128i_u64[1],
      a3,
      a4,
      a5,
      a6,
      v14.m128i_i64[0],
      v14.m128i_i64[1],
      v15.m128i_i64[0]);
    a1 = *(_QWORD *)(v7 + 896);
  }
  v9 = _mm_load_si128(&v14);
  v20 = a1;
  v17 = v9;
  v10 = _mm_load_si128(&v15);
  v19 = v16;
  v18 = v10;
  if ( a1 )
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !v8 )
  {
    if ( *(_QWORD *)(v7 + 480) )
    {
      v18.m128i_i16[6] = *(_WORD *)(v7 + 468);
      sub_16B280(v7 + 440, &v17);
      goto LABEL_9;
    }
LABEL_18:
    v13 = (struct _Unwind_Exception *)sub_158B30(a1);
    if ( v20 )
      qfree();
    _Unwind_Resume(v13);
  }
  sub_16B2E0(v7 + 440, &v17, 0);
LABEL_9:
  if ( v20 )
    qfree();
  return 1;
}


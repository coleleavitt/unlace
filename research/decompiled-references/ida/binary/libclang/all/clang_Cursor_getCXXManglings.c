__int64 __fastcall clang_Cursor_getCXXManglings(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  void **v11; // rbp
  void **v12; // rbx
  __int64 v13; // r12
  __m128i v15; // [rsp+0h] [rbp-78h]
  char v16[8]; // [rsp+28h] [rbp-50h] BYREF
  void *v17; // [rsp+30h] [rbp-48h] BYREF
  void **v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]

  if ( (unsigned int)(a7 - 70) <= 3 || (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v15 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v15.m128i_i32[0], v15.m128i_i64[1]);
  v8 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( (unsigned int)(v8 - 57) > 2 && (unsigned int)(v8 - 33) > 3 )
    return 0;
  v9 = sub_798D40(v7);
  sub_A55990(v16, v9);
  sub_A589F0(&v17, v16, v7);
  v10 = sub_690660(&v17);
  v11 = v18;
  v12 = (void **)v17;
  v13 = v10;
  if ( v18 != v17 )
  {
    do
    {
      if ( *v12 != v12 + 2 )
        operator delete(*v12, (unsigned __int64)v12[2] + 1);
      v12 += 4;
    }
    while ( v11 != v12 );
    v12 = (void **)v17;
  }
  if ( v12 )
    operator delete(v12, v19 - (_QWORD)v12);
  sub_A55A00(v16);
  return v13;
}


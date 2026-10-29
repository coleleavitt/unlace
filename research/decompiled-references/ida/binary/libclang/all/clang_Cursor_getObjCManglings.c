__int64 __fastcall clang_Cursor_getObjCManglings(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rbp
  void **v11; // rbx
  __int64 v12; // r12
  __m128i v14; // [rsp+0h] [rbp-78h]
  char v15[8]; // [rsp+28h] [rbp-50h] BYREF
  void *v16; // [rsp+30h] [rbp-48h] BYREF
  void **v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  if ( (unsigned int)(a7 - 70) <= 3 || (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v14 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v14.m128i_i32[0], v14.m128i_i64[1]);
  if ( ((*(_BYTE *)(v7 + 28) + 110) & 0x7Fu) > 1 )
    return 0;
  v8 = sub_798D40(v7);
  sub_A55990(v15, v8);
  sub_A589F0(&v16, v15, v7);
  v9 = sub_690660(&v16);
  v10 = v17;
  v11 = (void **)v16;
  v12 = v9;
  if ( v17 != v16 )
  {
    do
    {
      if ( *v11 != v11 + 2 )
        operator delete(*v11, (unsigned __int64)v11[2] + 1);
      v11 += 4;
    }
    while ( v10 != v11 );
    v11 = (void **)v16;
  }
  if ( v11 )
    operator delete(v11, v18 - (_QWORD)v11);
  sub_A55A00(v15);
  return v12;
}


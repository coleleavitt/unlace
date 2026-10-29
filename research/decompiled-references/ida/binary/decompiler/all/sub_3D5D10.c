__int64 __fastcall sub_3D5D10(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbp
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rbx
  const char *v19; // rdx
  const char *v20; // r8
  __int64 v21; // rax
  __m128i v22; // xmm0
  int v24; // r9d
  const char *v25; // r8
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 64);
  v28 = __readfsqword(0x28u);
  if ( v10 && (v12 = *(_DWORD *)(v10 + 60), (unsigned int)(v12 - 1) <= 1) )
  {
    if ( v12 == 2 )
      return sub_2B1D90((unsigned int)"Refresh to add or edit comments", a2, 1, a4, a5, a6);
  }
  else
  {
    v10 = 0;
  }
  v13 = sub_3C8680(v10, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
  if ( v14 | v15 || v13 )
  {
    v27 = 0;
    v26 = 0;
    v16 = sub_3C8A80(v10, v14, v15);
    v18 = v16;
    LODWORD(v19) = 0;
    if ( v16 )
    {
      v19 = s1;
      if ( *(_QWORD *)(v16 + 8) )
        v19 = *(const char **)v16;
    }
    v20 = "Enter indented comment";
    if ( a3 )
      v20 = "Enter block comment";
    if ( (unsigned __int8)sub_37E420((unsigned int)&v26, 0, (_DWORD)v19, (unsigned int)&unk_419FBB, (_DWORD)v20, v17) )
    {
      if ( v18 || (v18 = sub_3CD0A0((_QWORD *)v10, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24), a3)) != 0 )
      {
        v21 = *(_QWORD *)v18;
        v22 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        *(_QWORD *)v18 = v26;
        *(__m128i *)(v18 + 8) = v27;
        v26 = v21;
        v27 = v22;
        sub_3CF320((__int64 **)(v10 + 88), *(_QWORD *)(v10 + 8), *(_DWORD *)(v10 + 56));
        sub_3D57E0(a1, *(_QWORD *)(v10 + 8), *(_DWORD *)(v10 + 56), 0, 0, *(double *)v22.m128i_i64, a8, a9, a10);
      }
    }
    if ( v26 )
    {
      v27.m128i_i64[0] = 0;
      qfree();
    }
  }
  else if ( get_func() )
  {
    get_func_cmt();
    v25 = "Enter FUNCTION comment";
    v26 = 0;
    v27 = 0;
    if ( a3 != 1 )
      v25 = "Enter repeatable FUNCTION comment";
    if ( (unsigned __int8)sub_37E420(
                            (unsigned int)&v26,
                            0,
                            (unsigned int)s1,
                            (unsigned int)&unk_419FBB,
                            (_DWORD)v25,
                            v24) )
    {
      set_func_cmt();
      sub_3D57E0(a1, *(_QWORD *)(v10 + 8), *(_DWORD *)(v10 + 56), 0, 0, 0.0, a8, a9, a10);
      if ( v26 )
      {
        v27.m128i_i64[0] = 0;
        qfree();
      }
    }
    else if ( v26 )
    {
      v27.m128i_i64[0] = 0;
      qfree();
    }
  }
  return v28 - __readfsqword(0x28u);
}

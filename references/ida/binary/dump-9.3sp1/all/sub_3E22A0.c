__int64 __fastcall sub_3E22A0(__int64 a1, __int64 a2, char a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v7; // rbp
  int v9; // eax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  const char *v14; // rdx
  __int64 v15; // rbx
  const char *v16; // r8
  __int64 v17; // rax
  __m128i v18; // xmm0
  const char *v20; // r8
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __m128i v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 64);
  v23 = __readfsqword(0x28u);
  if ( v7 && (v9 = *(_DWORD *)(v7 + 60), (unsigned int)(v9 - 1) <= 1) )
  {
    if ( v9 == 2 )
      return sub_2B4E70((__int64)"Refresh to add or edit comments");
  }
  else
  {
    v7 = 0;
  }
  v10 = sub_3D2B60(v7, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
  if ( v11 | v12 || v10 )
  {
    v22 = 0;
    v21 = 0;
    v13 = sub_3D2E20((_QWORD *)v7, v11, v12, a3);
    v14 = nullptr;
    v15 = v13;
    if ( v13 )
    {
      v14 = s1;
      if ( *(_QWORD *)(v13 + 8) )
        v14 = *(const char **)v13;
    }
    v16 = "Enter indented comment";
    if ( a3 )
      v16 = "Enter block comment";
    if ( (unsigned __int8)sub_382A60((__int64)&v21, 0, (__int64)v14, (__int64)&unk_4190BD, v16) )
    {
      if ( v15 || (v15 = sub_3D7660((_QWORD *)v7, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24), a3, 0.0)) != 0 )
      {
        v17 = *(_QWORD *)v15;
        v18 = _mm_loadu_si128((const __m128i *)(v15 + 8));
        *(_QWORD *)v15 = v21;
        *(__m128i *)(v15 + 8) = v22;
        v21 = v17;
        v22 = v18;
        sub_3DAC20((__int64 **)(v7 + 88));
        sub_3E1D40(a1, *(_QWORD *)(v7 + 8), *(_DWORD *)(v7 + 56), 0, nullptr, *(double *)v18.m128i_i64, a5, a6, a7);
      }
    }
    if ( v21 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v21);
    }
  }
  else if ( get_func() )
  {
    get_func_cmt();
    v20 = "Enter FUNCTION comment";
    v21 = 0;
    v22 = 0;
    if ( a3 != 1 )
      v20 = "Enter repeatable FUNCTION comment";
    if ( (unsigned __int8)sub_382A60((__int64)&v21, 0, (__int64)s1, (__int64)&unk_4190BD, v20) )
    {
      set_func_cmt();
      sub_3E1D40(a1, *(_QWORD *)(v7 + 8), *(_DWORD *)(v7 + 56), 0, nullptr, 0.0, a5, a6, a7);
      if ( v21 )
      {
        v22.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
    else if ( v21 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v21);
    }
  }
  return v23 - __readfsqword(0x28u);
}

__int64 __fastcall sub_3DA9A0(__int64 a1, __int64 a2, char a3, double a4, double a5, __m128 a6, __m128 a7)
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
  const char *v17; // rax
  __m128i v18; // xmm0
  __int64 func; // rax
  __int64 v21; // rbx
  unsigned __int8 v22; // r13
  const char *v23; // r8
  const char *v24; // rdx
  const char *v25; // rsi
  const char *v26; // rdi
  const char *v27; // [rsp+0h] [rbp-78h] BYREF
  __int128 v28; // [rsp+8h] [rbp-70h]
  const char *v29; // [rsp+20h] [rbp-58h] BYREF
  __m128i v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 64);
  v31 = __readfsqword(0x28u);
  if ( !v7 || (v9 = *(_DWORD *)(v7 + 60), (unsigned int)(v9 - 1) > 1) )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( v9 != 2 )
  {
LABEL_4:
    v10 = sub_3CB260(v7, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
    if ( v11 | v12 || v10 )
    {
      v30 = 0;
      v29 = nullptr;
      v13 = sub_3CB520((_QWORD *)v7, v11, v12, a3);
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
      if ( (unsigned __int8)sub_37B160((__int64)&v29, 0, (__int64)v14, (__int64)&unk_3F00D2, v16) )
      {
        if ( v15 || (v15 = sub_3CFD60((_QWORD *)v7, *(unsigned int *)(a2 + 20), *(_DWORD *)(a2 + 24), a3, 0.0)) != 0 )
        {
          v17 = *(const char **)v15;
          v18 = _mm_loadu_si128((const __m128i *)(v15 + 8));
          *(_QWORD *)v15 = v29;
          *(__m128i *)(v15 + 8) = v30;
          v29 = v17;
          v30 = v18;
          sub_3D3320((__int64 **)(v7 + 88), *(_QWORD *)(v7 + 8), *(_DWORD *)(v7 + 56));
          sub_3DA440(a1, *(_QWORD *)(v7 + 8), *(_DWORD *)(v7 + 56), 0, nullptr, *(double *)v18.m128i_i64, a5, a6, a7);
        }
      }
      if ( v29 )
      {
        v30.m128i_i64[0] = 0;
        qfree(v29);
      }
    }
    else
    {
      func = get_func(*(_QWORD *)(v7 + 8));
      v21 = func;
      if ( func )
      {
        v22 = a3 ^ 1;
        v27 = nullptr;
        v28 = 0;
        get_func_cmt(&v27, func, v22);
        v23 = "Enter FUNCTION comment";
        v29 = nullptr;
        v30 = 0;
        v24 = s1;
        if ( v22 )
          v23 = "Enter repeatable FUNCTION comment";
        if ( (_QWORD)v28 )
          v24 = v27;
        if ( (unsigned __int8)sub_37B160((__int64)&v29, 0, (__int64)v24, (__int64)&unk_3F00D2, v23) )
        {
          v25 = s1;
          if ( v30.m128i_i64[0] )
            v25 = v29;
          set_func_cmt(v21, v25, v22);
          sub_3DA440(a1, *(_QWORD *)(v7 + 8), *(_DWORD *)(v7 + 56), 0, nullptr, 0.0, a5, a6, a7);
          if ( v29 )
          {
            v30.m128i_i64[0] = 0;
            qfree(v29);
          }
          v26 = v27;
          if ( !v27 )
            return v31 - __readfsqword(0x28u);
        }
        else
        {
          if ( v29 )
          {
            v30.m128i_i64[0] = 0;
            qfree(v29);
          }
          v26 = v27;
          if ( !v27 )
            return v31 - __readfsqword(0x28u);
        }
        *(_QWORD *)&v28 = 0;
        qfree(v26);
      }
    }
    return v31 - __readfsqword(0x28u);
  }
  return sub_2ADAF0((__int64)"Refresh to add or edit comments");
}

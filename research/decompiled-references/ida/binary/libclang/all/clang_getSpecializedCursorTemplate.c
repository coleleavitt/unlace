__int64 __fastcall clang_getSpecializedCursorTemplate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rbp
  char v18; // cl
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  _QWORD *v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-38h]
  __m128i v31; // [rsp+0h] [rbp-38h]

  v9 = a7;
  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    goto LABEL_8;
  v30 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = sub_63A250(v9, a2, v10, v11, v12, v13, v30.m128i_i32[0], v30.m128i_i64[1]);
  v17 = v14;
  if ( !v14 )
    goto LABEL_8;
  v18 = *(_BYTE *)(v14 + 28);
  v19 = v18 & 0x7F;
  v20 = v19 - 57;
  v21 = v18 & 0x7F;
  if ( (unsigned int)(v19 - 57) > 2 )
  {
    if ( (unsigned int)(v19 - 32) > 5 )
    {
      v28 = (unsigned int)(v19 - 38);
      if ( (unsigned int)v28 > 6 )
      {
        if ( (unsigned int)(v19 - 67) > 3 )
          goto LABEL_8;
        v9 = v17;
        v22 = (_QWORD *)(*(_QWORD *)sub_7D2DE0(v17, a2, v28, v21) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        if ( (_BYTE)v21 == 41 )
          goto LABEL_8;
        v29 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v17 + 16) & 4) != 0 )
          v29 = *(_QWORD *)v29;
        if ( ((*(_BYTE *)(v29 + 8) + 72) & 0x7Fu) > 3 )
          goto LABEL_8;
        v9 = v17;
        v22 = (_QWORD *)sub_77CA50(v17);
      }
    }
    else
    {
      v9 = v17;
      v22 = (_QWORD *)sub_780F20(v17);
      if ( v22 )
        goto LABEL_7;
      v9 = v17;
      v22 = (_QWORD *)sub_780C30(v17);
    }
  }
  else if ( (_BYTE)v21 == 59 )
  {
    v9 = v17;
    v22 = (_QWORD *)sub_7D65F0(v17);
  }
  else if ( v19 == 57 )
  {
    v9 = v17;
    v22 = (_QWORD *)sub_7A46C0(v17);
  }
  else
  {
    v27 = *(_QWORD *)(v17 + 152);
    if ( !v27 )
      goto LABEL_8;
    v22 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v27 & 4) != 0 )
    {
      if ( !v22 )
        goto LABEL_8;
      v22 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if ( v22 )
  {
LABEL_7:
    v31 = _mm_loadu_si128((const __m128i *)&a7);
    v23 = _mm_loadu_si128((const __m128i *)&a8);
    v24 = sub_63A300(v9, a2, v20, v21, v15, v16, v31.m128i_i32[0], v31.m128i_i32[2], v23.m128i_i32[0], v23.m128i_i64[1]);
    sub_639160(a1, v22, v24, 0, 1, v25);
    return a1;
  }
LABEL_8:
  clang_getNullCursor(a1);
  return a1;
}


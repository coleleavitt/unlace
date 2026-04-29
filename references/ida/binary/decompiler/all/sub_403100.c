unsigned __int64 __fastcall sub_403100(int *a1, __int64 a2, __m128i *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v7; // r15d
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 i; // r14
  __int64 v15; // r15
  _QWORD *v16; // rbp
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v20; // rcx
  unsigned __int8 v21; // dl
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  const __m128i *v27; // [rsp+8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  char v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v4 = a1[111];
  v5 = (_QWORD *)a3->m128i_i64[0];
  v30 = __readfsqword(0x28u);
  v29 = 1;
  v28 = v4;
  v7 = v4;
  if ( v5 )
  {
    v8 = v5;
    if ( a3->m128i_i64[1] )
      v8 = (_QWORD *)v5[1];
    v9 = sub_3E1F00(v8, v5, (__int64)&v28);
    if ( v5 == (_QWORD *)v9 )
      goto LABEL_6;
    v10 = v9 + 24;
    if ( *(_BYTE *)(v9 + 32) != 1 )
      goto LABEL_6;
  }
  else
  {
    v22 = sub_3E1F00(0, 0, (__int64)&v28);
    if ( !v22 )
      goto LABEL_8;
    v10 = v22 + 24;
    if ( *(_BYTE *)(v22 + 32) != 1 )
      goto LABEL_8;
  }
  if ( *(_BYTE *)(v10 + 8) != 1 )
  {
    if ( !under_debugger )
      sub_37EA20(51892);
    BUG();
  }
  if ( v7 + 2 > *(_DWORD *)v10 )
  {
    v29 = 1;
    v23 = a1[172];
    v27 = (const __m128i *)&v28;
    v28 = v23;
    sub_402E20(a3, (__int64)&v28, &v27);
    v24 = a1[173];
    v29 = 1;
    v27 = (const __m128i *)&v28;
    v28 = v24;
    sub_402E20(a3, (__int64)&v28, &v27);
    v25 = a1[174];
    v29 = 1;
    v27 = (const __m128i *)&v28;
    v28 = v25;
    sub_402E20(a3, (__int64)&v28, &v27);
    v26 = a1[174];
    v29 = 1;
    v27 = (const __m128i *)&v28;
    v28 = v26 + 1;
    sub_402E20(a3, (__int64)&v28, &v27);
    v5 = (_QWORD *)a3->m128i_i64[0];
  }
  if ( !v5 )
    goto LABEL_8;
LABEL_6:
  v11 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v11 )
    goto LABEL_25;
  if ( (*(_BYTE *)v11 & 2) == 0 )
  {
    v20 = a1[131];
    while ( 1 )
    {
      v21 = *(_BYTE *)(v11 + 32);
      if ( v21 <= 1u )
      {
        if ( !v21 )
          goto LABEL_36;
        if ( v20 >= *(_QWORD *)(v11 + 24) )
          break;
      }
      v11 = *(_QWORD *)(v11 + 8);
LABEL_34:
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_8;
    }
    if ( v20 <= *(_QWORD *)(v11 + 24) )
    {
      if ( (_QWORD *)v11 != v5 )
      {
LABEL_25:
        v29 = 1;
        v27 = (const __m128i *)&v28;
        v28 = 0;
        sub_402E20(a3, (__int64)&v28, &v27);
        v28 = 1;
        v29 = 1;
        v27 = (const __m128i *)&v28;
        sub_402E20(a3, (__int64)&v28, &v27);
        v28 = 2;
        v29 = 1;
        v27 = (const __m128i *)&v28;
        sub_402E20(a3, (__int64)&v28, &v27);
        v28 = 3;
        v29 = 1;
        v27 = (const __m128i *)&v28;
        sub_402E20(a3, (__int64)&v28, &v27);
        v28 = 4;
        v29 = 1;
        v27 = (const __m128i *)&v28;
        sub_402E20(a3, (__int64)&v28, &v27);
        v28 = 5;
        v29 = 1;
        v27 = (const __m128i *)&v28;
        sub_402E20(a3, (__int64)&v28, &v27);
      }
      goto LABEL_8;
    }
LABEL_36:
    v11 = *(_QWORD *)(v11 + 16);
    goto LABEL_34;
  }
LABEL_8:
  v12 = *(_QWORD *)(a2 + 920);
  v13 = *(_QWORD *)(v12 + 152);
  for ( i = v12 + 136; v13 != i; v13 = std::_Rb_tree_increment() )
  {
    while ( 1 )
    {
      v15 = *(int *)(v13 + 32);
      v16 = (_QWORD *)a3->m128i_i64[0];
      v29 = 1;
      v17 = 0;
      v28 = (int)v15 - 8;
      if ( v16 )
      {
        v17 = v16;
        if ( a3->m128i_i64[1] )
          v17 = (_QWORD *)v16[1];
      }
      v18 = sub_3E1F00(v17, v16, (__int64)&v28);
      if ( v16 != (_QWORD *)v18 && *(_BYTE *)(v18 + 32) == 1 && (int)v15 > *(_DWORD *)(v18 + 24) )
        break;
      v13 = std::_Rb_tree_increment();
      if ( v13 == i )
        return v30 - __readfsqword(0x28u);
    }
    v28 = v15;
    v29 = 1;
    v27 = (const __m128i *)&v28;
    sub_402E20(a3, (__int64)&v28, &v27);
  }
  return v30 - __readfsqword(0x28u);
}

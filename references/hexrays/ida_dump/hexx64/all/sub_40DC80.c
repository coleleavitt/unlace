unsigned __int64 __fastcall sub_40DC80(int *a1, __int64 a2, __m128i *a3, double a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  int v9; // r15d
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 i; // r14
  __int64 v18; // r15
  _QWORD *v19; // rbp
  _QWORD *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // dl
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  const __m128i *v30; // [rsp+8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  char v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v6 = a1[111];
  v7 = (_QWORD *)a3->m128i_i64[0];
  v33 = __readfsqword(0x28u);
  v32 = 1;
  v31 = v6;
  v9 = v6;
  if ( v7 )
  {
    v10 = v7;
    if ( a3->m128i_i64[1] )
      v10 = (_QWORD *)v7[1];
    v11 = (__int64)v7;
    v12 = sub_3ECB40(v10, v7, (__int64)&v31);
    if ( v7 == (_QWORD *)v12 )
      goto LABEL_6;
    v13 = v12 + 24;
    if ( *(_BYTE *)(v12 + 32) != 1 )
      goto LABEL_6;
  }
  else
  {
    v11 = 0;
    v25 = sub_3ECB40(nullptr, nullptr, (__int64)&v31);
    if ( !v25 )
      goto LABEL_8;
    v13 = v25 + 24;
    if ( *(_BYTE *)(v25 + 32) != 1 )
      goto LABEL_8;
  }
  if ( *(_BYTE *)(v13 + 8) != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCAB4u, v11, a4);
    BUG();
  }
  if ( v9 + 2 > *(_DWORD *)v13 )
  {
    v32 = 1;
    v26 = a1[172];
    v30 = (const __m128i *)&v31;
    v31 = v26;
    sub_40D9A0(a3, (__int64)&v31, &v30);
    v27 = a1[173];
    v32 = 1;
    v30 = (const __m128i *)&v31;
    v31 = v27;
    sub_40D9A0(a3, (__int64)&v31, &v30);
    v28 = a1[174];
    v32 = 1;
    v30 = (const __m128i *)&v31;
    v31 = v28;
    sub_40D9A0(a3, (__int64)&v31, &v30);
    v29 = a1[174];
    v32 = 1;
    v30 = (const __m128i *)&v31;
    v31 = v29 + 1;
    sub_40D9A0(a3, (__int64)&v31, &v30);
    v7 = (_QWORD *)a3->m128i_i64[0];
  }
  if ( !v7 )
    goto LABEL_8;
LABEL_6:
  v14 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v14 )
    goto LABEL_25;
  if ( (*(_BYTE *)v14 & 2) == 0 )
  {
    v23 = a1[131];
    while ( 1 )
    {
      v24 = *(_BYTE *)(v14 + 32);
      if ( v24 <= 1u )
      {
        if ( !v24 )
          goto LABEL_36;
        if ( v23 >= *(_QWORD *)(v14 + 24) )
          break;
      }
      v14 = *(_QWORD *)(v14 + 8);
LABEL_34:
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_8;
    }
    if ( v23 <= *(_QWORD *)(v14 + 24) )
    {
      if ( (_QWORD *)v14 != v7 )
      {
LABEL_25:
        v32 = 1;
        v30 = (const __m128i *)&v31;
        v31 = 0;
        sub_40D9A0(a3, (__int64)&v31, &v30);
        v31 = 1;
        v32 = 1;
        v30 = (const __m128i *)&v31;
        sub_40D9A0(a3, (__int64)&v31, &v30);
        v31 = 2;
        v32 = 1;
        v30 = (const __m128i *)&v31;
        sub_40D9A0(a3, (__int64)&v31, &v30);
        v31 = 3;
        v32 = 1;
        v30 = (const __m128i *)&v31;
        sub_40D9A0(a3, (__int64)&v31, &v30);
        v31 = 4;
        v32 = 1;
        v30 = (const __m128i *)&v31;
        sub_40D9A0(a3, (__int64)&v31, &v30);
        v31 = 5;
        v32 = 1;
        v30 = (const __m128i *)&v31;
        sub_40D9A0(a3, (__int64)&v31, &v30);
      }
      goto LABEL_8;
    }
LABEL_36:
    v14 = *(_QWORD *)(v14 + 16);
    goto LABEL_34;
  }
LABEL_8:
  v15 = *(_QWORD *)(a2 + 920);
  v16 = *(_QWORD *)(v15 + 152);
  for ( i = v15 + 136; v16 != i; v16 = std::_Rb_tree_increment(v16) )
  {
    while ( 1 )
    {
      v18 = *(int *)(v16 + 32);
      v19 = (_QWORD *)a3->m128i_i64[0];
      v32 = 1;
      v20 = nullptr;
      v31 = (int)v18 - 8;
      if ( v19 )
      {
        v20 = v19;
        if ( a3->m128i_i64[1] )
          v20 = (_QWORD *)v19[1];
      }
      v21 = sub_3ECB40(v20, v19, (__int64)&v31);
      if ( v19 != (_QWORD *)v21 && *(_BYTE *)(v21 + 32) == 1 && (int)v18 > *(_DWORD *)(v21 + 24) )
        break;
      v16 = std::_Rb_tree_increment(v16);
      if ( v16 == i )
        return v33 - __readfsqword(0x28u);
    }
    v31 = v18;
    v32 = 1;
    v30 = (const __m128i *)&v31;
    sub_40D9A0(a3, (__int64)&v31, &v30);
  }
  return v33 - __readfsqword(0x28u);
}

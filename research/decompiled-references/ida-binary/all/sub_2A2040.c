unsigned __int64 __fastcall sub_2A2040(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  __int64 v16; // rdi
  __m128i v18; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-28h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( a1 == (_QWORD *)a2 )
    return v20 - __readfsqword(0x28u);
  v2 = a1[2];
  v3 = a1[4];
  v19 = a1;
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)v3);
  if ( !v2 )
  {
    v7 = (const char *)(a1 + 1);
    a1[5] = 0;
    a1[3] = a1 + 1;
    a1[4] = a1 + 1;
    v8 = *(const char **)(a2 + 16);
    v18.m128i_i64[1] = 0;
    if ( !v8 )
      return v20 - __readfsqword(0x28u);
LABEL_6:
    v9 = sub_2A1DE0(v8, (__int64)v7, &v18);
    v10 = v9;
    do
    {
      v11 = v10;
      v10 = (_QWORD *)v10[2];
    }
    while ( v10 );
    a1[3] = v11;
    v12 = v9;
    do
    {
      v13 = v12;
      v12 = (_QWORD *)v12[3];
    }
    while ( v12 );
    a1[4] = v13;
    v2 = v18.m128i_i64[0];
    v14 = *(_QWORD *)(a2 + 40);
    a1[2] = v9;
    a1[5] = v14;
    if ( !v2 )
      return v20 - __readfsqword(0x28u);
    goto LABEL_11;
  }
  *(_QWORD *)(v2 + 8) = 0;
  v6 = *(_QWORD *)(v3 + 16);
  if ( v6 )
    v18.m128i_i64[1] = v6;
  v7 = (const char *)(a1 + 1);
  a1[2] = 0;
  a1[3] = a1 + 1;
  a1[4] = a1 + 1;
  a1[5] = 0;
  v8 = *(const char **)(a2 + 16);
  if ( v8 )
    goto LABEL_6;
  do
  {
LABEL_11:
    v15 = (_QWORD *)v2;
    sub_2919A0(*(_QWORD **)(v2 + 24), v7);
    v16 = *(_QWORD *)(v2 + 56);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v16 )
    {
      v15[8] = 0;
      qfree(v16, v7);
    }
    v7 = (_BYTE *)off_50;
    operator delete(v15, 0x50u);
  }
  while ( v2 );
  return v20 - __readfsqword(0x28u);
}

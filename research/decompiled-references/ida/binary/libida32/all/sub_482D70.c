unsigned __int64 __fastcall sub_482D70(__int64 *a1)
{
  __int64 v1; // r13
  __int64 *v2; // rax
  __int64 *v3; // r13
  __int64 *v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rax
  unsigned int v7; // eax
  int *v8; // r15
  const char *v9; // rbp
  const char *v10; // r14
  int v11; // eax
  int *v12; // rsi
  int v13; // eax
  __int64 *v14; // rax
  _QWORD **v15; // rbx
  void *v16; // rdi
  __m128i v18; // [rsp+0h] [rbp-B8h] BYREF
  int *v19; // [rsp+10h] [rbp-A8h]
  char *v20; // [rsp+18h] [rbp-A0h]
  char v21; // [rsp+20h] [rbp-98h] BYREF
  int v22; // [rsp+28h] [rbp-90h] BYREF
  void *v23; // [rsp+30h] [rbp-88h]
  int *v24; // [rsp+38h] [rbp-80h]
  int *v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  _QWORD v27[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v28; // [rsp+60h] [rbp-58h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v1 = a1[2];
  v29 = __readfsqword(0x28u);
  v22 = 0;
  v20 = &v21;
  v23 = nullptr;
  v26 = 0;
  v19 = &v22;
  v24 = &v22;
  v25 = &v22;
  v2 = (__int64 *)a1[1];
  v18 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B02BF0), (__m128i)(unsigned __int64)sub_47E780);
  v3 = &v2[16 * v1];
  v4 = v2 + 2;
  if ( v2 == v3 )
    return v29 - __readfsqword(0x28u);
  while ( 1 )
  {
    if ( (unsigned __int64)v4[1] <= 1 || (*((_BYTE *)a1 + 53) & 1) != 0 && *(_BYTE *)*v4 == 126 )
      goto LABEL_15;
    v5 = _mm_load_si128(&v18);
    v27[1] = 0;
    v27[0] = v20;
    v6 = *a1;
    v28 = v5;
    v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 8))(a1);
    sub_448240(v4, v7, (__int64)v27, 1, (__int64)"_merge_name_conflict", 10);
    if ( v28.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v28.m128i_i64[0])(v27, v27, 3);
    v8 = (int *)v23;
    v9 = (const char *)*v4;
    if ( !v23 )
    {
      if ( v24 == v19 )
        goto LABEL_19;
      v8 = v19;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v10 = *((const char **)v8 + 4);
      v11 = strcmp(v9, v10);
      v12 = *((int **)v8 + 3);
      if ( v11 < 0 )
        v12 = *((int **)v8 + 2);
      v13 = (v11 >> 31) & 1;
      if ( !v12 )
        break;
      v8 = v12;
    }
    if ( (_BYTE)v13 )
      break;
LABEL_14:
    if ( strcmp(v10, v9) < 0 )
      goto LABEL_17;
LABEL_15:
    v14 = v4 + 16;
    if ( v3 == v4 + 14 )
      goto LABEL_20;
LABEL_16:
    v4 = v14;
  }
  if ( v8 != v24 )
  {
LABEL_24:
    v10 = *(const char **)(std::_Rb_tree_decrement() + 32);
    goto LABEL_14;
  }
LABEL_17:
  if ( v8 != v19 )
    strcmp(v9, *((const char **)v8 + 4));
LABEL_19:
  *(_QWORD *)(operator new(0x28u) + 32) = v9;
  std::_Rb_tree_insert_and_rebalance();
  v14 = v4 + 16;
  ++v26;
  if ( v3 != v4 + 14 )
    goto LABEL_16;
LABEL_20:
  v15 = (_QWORD **)v23;
  if ( v23 )
  {
    do
    {
      sub_47F380(v15[3]);
      v16 = v15;
      v15 = (_QWORD **)v15[2];
      operator delete(v16, 0x28u);
    }
    while ( v15 );
  }
  return v29 - __readfsqword(0x28u);
}


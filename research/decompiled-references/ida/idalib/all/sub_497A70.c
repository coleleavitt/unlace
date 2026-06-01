unsigned __int64 __fastcall sub_497A70(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // r13
  __int64 *v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rax
  int *v8; // r15
  const char *v9; // rbp
  const char *v10; // r14
  int v11; // eax
  int *v12; // rsi
  int v13; // eax
  __int64 *v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rax
  _QWORD **v17; // rbx
  void *v18; // rdi
  __m128i v20; // [rsp+0h] [rbp-B8h] BYREF
  int *v21; // [rsp+10h] [rbp-A8h]
  char *v22; // [rsp+18h] [rbp-A0h]
  char v23; // [rsp+20h] [rbp-98h] BYREF
  int v24; // [rsp+28h] [rbp-90h] BYREF
  void *v25; // [rsp+30h] [rbp-88h]
  int *v26; // [rsp+38h] [rbp-80h]
  int *v27; // [rsp+40h] [rbp-78h]
  __int64 v28; // [rsp+48h] [rbp-70h]
  _QWORD v29[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v1 = a1[2];
  v31 = __readfsqword(0x28u);
  v24 = 0;
  v22 = &v23;
  v25 = nullptr;
  v28 = 0;
  v21 = &v24;
  v26 = &v24;
  v27 = &v24;
  v2 = (__int64 *)a1[1];
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2CBB0), (__m128i)(unsigned __int64)sub_493280);
  v3 = &v2[18 * v1];
  v4 = v2 + 2;
  if ( v2 == v3 )
    return v31 - __readfsqword(0x28u);
  while ( 1 )
  {
    if ( (unsigned __int64)v4[1] <= 1 || (*((_BYTE *)a1 + 53) & 1) != 0 && *(_BYTE *)*v4 == 126 )
      goto LABEL_15;
    v5 = _mm_load_si128(&v20);
    v29[1] = 0;
    v29[0] = v22;
    v6 = *a1;
    v30 = v5;
    v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 8))(a1);
    sub_45C170(v4, v7, (__int64)v29, 1, "_merge_name_conflict", 10);
    if ( v30.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v30.m128i_i64[0])(v29, v29, 3);
    v8 = (int *)v25;
    v9 = (const char *)*v4;
    if ( !v25 )
    {
      v8 = v26;
      if ( v26 == v21 )
      {
        LOBYTE(v15) = 1;
        goto LABEL_19;
      }
      v8 = v21;
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
    v14 = v4 + 18;
    if ( v3 == v4 + 16 )
      goto LABEL_20;
LABEL_16:
    v4 = v14;
  }
  if ( v8 != v26 )
  {
LABEL_24:
    v10 = *(const char **)(std::_Rb_tree_decrement(v8) + 32);
    goto LABEL_14;
  }
LABEL_17:
  LOBYTE(v15) = 1;
  if ( v8 != v21 )
    v15 = (unsigned int)strcmp(v9, *((const char **)v8 + 4)) >> 31;
LABEL_19:
  v16 = operator new(0x28u);
  *(_QWORD *)(v16 + 32) = v9;
  std::_Rb_tree_insert_and_rebalance((unsigned __int8)v15, v16, v8, v21);
  v14 = v4 + 18;
  ++v28;
  if ( v3 != v4 + 16 )
    goto LABEL_16;
LABEL_20:
  v17 = (_QWORD **)v25;
  if ( v25 )
  {
    do
    {
      sub_493EC0(v17[3]);
      v18 = v17;
      v17 = (_QWORD **)v17[2];
      operator delete(v18, 0x28u);
    }
    while ( v17 );
  }
  return v31 - __readfsqword(0x28u);
}

__int64 __fastcall sub_457CB0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  char has_common; // r14
  char v8; // al
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __m128i v17; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v18; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-90h]
  __m128i v21; // [rsp+40h] [rbp-88h] BYREF
  __m128i v22; // [rsp+50h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int128 v24; // [rsp+68h] [rbp-60h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  int v26; // [rsp+80h] [rbp-48h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 364));
  v2 = switch_dbctx(*(int *)(a1 + 360));
  ptr = nullptr;
  v3 = v2;
  v24 = 0;
  v25 = 0;
  v26 = -1;
  rangeset_t_add2((int)&ptr);
  if ( *(_DWORD *)(v1 + 1512) == 4 )
    rangeset_t_add2((int)&ptr);
  rangeset_t_add2((int)&ptr);
  v4 = *(_QWORD **)(v1 + 1672);
  v21 = 0;
  sub_630CA0(*v4, 26, &v21, 16);
  v5 = *(_QWORD **)(v3 + 1672);
  v17 = _mm_load_si128(&v21);
  v22 = 0;
  sub_630CA0(*v5, 26, &v22, 16);
  v6 = _mm_load_si128(&v22);
  v18 = v6;
  has_common = rangeset_t_has_common(&ptr, &v17, 0);
  v8 = rangeset_t_has_common(&ptr, &v18, 0);
  if ( v8 || has_common || *(_BYTE *)(a1 + 308) )
  {
    v10 = v17.m128i_i64[1] - v17.m128i_i64[0];
    v11 = v18.m128i_i64[1] - v18.m128i_i64[0];
    if ( v18.m128i_i64[0] != v17.m128i_i64[0] )
    {
      if ( v10 >= v11 && has_common != 1 )
        sub_457B60();
      if ( v11 >= v10 && v8 != 1 )
        sub_457B60();
    }
    if ( v11 < v10 )
      v11 = v17.m128i_i64[1] - v17.m128i_i64[0];
    while ( 1 )
    {
      v12 = sub_42E200((__int64)&ptr, v11);
      v13 = v12;
      if ( v12 == -1 )
        break;
      if ( (unsigned __int8)sub_454640(v3, (__int64)&ptr, v12, v11)
        && (unsigned __int8)sub_454640(v1, (__int64)&ptr, v13, v11) )
      {
        v15 = v13 + v11;
        goto LABEL_23;
      }
    }
    v19 = sub_42E340();
    v13 = v19;
    v20 = v14;
    v15 = v14;
    v16 = sub_454320(v3, (unsigned __int64 *)&v18);
    if ( v15 - v13 < v16 + sub_454320(v1, (unsigned __int64 *)&v17) )
      sub_378C70(
        (__int64)"Failed to find enough room in the address space\n"
                 "for housekeeping purposes. Please delete or shrink\n"
                 "some segments.\n"
                 "At least 0x%a continuous free addresses are necessary.",
        *(double *)v6.m128i_i64);
LABEL_23:
    switch_dbctx(*(int *)(v3 + 88));
    v20 = v15;
    v19 = v13;
    sub_457BE0(v3, &v19);
  }
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  return 1;
}

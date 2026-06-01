void __fastcall __noreturn sub_45FB50(__int64 a1, int a2, int a3, int a4, double a5, double a6, __m128 a7)
{
  _DWORD *v9; // rdi
  __int64 v10; // r12
  _QWORD *v11; // rax
  char v12; // dl
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  char has_common; // al
  char v22; // al
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  __int128 v25; // [rsp+10h] [rbp-68h] BYREF
  __int128 v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 364) = a3;
  v9 = (_DWORD *)(a1 + 16);
  v9[88] = a4;
  v9[89] = (a4 != -1) + 2;
  v9[86] = a2;
  sub_45CFB0((__int64)v9);
  v10 = switch_dbctx(a2);
  v11 = *(_QWORD **)(v10 + 1672);
  v26 = 0;
  sub_630CA0(*v11, 26, &v26, 16);
  *(_QWORD *)(a1 + 456) = *((_QWORD *)&v26 + 1) - v26;
  sub_45BA30((int *)a1, 0.0, a6, a7);
  sub_457CB0(a1);
  if ( *(_BYTE *)(a1 + 308) )
  {
    v26 = 0;
    v14 = *(_QWORD **)(v10 + 1672);
    v25 = 0;
    sub_630CA0(*v14, 26, &v25, 16);
    v15 = *(_QWORD *)(v10 + 1672);
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 24LL) == 4 && (unsigned __int8)rangeset_t_has_common(v15 + 1080, &v25, 0)
      || (unsigned __int64)v25 >= *((_QWORD *)&v25 + 1)
      || (unsigned __int8)rangeset_t_has_common(v15 + 1040, &v25, 0) )
    {
      sub_368890();
    }
    sub_432500(v10);
    v16 = switch_dbctx(a3);
    sub_630CA0(**(_QWORD **)(v16 + 1672), 26, &v26, 16);
    v17 = *(_QWORD *)(v16 + 1672);
    if ( *(_DWORD *)(*(_QWORD *)(v17 + 24) + 24LL) == 4
      && (v23 = *(_QWORD *)(v16 + 1672), has_common = rangeset_t_has_common(v17 + 1080, &v26, 0), v17 = v23, has_common)
      || (unsigned __int64)v26 >= *((_QWORD *)&v26 + 1)
      || (unsigned __int8)rangeset_t_has_common(v17 + 1040, &v26, 0) )
    {
      sub_368890();
    }
    v19 = *(_QWORD *)(v16 + 1672);
    if ( *(_DWORD *)(*(_QWORD *)(v19 + 24) + 24LL) == 4
      && (v24 = *(_QWORD *)(v16 + 1672), v22 = rangeset_t_has_common(v19 + 1080, &v25, 0), v19 = v24, v22)
      || (unsigned __int64)v25 >= *((_QWORD *)&v25 + 1)
      || (unsigned __int8)rangeset_t_has_common(v19 + 1040, &v25, 0) )
    {
      sub_368890();
    }
    sub_432500(v16);
    v20 = *(_QWORD *)(v10 + 1672);
    if ( *(_DWORD *)(*(_QWORD *)(v20 + 24) + 24LL) == 4 && (unsigned __int8)rangeset_t_has_common(v20 + 1080, &v26, 0)
      || (unsigned __int64)v26 >= *((_QWORD *)&v26 + 1)
      || (unsigned __int8)rangeset_t_has_common(v20 + 1040, &v26, 0) )
    {
      sub_368890();
    }
  }
  switch_dbctx(a2);
  set_database_flag(4, 1);
  v12 = *(_BYTE *)(a1 + 309);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 304) - 4) > 1u )
  {
    if ( v12 )
      goto LABEL_4;
  }
  else
  {
    if ( v12 )
    {
LABEL_4:
      sub_457FE0(a1, 0);
      goto LABEL_6;
    }
    set_database_flag(1, 1);
    if ( *(_BYTE *)(a1 + 310) )
      set_database_flag(32, 1);
    if ( *(_BYTE *)(a1 + 311) )
    {
      v18 = switch_dbctx(a3);
      *(_DWORD *)(v18 + 72) |= 0x20u;
    }
  }
LABEL_6:
  v13 = 0;
  sub_45F080(a1, nullptr);
  if ( *(_BYTE *)(a1 + 304) != 5 )
  {
    v13 = a1 + 344;
    sub_3792E0(0x5Eu, a1 + 344);
  }
  sub_45F1C0(a1, v13);
}

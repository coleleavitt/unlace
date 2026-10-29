__int64 __fastcall sub_F354A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  const char *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 result; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1096LL);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 1104LL) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 1096LL),
      2,
      1,
      0);
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "DefaultConstructor");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "DefaultConstructor");
  }
  v8 = *a2;
  v9 = *(_QWORD *)(*a2 + 104);
  sub_7052B0((__int64 *)(v9 + 96), v9, v4, v5, v6, v7);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 128) + 9LL) & 1) != 0 || (unsigned __int8)sub_B9BFC0(v8, v9, v10, v11, v12, v13) )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " exists");
  v18 = *a2;
  v19 = *(_QWORD *)(*a2 + 104);
  sub_7052B0((__int64 *)(v19 + 96), v19, v14, v15, v16, v17);
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 128) + 9LL) & 1) != 0 || (unsigned __int8)sub_B9BFC0(v18, v19, v20, v21, v22, v23) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), v20, v21, v22, v23);
    if ( *(char *)(*(_QWORD *)(v18 + 128) + 4LL) < 0 )
      sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " trivial");
  }
  v24 = *a2;
  v25 = *(_QWORD *)(*a2 + 104);
  sub_7052B0((__int64 *)(v25 + 96), v25, v20, v21, v22, v23);
  if ( (*(_BYTE *)(*(_QWORD *)(v24 + 128) + 6LL) & 8) != 0
    || (unsigned __int8)sub_B9BFC0(v24, v25, v26, v27, v28, v29)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v30, v31, v32, v33),
        *(char *)(*(_QWORD *)(v24 + 128) + 4LL) >= 0) )
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " non_trivial");
  }
  v34 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v30, v31, v32, v33);
  if ( *(char *)(*(_QWORD *)(v34 + 128) + 8LL) < 0 )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " user_provided");
  v39 = *a2;
  v40 = *(const char **)(*a2 + 104);
  sub_7052B0((__int64 *)v40 + 12, (__int64)v40, v35, v36, v37, v38);
  if ( (*(_BYTE *)(*(_QWORD *)(v39 + 128) + 8LL) & 8) != 0
    || (unsigned __int8)sub_B9BFC0(v39, (__int64)v40, v41, v42, v43, v44)
    && (v40 = *(const char **)(v39 + 104),
        sub_7052B0((__int64 *)v40 + 12, (__int64)v40, v45, v46, v47, v48),
        (*(_BYTE *)(*(_QWORD *)(v39 + 128) + 8LL) & 4) != 0)
    && (*(_BYTE *)(v39 + 73) >> 5 != 2
     || (sub_7052B0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104), v45, v46, v47, v48),
         *(char *)(*(_QWORD *)(v39 + 128) + 2LL) < 0)
     || (v40 = *(const char **)(v39 + 104),
         sub_7052B0((__int64 *)v40 + 12, (__int64)v40, v63, v64, v65, v66),
         (*(_BYTE *)(*(_QWORD *)(v39 + 128) + 2LL) & 0x10) == 0)
     || *(char *)(sub_B8C5D0(v39) + 1) < 0) )
  {
    v40 = " constexpr";
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " constexpr");
  }
  if ( (unsigned __int8)sub_B9BFC0(*a2, (__int64)v40, v45, v46, v47, v48) )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_implicit");
  v53 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(v53 + 104) + 96LL), *(_QWORD *)(v53 + 104), v49, v50, v51, v52);
  result = *(_QWORD *)(v53 + 128);
  if ( (*(_BYTE *)(result + 8) & 4) != 0 )
  {
    if ( *(_BYTE *)(v53 + 73) >> 5 != 2 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_constexpr");
    sub_7052B0((__int64 *)(*(_QWORD *)(v53 + 104) + 96LL), *(_QWORD *)(v53 + 104), v54, v55, v56, v57);
    if ( *(char *)(*(_QWORD *)(v53 + 128) + 2LL) < 0 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_constexpr");
    sub_7052B0((__int64 *)(*(_QWORD *)(v53 + 104) + 96LL), *(_QWORD *)(v53 + 104), v59, v60, v61, v62);
    if ( (*(_BYTE *)(*(_QWORD *)(v53 + 128) + 2LL) & 0x10) == 0 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_constexpr");
    result = sub_B8C5D0(v53);
    if ( *(char *)(result + 1) < 0 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_constexpr");
  }
  return result;
}

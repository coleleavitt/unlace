__int64 __fastcall sub_F34D20(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 result; // rax
  __int64 v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1096LL);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 1104LL) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 1096LL),
      2,
      1,
      0);
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "CopyConstructor");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  else
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "CopyConstructor");
  }
  v7 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v3, v4, v5, v6);
  if ( (**(_BYTE **)(v7 + 128) & 4) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), v8, v9, v10, v11);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 128) + 4LL) & 4) == 0 )
      sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " simple");
  }
  v12 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v8, v9, v10, v11);
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 128) + 5LL) & 1) != 0 )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " trivial");
  v17 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v13, v14, v15, v16);
  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 128) + 6LL) & 0x10) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v17 + 104) + 96LL), *(_QWORD *)(v17 + 104), v18, v19, v20, v21),
        (*(_BYTE *)(*(_QWORD *)(v17 + 128) + 5LL) & 1) == 0) )
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " non_trivial");
  }
  v26 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v22, v23, v24, v25);
  if ( (**(_BYTE **)(v26 + 128) & 4) != 0 )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " user_declared");
  v31 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v27, v28, v29, v30);
  if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 10LL) & 2) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v32, v33, v34, v35),
        (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 9LL) & 2) == 0)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v36, v37, v38, v39),
        *(char *)(*(_QWORD *)(v31 + 128) + 9LL) < 0)
    && ((sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v36, v37, v38, v39),
         (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 1LL) & 8) != 0)
     || (sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v66, v67, v68, v69),
         (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 9LL) & 0x40) != 0)) )
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " has_const_param");
  }
  v40 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v36, v37, v38, v39);
  if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 9LL) & 2) == 0 )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_implicit");
  v45 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v41, v42, v43, v44);
  if ( ((**(_BYTE **)(v45 + 128) >> 1) & 0x14) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 104) + 96LL), *(_QWORD *)(v45 + 104), v46, v47, v48, v49),
        (*(_BYTE *)(*(_QWORD *)(v45 + 128) + 3LL) & 0x20) != 0) )
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_overload_resolution");
  }
  v54 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v50, v51, v52, v53);
  if ( ((**(_BYTE **)(v54 + 128) >> 1) & 0x14) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v54 + 104) + 96LL), *(_QWORD *)(v54 + 104), v55, v56, v57, v58);
    if ( (*(_BYTE *)(*(_QWORD *)(v54 + 128) + 3LL) & 0x20) == 0 )
    {
      v65 = *a2;
      sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v55, v56, v57, v58);
      if ( (*(_BYTE *)(*(_QWORD *)(v65 + 128) + 4LL) & 4) != 0 )
        sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_deleted");
    }
  }
  v59 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(v59 + 104) + 96LL), *(_QWORD *)(v59 + 104), v55, v56, v57, v58);
  result = *(_QWORD *)(v59 + 128);
  if ( *(char *)(result + 9) < 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v59 + 104) + 96LL), *(_QWORD *)(v59 + 104), v60, v61, v62, v63);
    if ( (*(_BYTE *)(*(_QWORD *)(v59 + 128) + 1LL) & 8) != 0 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " implicit_has_const_param");
    sub_7052B0((__int64 *)(*(_QWORD *)(v59 + 104) + 96LL), *(_QWORD *)(v59 + 104), v70, v71, v72, v73);
    result = *(_QWORD *)(v59 + 128);
    if ( (*(_BYTE *)(result + 9) & 0x40) != 0 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " implicit_has_const_param");
  }
  return result;
}

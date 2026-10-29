__int64 __fastcall sub_F36280(__int64 a1, __int64 *a2)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 result; // rax
  __int64 v60; // rsi
  __int64 v61; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1096LL);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 1104LL) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 1096LL),
      2,
      1,
      0);
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "MoveConstructor");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "MoveConstructor");
  }
  v8 = *a2;
  v9 = *(_QWORD *)(*a2 + 104);
  sub_7052B0((__int64 *)(v9 + 96), v9, v4, v5, v6, v7);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 128) + 9LL) & 4) != 0 || (unsigned __int8)sub_B9C060(v8, v9, v10, v11, v12, v13) )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " exists");
  v18 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v14, v15, v16, v17);
  if ( (**(_BYTE **)(v18 + 128) & 8) == 0 )
  {
    v60 = *(_QWORD *)(v18 + 104);
    sub_7052B0((__int64 *)(v60 + 96), v60, v19, v20, v21, v22);
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 128) + 9LL) & 4) != 0
      || (unsigned __int8)sub_B9C060(v18, v60, v19, v20, v21, v22) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), v19, v20, v21, v22);
      if ( (*(_BYTE *)(*(_QWORD *)(v18 + 128) + 4LL) & 8) == 0 )
        sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " simple");
    }
  }
  v23 = *a2;
  v24 = *(_QWORD *)(*a2 + 104);
  sub_7052B0((__int64 *)(v24 + 96), v24, v19, v20, v21, v22);
  if ( (*(_BYTE *)(*(_QWORD *)(v23 + 128) + 9LL) & 4) != 0 || (unsigned __int8)sub_B9C060(v23, v24, v25, v26, v27, v28) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v23 + 104) + 96LL), *(_QWORD *)(v23 + 104), v25, v26, v27, v28);
    if ( (*(_BYTE *)(*(_QWORD *)(v23 + 128) + 5LL) & 2) != 0 )
      sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " trivial");
  }
  v29 = *a2;
  v30 = *(_QWORD *)(*a2 + 104);
  sub_7052B0((__int64 *)(v30 + 96), v30, v25, v26, v27, v28);
  if ( (*(_BYTE *)(*(_QWORD *)(v29 + 128) + 6LL) & 0x20) != 0
    || (unsigned __int8)sub_B9C060(v29, v30, v31, v32, v33, v34)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(v29 + 104) + 96LL), *(_QWORD *)(v29 + 104), v35, v36, v37, v38),
        (*(_BYTE *)(*(_QWORD *)(v29 + 128) + 5LL) & 2) == 0) )
  {
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " non_trivial");
  }
  v39 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v35, v36, v37, v38);
  if ( (**(_BYTE **)(v39 + 128) & 8) != 0 )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " user_declared");
  v44 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v40, v41, v42, v43);
  if ( (*(_BYTE *)(*(_QWORD *)(v44 + 128) + 9LL) & 4) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v44 + 104) + 96LL), *(_QWORD *)(v44 + 104), v45, v46, v47, v48);
    if ( (**(_BYTE **)(v44 + 128) & 4) == 0 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v44 + 104) + 96LL), *(_QWORD *)(v44 + 104), v45, v46, v47, v48);
      if ( (**(_BYTE **)(v44 + 128) & 0x10) == 0 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v44 + 104) + 96LL), *(_QWORD *)(v44 + 104), v45, v46, v47, v48);
        if ( (**(_BYTE **)(v44 + 128) & 0x20) == 0 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v44 + 104) + 96LL), *(_QWORD *)(v44 + 104), v45, v46, v47, v48);
          if ( (**(_BYTE **)(v44 + 128) & 0x40) == 0 )
            sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_implicit");
        }
      }
    }
  }
  v49 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v45, v46, v47, v48);
  if ( (*(_BYTE *)(*(_QWORD *)(v49 + 128) + 3LL) & 0x40) != 0 )
    sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_overload_resolution");
  v54 = *a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v50, v51, v52, v53);
  result = *(_QWORD *)(v54 + 128);
  if ( (*(_BYTE *)(result + 3) & 0x40) == 0 )
  {
    v61 = *a2;
    sub_7052B0((__int64 *)(*(_QWORD *)(v61 + 104) + 96LL), *(_QWORD *)(v61 + 104), v55, v56, v57, v58);
    result = *(_QWORD *)(v61 + 128);
    if ( (*(_BYTE *)(result + 4) & 8) != 0 )
      return sub_995540(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_deleted");
  }
  return result;
}

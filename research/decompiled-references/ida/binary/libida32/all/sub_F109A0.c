__int64 __fastcall sub_F109A0(__int64 a1, __int64 *a2)
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
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 result; // rax
  __int64 v48; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1096LL);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 1104LL) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 1096LL),
      2,
      1,
      0);
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "Destructor");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  else
  {
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "Destructor");
  }
  v7 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v3, v4, v5, v6);
  if ( (**(_BYTE **)(v7 + 128) & 0x40) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), v8, v9, v10, v11);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 128) + 4LL) & 0x40) == 0 )
      sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " simple");
  }
  v12 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v8, v9, v10, v11);
  if ( *(char *)(*(_QWORD *)(v12 + 128) + 7LL) < 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " irrelevant");
  v17 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v13, v14, v15, v16);
  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 128) + 5LL) & 0x10) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " trivial");
  v22 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v18, v19, v20, v21);
  if ( (*(_BYTE *)(*(_QWORD *)(v22 + 128) + 5LL) & 0x10) == 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " non_trivial");
  v27 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v23, v24, v25, v26);
  if ( (**(_BYTE **)(v27 + 128) & 0x40) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " user_declared");
  if ( sub_B78520(*a2) )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " constexpr");
  v32 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v28, v29, v30, v31);
  if ( (*(_BYTE *)(*(_QWORD *)(v32 + 128) + 9LL) & 0x20) == 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_implicit");
  v37 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v33, v34, v35, v36);
  if ( (*(_BYTE *)(*(_QWORD *)(v37 + 128) + 4LL) & 2) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " needs_overload_resolution");
  v42 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v38, v39, v40, v41);
  result = *(_QWORD *)(v42 + 128);
  if ( (*(_BYTE *)(result + 4) & 2) == 0 )
  {
    v48 = *a2;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v48 + 104) + 96LL), *(_QWORD *)(v48 + 104), v43, v44, v45, v46);
    result = *(_QWORD *)(v48 + 128);
    if ( (*(_BYTE *)(result + 4) & 0x40) != 0 )
      return sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " defaulted_is_deleted");
  }
  return result;
}


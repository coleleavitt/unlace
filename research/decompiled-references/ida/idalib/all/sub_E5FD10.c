__int64 __fastcall sub_E5FD10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // r13
  __int64 v43; // r13
  __int64 v44; // r13
  __int64 v45; // r13
  __int64 v46; // r13
  void *v47[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v48; // [rsp+20h] [rbp-58h] BYREF
  char v49; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a2 + 128) & 0x40) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x40) == 0 )
    {
      v49 = 1;
      v48 = 1;
      sub_E59B60((void ***)v47, "simple");
      v39 = sub_222E220(a1, v47);
      sub_222B2A0(v39);
      sub_2229580(v39, &v48);
      if ( v47[0] )
        sub_E58590((void **)v47[0]);
      sub_222B2A0(&v48);
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
  if ( *(char *)(*(_QWORD *)(a2 + 128) + 7LL) < 0 )
  {
    v49 = 1;
    v48 = 1;
    sub_E59B60((void ***)v47, "irrelevant");
    v46 = sub_222E220(a1, v47);
    sub_222B2A0(v46);
    sub_2229580(v46, &v48);
    if ( v47[0] )
      sub_E58590((void **)v47[0]);
    sub_222B2A0(&v48);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v10, v11, v12, v13);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 0x10) != 0 )
  {
    v49 = 1;
    v48 = 1;
    sub_E59B60((void ***)v47, "trivial");
    v45 = sub_222E220(a1, v47);
    sub_222B2A0(v45);
    sub_2229580(v45, &v48);
    if ( v47[0] )
      sub_E58590((void **)v47[0]);
    sub_222B2A0(&v48);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v14, v15, v16, v17);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 0x10) == 0 )
  {
    v49 = 1;
    v48 = 1;
    sub_E59B60((void ***)v47, "nonTrivial");
    v44 = sub_222E220(a1, v47);
    sub_222B2A0(v44);
    sub_2229580(v44, &v48);
    if ( v47[0] )
      sub_E58590((void **)v47[0]);
    sub_222B2A0(&v48);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v18, v19, v20, v21);
  if ( (**(_BYTE **)(a2 + 128) & 0x40) != 0 )
  {
    v49 = 1;
    v48 = 1;
    sub_E59B60((void ***)v47, "userDeclared");
    v43 = sub_222E220(a1, v47);
    sub_222B2A0(v43);
    sub_2229580(v43, &v48);
    if ( v47[0] )
      sub_E58590((void **)v47[0]);
    sub_222B2A0(&v48);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v22, v23, v24, v25);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x20) == 0 )
  {
    v49 = 1;
    v48 = 1;
    sub_E59B60((void ***)v47, "needsImplicit");
    v42 = sub_222E220(a1, v47);
    sub_222B2A0(v42);
    sub_2229580(v42, &v48);
    if ( v47[0] )
      sub_E58590((void **)v47[0]);
    sub_222B2A0(&v48);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v26, v27, v28, v29);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 2) != 0 )
  {
    v49 = 1;
    v48 = 1;
    sub_E59B60((void ***)v47, "needsOverloadResolution");
    v41 = sub_222E220(a1, v47);
    sub_222B2A0(v41);
    sub_2229580(v41, &v48);
    if ( v47[0] )
      sub_E58590((void **)v47[0]);
    sub_222B2A0(&v48);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v30, v31, v32, v33);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 2) != 0 )
    return a1;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v34, v35, v36, v37);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x40) == 0 )
    return a1;
  v49 = 1;
  v48 = 1;
  sub_E59B60((void ***)v47, "defaultedIsDeleted");
  v40 = sub_222E220(a1, v47);
  sub_222B2A0(v40);
  sub_2229580(v40, &v48);
  if ( v47[0] )
    sub_E58590((void **)v47[0]);
  sub_222B2A0(&v48);
  return a1;
}

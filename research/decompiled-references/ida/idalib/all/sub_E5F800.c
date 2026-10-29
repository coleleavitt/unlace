__int64 __fastcall sub_E5F800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v49; // rbx
  __int64 v50; // r13
  __int64 v51; // r13
  __int64 v52; // r13
  __int64 v53; // r13
  __int64 v54; // r13
  void *v55[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v56; // [rsp+20h] [rbp-58h] BYREF
  char v57; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a2 + 128) & 0x10) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x10) == 0 )
    {
      v57 = 1;
      v56 = 1;
      sub_E59B60((void ***)v55, "simple");
      v53 = sub_222E220(a1, v55);
      sub_222B2A0(v53);
      sub_2229580(v53, &v56);
      if ( v55[0] )
        sub_E58590((void **)v55[0]);
      sub_222B2A0(&v56);
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 4) != 0 )
  {
    v57 = 1;
    v56 = 1;
    sub_E59B60((void ***)v55, "trivial");
    v54 = sub_222E220(a1, v55);
    sub_222B2A0(v54);
    sub_2229580(v54, &v56);
    if ( v55[0] )
      sub_E58590((void **)v55[0]);
    sub_222B2A0(&v56);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v10, v11, v12, v13);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 6LL) & 0x40) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v14, v15, v16, v17),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 4) == 0) )
  {
    v57 = 1;
    v56 = 1;
    sub_E59B60((void ***)v55, "nonTrivial");
    v18 = sub_222E220(a1, v55);
    sub_222B2A0(v18);
    sub_2229580(v18, &v56);
    if ( v55[0] )
      sub_E58590((void **)v55[0]);
    sub_222B2A0(&v56);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v19, v20, v21, v22);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 10LL) & 4) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v23, v24, v25, v26),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 8) == 0)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v28, v29, v30, v31),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 10LL) & 1) != 0) )
  {
    v57 = 1;
    v56 = 1;
    sub_E59B60((void ***)v55, "hasConstParam");
    v27 = sub_222E220(a1, v55);
    sub_222B2A0(v27);
    sub_2229580(v27, &v56);
    if ( v55[0] )
      sub_E58590((void **)v55[0]);
    sub_222B2A0(&v56);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v28, v29, v30, v31);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 10LL) & 1) != 0 )
  {
    v57 = 1;
    v56 = 1;
    sub_E59B60((void ***)v55, "implicitHasConstParam");
    v52 = sub_222E220(a1, v55);
    sub_222B2A0(v52);
    sub_2229580(v52, &v56);
    if ( v55[0] )
      sub_E58590((void **)v55[0]);
    sub_222B2A0(&v56);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v32, v33, v34, v35);
  if ( (**(_BYTE **)(a2 + 128) & 0x10) != 0 )
  {
    v57 = 1;
    v56 = 1;
    sub_E59B60((void ***)v55, "userDeclared");
    v51 = sub_222E220(a1, v55);
    sub_222B2A0(v51);
    sub_2229580(v51, &v56);
    if ( v55[0] )
      sub_E58590((void **)v55[0]);
    sub_222B2A0(&v56);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v36, v37, v38, v39);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 8) == 0 )
  {
    v57 = 1;
    v56 = 1;
    sub_E59B60((void ***)v55, "needsImplicit");
    v50 = sub_222E220(a1, v55);
    sub_222B2A0(v50);
    sub_2229580(v50, &v56);
    if ( v55[0] )
      sub_E58590((void **)v55[0]);
    sub_222B2A0(&v56);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v40, v41, v42, v43);
  if ( ((**(_BYTE **)(a2 + 128) >> 1) & 0x14) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v44, v45, v46, v47);
    if ( *(char *)(*(_QWORD *)(a2 + 128) + 3LL) >= 0 )
      return a1;
  }
  v57 = 1;
  v56 = 1;
  sub_E59B60((void ***)v55, "needsOverloadResolution");
  v49 = sub_222E220(a1, v55);
  sub_222B2A0(v49);
  sub_2229580(v49, &v56);
  if ( v55[0] )
    sub_E58590((void **)v55[0]);
  sub_222B2A0(&v56);
  return a1;
}

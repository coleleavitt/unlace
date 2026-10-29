__int64 __fastcall sub_E601C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
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
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v61; // r13
  __int64 v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r13
  __int64 v68; // r13
  __int64 v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r13
  __int64 v75; // rbx
  void *v76[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v77; // [rsp+20h] [rbp-58h] BYREF
  char v78; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a2 + 128) & 4) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 4) == 0 )
    {
      v78 = 1;
      v77 = 1;
      sub_E59B60((void ***)v76, "simple");
      v68 = sub_222E220(a1, v76);
      sub_222B2A0(v68);
      sub_2229580(v68, &v77);
      if ( v76[0] )
        sub_E58590((void **)v76[0]);
      sub_222B2A0(&v77);
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 1) != 0 )
  {
    v78 = 1;
    v77 = 1;
    sub_E59B60((void ***)v76, "trivial");
    v69 = sub_222E220(a1, v76);
    sub_222B2A0(v69);
    sub_2229580(v69, &v77);
    if ( v76[0] )
      sub_E58590((void **)v76[0]);
    sub_222B2A0(&v77);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v10, v11, v12, v13);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 6LL) & 0x10) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v14, v15, v16, v17),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 1) == 0) )
  {
    v78 = 1;
    v77 = 1;
    sub_E59B60((void ***)v76, "nonTrivial");
    v18 = sub_222E220(a1, v76);
    sub_222B2A0(v18);
    sub_2229580(v18, &v77);
    if ( v76[0] )
      sub_E58590((void **)v76[0]);
    sub_222B2A0(&v77);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v19, v20, v21, v22);
  if ( (**(_BYTE **)(a2 + 128) & 4) != 0 )
  {
    v78 = 1;
    v77 = 1;
    sub_E59B60((void ***)v76, "userDeclared");
    v67 = sub_222E220(a1, v76);
    sub_222B2A0(v67);
    sub_2229580(v67, &v77);
    if ( v76[0] )
      sub_E58590((void **)v76[0]);
    sub_222B2A0(&v77);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v23, v24, v25, v26);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 10LL) & 2) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v27, v28, v29, v30),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 2) == 0)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v32, v33, v34, v35),
        *(char *)(*(_QWORD *)(a2 + 128) + 9LL) < 0)
    && ((sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v32, v33, v34, v35),
         (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 8) != 0)
     || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v63, v64, v65, v66),
         (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x40) != 0)) )
  {
    v78 = 1;
    v77 = 1;
    sub_E59B60((void ***)v76, "hasConstParam");
    v31 = sub_222E220(a1, v76);
    sub_222B2A0(v31);
    sub_2229580(v31, &v77);
    if ( v76[0] )
      sub_E58590((void **)v76[0]);
    sub_222B2A0(&v77);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v32, v33, v34, v35);
  if ( *(char *)(*(_QWORD *)(a2 + 128) + 9LL) < 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v36, v37, v38, v39);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 8) != 0
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v70, v71, v72, v73),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x40) != 0) )
    {
      v78 = 1;
      v77 = 1;
      sub_E59B60((void ***)v76, "implicitHasConstParam");
      v74 = sub_222E220(a1, v76);
      sub_222B2A0(v74);
      sub_2229580(v74, &v77);
      if ( v76[0] )
        sub_E58590((void **)v76[0]);
      sub_222B2A0(&v77);
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v36, v37, v38, v39);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 2) == 0 )
  {
    v78 = 1;
    v77 = 1;
    sub_E59B60((void ***)v76, "needsImplicit");
    v62 = sub_222E220(a1, v76);
    sub_222B2A0(v62);
    sub_2229580(v62, &v77);
    if ( v76[0] )
      sub_E58590((void **)v76[0]);
    sub_222B2A0(&v77);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v40, v41, v42, v43);
  if ( ((**(_BYTE **)(a2 + 128) >> 1) & 0x14) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v44, v45, v46, v47),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 3LL) & 0x20) != 0) )
  {
    v78 = 1;
    v77 = 1;
    sub_E59B60((void ***)v76, "needsOverloadResolution");
    v61 = sub_222E220(a1, v76);
    sub_222B2A0(v61);
    sub_2229580(v61, &v77);
    if ( v76[0] )
      sub_E58590((void **)v76[0]);
    sub_222B2A0(&v77);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v48, v49, v50, v51);
  if ( ((**(_BYTE **)(a2 + 128) >> 1) & 0x14) != 0 )
    return a1;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v52, v53, v54, v55);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 3LL) & 0x20) != 0 )
    return a1;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v56, v57, v58, v59);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 4) == 0 )
    return a1;
  v78 = 1;
  v77 = 1;
  sub_E59B60((void ***)v76, "defaultedIsDeleted");
  v75 = sub_222E220(a1, v76);
  sub_222B2A0(v75);
  sub_2229580(v75, &v77);
  if ( v76[0] )
    sub_E58590((void **)v76[0]);
  sub_222B2A0(&v77);
  return a1;
}

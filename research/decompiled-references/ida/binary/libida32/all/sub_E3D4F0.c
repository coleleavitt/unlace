__int64 __fastcall sub_E3D4F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
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
  __int64 v54; // rsi
  __int64 v55; // r13
  __int64 v56; // rbx
  __int64 v57; // r13
  __int64 v58; // r13
  __int64 v59; // r13
  void *v60[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v61; // [rsp+20h] [rbp-58h] BYREF
  char v62; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v7 = *(_QWORD *)(a2 + 104);
  sub_6E4DB0((__int64 *)(v7 + 96), v7, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) != 0 || (unsigned __int8)sub_B78320(a2, v7, v8, v9, v10, v11) )
  {
    v62 = 1;
    v61 = 1;
    sub_E35E20((void ***)v60, "exists");
    v12 = sub_220A4E0(a1, v60);
    sub_2207560(v12);
    sub_2205840(v12, &v61);
    if ( v60[0] )
      sub_E34850((void **)v60[0]);
    sub_2207560(&v61);
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v14, v15, v16);
  if ( (**(_BYTE **)(a2 + 128) & 8) == 0 )
  {
    v54 = *(_QWORD *)(a2 + 104);
    sub_6E4DB0((__int64 *)(v54 + 96), v54, v17, v18, v19, v20);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) != 0 || (unsigned __int8)sub_B78320(a2, v54, v17, v18, v19, v20) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v17, v18, v19, v20);
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 8) == 0 )
      {
        v62 = 1;
        v61 = 1;
        sub_E35E20((void ***)v60, "simple");
        v55 = sub_220A4E0(a1, v60);
        sub_2207560(v55);
        sub_2205840(v55, &v61);
        if ( v60[0] )
          sub_E34850((void **)v60[0]);
        sub_2207560(&v61);
      }
    }
  }
  v21 = *(_QWORD *)(a2 + 104);
  sub_6E4DB0((__int64 *)(v21 + 96), v21, v17, v18, v19, v20);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) != 0 || (unsigned __int8)sub_B78320(a2, v21, v22, v23, v24, v25) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v22, v23, v24, v25);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 2) != 0 )
    {
      v62 = 1;
      v61 = 1;
      sub_E35E20((void ***)v60, "trivial");
      v26 = sub_220A4E0(a1, v60);
      sub_2207560(v26);
      sub_2205840(v26, &v61);
      if ( v60[0] )
        sub_E34850((void **)v60[0]);
      sub_2207560(&v61);
    }
  }
  v27 = *(_QWORD *)(a2 + 104);
  sub_6E4DB0((__int64 *)(v27 + 96), v27, v22, v23, v24, v25);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 6LL) & 0x20) != 0
    || (unsigned __int8)sub_B78320(a2, v27, v28, v29, v30, v31)
    && (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v33, v34, v35, v36),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 2) == 0) )
  {
    v62 = 1;
    v61 = 1;
    sub_E35E20((void ***)v60, "nonTrivial");
    v32 = sub_220A4E0(a1, v60);
    sub_2207560(v32);
    sub_2205840(v32, &v61);
    if ( v60[0] )
      sub_E34850((void **)v60[0]);
    sub_2207560(&v61);
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v33, v34, v35, v36);
  if ( (**(_BYTE **)(a2 + 128) & 8) != 0 )
  {
    v62 = 1;
    v61 = 1;
    sub_E35E20((void ***)v60, "userDeclared");
    v59 = sub_220A4E0(a1, v60);
    sub_2207560(v59);
    sub_2205840(v59, &v61);
    if ( v60[0] )
      sub_E34850((void **)v60[0]);
    sub_2207560(&v61);
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v37, v38, v39, v40);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
    if ( (**(_BYTE **)(a2 + 128) & 4) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
      if ( (**(_BYTE **)(a2 + 128) & 0x10) == 0 )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
        if ( (**(_BYTE **)(a2 + 128) & 0x20) == 0 )
        {
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
          if ( (**(_BYTE **)(a2 + 128) & 0x40) == 0 )
          {
            v62 = 1;
            v61 = 1;
            sub_E35E20((void ***)v60, "needsImplicit");
            v58 = sub_220A4E0(a1, v60);
            sub_2207560(v58);
            sub_2205840(v58, &v61);
            if ( v60[0] )
              sub_E34850((void **)v60[0]);
            sub_2207560(&v61);
          }
        }
      }
    }
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 3LL) & 0x40) != 0 )
  {
    v62 = 1;
    v61 = 1;
    sub_E35E20((void ***)v60, "needsOverloadResolution");
    v57 = sub_220A4E0(a1, v60);
    sub_2207560(v57);
    sub_2205840(v57, &v61);
    if ( v60[0] )
      sub_E34850((void **)v60[0]);
    sub_2207560(&v61);
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v45, v46, v47, v48);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 3LL) & 0x40) != 0 )
    return a1;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v49, v50, v51, v52);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 8) == 0 )
    return a1;
  v62 = 1;
  v61 = 1;
  sub_E35E20((void ***)v60, "defaultedIsDeleted");
  v56 = sub_220A4E0(a1, v60);
  sub_2207560(v56);
  sub_2205840(v56, &v61);
  if ( v60[0] )
    sub_E34850((void **)v60[0]);
  sub_2207560(&v61);
  return a1;
}


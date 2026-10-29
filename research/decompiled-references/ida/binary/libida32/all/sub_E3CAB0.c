__int64 __fastcall sub_E3CAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int16 *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbx
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  void *v67[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v68; // [rsp+20h] [rbp-58h] BYREF
  char v69; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v7 = *(_QWORD *)(a2 + 104);
  sub_6E4DB0((__int64 *)(v7 + 96), v7, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 1) != 0 || (unsigned __int8)sub_B78280(a2, v7, v8, v9, v10, v11) )
  {
    v69 = 1;
    v68 = 1;
    sub_E35E20((void ***)v67, "exists");
    v12 = sub_220A4E0(a1, v67);
    sub_2207560(v12);
    sub_2205840(v12, &v68);
    if ( v67[0] )
      sub_E34850((void **)v67[0]);
    sub_2207560(&v68);
  }
  v17 = *(_QWORD *)(a2 + 104);
  sub_6E4DB0((__int64 *)(v17 + 96), v17, v13, v14, v15, v16);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 1) != 0 || (unsigned __int8)sub_B78280(a2, v17, v18, v19, v20, v21) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v18, v19, v20, v21);
    if ( *(char *)(*(_QWORD *)(a2 + 128) + 4LL) < 0 )
    {
      v69 = 1;
      v68 = 1;
      sub_E35E20((void ***)v67, "trivial");
      v22 = sub_220A4E0(a1, v67);
      sub_2207560(v22);
      sub_2205840(v22, &v68);
      if ( v67[0] )
        sub_E34850((void **)v67[0]);
      sub_2207560(&v68);
    }
  }
  v23 = *(_QWORD *)(a2 + 104);
  sub_6E4DB0((__int64 *)(v23 + 96), v23, v18, v19, v20, v21);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 6LL) & 8) != 0
    || (unsigned __int8)sub_B78280(a2, v23, v24, v25, v26, v27)
    && (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v29, v30, v31, v32),
        *(char *)(*(_QWORD *)(a2 + 128) + 4LL) >= 0) )
  {
    v69 = 1;
    v68 = 1;
    sub_E35E20((void ***)v67, "nonTrivial");
    v28 = sub_220A4E0(a1, v67);
    sub_2207560(v28);
    sub_2205840(v28, &v68);
    if ( v67[0] )
      sub_E34850((void **)v67[0]);
    sub_2207560(&v68);
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v29, v30, v31, v32);
  if ( *(char *)(*(_QWORD *)(a2 + 128) + 8LL) < 0 )
  {
    v69 = 1;
    v68 = 1;
    sub_E35E20((void ***)v67, "userProvided");
    v62 = sub_220A4E0(a1, v67);
    sub_2207560(v62);
    sub_2205840(v62, &v68);
    if ( v67[0] )
      sub_E34850((void **)v67[0]);
    sub_2207560(&v68);
  }
  v37 = *(__int16 **)(a2 + 104);
  sub_6E4DB0((__int64 *)v37 + 12, (__int64)v37, v33, v34, v35, v36);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 8) != 0
    || (unsigned __int8)sub_B78280(a2, (__int64)v37, v38, v39, v40, v41)
    && (v37 = *(__int16 **)(a2 + 104),
        sub_6E4DB0((__int64 *)v37 + 12, (__int64)v37, v43, v44, v45, v46),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 4) != 0)
    && (*(_BYTE *)(a2 + 73) >> 5 != 2
     || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v43, v44, v45, v46),
         *(char *)(*(_QWORD *)(a2 + 128) + 2LL) < 0)
     || (v37 = *(__int16 **)(a2 + 104),
         sub_6E4DB0((__int64 *)v37 + 12, (__int64)v37, v58, v59, v60, v61),
         (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 0x10) == 0)
     || *(char *)(sub_B68890(a2) + 1) < 0) )
  {
    v69 = 1;
    v68 = 1;
    sub_E35E20((void ***)v67, "isConstexpr");
    v42 = sub_220A4E0(a1, v67);
    sub_2207560(v42);
    v37 = &v68;
    sub_2205840(v42, &v68);
    if ( v67[0] )
      sub_E34850((void **)v67[0]);
    sub_2207560(&v68);
  }
  if ( (unsigned __int8)sub_B78280(a2, (__int64)v37, v43, v44, v45, v46) )
  {
    v69 = 1;
    v68 = 1;
    sub_E35E20((void ***)v67, "needsImplicit");
    v57 = sub_220A4E0(a1, v67);
    sub_2207560(v57);
    sub_2205840(v57, &v68);
    if ( v67[0] )
      sub_E34850((void **)v67[0]);
    sub_2207560(&v68);
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v47, v48, v49, v50);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 73) >> 5 != 2
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v51, v52, v53, v54),
          *(char *)(*(_QWORD *)(a2 + 128) + 2LL) < 0)
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v63, v64, v65, v66),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 0x10) == 0)
      || *(char *)(sub_B68890(a2) + 1) < 0 )
    {
      v69 = 1;
      v68 = 1;
      sub_E35E20((void ***)v67, "defaultedIsConstexpr");
      v55 = sub_220A4E0(a1, v67);
      sub_2207560(v55);
      sub_2205840(v55, &v68);
      if ( v67[0] )
        sub_E34850((void **)v67[0]);
      sub_2207560(&v68);
    }
  }
  return a1;
}


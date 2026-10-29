__int64 __fastcall sub_20FCA30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r12
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r12
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax

  v1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 10;
  *(_QWORD *)a1 = a1 + 16;
  strcpy((char *)(a1 + 16), "'construct");
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v3 = v2 + 1;
  v4 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v3 > v4 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v2) = 39;
  v5 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)(v5 + v2 + 1) = 0;
  sub_9EE7C0((_QWORD *)a1, " ");
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v7 = v6 + 1;
  v8 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v7 > v8 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 39;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v7;
  *(_BYTE *)(v9 + v6 + 1) = 0;
  v10 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v10) <= 5 )
    goto LABEL_93;
  v11 = v10 + 6;
  v12 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v11 > v12 )
  {
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "device", 6u);
  }
  else
  {
    v13 = v10 + *(_QWORD *)a1;
    *(_DWORD *)v13 = 1769366884;
    *(_WORD *)(v13 + 4) = 25955;
  }
  v14 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v11;
  *(_BYTE *)(v14 + v10 + 6) = 0;
  v15 = *(_QWORD *)(a1 + 8);
  if ( v15 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v16 = v15 + 1;
  v17 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v16 > v17 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v15) = 39;
  v18 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v16;
  *(_BYTE *)(v18 + v15 + 1) = 0;
  sub_9EE7C0((_QWORD *)a1, " ");
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v20 = v19 + 1;
  v21 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v20 > v21 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v19) = 39;
  v22 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v20;
  *(_BYTE *)(v22 + v19 + 1) = 0;
  v23 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v23) <= 0xC )
    goto LABEL_93;
  v24 = v23 + 13;
  v25 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v24 > v25 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "target_device", 0xDu);
  else
    qmemcpy((void *)(v23 + *(_QWORD *)a1), "target_device", 13);
  v26 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v24;
  *(_BYTE *)(v26 + v23 + 13) = 0;
  v27 = *(_QWORD *)(a1 + 8);
  if ( v27 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v28 = v27 + 1;
  v29 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v28 > v29 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v27) = 39;
  v30 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v28;
  *(_BYTE *)(v30 + v27 + 1) = 0;
  sub_9EE7C0((_QWORD *)a1, " ");
  v31 = *(_QWORD *)(a1 + 8);
  if ( v31 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v32 = v31 + 1;
  v33 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v32 > v33 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v31) = 39;
  v34 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v32;
  *(_BYTE *)(v34 + v31 + 1) = 0;
  v35 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v35) <= 0xD )
    goto LABEL_93;
  v36 = v35 + 14;
  v37 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v36 > v37 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "implementation", 0xEu);
  else
    qmemcpy((void *)(v35 + *(_QWORD *)a1), "implementation", 14);
  v38 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v36;
  *(_BYTE *)(v38 + v35 + 14) = 0;
  v39 = *(_QWORD *)(a1 + 8);
  if ( v39 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v40 = v39 + 1;
  v41 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v40 > v41 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v39) = 39;
  v42 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v40;
  *(_BYTE *)(v42 + v39 + 1) = 0;
  sub_9EE7C0((_QWORD *)a1, " ");
  v43 = *(_QWORD *)(a1 + 8);
  if ( v43 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_93;
  v44 = v43 + 1;
  v45 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v44 > v45 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v43) = 39;
  v46 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v44;
  *(_BYTE *)(v46 + v43 + 1) = 0;
  v47 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v47) <= 3 )
    goto LABEL_93;
  v48 = v47 + 4;
  v49 = v1 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
  if ( v48 > v49 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "user", 4u);
  else
    *(_DWORD *)(*(_QWORD *)a1 + v47) = 1919251317;
  v50 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v48;
  *(_BYTE *)(v50 + v47 + 4) = 0;
  v51 = *(_QWORD *)(a1 + 8);
  if ( v51 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_93:
    std::__throw_length_error("basic_string::append");
  v52 = v51 + 1;
  if ( v1 == *(_QWORD *)a1 )
    v53 = 15;
  else
    v53 = *(_QWORD *)(a1 + 16);
  if ( v52 > v53 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "'", 1u);
  else
    *(_BYTE *)(*(_QWORD *)a1 + v51) = 39;
  v54 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v52;
  *(_BYTE *)(v54 + v51 + 1) = 0;
  sub_9EE7C0((_QWORD *)a1, " ");
  v55 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v55 - 1;
  *(_BYTE *)(*(_QWORD *)a1 + v55 - 1) = 0;
  return a1;
}

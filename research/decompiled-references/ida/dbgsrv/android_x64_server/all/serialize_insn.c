/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_insn
// Address: 0x00000000000B5B10

//----- (00000000000B5B10) ----------------------------------------------------
unsigned __int64 __fastcall serialize_insn(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  char v8; // bp
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // bp
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rcx
  __int64 i; // rbp
  char v20; // r13
  _BYTE *v21; // rax
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // r13
  unsigned __int64 v26; // rdx
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // r13
  unsigned __int64 v31; // rdx
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // r13
  unsigned __int64 v36; // rdx
  char *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // r13
  unsigned __int64 v41; // rdx
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  _BYTE *v44; // rax
  _BYTE *v45; // rax
  char v46; // r13
  char *v47; // rax
  __int64 v48; // rcx
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // r13
  unsigned __int64 v53; // rdx
  char *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  char v57; // r13
  unsigned __int64 v58; // rdx
  char *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  char v62; // r13
  unsigned __int64 v63; // rdx
  _BYTE v65[3]; // [rsp+6h] [rbp-42h] BYREF
  _BYTE v66[2]; // [rsp+9h] [rbp-3Fh] BYREF
  _BYTE v67[5]; // [rsp+Bh] [rbp-3Dh] BYREF
  _QWORD v68[7]; // [rsp+10h] [rbp-38h] BYREF

  v68[0] = __readfsqword(0x28u);
  v2 = pack_dq(v65, (unsigned __int64)v68, *(_QWORD *)a2 + 1LL);
  sub_56350(a1, v65, v2 - v65);
  v3 = pack_dq(v65, (unsigned __int64)v68, *(_QWORD *)(a2 + 8) + 1LL);
  sub_56350(a1, v65, v3 - v65);
  v4 = pack_dq(v65, (unsigned __int64)v68, *(_QWORD *)(a2 + 16) + 1LL);
  sub_56350(a1, v65, v4 - v65);
  v5 = pack_dw(v65, (unsigned __int64)v66, *(_WORD *)(a2 + 24));
  sub_56350(a1, v65, v5 - v65);
  v6 = pack_dw(v65, (unsigned __int64)v66, *(_WORD *)(a2 + 26));
  sub_56350(a1, v65, v6 - v65);
  v7 = pack_dd(v65, (unsigned __int64)v67, *(_DWORD *)(a2 + 28));
  sub_56350(a1, v65, v7 - v65);
  v8 = *(_BYTE *)(a2 + 32);
  v9 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v9 + 1) )
  {
    v10 = *(char **)a1;
  }
  else
  {
    v10 = (char *)qvector_reserve(a1, *(char **)a1, v9 + 1, 1u);
    *(_QWORD *)a1 = v10;
    v9 = *(_QWORD *)(a1 + 8);
  }
  v10[v9] = v8;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 16);
  v13 = v11 + 1;
  *(_QWORD *)(a1 + 8) = v11 + 1;
  v14 = *(_BYTE *)(a2 + 33);
  v15 = v11 + 2;
  if ( v12 >= v15 )
  {
    v16 = *(_BYTE **)a1;
  }
  else
  {
    v16 = qvector_reserve(a1, *(char **)a1, v15, 1u);
    *(_QWORD *)a1 = v16;
    v13 = *(_QWORD *)(a1 + 8);
  }
  v16[v13] = v14;
  ++*(_QWORD *)(a1 + 8);
  v17 = pack_dw(v65, (unsigned __int64)v66, *(_WORD *)(a2 + 34));
  sub_56350(a1, v65, v17 - v65);
  v18 = *(_QWORD *)(a1 + 8);
  for ( i = 0; i != 320; i += 40 )
  {
    v20 = *(_BYTE *)(a2 + i + 41);
    v21 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v18 + 1) )
    {
      v21 = qvector_reserve(a1, *(char **)a1, v18 + 1, 1u);
      *(_QWORD *)a1 = v21;
      v18 = *(_QWORD *)(a1 + 8);
    }
    v21[v18] = v20;
    v22 = *(char **)a1;
    v23 = *(_QWORD *)(a1 + 8);
    v24 = v23 + 1;
    *(_QWORD *)(a1 + 8) = v23 + 1;
    v25 = *(_BYTE *)(a2 + i + 42);
    v26 = v23 + 2;
    if ( *(_QWORD *)(a1 + 16) < v26 )
    {
      v22 = (char *)qvector_reserve(a1, v22, v26, 1u);
      *(_QWORD *)a1 = v22;
      v24 = *(_QWORD *)(a1 + 8);
    }
    v22[v24] = v25;
    v27 = *(char **)a1;
    v28 = *(_QWORD *)(a1 + 8);
    v29 = v28 + 1;
    *(_QWORD *)(a1 + 8) = v28 + 1;
    v30 = *(_BYTE *)(a2 + i + 43);
    v31 = v28 + 2;
    if ( *(_QWORD *)(a1 + 16) < v31 )
    {
      v27 = (char *)qvector_reserve(a1, v27, v31, 1u);
      *(_QWORD *)a1 = v27;
      v29 = *(_QWORD *)(a1 + 8);
    }
    v27[v29] = v30;
    v32 = *(char **)a1;
    v33 = *(_QWORD *)(a1 + 8);
    v34 = v33 + 1;
    *(_QWORD *)(a1 + 8) = v33 + 1;
    v35 = *(_BYTE *)(a2 + i + 44);
    v36 = v33 + 2;
    if ( *(_QWORD *)(a1 + 16) < v36 )
    {
      v32 = (char *)qvector_reserve(a1, v32, v36, 1u);
      *(_QWORD *)a1 = v32;
      v34 = *(_QWORD *)(a1 + 8);
    }
    v32[v34] = v35;
    v37 = *(char **)a1;
    v38 = *(_QWORD *)(a1 + 8);
    v39 = v38 + 1;
    *(_QWORD *)(a1 + 8) = v38 + 1;
    v40 = *(_BYTE *)(a2 + i + 45);
    v41 = v38 + 2;
    if ( *(_QWORD *)(a1 + 16) < v41 )
    {
      v37 = (char *)qvector_reserve(a1, v37, v41, 1u);
      *(_QWORD *)a1 = v37;
      v39 = *(_QWORD *)(a1 + 8);
    }
    v37[v39] = v40;
    ++*(_QWORD *)(a1 + 8);
    v42 = pack_dw(v65, (unsigned __int64)v66, *(_WORD *)(a2 + i + 46));
    sub_56350(a1, v65, v42 - v65);
    v43 = pack_dq(v65, (unsigned __int64)v68, *(_QWORD *)(a2 + i + 48) + 1LL);
    sub_56350(a1, v65, v43 - v65);
    v44 = pack_dq(v65, (unsigned __int64)v68, *(_QWORD *)(a2 + i + 56) + 1LL);
    sub_56350(a1, v65, v44 - v65);
    v45 = pack_dq(v65, (unsigned __int64)v68, *(_QWORD *)(a2 + i + 64) + 1LL);
    sub_56350(a1, v65, v45 - v65);
    v46 = *(_BYTE *)(a2 + i + 72);
    v47 = *(char **)a1;
    v48 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v48 + 1) )
    {
      v47 = (char *)qvector_reserve(a1, v47, v48 + 1, 1u);
      *(_QWORD *)a1 = v47;
      v48 = *(_QWORD *)(a1 + 8);
    }
    v47[v48] = v46;
    v49 = *(char **)a1;
    v50 = *(_QWORD *)(a1 + 8);
    v51 = v50 + 1;
    *(_QWORD *)(a1 + 8) = v50 + 1;
    v52 = *(_BYTE *)(a2 + i + 73);
    v53 = v50 + 2;
    if ( *(_QWORD *)(a1 + 16) < v53 )
    {
      v49 = (char *)qvector_reserve(a1, v49, v53, 1u);
      *(_QWORD *)a1 = v49;
      v51 = *(_QWORD *)(a1 + 8);
    }
    v49[v51] = v52;
    v54 = *(char **)a1;
    v55 = *(_QWORD *)(a1 + 8);
    v56 = v55 + 1;
    *(_QWORD *)(a1 + 8) = v55 + 1;
    v57 = *(_BYTE *)(a2 + i + 74);
    v58 = v55 + 2;
    if ( *(_QWORD *)(a1 + 16) < v58 )
    {
      v54 = (char *)qvector_reserve(a1, v54, v58, 1u);
      *(_QWORD *)a1 = v54;
      v56 = *(_QWORD *)(a1 + 8);
    }
    v54[v56] = v57;
    v59 = *(char **)a1;
    v60 = *(_QWORD *)(a1 + 8);
    v61 = v60 + 1;
    *(_QWORD *)(a1 + 8) = v60 + 1;
    v62 = *(_BYTE *)(a2 + i + 75);
    v63 = v60 + 2;
    if ( *(_QWORD *)(a1 + 16) < v63 )
    {
      v59 = (char *)qvector_reserve(a1, v59, v63, 1u);
      *(_QWORD *)a1 = v59;
      v61 = *(_QWORD *)(a1 + 8);
    }
    v59[v61] = v62;
    v18 = *(_QWORD *)(a1 + 8) + 1LL;
    *(_QWORD *)(a1 + 8) = v18;
  }
  return __readfsqword(0x28u);
}

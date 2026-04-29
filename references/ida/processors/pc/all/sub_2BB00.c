__int64 __fastcall sub_2BB00(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  _QWORD *v4; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 *v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // r8
  __int64 v25; // r13
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rsi
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r13
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rbx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rbx
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rbx
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // [rsp+8h] [rbp-1B0h] BYREF
  __int128 v65; // [rsp+10h] [rbp-1A8h]
  __int64 v66; // [rsp+20h] [rbp-198h]
  __int64 v67; // [rsp+28h] [rbp-190h]
  __int64 v68; // [rsp+30h] [rbp-188h]
  _BYTE v69[6]; // [rsp+38h] [rbp-180h] BYREF
  __int16 v70; // [rsp+3Eh] [rbp-17Ah]
  unsigned __int64 v71; // [rsp+178h] [rbp-40h] BYREF

  v4 = (_QWORD *)a1[18];
  v71 = __readfsqword(0x28u);
  v6 = sub_7F350(v4, a2, a2 + 40);
  v7 = sub_23DD0(v4, a2, v6, &v64);
  if ( a3 )
    *a3 = 0;
  switch ( v7 )
  {
    case 1LL:
      v17 = *(_QWORD *)(a2 + 16);
      v18 = sub_22F00((__int64)a1);
      v19 = a1[1];
      v20 = v18;
      v21 = a1[2];
      if ( a1[3] < (unsigned __int64)(v21 + 1) )
      {
        v48 = qvector_reserve();
        a1[1] = v48;
        v19 = v48;
        v21 = a1[2];
      }
      v22 = v19 + 32 * v21;
      *(_QWORD *)v22 = v17;
      *(_QWORD *)(v22 + 8) = v20;
      *(_QWORD *)(v22 + 16) = 4;
      *(_DWORD *)(v22 + 24) = 5;
      v23 = a1[4] == -1;
      v24 = a1[2] + 1LL;
      a1[2] = v24;
      if ( !v23 )
        goto LABEL_18;
      v55 = (_QWORD *)a1[6];
      v56 = a1[7];
      v57 = *(_QWORD *)(a2 + 16);
      a1[4] = v24;
      v58 = &v55[v56];
      if ( v55 == v58 )
        goto LABEL_51;
      v59 = v55;
      while ( v57 != *v59 )
      {
        if ( v58 == ++v59 )
          goto LABEL_51;
      }
      if ( v58 != v59 )
        goto LABEL_50;
LABEL_51:
      if ( a1[8] < (unsigned __int64)(v56 + 1) )
      {
        v61 = qvector_reserve();
        v62 = a1[7];
        a1[6] = v61;
        v58 = (_QWORD *)(v61 + 8 * v62);
      }
      *v58 = v57;
      ++a1[7];
LABEL_50:
      netnode_supset();
LABEL_18:
      v25 = *(_QWORD *)(a2 + 16);
      v26 = -4 - v64;
      v27 = sub_22F00((__int64)a1);
      v29 = a1[1];
      v30 = v27;
      if ( a1[3] < (unsigned __int64)(v28 + 1) )
      {
        v47 = qvector_reserve();
        v28 = a1[2];
        a1[1] = v47;
        v29 = v47;
      }
      v31 = v29 + 32 * v28;
      *(_QWORD *)v31 = v25;
      *(_QWORD *)(v31 + 8) = v30;
      *(_QWORD *)(v31 + 16) = v26;
      *(_DWORD *)(v31 + 24) = 0xFFFF;
      ++a1[2];
      return *(_QWORD *)(a2 + 16);
    case 2LL:
      v32 = v64;
      v33 = *(_QWORD *)(a2 + 16);
      v34 = sub_22F00((__int64)a1);
      v35 = a1[1];
      v36 = v34;
      v37 = a1[2];
      v38 = -v32;
      if ( a1[3] < (unsigned __int64)(v37 + 1) )
      {
        v49 = qvector_reserve();
        a1[1] = v49;
        v35 = v49;
        v37 = a1[2];
      }
      v39 = v35 + 32 * v37;
      *(_QWORD *)v39 = v33;
      *(_QWORD *)(v39 + 8) = v36;
      *(_QWORD *)(v39 + 16) = v38;
      *(_DWORD *)(v39 + 24) = 0xFFFF;
      ++a1[2];
      return *(_QWORD *)(a2 + 16);
    case 3LL:
    case 7LL:
      if ( a3 )
        *a3 = 1;
      return -1;
    case 4LL:
      if ( !v64 )
        return -1;
      v9 = *(_QWORD *)(a2 + 16);
      v10 = -v64;
      v11 = sub_22F00((__int64)a1);
      v12 = a1[1];
      v13 = v11;
      v14 = a1[2];
      if ( a1[3] < (unsigned __int64)(v14 + 1) )
      {
        v60 = qvector_reserve();
        a1[1] = v60;
        v12 = v60;
        v14 = a1[2];
      }
      v15 = v12 + 32 * v14;
      *(_QWORD *)v15 = v9;
      *(_QWORD *)(v15 + 8) = v13;
      *(_QWORD *)(v15 + 16) = v10;
      *(_DWORD *)(v15 + 24) = 0xFFFF;
      v16 = (unsigned __int64 *)v69;
      ++a1[2];
      v66 = -1;
      v67 = 0;
      v68 = 0;
      v65 = -1;
      do
      {
        *(_WORD *)v16 = 0;
        v16 += 5;
        *((_WORD *)v16 - 19) = 0;
        *((_WORD *)v16 - 18) = 0;
        *((_DWORD *)v16 - 2) = 0;
        *((_WORD *)v16 - 17) = 0;
        *((_OWORD *)v16 - 2) = 0;
        *(v16 - 2) = 0;
      }
      while ( &v71 != v16 );
      if ( decode_prev_insn() == -1 || (_WORD)v67 != 122 || v69[1] != 1 || v70 )
        return *(_QWORD *)(a2 + 16);
      v50 = a1[6];
      v51 = a1[7];
      v52 = v66;
      v53 = (_QWORD *)(v50 + 8 * v51);
      if ( (_QWORD *)v50 == v53 )
        goto LABEL_42;
      v54 = (_QWORD *)a1[6];
      while ( v66 != *v54 )
      {
        if ( v53 == ++v54 )
          goto LABEL_42;
      }
      if ( v53 != v54 )
        return *(_QWORD *)(a2 + 16);
LABEL_42:
      if ( a1[8] < (unsigned __int64)(v51 + 1) )
      {
        v63 = qvector_reserve();
        a1[6] = v63;
        v50 = v63;
      }
      *(_QWORD *)(v50 + 8LL * a1[7]++) = v52;
      return *(_QWORD *)(a2 + 16);
    case 6LL:
      goto LABEL_24;
    default:
      return -1;
  }
  do
  {
LABEL_24:
    v40 = (_QWORD *)a1[6];
    v41 = a1[7];
    v42 = *(_QWORD *)(a2 + 16);
    v43 = &v40[v41];
    if ( v40 != v43 )
    {
      v44 = (_QWORD *)a1[6];
      while ( v42 != *v44 )
      {
        if ( v43 == ++v44 )
          goto LABEL_32;
      }
      if ( v43 != v44 )
        continue;
    }
LABEL_32:
    if ( a1[8] < (unsigned __int64)(v41 + 1) )
    {
      v45 = qvector_reserve();
      v46 = a1[7];
      a1[6] = v45;
      v43 = (_QWORD *)(v45 + 8 * v46);
    }
    *v43 = v42;
    ++a1[7];
  }
  while ( (unsigned int)decode_insn() && *(_WORD *)(a2 + 24) == 16 );
  return *(_QWORD *)(a2 + 16) - *(unsigned __int16 *)(a2 + 26);
}

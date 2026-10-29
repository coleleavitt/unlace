/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57020
// Address: 0x0000000000057020

//----- (0000000000057020) ----------------------------------------------------
__int64 __fastcall sub_57020(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // r12
  __int16 v6; // dx
  __int64 v7; // rcx
  __int16 v8; // ax
  __int64 v10; // r10
  _QWORD *v11; // r13
  __int64 v12; // kr08_8
  __int64 v13; // kr20_8
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // esi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // kr28_8
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // al
  int v28; // eax
  void *v29; // rax
  char *v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // esi
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  void *v39; // rax
  char *v40; // rdx
  __int64 *v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  int v44; // edi
  _QWORD *v45; // rsi
  unsigned __int64 i; // rbp
  unsigned __int64 v47; // rbp
  bool v48; // cc
  unsigned __int64 v49; // rbp
  unsigned __int64 *v50; // r8
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  int v53; // ebp
  _QWORD *v54; // rdi
  unsigned __int64 j; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  int v60; // edi
  unsigned __int64 v61; // rbp
  _QWORD *v62; // rsi
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rbp
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  int v67; // edi
  unsigned __int64 v68; // rbp
  _QWORD *v69; // rsi
  unsigned __int64 v70; // rbp
  unsigned __int64 v71; // rbp
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  int v74; // edi
  unsigned __int64 v75; // rbp
  _QWORD *v76; // rsi
  unsigned __int64 v77; // rbp
  unsigned __int64 v78; // rbp
  unsigned __int64 v79; // rdx
  unsigned __int64 *v80; // r15
  unsigned __int64 v81; // rcx
  int v82; // edi
  _QWORD *v83; // rsi
  unsigned __int64 v84; // rbp
  unsigned __int64 v85; // rbp
  __int64 v87; // [rsp+0h] [rbp-88h]
  __int64 v88; // [rsp+8h] [rbp-80h]
  __int64 v89; // [rsp+10h] [rbp-78h]
  __int64 v90; // [rsp+18h] [rbp-70h] BYREF
  __int64 v91; // [rsp+20h] [rbp-68h]
  __int64 v92; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v94; // [rsp+40h] [rbp-48h]
  unsigned __int64 v95; // [rsp+50h] [rbp-38h]

  v95 = __readfsqword(0x28u);
  v6 = *(_WORD *)(a1 + 396);
  *(_WORD *)(a2 + 56) = v6;
  v7 = *(unsigned __int16 *)(a1 + 416);
  *(_WORD *)(a2 + 88) = v7;
  v8 = *(_WORD *)(a1 + 420);
  *(_WORD *)(a2 + 120) = v8;
  if ( !v6 || !(_WORD)v7 || !v8 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20037);
    BUG();
  }
  *(_OWORD *)ptr = 0;
  v94 = 0;
  if ( !(16LL * *(_QWORD *)(a3 + 8)) )
  {
    *(_QWORD *)(a2 + 48) = -1;
    goto LABEL_137;
  }
  v10 = a2 + 56;
  v92 = a2 + 88;
  v91 = a2 + 120;
  v11 = *(_QWORD **)a3;
  v89 = a3;
  v88 = a1;
  v87 = a2 + 56;
  do
  {
    if ( (__int64)*v11 <= 1610612750 )
    {
      v12 = v7;
      v13 = v4;
      v4 = 0;
      v14 = 0;
      v7 = v10;
      switch ( *v11 )
      {
        case 0LL:
          goto LABEL_81;
        case 2LL:
          v14 = 6;
          goto LABEL_53;
        case 3LL:
        case 0xCLL:
        case 0xDLL:
          v15 = *(_QWORD *)(a1 + 584);
          v16 = -1;
          if ( !v15 )
            goto LABEL_55;
          v17 = v11[1];
          v18 = *(_QWORD *)(a1 + 576);
          v19 = 1;
          v20 = 0;
          break;
        case 4LL:
          v4 = 7;
          goto LABEL_65;
        case 5LL:
          goto LABEL_65;
        case 6LL:
          v4 = 1;
          goto LABEL_65;
        case 7LL:
          v4 = 3;
          goto LABEL_65;
        case 8LL:
          v14 = 3;
          goto LABEL_53;
        case 9LL:
          v7 = v91;
          goto LABEL_45;
        case 0xALL:
          goto LABEL_53;
        case 0xBLL:
          goto LABEL_45;
        case 0x11LL:
          v4 = 2;
          goto LABEL_65;
        case 0x12LL:
          v14 = 2;
          goto LABEL_53;
        case 0x13LL:
          v7 = v92;
LABEL_45:
          *(_WORD *)v7 = *((_WORD *)v11 + 4);
          goto LABEL_80;
        case 0x14LL:
          v26 = *((unsigned int *)v11 + 2);
          *(_DWORD *)(a2 + 480) = v26;
          if ( (_DWORD)v26 == 7 )
            goto LABEL_80;
          if ( (_DWORD)v26 == 17 )
            goto LABEL_80;
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 496))(a1, 15, v26, v10);
          a3 = v89;
          a1 = v88;
          v10 = v87;
          if ( v27 )
            goto LABEL_80;
          LODWORD(v3) = 0;
          goto LABEL_139;
        case 0x17LL:
          v4 = 6;
          goto LABEL_65;
        case 0x19LL:
          v4 = 10;
          goto LABEL_65;
        case 0x1ALL:
          v4 = 11;
          goto LABEL_65;
        case 0x1BLL:
          v14 = 10;
          goto LABEL_53;
        case 0x1CLL:
          v14 = 11;
          goto LABEL_53;
        case 0x20LL:
          v4 = 9;
          goto LABEL_65;
        case 0x21LL:
          v14 = 9;
          goto LABEL_53;
        default:
          v4 = v13;
          v7 = v12;
          goto LABEL_80;
      }
      while ( 1 )
      {
        v21 = 3 * v20;
        v22 = *(_QWORD *)(v18 + 8 * v21 + 16);
        if ( v17 >= v22 && v22 + *(_QWORD *)(v18 + 8 * v21 + 8) > v17 )
          break;
        v20 = v19++;
        if ( v15 <= v20 )
          goto LABEL_55;
      }
      v16 = *(_QWORD *)(v18 + 8 * v21) + (unsigned int)(v17 - v22);
LABEL_55:
      v90 = v16;
      v29 = ptr[0];
      v7 = (__int64)ptr[1];
      v3 = &v90;
      v30 = (char *)ptr[1] + 1;
      if ( ptr[0] > &v90 || (char *)ptr[0] + 8 * v94 <= (char *)&v90 )
      {
        if ( v94 < (unsigned __int64)v30 )
        {
          v29 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v30, 8u);
          ptr[0] = v29;
          v7 = (__int64)ptr[1];
          v16 = v90;
          goto LABEL_61;
        }
      }
      else if ( v94 < (unsigned __int64)v30 )
      {
        v29 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v30, 8u);
        ptr[0] = v29;
        v7 = (__int64)ptr[1];
LABEL_61:
        a3 = v89;
        a1 = v88;
        v10 = v87;
      }
      *((_QWORD *)v29 + v7) = v16;
      ++ptr[1];
      goto LABEL_80;
    }
    v7 = *v11 - 1879048176LL;
    v24 = *v11;
    v25 = 12;
    switch ( *v11 )
    {
      case 0x6FFFFFF0LL:
        v4 = 14;
        goto LABEL_65;
      case 0x6FFFFFF1LL:
      case 0x6FFFFFF2LL:
      case 0x6FFFFFF3LL:
      case 0x6FFFFFF4LL:
      case 0x6FFFFFF5LL:
      case 0x6FFFFFF6LL:
      case 0x6FFFFFF7LL:
      case 0x6FFFFFF8LL:
      case 0x6FFFFFF9LL:
      case 0x6FFFFFFALL:
      case 0x6FFFFFFBLL:
        goto LABEL_80;
      case 0x6FFFFFFCLL:
        v4 = 12;
        goto LABEL_65;
      case 0x6FFFFFFDLL:
        goto LABEL_26;
      case 0x6FFFFFFELL:
        v4 = 13;
LABEL_65:
        v31 = *(_QWORD *)(a1 + 584);
        v32 = -1;
        if ( !v31 )
          goto LABEL_72;
        v33 = v11[1];
        v34 = *(_QWORD *)(a1 + 576);
        v35 = 1;
        v36 = 0;
        break;
      case 0x6FFFFFFFLL:
        v25 = 13;
LABEL_26:
        v7 = *((unsigned int *)v11 + 2);
        *(_DWORD *)(a2 + 32 * v25 + 28) = v7;
        goto LABEL_80;
      default:
        v7 = v24 - 1610612751;
        switch ( v24 )
        {
          case 1610612751LL:
            v23 = *(unsigned __int16 *)(a1 + 522);
            if ( v23 == 40 )
            {
              v4 = 4;
              goto LABEL_65;
            }
            v4 = 4;
            if ( (unsigned __int16)v23 == 183 )
              goto LABEL_65;
            goto LABEL_80;
          case 1610612752LL:
            v14 = 4;
            goto LABEL_53;
          case 1610612753LL:
            v28 = *(unsigned __int16 *)(a1 + 522);
            if ( v28 == 183 )
            {
              v4 = 5;
              goto LABEL_65;
            }
            v4 = 5;
            if ( (unsigned __int16)v28 == 40 )
              goto LABEL_65;
            break;
          case 1610612754LL:
            v14 = 5;
LABEL_53:
            v7 = v11[1];
            *(_QWORD *)(a2 + 32 * v14 + 16) = v7;
            goto LABEL_80;
          default:
            if ( v24 != 1879047925 )
              goto LABEL_80;
            v4 = 8;
            goto LABEL_65;
        }
        goto LABEL_80;
    }
    while ( 1 )
    {
      v37 = 3 * v36;
      v38 = *(_QWORD *)(v34 + 8 * v37 + 16);
      if ( v33 >= v38 && v38 + *(_QWORD *)(v34 + 8 * v37 + 8) > v33 )
        break;
      v36 = v35++;
      if ( v31 <= v36 )
        goto LABEL_72;
    }
    v32 = *(_QWORD *)(v34 + 8 * v37) + (unsigned int)(v33 - v38);
LABEL_72:
    v4 *= 32;
    *(_QWORD *)(a2 + v4) = v32;
    v90 = v32;
    v39 = ptr[0];
    v7 = (__int64)ptr[1];
    v3 = &v90;
    v40 = (char *)ptr[1] + 1;
    if ( ptr[0] > &v90 || (char *)ptr[0] + 8 * v94 <= (char *)&v90 )
    {
      if ( v94 < (unsigned __int64)v40 )
      {
        v39 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v40, 8u);
        ptr[0] = v39;
        v7 = (__int64)ptr[1];
        v32 = v90;
        goto LABEL_78;
      }
    }
    else if ( v94 < (unsigned __int64)v40 )
    {
      v39 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v40, 8u);
      ptr[0] = v39;
      v7 = (__int64)ptr[1];
LABEL_78:
      a3 = v89;
      a1 = v88;
      v10 = v87;
    }
    *((_QWORD *)v39 + v7) = v32;
    ++ptr[1];
    *(_QWORD *)(a2 + v4 + 8) = v11[1];
LABEL_80:
    v11 += 2;
  }
  while ( v11 != (_QWORD *)(*(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8)) );
LABEL_81:
  v41 = (__int64 *)ptr[1];
  *(_QWORD *)(a2 + 48) = -1;
  if ( !v41 )
  {
LABEL_137:
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 240) = -1;
    *(_QWORD *)(a2 + 240) = 0;
    *(_QWORD *)(a2 + 272) = 0;
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
    *(_QWORD *)(a2 + 464) = -1;
    v80 = (unsigned __int64 *)(a2 + 464);
    goto LABEL_138;
  }
  v42 = *(_QWORD *)(a2 + 32);
  v43 = -1;
  v44 = 1;
  v45 = ptr[0];
  for ( i = 0; i < (unsigned __int64)v41; i = v44++ )
  {
    if ( v42 )
    {
      v47 = v45[i];
      v48 = v47 <= v42;
      v49 = v47 - v42;
      if ( !v48 )
      {
        if ( v43 >= v49 )
          v43 = v49;
        *(_QWORD *)(a2 + 48) = v43;
      }
    }
  }
  if ( v43 == -1 )
    *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 240) = -1;
  v50 = (unsigned __int64 *)(a2 + 240);
  v51 = *(_QWORD *)(a2 + 224);
  v52 = -1;
  v53 = 1;
  v54 = ptr[0];
  for ( j = 0; j < (unsigned __int64)v41; j = v53++ )
  {
    if ( v51 )
    {
      v56 = v54[j];
      v48 = v56 <= v51;
      v57 = v56 - v51;
      if ( !v48 )
      {
        if ( v52 >= v57 )
          v52 = v57;
        *v50 = v52;
      }
    }
  }
  if ( v52 == -1 )
    *v50 = 0;
  *(_QWORD *)(a2 + 272) = -1;
  v58 = *(_QWORD *)(a2 + 256);
  v59 = -1;
  v60 = 1;
  v61 = 0;
  v62 = ptr[0];
  do
  {
    if ( v58 )
    {
      v63 = v62[v61];
      v48 = v63 <= v58;
      v64 = v63 - v58;
      if ( !v48 )
      {
        if ( v59 >= v64 )
          v59 = v64;
        *(_QWORD *)(a2 + 272) = v59;
      }
    }
    v61 = v60++;
  }
  while ( (unsigned __int64)v41 > v61 );
  if ( v59 == -1 )
    *(_QWORD *)(a2 + 272) = 0;
  *(_QWORD *)(a2 + 400) = -1;
  v65 = *(_QWORD *)(a2 + 384);
  v66 = -1;
  v67 = 1;
  v68 = 0;
  v69 = ptr[0];
  do
  {
    if ( v65 )
    {
      v70 = v69[v68];
      v48 = v70 <= v65;
      v71 = v70 - v65;
      if ( !v48 )
      {
        if ( v66 >= v71 )
          v66 = v71;
        *(_QWORD *)(a2 + 400) = v66;
      }
    }
    v68 = v67++;
  }
  while ( (unsigned __int64)v41 > v68 );
  if ( v66 == -1 )
    *(_QWORD *)(a2 + 400) = 0;
  *(_QWORD *)(a2 + 432) = -1;
  v72 = *(_QWORD *)(a2 + 416);
  v73 = -1;
  v74 = 1;
  v75 = 0;
  v76 = ptr[0];
  do
  {
    if ( v72 )
    {
      v77 = v76[v75];
      v48 = v77 <= v72;
      v78 = v77 - v72;
      if ( !v48 )
      {
        if ( v73 >= v78 )
          v73 = v78;
        *(_QWORD *)(a2 + 432) = v73;
      }
    }
    v75 = v74++;
  }
  while ( (unsigned __int64)v41 > v75 );
  if ( v73 == -1 )
    *(_QWORD *)(a2 + 432) = 0;
  *(_QWORD *)(a2 + 464) = -1;
  v79 = *(_QWORD *)(a2 + 448);
  v80 = (unsigned __int64 *)(a2 + 464);
  v81 = -1;
  v82 = 1;
  v3 = nullptr;
  v83 = ptr[0];
  do
  {
    if ( v79 )
    {
      v84 = v83[(_QWORD)v3];
      v48 = v84 <= v79;
      v85 = v84 - v79;
      if ( !v48 )
      {
        if ( v81 >= v85 )
          v81 = v85;
        *v80 = v81;
      }
    }
    v3 = (__int64 *)v82++;
  }
  while ( v41 > v3 );
  LOBYTE(v3) = 1;
  if ( v81 == -1 )
  {
LABEL_138:
    *v80 = 0;
    LOBYTE(v3) = 1;
  }
LABEL_139:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v94 = 0;
  }
  return (unsigned int)v3;
}
// 575B0: conditional instruction was optimized away because rax.8!=0
// 570E6: variable 'v7' is possibly undefined
// 570E6: variable 'v4' is possibly undefined
// 5783B: variable 'v3' is possibly undefined
// 158B40: using guessed type __int64 under_debugger;

__int64 __fastcall sub_426930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v6; // r12d
  int v7; // r14d
  _DWORD *v8; // rbp
  bool v9; // cc
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  int v16; // eax
  bool v17; // zf
  const char *v18; // rdi
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rbp
  int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rbp
  int *v25; // rax
  int *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v30; // rdx
  bool v31; // zf
  const char *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  int v36; // ebp
  __int64 v37; // rbx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  unsigned __int8 v41; // al
  int v42; // ecx
  __int64 v43; // rax
  __int64 *v44; // rdi
  int v45; // ebx
  _BYTE *v46; // rcx
  _BYTE *v47; // rcx
  bool v48; // zf
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  int v54; // eax
  const char *v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // [rsp+10h] [rbp-1F8h]
  int v64; // [rsp+1Ch] [rbp-1ECh]
  __int64 v65; // [rsp+20h] [rbp-1E8h]
  unsigned int v66; // [rsp+28h] [rbp-1E0h]
  int v67; // [rsp+2Ch] [rbp-1DCh]
  unsigned int v68; // [rsp+30h] [rbp-1D8h]
  unsigned int v69; // [rsp+34h] [rbp-1D4h]
  int v70; // [rsp+34h] [rbp-1D4h]
  __int64 v71; // [rsp+38h] [rbp-1D0h]
  int v73; // [rsp+4Ch] [rbp-1BCh] BYREF
  __int64 v74; // [rsp+50h] [rbp-1B8h] BYREF
  int v75; // [rsp+58h] [rbp-1B0h]
  int v76; // [rsp+5Ch] [rbp-1ACh]
  __int64 v77; // [rsp+110h] [rbp-F8h] BYREF
  int v78; // [rsp+118h] [rbp-F0h]
  int v79; // [rsp+11Ch] [rbp-ECh]

  v4 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_DWORD **)(a2 + 32);
  v71 = a2;
  v67 = 1;
  v68 = *(_DWORD *)(a4 + 48);
  v66 = 1;
  v65 = *(_QWORD *)(a4 + 3264);
  v9 = v7 > 0;
  v64 = *(_DWORD *)(v65 + 28) - 1;
  while ( v9 )
  {
    if ( *v8 != 2 )
      return 1;
    v9 = ++v6 < v7;
    v8 += 6 * v8[5] + 6;
  }
  v10 = 0;
  sub_43C4B0(&v77);
  sub_43C4B0(&v74);
  v69 = 0;
  v11 = *(_QWORD *)(a2 + 32);
  v12 = v11;
  if ( v7 > 0 )
  {
    v63 = 24LL * v64;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v11 + 32);
      v16 = *(_DWORD *)(v11 + 40);
      if ( v12 != v11 )
      {
        v17 = v16 == 6;
        if ( v16 != 6 )
          break;
        v18 = "elseif";
        v19 = 6;
        a2 = *(_QWORD *)(v11 + 32);
        do
        {
          if ( !v19 )
            break;
          v17 = *(_BYTE *)a2++ == *v18++;
          --v19;
        }
        while ( v17 );
        if ( !v17 )
          break;
      }
      v20 = v10 + 1;
      v21 = v11 + 24LL * *(int *)(v11 + 20) + 24;
      if ( v20 >= v7 )
        goto LABEL_33;
      v15 = v68;
      *(_DWORD *)(a4 + 48) = v68;
      if ( v67 )
      {
        v25 = (int *)sub_48DF10(*(void **)(v21 + 32), *(unsigned int *)(v21 + 40));
        ++*v25;
        v26 = v25;
        a2 = (__int64)v25;
        v70 = sub_47BB80(0, v25, &v73);
        v27 = *v26 - 1;
        v17 = *v26 == 1;
        *v26 = v27;
        if ( v27 < 0 || v17 )
        {
          v43 = *((_QWORD *)v26 + 3);
          if ( v43 && *(_QWORD *)(v43 + 8) )
          {
            sub_47B120(v26);
          }
          else
          {
            v44 = *((__int64 **)v26 + 1);
            if ( v44 && v44 != off_656088 )
              Tcl_Free((__int64)v44);
            v26[4] = -1;
            sub_496830(v26);
          }
        }
        if ( v70 )
        {
          v34 = *(_QWORD *)(v65 + 16);
          *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v63 + v34 + 8) + 4LL * v20);
          *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v63 + v34 + 16) + 8LL * v20);
          sub_48B350(a1);
          sub_43AA10(a1, v21, 1);
          v35 = v78;
          if ( v78 >= v79 )
          {
            sub_43C4D0(&v77);
            v35 = v78;
          }
          v4 = v35;
          a2 = 2;
          v78 = v35 + 1;
          sub_43C580(a4, 2, v77 + 16LL * v35);
        }
        else
        {
          v67 = 0;
          if ( !v73 )
            v66 = 0;
        }
        v22 = v20 + 1;
        v69 = 0;
        v23 = v21 + 24LL * *(int *)(v21 + 20);
        v24 = v23 + 24;
        if ( v22 >= v7 )
          goto LABEL_33;
      }
      else
      {
        v22 = v20 + 1;
        v23 = v21 + 24LL * *(int *)(v21 + 20);
        v24 = v23 + 24;
        if ( v22 >= v7 )
          goto LABEL_33;
      }
      if ( *(_DWORD *)(v23 + 24) == 2 )
      {
        v31 = *(_DWORD *)(v24 + 40) == 4;
        v15 = *(_QWORD *)(v24 + 32);
        if ( *(_DWORD *)(v24 + 40) == 4 )
        {
          v32 = "then";
          v33 = 4;
          a2 = *(_QWORD *)(v24 + 32);
          do
          {
            if ( !v33 )
              break;
            v31 = *(_BYTE *)a2++ == *v32++;
            --v33;
          }
          while ( v31 );
          if ( v31 )
          {
            ++v22;
            v24 += 24LL * *(int *)(v24 + 20) + 24;
            if ( v22 >= v7 )
              goto LABEL_33;
          }
        }
      }
      a2 = v66;
      if ( v66 )
      {
        a2 = v24 + 24;
        v30 = *(_QWORD *)(v65 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v63 + v30 + 8) + 4LL * v22);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v63 + v30 + 16) + 8LL * v22);
        *(_DWORD *)(a4 + 48) = v68;
        sub_43BFD0(a1, v24 + 24, *(unsigned int *)(v24 + 20), a4);
      }
      if ( v67 )
      {
        v13 = v75;
        if ( v75 >= v76 )
        {
          sub_43C4D0(&v74);
          v13 = v75;
        }
        v14 = 16LL * v4;
        v75 = v13 + 1;
        sub_43C580(a4, 0, v14 + v74);
        a2 = v14 + v77;
        if ( (unsigned int)sub_43C6D0(
                             a4,
                             v14 + v77,
                             (unsigned int)*(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112) - *(_DWORD *)(v14 + v77 + 4),
                             120) )
          *(_DWORD *)(v14 + v74 + 4) += 3;
      }
      else
      {
        v66 = 0;
        if ( !v73 )
        {
          v67 = 1;
          v66 = 1;
        }
      }
      v10 = v22 + 1;
      v11 = v24 + 24LL * *(int *)(v24 + 20) + 24;
      if ( v10 >= v7 )
        break;
      v12 = *(_QWORD *)(v71 + 32);
    }
  }
  v15 = v68;
  *(_DWORD *)(a4 + 48) = v68;
  if ( v10 >= v7 || *(_DWORD *)v11 != 2 )
  {
    if ( v66 )
    {
      a2 = (__int64)"";
      v45 = sub_471010(a4, "", 0, 0);
      if ( v45 > 255 )
      {
        v49 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v49 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v49 = *(_BYTE **)(a4 + 120);
        }
        *v49 = 2;
        v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v50;
        *v50 = HIBYTE(v45);
        v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v51;
        *v51 = BYTE2(v45);
        v52 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v52;
        *v52 = BYTE1(v45);
        v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v53;
        *v53 = v45;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v15 = (unsigned int)dword_65444C;
      }
      else
      {
        v46 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v46 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v46 = *(_BYTE **)(a4 + 120);
        }
        *v46 = 1;
        v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v47;
        *v47 = v45;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v15 = (unsigned int)dword_65442C;
      }
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 == 0x80000000 )
          v15 = (unsigned int)(1 - v45);
        if ( (v15 & 0x80000000) != 0LL )
        {
          v54 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v54 )
            *(_DWORD *)(a4 + 44) = v54;
        }
        else
        {
          v54 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v15 + v54;
      }
    }
LABEL_48:
    v36 = v75;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v36 <= 0 )
          goto LABEL_34;
        v37 = 16LL * (v36 - 1);
        a2 = v37 + v74;
        if ( (unsigned int)sub_43C6D0(
                             a4,
                             v37 + v74,
                             (unsigned int)*(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112) - *(_DWORD *)(v37 + v74 + 4),
                             127) )
          break;
LABEL_54:
        --v36;
      }
      v15 = *(_QWORD *)(a4 + 112) + *(int *)(v37 + v77 + 4);
      v41 = *(_BYTE *)v15;
      if ( *(_BYTE *)v15 == 38 )
      {
        --v36;
        *(_BYTE *)(v15 + 1) += 3;
      }
      else
      {
        if ( v41 == 39 )
        {
          v42 = (*(unsigned __int8 *)(v15 + 4)
               | (*(unsigned __int8 *)(v15 + 3) << 8)
               | (*(unsigned __int8 *)(v15 + 2) << 16)
               | (*(char *)(v15 + 1) << 24))
              + 3;
          *(_BYTE *)(v15 + 4) += 3;
          *(_BYTE *)(v15 + 1) = HIBYTE(v42);
          *(_BYTE *)(v15 + 2) = BYTE2(v42);
          *(_BYTE *)(v15 + 3) = BYTE1(v42);
          goto LABEL_54;
        }
        a2 = v41;
        --v36;
        sub_47D740(
          (unsigned int)"TclCompileIfCmd: unexpected opcode \"%d\" updating ifFalse jump",
          v41,
          v15,
          v38,
          v39,
          v40);
      }
    }
  }
  v48 = *(_DWORD *)(v11 + 40) == 4;
  v15 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v11 + 40) != 4 )
    goto LABEL_72;
  v55 = "else";
  v56 = 4;
  a2 = *(_QWORD *)(v11 + 32);
  do
  {
    if ( !v56 )
      break;
    v48 = *(_BYTE *)a2++ == *v55++;
    --v56;
  }
  while ( v48 );
  if ( !v48 || (++v10, v11 += 24LL * *(int *)(v11 + 20) + 24, v10 < v7) )
  {
LABEL_72:
    if ( v66 )
    {
      v57 = *(_QWORD *)(v65 + 16);
      v58 = 24LL * v64;
      v59 = *(_QWORD *)(v58 + v57 + 8);
      v60 = *(_QWORD *)(v58 + v57 + 16);
      a2 = v11 + 24;
      v61 = *(_QWORD *)(v60 + 8LL * v10);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v59 + 4LL * v10);
      v62 = *(unsigned int *)(v11 + 20);
      *(_QWORD *)(a4 + 3288) = v61;
      sub_43BFD0(a1, v11 + 24, v62, a4);
    }
    if ( v10 + 1 >= v7 )
      goto LABEL_48;
  }
LABEL_33:
  v69 = 1;
LABEL_34:
  *(_DWORD *)(a4 + 48) = v68 + 1;
  sub_43C560(&v77, a2, v15);
  sub_43C560(&v74, a2, v28);
  return v69;
}


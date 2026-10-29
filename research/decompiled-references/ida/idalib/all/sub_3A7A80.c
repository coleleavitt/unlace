unsigned __int64 __fastcall sub_3A7A80(int *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r14
  bool v4; // zf
  int *v6; // rsi
  int *v7; // rdi
  int *v8; // rdx
  _QWORD *v9; // r15
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  int *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v26; // r12
  int *v27; // rsi
  int *v28; // rdi
  unsigned __int64 v29; // r13
  _QWORD *v30; // rax
  int *v31; // r13
  bool v32; // r12
  __int64 v33; // rax
  void *v34; // r13
  int *v35; // rax
  int *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // r13
  __int64 v41; // r12
  unsigned __int64 v42; // rbx
  int v43; // [rsp+0h] [rbp-238h]
  int *v44; // [rsp+8h] [rbp-230h]
  int v45; // [rsp+10h] [rbp-228h]
  __int64 v46; // [rsp+10h] [rbp-228h]
  int v47; // [rsp+18h] [rbp-220h]
  __int64 v48; // [rsp+18h] [rbp-220h]
  int v49; // [rsp+20h] [rbp-218h]
  __int64 v50; // [rsp+20h] [rbp-218h]
  int v51; // [rsp+28h] [rbp-210h]
  unsigned __int64 v52; // [rsp+28h] [rbp-210h]
  __int64 v53; // [rsp+30h] [rbp-208h]
  unsigned __int64 v54; // [rsp+38h] [rbp-200h] BYREF
  void *ptr; // [rsp+40h] [rbp-1F8h] BYREF
  int v56[4]; // [rsp+48h] [rbp-1F0h]
  int v57; // [rsp+58h] [rbp-1E0h]
  int v58; // [rsp+60h] [rbp-1D8h] BYREF
  int v59; // [rsp+68h] [rbp-1D0h] BYREF
  int *v60; // [rsp+70h] [rbp-1C8h]
  int *v61; // [rsp+78h] [rbp-1C0h]
  int *v62; // [rsp+80h] [rbp-1B8h]
  __int64 v63; // [rsp+88h] [rbp-1B0h]
  int v64[4]; // [rsp+90h] [rbp-1A8h] BYREF
  int v65[2]; // [rsp+A0h] [rbp-198h]
  int v66[2]; // [rsp+A8h] [rbp-190h]
  int v67[2]; // [rsp+B0h] [rbp-188h]
  int v68[80]; // [rsp+B8h] [rbp-180h] BYREF
  _QWORD v69[8]; // [rsp+1F8h] [rbp-40h] BYREF

  v54 = a2;
  v69[0] = __readfsqword(0x28u);
  v2 = *(_QWORD *)a1;
  v59 = 0;
  v60 = nullptr;
  v63 = 0;
  v3 = *(_QWORD **)(v2 + 1536);
  v44 = &v59;
  v4 = v3[9] == 0;
  v61 = &v59;
  v62 = &v59;
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(46);
    BUG();
  }
  v6 = (int *)&v54;
  v7 = (int *)(v3 + 4);
  v53 = (__int64)(v3 + 4);
  sub_3A3280(v3 + 4, &v54, 0x77u);
  v9 = v3 + 5;
  while ( v3[9] )
  {
    v10 = *(_QWORD *)(v3[7] + 32LL);
    v11 = (_QWORD *)v3[6];
    if ( v11 )
    {
      v12 = v3 + 5;
      do
      {
        while ( 1 )
        {
          v13 = v11[2];
          v14 = v11[3];
          if ( v11[4] >= v10 )
            break;
          v11 = (_QWORD *)v11[3];
          if ( !v14 )
            goto LABEL_8;
        }
        v12 = v11;
        v11 = (_QWORD *)v11[2];
      }
      while ( v13 );
LABEL_8:
      if ( v12 != v9 && v10 >= v12[4] )
      {
        if ( (unsigned __int8)must_journal(v7, v6, v13) )
        {
          ptr = nullptr;
          *(_OWORD *)v56 = 0;
          sub_3A0A80((__int64 *)&ptr, v10);
          add_undo_record(120, ptr, *(_QWORD *)v56);
          if ( ptr )
          {
            *(_QWORD *)v56 = 0;
            qfree(ptr);
          }
        }
        v15 = (void *)std::_Rb_tree_rebalance_for_erase(v12, v3 + 5);
        operator delete(v15, 0x28u);
        --v3[9];
      }
    }
    v6 = (int *)v10;
    v7 = a1;
    if ( (sub_4F37A0(a1, v10) & 1) != 0 )
    {
      if ( v10 == v54 )
        goto LABEL_52;
      if ( *(char *)(*((_QWORD *)a1 + 2) + 10LL) >= 0 )
        goto LABEL_52;
      v18 = v68;
      *(_QWORD *)v65 = -1;
      *(_QWORD *)v66 = 0;
      *(_QWORD *)v67 = 0;
      *(_OWORD *)v64 = -1;
      do
      {
        *(_WORD *)v18 = 0;
        v18 += 10;
        *((_WORD *)v18 - 19) = 0;
        *((_WORD *)v18 - 18) = 0;
        *(v18 - 2) = 0;
        *((_WORD *)v18 - 17) = 0;
        *((_OWORD *)v18 - 2) = 0;
        *((_QWORD *)v18 - 2) = 0;
      }
      while ( v69 != (_QWORD *)v18 );
      v6 = (int *)v10;
      v7 = v64;
      if ( (int)decode_insn(v64, v10, v69, v16, v17, 0, 0.0) <= 0
        || (v6 = v64, v7 = (_DWORD *)(&qword_20 + 5), sub_3792E0(0x25u, v64, 1) < 0) )
      {
LABEL_52:
        if ( v10 == -1 )
          break;
        if ( (debug & 0x1000) != 0 )
          sub_3879F0();
        if ( v63 )
        {
          while ( 1 )
          {
            sub_4F3480(a1, v10, 1);
            LOBYTE(v56[0]) = 0;
            ptr = (void *)-1LL;
            sub_3E3290(a1, &ptr, v10);
            v34 = ptr;
            if ( (unsigned __int8)(LOBYTE(v56[0]) - 18) > 1u && LOBYTE(v56[0]) != 21 )
              break;
            v35 = v60;
            if ( !v60 )
              break;
            v36 = v44;
            do
            {
              while ( 1 )
              {
                v37 = *((_QWORD *)v35 + 2);
                v38 = *((_QWORD *)v35 + 3);
                if ( *((_QWORD *)v35 + 4) >= (unsigned __int64)ptr )
                  break;
                v35 = *((int **)v35 + 3);
                if ( !v38 )
                  goto LABEL_62;
              }
              v36 = v35;
              v35 = *((int **)v35 + 2);
            }
            while ( v37 );
LABEL_62:
            if ( v36 == v44 )
              break;
            if ( (unsigned __int64)ptr < *((_QWORD *)v36 + 4) )
              break;
            if ( (sub_3BE900(a1, v10, 4) & 0x10000) == 0 )
            {
              sub_3E3030(a1, &ptr, v34);
              sub_3E3220(a1, &ptr, v34);
              if ( ptr != (void *)-1LL )
                break;
            }
            if ( (sub_4F37A0(a1, v34) & 1) != 0 )
              break;
            v10 = (unsigned __int64)v34;
          }
        }
        v39 = (__int64)v61;
        v46 = -1;
        v40 = -1;
        v52 = v54 + 1;
LABEL_73:
        if ( (int *)v39 == v44 )
        {
          if ( v46 == -1 )
            goto LABEL_81;
          v48 = 0;
          v50 = 0;
          goto LABEL_76;
        }
        v41 = *(_QWORD *)(v39 + 32);
        v50 = v41;
        v48 = sub_3C1F00(a1, v41);
        if ( v40 != v41 )
        {
          if ( v46 != -1 )
          {
LABEL_76:
            *(_QWORD *)v65 = 0;
            *(_QWORD *)v66 = 0;
            *(_OWORD *)v64 = 0;
            sub_3D19E0((_DWORD)a1, v46);
            if ( *(_QWORD *)v65 )
              (*(void (__fastcall **)(int *, int *, __int64))v65)(v64, v64, 3);
            sub_3A5CC0(a1, (char *)v46, (char *)v40);
            if ( v52 >= v40 )
              v40 = v52;
            v52 = v40;
            if ( (int *)v39 == v44 )
            {
LABEL_81:
              v42 = v54;
              sub_4F3480(a1, v54, 1);
              sub_4F3240(v42);
              v6 = (int *)v42;
              v7 = (_DWORD *)(byte_9 + 4);
              forget_problem(13, v42);
              if ( (get_merge_state(13, v42) & 2) == 0 )
              {
                v6 = (int *)v42;
                v7 = a1;
                sub_3A5F70(a1, v42, v52, 0xC8u);
              }
              break;
            }
          }
          v46 = v50;
        }
        v40 = v48;
        v39 = std::_Rb_tree_increment(v39);
        goto LABEL_73;
      }
    }
    v19 = sub_3BE900(a1, v10, 4) & 0x600;
    v20 = v19;
    if ( v19 == 512 )
    {
      v26 = v10;
      if ( (sub_3BE900(a1, v10, 4) & 0x600) == 0x200 )
        v26 = sub_3C2650(a1, v10);
      v6 = (int *)v26;
      v7 = a1;
      if ( (sub_3BE900(a1, v26, 4) & 0x600) != 0x400 )
        goto LABEL_52;
      v10 = v26;
    }
    else if ( v19 != 1024 )
    {
      goto LABEL_23;
    }
    v6 = (int *)v10;
    v7 = (_DWORD *)(byte_9 + 4);
    if ( !(unsigned __int8)is_problem_present(13, v10) )
      goto LABEL_52;
    v27 = (int *)v10;
    v28 = a1;
    v29 = sub_3C1F00(a1, v10);
    *(_QWORD *)v65 = 0;
    *(_QWORD *)v66 = 0;
    *(_OWORD *)v64 = 0;
    sub_3D19E0((_DWORD)a1, v10);
    if ( *(_QWORD *)v65 )
    {
      v27 = v64;
      v28 = v64;
      (*(void (__fastcall **)(int *, int *, __int64))v65)(v64, v64, 3);
    }
    if ( (get_merge_state(v28, v27) & 2) == 0 )
      sub_3A5F70(a1, v10, v29, 0xC8u);
    sub_4F3480(a1, v10, 2);
    v20 = 1024;
LABEL_23:
    v21 = v68;
    *(_QWORD *)v65 = -1;
    *(_QWORD *)v66 = 0;
    *(_QWORD *)v67 = 0;
    *(_OWORD *)v64 = -1;
    do
    {
      *(_WORD *)v21 = 0;
      v21 += 10;
      *((_WORD *)v21 - 19) = 0;
      *((_WORD *)v21 - 18) = 0;
      *(v21 - 2) = 0;
      *((_WORD *)v21 - 17) = 0;
      *((_OWORD *)v21 - 2) = 0;
      *((_QWORD *)v21 - 2) = 0;
    }
    while ( v69 != (_QWORD *)v21 );
    v6 = (int *)v10;
    v7 = a1;
    if ( (int)sub_577F80(
                (int)a1,
                v10,
                v43,
                (int)v44,
                v45,
                v47,
                v49,
                v51,
                v53,
                v54,
                (int)ptr,
                v56[0],
                v56[2],
                v57,
                v58,
                v59,
                (int)v60,
                (int)v61,
                (int)v62,
                v63,
                v64[0],
                v64[2],
                v65[0],
                v66[0],
                v67[0],
                v68[0],
                v68[2],
                v68[4],
                v68[6],
                v68[8],
                v68[10],
                v68[12],
                v68[14],
                v68[16],
                v68[18],
                v68[20],
                v68[22],
                v68[24],
                v68[26],
                v68[28],
                v68[30],
                v68[32],
                v68[34],
                v68[36],
                v68[38],
                v68[40],
                v68[42],
                v68[44],
                v68[46],
                v68[48],
                v68[50],
                v68[52],
                v68[54],
                v68[56],
                v68[58],
                v68[60],
                v68[62],
                v68[64],
                v68[66],
                v68[68],
                v68[70],
                v68[72],
                v68[74],
                v68[76],
                v68[78],
                v69[0],
                v69[1]) <= 0 )
      goto LABEL_52;
    v6 = (int *)v10;
    v7 = a1;
    v22 = sub_3BE900(a1, v10, 4);
    if ( v20 != 1536 && (~BYTE1(v22) & 6) == 0 )
    {
      v7 = &v58;
      v6 = (int *)v10;
      v30 = sub_3A0080((__int64)&v58, v10);
      v31 = v8;
      if ( v8 )
      {
        v32 = v8 == v44 || v30 != nullptr;
        if ( !v32 )
          v32 = v10 < *((_QWORD *)v8 + 4);
        v33 = operator new(0x28u);
        *(_QWORD *)(v33 + 32) = v10;
        v6 = (int *)v33;
        v7 = (int *)v32;
        std::_Rb_tree_insert_and_rebalance(v32, v33, v31, v44);
        ++v63;
      }
    }
  }
  v23 = v3[7];
  if ( !(unsigned __int8)must_journal(v7, v6, v8) )
    goto LABEL_36;
  ptr = nullptr;
  *(_OWORD *)v56 = 0;
  if ( v9 != (_QWORD *)v23 )
  {
    v24 = v23;
    do
    {
      sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(v24 + 32));
      v24 = std::_Rb_tree_increment(v24);
    }
    while ( v9 != (_QWORD *)v24 );
    if ( *(_QWORD *)v56 )
    {
      add_undo_record(120, ptr, *(_QWORD *)v56);
      if ( ptr )
      {
        *(_QWORD *)v56 = 0;
        qfree(ptr);
      }
LABEL_36:
      sub_3A7700(v53, v23, (__int64)(v3 + 5));
      goto LABEL_37;
    }
    if ( ptr )
      qfree(ptr);
  }
LABEL_37:
  sub_3A0420(v60);
  return v69[0] - __readfsqword(0x28u);
}

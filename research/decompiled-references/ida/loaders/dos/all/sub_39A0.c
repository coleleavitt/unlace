__int64 __fastcall sub_39A0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int i; // r13d
  __int64 v14; // rbp
  __int64 segm_base; // r14
  unsigned __int64 v16; // r12
  int *v17; // rax
  unsigned __int64 v18; // rcx
  int *v19; // r14
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  int *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  int *v27; // r15
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  _BOOL8 v30; // rdi
  int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  __int64 ph; // rax
  unsigned int v35; // r12d
  _DWORD *v36; // rbp
  int sreg_ranges_qty; // r13d
  unsigned int v38; // r15d
  int *v39; // rax
  int *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  int j; // r12d
  __int64 v46; // rdi
  int v47; // r9d
  int *k; // rax
  __int64 v49; // r11
  unsigned __int64 v50; // r8
  int *v51; // rdx
  int *v52; // r10
  __int64 v53; // rsi
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // [rsp+8h] [rbp-D0h]
  int *v57; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v58; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v60; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+28h] [rbp-B0h]
  __int64 v63; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v64; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v65; // [rsp+50h] [rbp-88h]
  unsigned __int8 v66; // [rsp+58h] [rbp-80h]
  char v67[8]; // [rsp+60h] [rbp-78h] BYREF
  int v68; // [rsp+68h] [rbp-70h] BYREF
  int *v69; // [rsp+70h] [rbp-68h]
  int *v70; // [rsp+78h] [rbp-60h]
  int *v71; // [rsp+80h] [rbp-58h]
  __int64 v72; // [rsp+88h] [rbp-50h]
  unsigned __int64 v73; // [rsp+98h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  netnode_check(&v63, "$ IDALDR node for unload $", 0, 0);
  if ( v63 == -1 )
  {
    sub_31F0((__int64)"Couldn't find dos.ldr node, assuming file has no relocations.\n");
    return 1;
  }
  if ( a1 != -1 )
    return 1;
  if ( (a2 & 0xF) != 0 )
  {
    sub_3120((__int64)"DOS images can only be relocated to 16-byte boundaries.");
    return 0;
  }
  v7 = 16 * getinf(12, "$ IDALDR node for unload $", v2, v3, v4, v5);
  v56 = a2;
  v61 = a2 + (unsigned __int64)v7;
  v12 = getinf(27, "$ IDALDR node for unload $", v8, v9, v10, v11);
  netnode_altshift(v63, v7, v61, v12, 65);
  v68 = 0;
  v69 = nullptr;
  v70 = &v68;
  v71 = &v68;
  v72 = 0;
  sub_3670(a2 >> 4, 0, v63);
  for ( i = 0; i < (int)get_segm_qty(); ++i )
  {
    v14 = getnseg((unsigned int)i);
    segm_base = get_segm_base(v14);
    v16 = (unsigned __int64)(v56 + segm_base) >> 4;
    set_segm_base(v14, v16);
    v17 = v69;
    v18 = segm_base;
    v19 = &v68;
    v20 = v18 >> 4;
    if ( !v69 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v21 = *((_QWORD *)v17 + 2);
        v22 = *((_QWORD *)v17 + 3);
        if ( *((_QWORD *)v17 + 4) < v20 )
          break;
        v19 = v17;
        v17 = *((int **)v17 + 2);
        if ( !v21 )
          goto LABEL_12;
      }
      v17 = *((int **)v17 + 3);
    }
    while ( v22 );
LABEL_12:
    if ( v19 == &v68 || v20 < *((_QWORD *)v19 + 4) )
    {
LABEL_14:
      v58 = v20;
      v23 = (int *)operator new(0x30u);
      v26 = v58;
      *((_QWORD *)v23 + 5) = 0;
      v27 = v23;
      *((_QWORD *)v23 + 4) = v58;
      if ( v19 == &v68 )
      {
        if ( v72 )
        {
          v24 = (unsigned __int64)v71;
          v19 = nullptr;
          if ( *((_QWORD *)v71 + 4) < v58 )
            goto LABEL_20;
        }
        goto LABEL_32;
      }
      v28 = *((_QWORD *)v19 + 4);
      if ( v58 >= v28 )
      {
        v60 = *((_QWORD *)v19 + 4);
        if ( v28 < v26 )
        {
          if ( v71 == v19 )
          {
            v24 = (unsigned __int64)v19;
            if ( v19 )
              goto LABEL_75;
          }
          else
          {
            v62 = v26;
            v32 = std::_Rb_tree_increment(v19);
            v26 = v62;
            v24 = v32;
            if ( v62 >= *(_QWORD *)(v32 + 32) )
              goto LABEL_32;
            v33 = v60;
            if ( *((_QWORD *)v19 + 3) )
            {
              v19 = (int *)v32;
              goto LABEL_20;
            }
            v24 = (unsigned __int64)v19;
            if ( v19 )
              goto LABEL_76;
          }
        }
      }
      else
      {
        v24 = (unsigned __int64)v19;
        if ( v70 != v19 )
        {
          v29 = std::_Rb_tree_decrement(v19, v28, v19, v58, v25);
          v26 = v58;
          v24 = v29;
          if ( *(_QWORD *)(v29 + 32) < v58 )
          {
            if ( *(_QWORD *)(v29 + 24) )
              v24 = (unsigned __int64)v19;
            else
              v19 = nullptr;
            goto LABEL_20;
          }
LABEL_32:
          v59 = v26;
          v31 = (int *)sub_2900((__int64)v67, v26, v24, v26, v25);
          v26 = v59;
          v19 = v31;
        }
LABEL_20:
        if ( v24 )
        {
          if ( v19 || (int *)v24 == &v68 )
          {
            v30 = 1;
          }
          else
          {
LABEL_75:
            v33 = *(_QWORD *)(v24 + 32);
LABEL_76:
            v30 = v26 < v33;
          }
          v19 = v27;
          std::_Rb_tree_insert_and_rebalance(v30, v27, v24, &v68);
          ++v72;
          goto LABEL_25;
        }
      }
      if ( v27 )
        operator delete(v27, 0x30u);
    }
LABEL_25:
    *((_QWORD *)v19 + 5) = v16;
    update_segm(v14);
  }
  ph = get_ph();
  v35 = *(_DWORD *)(ph + 68);
  v36 = (_DWORD *)ph;
  if ( *(_DWORD *)(ph + 72) > (signed int)v35 )
  {
    while ( 1 )
    {
      sreg_ranges_qty = get_sreg_ranges_qty(v35);
      v38 = 0;
      if ( sreg_ranges_qty > 0 )
        break;
LABEL_52:
      if ( v36[18] <= (signed int)++v35 )
        goto LABEL_53;
    }
    while ( 1 )
    {
LABEL_40:
      v64 = 0;
      if ( !(unsigned __int8)getn_sreg_range(&v64, v35, v38) )
        goto LABEL_52;
      if ( v65 == -1 )
        goto LABEL_51;
      v39 = v69;
      if ( !v69 )
        goto LABEL_51;
      v40 = &v68;
      do
      {
        while ( 1 )
        {
          v41 = *((_QWORD *)v39 + 2);
          v42 = *((_QWORD *)v39 + 3);
          if ( *((_QWORD *)v39 + 4) < v65 )
            break;
          v40 = v39;
          v39 = *((int **)v39 + 2);
          if ( !v41 )
            goto LABEL_47;
        }
        v39 = *((int **)v39 + 3);
      }
      while ( v42 );
LABEL_47:
      if ( v40 == &v68 || v65 < *((_QWORD *)v40 + 4) )
        goto LABEL_51;
      v43 = v66;
      v44 = v64;
      if ( v66 != 3 )
        goto LABEL_50;
      v57 = v40;
      v55 = (_QWORD *)getseg(v64);
      v44 = v64;
      v40 = v57;
      if ( !v55 || *v55 != (_QWORD)v64 )
        break;
      set_default_sreg_value(v55, v35, *((_QWORD *)v57 + 5));
      if ( sreg_ranges_qty == ++v38 )
        goto LABEL_52;
    }
    v43 = v66;
LABEL_50:
    split_sreg_range(v44, v35, *((_QWORD *)v40 + 5), v43, 1);
LABEL_51:
    if ( sreg_ranges_qty == ++v38 )
      goto LABEL_52;
    goto LABEL_40;
  }
LABEL_53:
  for ( j = 0; j < (int)get_segm_qty(); ++j )
  {
    v46 = getnseg((unsigned int)j);
    v47 = v36[17];
    for ( k = v69; v36[18] > v47; ++v47 )
    {
      if ( v36[20] != v47 )
      {
        v49 = v47 - v36[17];
        v50 = *(_QWORD *)(v46 + 8 * v49 + 56);
        if ( v50 != -1 )
        {
          if ( k )
          {
            v51 = k;
            v52 = &v68;
            do
            {
              while ( 1 )
              {
                v53 = *((_QWORD *)v51 + 2);
                v54 = *((_QWORD *)v51 + 3);
                if ( *((_QWORD *)v51 + 4) < v50 )
                  break;
                v52 = v51;
                v51 = *((int **)v51 + 2);
                if ( !v53 )
                  goto LABEL_63;
              }
              v51 = *((int **)v51 + 3);
            }
            while ( v54 );
LABEL_63:
            if ( v52 != &v68 && v50 >= *((_QWORD *)v52 + 4) )
              *(_QWORD *)(v46 + 8 * v49 + 56) = *((_QWORD *)v52 + 5);
          }
        }
      }
    }
    update_segm(v46);
  }
  setinf(12, v61 >> 4);
  setinf(93, v61);
  sub_29C0(v69);
  return 1;
}


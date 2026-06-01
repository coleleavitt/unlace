unsigned __int64 __fastcall sub_CBA0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  unsigned int v6; // ecx
  __int64 v8; // rdx
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rbp
  _QWORD *v22; // r14
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _BOOL8 v28; // rdi
  _QWORD *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  _QWORD *v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rax
  _BOOL8 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128 v45; // xmm0
  int *v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // esi
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-90h]
  _QWORD *v54; // [rsp+8h] [rbp-90h]
  _QWORD *v55; // [rsp+8h] [rbp-90h]
  int v56; // [rsp+8h] [rbp-90h]
  _QWORD *v57; // [rsp+8h] [rbp-90h]
  unsigned __int64 v58; // [rsp+10h] [rbp-88h]
  unsigned int v59; // [rsp+10h] [rbp-88h]
  _QWORD *v60; // [rsp+10h] [rbp-88h]
  unsigned int v61; // [rsp+10h] [rbp-88h]
  int v62; // [rsp+28h] [rbp-70h] BYREF
  __int64 v63; // [rsp+30h] [rbp-68h]
  int *v64; // [rsp+38h] [rbp-60h] BYREF
  int *v65; // [rsp+40h] [rbp-58h]
  __int64 v66; // [rsp+48h] [rbp-50h]
  unsigned __int64 v67; // [rsp+58h] [rbp-40h]

  v3 = a1 + 2;
  v6 = *(_DWORD *)(a2 + 88);
  v67 = __readfsqword(0x28u);
  v8 = a1[3];
  if ( !v8 )
  {
    v30 = a1 + 2;
    v62 = 0;
    v63 = 0;
    v64 = &v62;
    v65 = &v62;
    v66 = 0;
    goto LABEL_35;
  }
  v9 = a1 + 2;
  v10 = a1[3];
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_QWORD *)(v10 + 24);
      if ( *(_DWORD *)(v10 + 32) < v6 )
        break;
      v9 = (_QWORD *)v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v11 )
        goto LABEL_6;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v12 );
LABEL_6:
  if ( v3 == v9 || v6 < *((_DWORD *)v9 + 8) )
  {
    v30 = v3;
    v62 = 0;
    v63 = 0;
    v64 = &v62;
    v65 = &v62;
    v66 = 0;
    do
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)(v8 + 16);
        v32 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) < v6 )
          break;
        v30 = (_QWORD *)v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v31 )
          goto LABEL_33;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v32 );
LABEL_33:
    if ( v3 != v30 && v6 >= *((_DWORD *)v30 + 8) )
      goto LABEL_58;
LABEL_35:
    v33 = operator new(0x58u);
    v36 = *(unsigned int *)(a2 + 88);
    *(_DWORD *)(v33 + 48) = 0;
    v37 = (_QWORD *)v33;
    v33 += 48;
    *(_QWORD *)(v33 + 8) = 0;
    *(_DWORD *)(v33 - 16) = v36;
    v37[8] = v33;
    v37[9] = v33;
    v37[10] = 0;
    if ( v3 == v30 )
    {
      if ( a1[6] )
      {
        v34 = a1[5];
        v30 = nullptr;
        if ( *(_DWORD *)(v34 + 32) < (unsigned int)v36 )
        {
LABEL_41:
          if ( v34 )
          {
            if ( v30 || v3 == (_QWORD *)v34 )
            {
              v40 = 1;
              goto LABEL_57;
            }
            LODWORD(v38) = *(_DWORD *)(v34 + 32);
LABEL_45:
            v40 = (unsigned int)v36 < (unsigned int)v38;
LABEL_57:
            v55 = v37;
            std::_Rb_tree_insert_and_rebalance(v40, v37, v34, v3);
            ++a1[6];
            v30 = v55;
            goto LABEL_58;
          }
LABEL_71:
          if ( v37 )
            operator delete(v37, 0x58u);
LABEL_58:
          sub_68F0((_QWORD *)v30[7]);
          v44 = v63;
          v30[7] = 0;
          v30[8] = v30 + 6;
          v30[9] = v30 + 6;
          v30[10] = 0;
          if ( v44 )
          {
            v45 = _mm_loadh_ps((const double *)&v64);
            *((_DWORD *)v30 + 12) = v62;
            v46 = v65;
            *(__m128 *)(v30 + 7) = v45;
            v30[9] = v46;
            *(_QWORD *)(v44 + 8) = v30 + 6;
            v63 = 0;
            v30[10] = v66;
            v64 = &v62;
            v65 = &v62;
            v66 = 0;
          }
          v9 = v3;
          sub_68F0(nullptr);
          v47 = a1[3];
          v48 = *(_DWORD *)(a2 + 88);
          if ( v47 )
          {
            do
            {
              while ( 1 )
              {
                v49 = *(_QWORD *)(v47 + 16);
                v50 = *(_QWORD *)(v47 + 24);
                if ( *(_DWORD *)(v47 + 32) < v48 )
                  break;
                v9 = (_QWORD *)v47;
                v47 = *(_QWORD *)(v47 + 16);
                if ( !v49 )
                  goto LABEL_65;
              }
              v47 = *(_QWORD *)(v47 + 24);
            }
            while ( v50 );
LABEL_65:
            if ( v3 != v9 && v48 < *((_DWORD *)v9 + 8) )
              v9 = v3;
          }
          goto LABEL_8;
        }
      }
    }
    else
    {
      v38 = *((unsigned int *)v30 + 8);
      if ( (unsigned int)v36 >= (unsigned int)v38 )
      {
        if ( (unsigned int)v38 >= (unsigned int)v36 )
          goto LABEL_71;
        if ( (_QWORD *)a1[5] != v30 )
        {
          v61 = v36;
          v57 = v37;
          v52 = std::_Rb_tree_increment(v30);
          v36 = v61;
          v37 = v57;
          v34 = v52;
          if ( v61 >= *(_DWORD *)(v52 + 32) )
            goto LABEL_75;
          if ( v30[3] )
          {
            v30 = (_QWORD *)v52;
            goto LABEL_41;
          }
        }
        v34 = (__int64)v30;
        if ( v30 )
          goto LABEL_45;
        goto LABEL_71;
      }
      v34 = (__int64)v30;
      if ( (_QWORD *)a1[4] == v30 )
        goto LABEL_41;
      v59 = v36;
      v54 = v37;
      v39 = std::_Rb_tree_decrement(v30, v38, v30, v36, v35);
      v36 = v59;
      v37 = v54;
      v34 = v39;
      if ( *(_DWORD *)(v39 + 32) < v59 )
      {
        if ( *(_QWORD *)(v39 + 24) )
          v34 = (__int64)v30;
        else
          v30 = nullptr;
        goto LABEL_41;
      }
    }
LABEL_75:
    v60 = v37;
    v56 = v36;
    v51 = sub_5D40((__int64)(a1 + 1), (unsigned int)v36, v34, v36, v35);
    LODWORD(v36) = v56;
    v37 = v60;
    v30 = (_QWORD *)v51;
    goto LABEL_41;
  }
LABEL_8:
  v13 = (_QWORD *)v9[7];
  v14 = v9 + 6;
  if ( !v13 )
    goto LABEL_53;
  v15 = *(_QWORD *)(a2 + 56);
  v16 = v9 + 6;
  do
  {
    while ( 1 )
    {
      v17 = v13[2];
      v18 = v13[3];
      if ( v13[4] < v15 )
        break;
      v16 = v13;
      v13 = (_QWORD *)v13[2];
      if ( !v17 )
        goto LABEL_13;
    }
    v13 = (_QWORD *)v13[3];
  }
  while ( v18 );
LABEL_13:
  if ( v14 == v16 )
  {
LABEL_53:
    v53 = (__int64)(v9 + 5);
    v43 = operator new(0x30u);
    v21 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v43 + 40) = 0;
    v22 = (_QWORD *)v43;
    *(_QWORD *)(v43 + 32) = v21;
    if ( v9[10] )
    {
      v24 = v9[9];
      v16 = nullptr;
      if ( *(_QWORD *)(v24 + 32) < v21 )
      {
LABEL_20:
        if ( v24 )
        {
          if ( (_QWORD *)v24 == v14 || v16 )
          {
            v28 = 1;
LABEL_24:
            v16 = v22;
            std::_Rb_tree_insert_and_rebalance(v28, v22, v24, v9 + 6);
            ++*(_QWORD *)(v53 + 40);
            goto LABEL_25;
          }
          goto LABEL_51;
        }
        goto LABEL_27;
      }
    }
LABEL_55:
    v16 = sub_5C80(v53, v21, v24, v26, v27);
    goto LABEL_20;
  }
  if ( v15 >= v16[4] )
    goto LABEL_25;
  v53 = (__int64)(v9 + 5);
  v19 = operator new(0x30u);
  v21 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v19 + 40) = 0;
  v22 = (_QWORD *)v19;
  *(_QWORD *)(v19 + 32) = v21;
  v23 = v16[4];
  if ( v21 < v23 )
  {
    v24 = (unsigned __int64)v16;
    if ( (_QWORD *)v9[8] == v16 )
      goto LABEL_20;
    v25 = std::_Rb_tree_decrement(v16, v15, v16, v23, v20);
    v24 = v25;
    if ( *(_QWORD *)(v25 + 32) < v21 )
    {
      if ( *(_QWORD *)(v25 + 24) )
        v24 = (unsigned __int64)v16;
      else
        v16 = nullptr;
      goto LABEL_20;
    }
    goto LABEL_55;
  }
  v58 = v16[4];
  if ( v23 < v21 )
  {
    if ( (_QWORD *)v9[9] == v16 )
    {
      v24 = (unsigned __int64)v16;
      if ( v16 )
      {
LABEL_51:
        v42 = *(_QWORD *)(v24 + 32);
LABEL_52:
        v28 = v21 < v42;
        goto LABEL_24;
      }
      goto LABEL_27;
    }
    v41 = std::_Rb_tree_increment(v16);
    v24 = v41;
    if ( v21 >= *(_QWORD *)(v41 + 32) )
      goto LABEL_55;
    v42 = v58;
    if ( v16[3] )
    {
      v16 = (_QWORD *)v41;
      goto LABEL_20;
    }
    v24 = (unsigned __int64)v16;
    if ( v16 )
      goto LABEL_52;
  }
LABEL_27:
  if ( v22 )
    operator delete(v22, 0x30u);
LABEL_25:
  *((_DWORD *)v16 + 10) = a3;
  return v67 - __readfsqword(0x28u);
}


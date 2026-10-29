unsigned __int64 __fastcall sub_3F2C0(_QWORD *a1, __int64 a2, int a3)
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
  unsigned __int64 v20; // rbp
  _QWORD *v21; // r14
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  _BOOL8 v25; // rdi
  _QWORD *v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ecx
  _QWORD *v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  _BOOL8 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128 v41; // xmm0
  int *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // esi
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+8h] [rbp-90h]
  _QWORD *v50; // [rsp+8h] [rbp-90h]
  _QWORD *v51; // [rsp+8h] [rbp-90h]
  unsigned int v52; // [rsp+8h] [rbp-90h]
  _QWORD *v53; // [rsp+8h] [rbp-90h]
  unsigned __int64 v54; // [rsp+10h] [rbp-88h]
  unsigned int v55; // [rsp+10h] [rbp-88h]
  _QWORD *v56; // [rsp+10h] [rbp-88h]
  unsigned int v57; // [rsp+10h] [rbp-88h]
  int v58; // [rsp+28h] [rbp-70h] BYREF
  __int64 v59; // [rsp+30h] [rbp-68h]
  int *v60; // [rsp+38h] [rbp-60h] BYREF
  int *v61; // [rsp+40h] [rbp-58h]
  __int64 v62; // [rsp+48h] [rbp-50h]
  unsigned __int64 v63; // [rsp+58h] [rbp-40h]

  v3 = a1 + 2;
  v6 = *(_DWORD *)(a2 + 88);
  v63 = __readfsqword(0x28u);
  v8 = a1[3];
  if ( !v8 )
  {
    v27 = a1 + 2;
    v58 = 0;
    v59 = 0;
    v60 = &v58;
    v61 = &v58;
    v62 = 0;
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
    v27 = v3;
    v58 = 0;
    v59 = 0;
    v60 = &v58;
    v61 = &v58;
    v62 = 0;
    do
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(v8 + 16);
        v29 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) < v6 )
          break;
        v27 = (_QWORD *)v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v28 )
          goto LABEL_33;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v29 );
LABEL_33:
    if ( v3 != v27 && v6 >= *((_DWORD *)v27 + 8) )
      goto LABEL_58;
LABEL_35:
    v30 = operator new(0x58u);
    v31 = *(_DWORD *)(a2 + 88);
    *(_DWORD *)(v30 + 48) = 0;
    v32 = (_QWORD *)v30;
    v30 += 48;
    *(_QWORD *)(v30 + 8) = 0;
    *(_DWORD *)(v30 - 16) = v31;
    v32[8] = v30;
    v32[9] = v30;
    v32[10] = 0;
    if ( v3 == v27 )
    {
      if ( a1[6] )
      {
        v34 = a1[5];
        v27 = nullptr;
        if ( *(_DWORD *)(v34 + 32) < v31 )
        {
LABEL_41:
          if ( v34 )
          {
            if ( v27 || v3 == (_QWORD *)v34 )
            {
              v36 = 1;
              goto LABEL_57;
            }
            LODWORD(v33) = *(_DWORD *)(v34 + 32);
LABEL_45:
            v36 = v31 < (unsigned int)v33;
LABEL_57:
            v51 = v32;
            std::_Rb_tree_insert_and_rebalance(v36, v32, v34, v3);
            ++a1[6];
            v27 = v51;
            goto LABEL_58;
          }
LABEL_71:
          if ( v32 )
            operator delete(v32, 0x58u);
LABEL_58:
          sub_32680((_QWORD *)v27[7]);
          v40 = v59;
          v27[7] = 0;
          v27[8] = v27 + 6;
          v27[9] = v27 + 6;
          v27[10] = 0;
          if ( v40 )
          {
            v41 = _mm_loadh_ps((const double *)&v60);
            *((_DWORD *)v27 + 12) = v58;
            v42 = v61;
            *(__m128 *)(v27 + 7) = v41;
            v27[9] = v42;
            *(_QWORD *)(v40 + 8) = v27 + 6;
            v59 = 0;
            v27[10] = v62;
            v60 = &v58;
            v61 = &v58;
            v62 = 0;
          }
          v9 = v3;
          sub_32680(nullptr);
          v43 = a1[3];
          v44 = *(_DWORD *)(a2 + 88);
          if ( v43 )
          {
            do
            {
              while ( 1 )
              {
                v45 = *(_QWORD *)(v43 + 16);
                v46 = *(_QWORD *)(v43 + 24);
                if ( *(_DWORD *)(v43 + 32) < v44 )
                  break;
                v9 = (_QWORD *)v43;
                v43 = *(_QWORD *)(v43 + 16);
                if ( !v45 )
                  goto LABEL_65;
              }
              v43 = *(_QWORD *)(v43 + 24);
            }
            while ( v46 );
LABEL_65:
            if ( v3 != v9 && v44 < *((_DWORD *)v9 + 8) )
              v9 = v3;
          }
          goto LABEL_8;
        }
      }
    }
    else
    {
      v33 = *((unsigned int *)v27 + 8);
      if ( v31 >= (unsigned int)v33 )
      {
        if ( (unsigned int)v33 >= v31 )
          goto LABEL_71;
        if ( (_QWORD *)a1[5] != v27 )
        {
          v57 = v31;
          v53 = v32;
          v48 = std::_Rb_tree_increment(v27);
          v31 = v57;
          v32 = v53;
          v34 = v48;
          if ( v57 >= *(_DWORD *)(v48 + 32) )
            goto LABEL_75;
          if ( v27[3] )
          {
            v27 = (_QWORD *)v48;
            goto LABEL_41;
          }
        }
        v34 = (__int64)v27;
        if ( v27 )
          goto LABEL_45;
        goto LABEL_71;
      }
      v34 = (__int64)v27;
      if ( (_QWORD *)a1[4] == v27 )
        goto LABEL_41;
      v55 = v31;
      v50 = v32;
      v35 = std::_Rb_tree_decrement(v27, v33);
      v31 = v55;
      v32 = v50;
      v34 = v35;
      if ( *(_DWORD *)(v35 + 32) < v55 )
      {
        if ( *(_QWORD *)(v35 + 24) )
          v34 = (__int64)v27;
        else
          v27 = nullptr;
        goto LABEL_41;
      }
    }
LABEL_75:
    v56 = v32;
    v52 = v31;
    v47 = sub_30D00((__int64)(a1 + 1), v31);
    v31 = v52;
    v32 = v56;
    v27 = (_QWORD *)v47;
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
    v49 = (__int64)(v9 + 5);
    v39 = operator new(0x30u);
    v20 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v39 + 40) = 0;
    v21 = (_QWORD *)v39;
    *(_QWORD *)(v39 + 32) = v20;
    if ( v9[10] )
    {
      v23 = (_QWORD *)v9[9];
      v16 = nullptr;
      if ( v23[4] < v20 )
      {
LABEL_20:
        if ( v23 )
        {
          if ( v23 == v14 || v16 )
          {
            v25 = 1;
LABEL_24:
            v16 = v21;
            std::_Rb_tree_insert_and_rebalance(v25, v21, v23, v9 + 6);
            ++*(_QWORD *)(v49 + 40);
            goto LABEL_25;
          }
          goto LABEL_51;
        }
        goto LABEL_27;
      }
    }
LABEL_55:
    v16 = sub_30C40(v49, v20);
    goto LABEL_20;
  }
  if ( v15 >= v16[4] )
    goto LABEL_25;
  v49 = (__int64)(v9 + 5);
  v19 = operator new(0x30u);
  v20 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v19 + 40) = 0;
  v21 = (_QWORD *)v19;
  *(_QWORD *)(v19 + 32) = v20;
  v22 = v16[4];
  if ( v20 < v22 )
  {
    v23 = v16;
    if ( (_QWORD *)v9[8] == v16 )
      goto LABEL_20;
    v24 = std::_Rb_tree_decrement(v16, v15);
    v23 = (_QWORD *)v24;
    if ( *(_QWORD *)(v24 + 32) < v20 )
    {
      if ( *(_QWORD *)(v24 + 24) )
        v23 = v16;
      else
        v16 = nullptr;
      goto LABEL_20;
    }
    goto LABEL_55;
  }
  v54 = v16[4];
  if ( v22 < v20 )
  {
    if ( (_QWORD *)v9[9] == v16 )
    {
      v23 = v16;
      if ( v16 )
      {
LABEL_51:
        v38 = v23[4];
LABEL_52:
        v25 = v20 < v38;
        goto LABEL_24;
      }
      goto LABEL_27;
    }
    v37 = std::_Rb_tree_increment(v16);
    v23 = (_QWORD *)v37;
    if ( v20 >= *(_QWORD *)(v37 + 32) )
      goto LABEL_55;
    v38 = v54;
    if ( v16[3] )
    {
      v16 = (_QWORD *)v37;
      goto LABEL_20;
    }
    v23 = v16;
    if ( v16 )
      goto LABEL_52;
  }
LABEL_27:
  if ( v21 )
    operator delete(v21, 0x30u);
LABEL_25:
  *((_DWORD *)v16 + 10) = a3;
  return v63 - __readfsqword(0x28u);
}


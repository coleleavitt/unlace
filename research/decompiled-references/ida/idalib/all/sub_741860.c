__int64 __fastcall sub_741860(__int64 a1, int a2)
{
  __int64 result; // rax
  int *v3; // r14
  bool v4; // zf
  unsigned __int64 v6; // rsi
  unsigned __int16 *v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  int *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // r9
  __int64 v18; // rcx
  int *v19; // rdx
  __int64 v20; // rax
  _BOOL8 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int *v25; // r12
  __int64 v26; // r13
  unsigned __int16 v27; // bx
  unsigned int v28; // r15d
  int *v29; // rdi
  __int64 v30; // rdx
  size_t v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  int v35; // r8d
  unsigned int v36; // eax
  int v37; // r10d
  unsigned int v38; // r9d
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rdi
  char *v43; // [rsp+8h] [rbp-90h]
  char *v44; // [rsp+8h] [rbp-90h]
  char *v45; // [rsp+8h] [rbp-90h]
  char *v46; // [rsp+8h] [rbp-90h]
  __int16 v47; // [rsp+1Ch] [rbp-7Ch]
  char v48[8]; // [rsp+20h] [rbp-78h] BYREF
  int v49; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v50; // [rsp+30h] [rbp-68h]
  int *v51; // [rsp+38h] [rbp-60h]
  int *v52; // [rsp+40h] [rbp-58h]
  __int64 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  result = 0;
  if ( a2 > 0 )
    return result;
  v3 = &v49;
  v4 = *(_WORD *)(a1 + 4) == 0;
  v49 = 0;
  v50 = nullptr;
  v51 = &v49;
  v52 = &v49;
  v53 = 0;
  if ( v4 )
  {
    v42 = nullptr;
    v22 = 0;
LABEL_57:
    v27 = 0;
    v41 = a1 + 6 * v22 + 6;
    goto LABEL_51;
  }
  v6 = (unsigned __int64)v48;
  v7 = (unsigned __int16 *)(a1 + 10);
  v8 = nullptr;
  v9 = 0;
  while ( 1 )
  {
    v10 = *v7;
    v11 = &v49;
    if ( !v8 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v12 = v8[2];
        v13 = v8[3];
        if ( *((_WORD *)v8 + 16) < (unsigned __int16)v10 )
          break;
        v11 = (int *)v8;
        v8 = (_QWORD *)v8[2];
        if ( !v12 )
          goto LABEL_9;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v13 );
LABEL_9:
    if ( v11 == &v49 || (unsigned __int16)v10 < *((_WORD *)v11 + 16) )
    {
LABEL_11:
      v14 = operator new(0x30u);
      *(_WORD *)(v14 + 32) = v10;
      v17 = (char *)v14;
      *(_QWORD *)(v14 + 40) = 0;
      if ( v11 == &v49 )
      {
        if ( v53 )
        {
          v19 = v52;
          v11 = nullptr;
          if ( *((_WORD *)v52 + 16) < (unsigned __int16)v10 )
          {
LABEL_17:
            if ( v19 )
            {
              if ( v11 || v19 == &v49 )
              {
                v21 = 1;
              }
              else
              {
                LOWORD(v18) = *((_WORD *)v19 + 16);
LABEL_54:
                v21 = (unsigned __int16)v10 < (unsigned __int16)v18;
              }
              v6 = (unsigned __int64)v17;
              v44 = v17;
              std::_Rb_tree_insert_and_rebalance(v21, v17, v19, &v49);
              ++v53;
              v11 = (int *)v44;
              goto LABEL_22;
            }
            goto LABEL_24;
          }
        }
      }
      else
      {
        v18 = *((unsigned __int16 *)v11 + 16);
        if ( (unsigned __int16)v10 >= (unsigned __int16)v18 )
        {
          if ( (unsigned __int16)v18 < (unsigned __int16)v10 )
          {
            if ( v52 != v11 )
            {
              v47 = *((_WORD *)v11 + 16);
              v46 = (char *)v14;
              v24 = std::_Rb_tree_increment(v11, (const char *)v6, v15, v18, v16, v14);
              v17 = v46;
              v19 = (int *)v24;
              if ( (unsigned __int16)v10 >= *(_WORD *)(v24 + 32) )
                goto LABEL_28;
              LOWORD(v18) = v47;
              if ( *((_QWORD *)v11 + 3) )
              {
                v11 = (int *)v24;
                goto LABEL_17;
              }
            }
            v19 = v11;
            if ( v11 )
              goto LABEL_54;
          }
LABEL_24:
          if ( v17 )
          {
            v6 = 48;
            operator delete(v17, 0x30u);
          }
          goto LABEL_22;
        }
        v19 = v11;
        if ( v51 == v11 )
          goto LABEL_17;
        v43 = (char *)v14;
        v20 = std::_Rb_tree_decrement(v11);
        v17 = v43;
        v19 = (int *)v20;
        if ( *(_WORD *)(v20 + 32) < (unsigned __int16)v10 )
        {
          if ( *(_QWORD *)(v20 + 24) )
            v19 = v11;
          else
            v11 = nullptr;
          goto LABEL_17;
        }
      }
LABEL_28:
      v6 = v10;
      v45 = v17;
      v23 = sub_741500((__int64)v48, v10);
      v17 = v45;
      v11 = (int *)v23;
      goto LABEL_17;
    }
LABEL_22:
    *((_QWORD *)v11 + 5) = v9;
    v22 = *(__int16 *)(a1 + 4);
    ++v9;
    v7 += 3;
    if ( v9 >= v22 )
      break;
    v8 = v50;
  }
  v25 = v51;
  if ( v51 == &v49 )
  {
    v42 = v50;
    goto LABEL_57;
  }
  v26 = a1 + 6;
  v27 = 0;
  do
  {
    v31 = (size_t)v3;
    v32 = std::_Rb_tree_decrement(v3);
    v33 = *(_DWORD *)(a1 - 8);
    v34 = v32;
    v35 = *(unsigned __int16 *)(v32 + 32);
    v36 = v35 + 1;
    if ( v35 + 1 >= v33 )
      sub_743130(v3, v6, v34);
    v6 = a1 + v36;
    v37 = *(unsigned __int16 *)v6;
    v38 = *(unsigned __int16 *)(v6 + (unsigned __int16)v37 + 2);
    if ( (unsigned __int16)v37 > 0x204u || v38 > 0x404 )
      sub_743130(v3, v6, v34);
    if ( v27 )
    {
      v39 = v37 + v38 + 4;
      v27 -= v37 + v38 + 4;
      v28 = v27;
      if ( v27 >= v36 )
        v36 = v27;
      if ( v36 >= v33 || (v31 = v33 - v36, v31 < v39) )
        sub_743130(v31, v6, v39);
      if ( v27 >= v33 )
        sub_743130(v31, v6, v39);
      memmove((void *)(a1 + v27), (const void *)v6, v39);
      v31 = (size_t)v3;
      v40 = std::_Rb_tree_decrement(v3);
      v33 = *(_DWORD *)(a1 - 8);
      v34 = v40;
    }
    else
    {
      v27 = v35 + 1;
      v28 = (unsigned __int16)v36;
    }
    if ( v33 < v28 )
      sub_743130(v31, v6, v34);
    *(_WORD *)(v26 + 6LL * *(_QWORD *)(v34 + 40) + 4) = v27;
    v29 = v3;
    v3 = (int *)std::_Rb_tree_decrement(v3);
  }
  while ( v3 != v25 );
  v41 = v26 + 6LL * *(__int16 *)(a1 + 4);
  if ( *(_DWORD *)(a1 - 8) < v28 )
    sub_743130(v29, v6, v30);
  v42 = v50;
LABEL_51:
  *(_WORD *)(v41 + 4) = v27;
  sub_7415C0(v42);
  return 1;
}

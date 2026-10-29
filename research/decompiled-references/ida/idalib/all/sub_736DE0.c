__int64 __fastcall sub_736DE0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  int *v3; // r14
  bool v4; // zf
  _QWORD *v6; // rax
  __int64 v7; // r15
  unsigned int v8; // r12d
  int *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // rbx
  unsigned __int16 v14; // cx
  int *v15; // rdx
  __int64 v16; // rax
  _BOOL8 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int *v20; // r12
  __int64 v21; // r13
  unsigned __int16 v22; // bx
  unsigned int v23; // r15d
  int *v24; // rdi
  __int64 v25; // rdx
  size_t v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  int v30; // r8d
  unsigned int v31; // eax
  int v32; // r10d
  unsigned int v33; // r9d
  size_t v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rdi
  unsigned __int16 v38; // [rsp+Ch] [rbp-7Ch]
  char v39[8]; // [rsp+10h] [rbp-78h] BYREF
  int v40; // [rsp+18h] [rbp-70h] BYREF
  _QWORD *v41; // [rsp+20h] [rbp-68h]
  int *v42; // [rsp+28h] [rbp-60h]
  int *v43; // [rsp+30h] [rbp-58h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  result = 0;
  if ( (int)a2 > 0 )
    return result;
  v3 = &v40;
  v4 = *(_WORD *)(a1 + 2) == 0;
  v40 = 0;
  v41 = nullptr;
  v42 = &v40;
  v43 = &v40;
  v44 = 0;
  if ( v4 )
  {
    v37 = nullptr;
    v18 = 0;
LABEL_57:
    v36 = a1 + 4 * v18 + 4;
    v22 = 0;
    goto LABEL_51;
  }
  v6 = nullptr;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(a1 + 4 * v7 + 6);
    v9 = &v40;
    if ( !v6 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v10 = v6[2];
        v11 = v6[3];
        if ( *((_WORD *)v6 + 16) < (unsigned __int16)v8 )
          break;
        v9 = (int *)v6;
        v6 = (_QWORD *)v6[2];
        if ( !v10 )
          goto LABEL_9;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v11 );
LABEL_9:
    if ( v9 == &v40 || (unsigned __int16)v8 < *((_WORD *)v9 + 16) )
    {
LABEL_11:
      v12 = operator new(0x30u);
      *(_WORD *)(v12 + 32) = v8;
      v13 = (char *)v12;
      *(_QWORD *)(v12 + 40) = 0;
      if ( v9 == &v40 )
      {
        if ( v44 )
        {
          v15 = v43;
          v9 = nullptr;
          if ( *((_WORD *)v43 + 16) < (unsigned __int16)v8 )
          {
LABEL_17:
            if ( v15 )
            {
              if ( v9 || v15 == &v40 )
              {
                v17 = 1;
              }
              else
              {
                v14 = *((_WORD *)v15 + 16);
LABEL_54:
                v17 = (unsigned __int16)v8 < v14;
              }
              a2 = (unsigned __int64)v13;
              v9 = (int *)v13;
              std::_Rb_tree_insert_and_rebalance(v17, v13, v15, &v40);
              ++v44;
              goto LABEL_22;
            }
            goto LABEL_24;
          }
        }
      }
      else
      {
        v14 = *((_WORD *)v9 + 16);
        if ( (unsigned __int16)v8 >= v14 )
        {
          if ( v14 < (unsigned __int16)v8 )
          {
            if ( v43 != v9 )
            {
              v38 = *((_WORD *)v9 + 16);
              v19 = std::_Rb_tree_increment(v9, (const char *)a2);
              v15 = (int *)v19;
              if ( (unsigned __int16)v8 >= *(_WORD *)(v19 + 32) )
                goto LABEL_28;
              v14 = v38;
              if ( *((_QWORD *)v9 + 3) )
              {
                v9 = (int *)v19;
                goto LABEL_17;
              }
            }
            v15 = v9;
            if ( v9 )
              goto LABEL_54;
          }
LABEL_24:
          if ( v13 )
          {
            a2 = 48;
            operator delete(v13, 0x30u);
          }
          goto LABEL_22;
        }
        v15 = v9;
        if ( v42 == v9 )
          goto LABEL_17;
        v16 = std::_Rb_tree_decrement(v9);
        v15 = (int *)v16;
        if ( *(_WORD *)(v16 + 32) < (unsigned __int16)v8 )
        {
          if ( *(_QWORD *)(v16 + 24) )
            v15 = v9;
          else
            v9 = nullptr;
          goto LABEL_17;
        }
      }
LABEL_28:
      a2 = v8;
      v9 = (int *)sub_736B40((__int64)v39, v8);
      goto LABEL_17;
    }
LABEL_22:
    *((_QWORD *)v9 + 5) = v7;
    v18 = *(__int16 *)(a1 + 2);
    if ( ++v7 >= v18 )
      break;
    v6 = v41;
  }
  v20 = v42;
  if ( v42 == &v40 )
  {
    v37 = v41;
    goto LABEL_57;
  }
  v21 = a1 + 4;
  v22 = 0;
  do
  {
    v26 = (size_t)v3;
    v27 = std::_Rb_tree_decrement(v3);
    v28 = *(_DWORD *)(a1 - 8);
    v29 = v27;
    v30 = *(unsigned __int16 *)(v27 + 32);
    v31 = v30 + 1;
    if ( v30 + 1 >= v28 )
      sub_737820(v3, a2, v29);
    a2 = a1 + v31;
    v32 = *(unsigned __int16 *)a2;
    v33 = *(unsigned __int16 *)(a2 + (unsigned __int16)v32 + 2);
    if ( (unsigned __int16)v32 > 0x204u || v33 > 0x404 )
      sub_737820(v3, a2, v29);
    if ( v22 )
    {
      v34 = v32 + v33 + 4;
      v22 -= v32 + v33 + 4;
      v23 = v22;
      if ( v22 >= v31 )
        v31 = v22;
      if ( v31 >= v28 || (v26 = v28 - v31, v26 < v34) )
        sub_737820(v26, a2, v34);
      if ( v22 >= v28 )
        sub_737820(v26, a2, v34);
      memmove((void *)(a1 + v22), (const void *)a2, v34);
      v26 = (size_t)v3;
      v35 = std::_Rb_tree_decrement(v3);
      v28 = *(_DWORD *)(a1 - 8);
      v29 = v35;
    }
    else
    {
      v22 = v30 + 1;
      v23 = (unsigned __int16)v31;
    }
    if ( v28 < v23 )
      sub_737820(v26, a2, v29);
    *(_WORD *)(v21 + 4LL * *(_QWORD *)(v29 + 40) + 2) = v22;
    v24 = v3;
    v3 = (int *)std::_Rb_tree_decrement(v3);
  }
  while ( v3 != v20 );
  v36 = v21 + 4LL * *(__int16 *)(a1 + 2);
  if ( *(_DWORD *)(a1 - 8) < v23 )
    sub_737820(v24, a2, v25);
  v37 = v41;
LABEL_51:
  *(_WORD *)(v36 + 2) = v22;
  sub_736C00(v37);
  return 1;
}

__int64 __fastcall sub_7168A0(__int64 a1, __int64 a2)
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
  void *v13; // rbx
  unsigned __int16 v14; // cx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  int *v19; // r12
  __int64 v20; // r13
  unsigned __int16 v21; // bx
  unsigned int v22; // r15d
  int *v23; // rdi
  __int64 v24; // rdx
  size_t v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned int v30; // eax
  int v31; // r10d
  unsigned int v32; // r9d
  size_t v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rdi
  char v37[8]; // [rsp+10h] [rbp-78h] BYREF
  int v38; // [rsp+18h] [rbp-70h] BYREF
  _QWORD *v39; // [rsp+20h] [rbp-68h]
  int *v40; // [rsp+28h] [rbp-60h]
  int *v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  result = 0;
  if ( (int)a2 > 0 )
    return result;
  v3 = &v38;
  v4 = *(_WORD *)(a1 + 2) == 0;
  v38 = 0;
  v39 = nullptr;
  v40 = &v38;
  v41 = &v38;
  v42 = 0;
  if ( v4 )
  {
    v36 = nullptr;
    v17 = 0;
LABEL_53:
    v35 = a1 + 4 * v17 + 4;
    v21 = 0;
    goto LABEL_48;
  }
  v6 = nullptr;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(a1 + 4 * v7 + 6);
    v9 = &v38;
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
    if ( v9 == &v38 || (unsigned __int16)v8 < *((_WORD *)v9 + 16) )
    {
LABEL_11:
      v12 = operator new(0x30u);
      *(_WORD *)(v12 + 32) = v8;
      v13 = (void *)v12;
      *(_QWORD *)(v12 + 40) = 0;
      if ( v9 == &v38 )
      {
        if ( v42 )
        {
          v15 = v41;
          v9 = nullptr;
          if ( *((_WORD *)v41 + 16) < (unsigned __int16)v8 )
          {
LABEL_17:
            if ( v15 )
              goto LABEL_18;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v14 = *((_WORD *)v9 + 16);
        if ( (unsigned __int16)v8 >= v14 )
        {
          if ( v14 >= (unsigned __int16)v8 )
          {
LABEL_21:
            if ( v13 )
            {
              a2 = 48;
              operator delete(v13, 0x30u);
            }
            goto LABEL_19;
          }
          if ( v41 != v9 )
          {
            v18 = std::_Rb_tree_increment();
            v15 = (_DWORD *)v18;
            if ( (unsigned __int16)v8 >= *(_WORD *)(v18 + 32) )
              goto LABEL_25;
            if ( *((_QWORD *)v9 + 3) )
            {
              v9 = (int *)v18;
              goto LABEL_17;
            }
          }
          if ( v9 )
          {
LABEL_18:
            a2 = (__int64)v13;
            v9 = (int *)v13;
            std::_Rb_tree_insert_and_rebalance();
            ++v42;
            goto LABEL_19;
          }
          goto LABEL_21;
        }
        v15 = v9;
        if ( v40 == v9 )
          goto LABEL_17;
        v16 = std::_Rb_tree_decrement();
        v15 = (_DWORD *)v16;
        if ( *(_WORD *)(v16 + 32) < (unsigned __int16)v8 )
        {
          if ( *(_QWORD *)(v16 + 24) )
            v15 = v9;
          else
            v9 = nullptr;
          goto LABEL_17;
        }
      }
LABEL_25:
      a2 = v8;
      v9 = (int *)sub_716600((__int64)v37, v8);
      goto LABEL_17;
    }
LABEL_19:
    *((_QWORD *)v9 + 5) = v7;
    v17 = *(__int16 *)(a1 + 2);
    if ( ++v7 >= v17 )
      break;
    v6 = v39;
  }
  v19 = v40;
  if ( v40 == &v38 )
  {
    v36 = v39;
    goto LABEL_53;
  }
  v20 = a1 + 4;
  v21 = 0;
  do
  {
    v25 = (size_t)v3;
    v26 = std::_Rb_tree_decrement();
    v27 = *(_DWORD *)(a1 - 8);
    v28 = v26;
    v29 = *(unsigned __int16 *)(v26 + 32);
    v30 = v29 + 1;
    if ( v29 + 1 >= v27 )
      sub_7172E0(v3, a2, v28);
    a2 = a1 + v30;
    v31 = *(unsigned __int16 *)a2;
    v32 = *(unsigned __int16 *)(a2 + (unsigned __int16)v31 + 2);
    if ( (unsigned __int16)v31 > 0x204u || v32 > 0x404 )
      sub_7172E0(v3, a2, v28);
    if ( v21 )
    {
      v33 = v31 + v32 + 4;
      v21 -= v31 + v32 + 4;
      v22 = v21;
      if ( v21 >= v30 )
        v30 = v21;
      if ( v30 >= v27 || (v25 = v27 - v30, v25 < v33) )
        sub_7172E0(v25, a2, v33);
      if ( v21 >= v27 )
        sub_7172E0(v25, a2, v33);
      memmove((void *)(a1 + v21), (const void *)a2, v33);
      v25 = (size_t)v3;
      v34 = std::_Rb_tree_decrement();
      v27 = *(_DWORD *)(a1 - 8);
      v28 = v34;
    }
    else
    {
      v21 = v29 + 1;
      v22 = (unsigned __int16)v30;
    }
    if ( v27 < v22 )
      sub_7172E0(v25, a2, v28);
    *(_WORD *)(v20 + 4LL * *(_QWORD *)(v28 + 40) + 2) = v21;
    v23 = v3;
    v3 = (int *)std::_Rb_tree_decrement();
  }
  while ( v3 != v19 );
  v35 = v20 + 4LL * *(__int16 *)(a1 + 2);
  if ( *(_DWORD *)(a1 - 8) < v22 )
    sub_7172E0(v23, a2, v24);
  v36 = v39;
LABEL_48:
  *(_WORD *)(v35 + 2) = v21;
  sub_7166C0(v36);
  return 1;
}


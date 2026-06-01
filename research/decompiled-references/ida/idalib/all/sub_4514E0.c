__int64 __fastcall sub_4514E0(__int64 *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  int flags; // eax
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  const void **v13; // r15
  void (***v14)(); // rdi
  void (*v15)(); // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 not_tail; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // r13
  bool v25; // r12
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  char **v31; // rax
  char **v32; // r13
  char *v33; // rcx
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  char **v38; // r15
  unsigned __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  _BOOL8 v42; // rdi
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  bool v46; // zf
  char **v47; // rax
  char **v48; // rax
  unsigned __int64 *v49; // rax
  const void **v50; // rcx
  const void **v51; // rax
  const void **v52; // rbx
  void (***v53)(); // rdi
  void (*v54)(); // rax
  unsigned int v55; // eax
  __int64 v56; // rax
  void *v57; // rdi
  void *v58; // rbx
  char **v59; // [rsp+0h] [rbp-98h]
  __int64 v60; // [rsp+8h] [rbp-90h]
  __int64 v61; // [rsp+10h] [rbp-88h]
  unsigned __int64 v62; // [rsp+20h] [rbp-78h]
  unsigned __int64 v63; // [rsp+20h] [rbp-78h]
  unsigned __int64 v64; // [rsp+20h] [rbp-78h]
  unsigned __int64 v65; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v66; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 *v67[2]; // [rsp+40h] [rbp-58h] BYREF
  char v68; // [rsp+51h] [rbp-47h]
  unsigned __int64 v69; // [rsp+58h] [rbp-40h]

  v1 = a1 + 10;
  v2 = *a1;
  v3 = (_QWORD *)a1[11];
  v69 = __readfsqword(0x28u);
  v5 = a1 + 10;
  while ( v3 )
  {
    while ( 1 )
    {
      v6 = v3[2];
      if ( v2 >= v3[4] )
        break;
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v6 )
        goto LABEL_5;
    }
    v3 = (_QWORD *)v3[3];
  }
LABEL_5:
  if ( (_QWORD *)a1[12] == v5 || (v7 = std::_Rb_tree_decrement(v5), *(_QWORD *)(v7 + 40) < v2) )
  {
    flags = get_flags_ex(v2, 4);
    v11 = flags & 0x1000;
    v60 = flags & 0x10000;
    if ( (flags & 0x10000) != 0 )
    {
      if ( (flags & 0x1000) == 0 )
      {
        v12 = *a1;
        if ( a1[7] == -1 )
          a1[7] = v12;
        v11 = 1;
LABEL_38:
        not_tail = prev_not_tail(v12);
        v20 = not_tail;
        if ( not_tail != -1 )
        {
          v21 = a1[4];
          *a1 = not_tail;
          if ( v21 )
          {
            if ( (int)get_func_chunknum(v21, not_tail) >= 0 )
              goto LABEL_41;
          }
          else
          {
            v49 = (unsigned __int64 *)a1[5];
            if ( v20 >= *v49 && v20 < v49[1] )
            {
LABEL_41:
              v22 = *((_DWORD *)a1 + 7);
              v23 = *((_DWORD *)a1 + 16);
              if ( !v22 || v23 < v22 )
              {
                v50 = (const void **)*a1;
                *((_DWORD *)a1 + 16) = v23 + 1;
                v51 = (const void **)a1[17];
                if ( !v51 )
                  goto LABEL_109;
                v52 = (const void **)(a1 + 16);
                do
                {
                  if ( v51[4] >= v50 )
                  {
                    v52 = v51;
                    v51 = (const void **)v51[2];
                  }
                  else
                  {
                    v51 = (const void **)v51[3];
                  }
                }
                while ( v51 );
                if ( v52 != (const void **)(a1 + 16) && v50 >= v52[4] )
                {
                  combine_regs_jpt(a1[2], (char **)a1[1], v52 + 5, v50);
                  v55 = *((_DWORD *)v52 + 16);
                  if ( v55 < *((_DWORD *)a1 + 16) )
                    *((_DWORD *)a1 + 16) = v55;
                  v56 = std::_Rb_tree_rebalance_for_erase(v52, a1 + 16);
                  v57 = *(void **)(v56 + 40);
                  v58 = (void *)v56;
                  if ( v57 )
                  {
                    *(_QWORD *)(v56 + 48) = 0;
                    qfree(v57);
                  }
                  operator delete(v58, 0x48u);
                  --a1[20];
                }
                else
                {
LABEL_109:
                  v53 = (void (***)())a1[2];
                  v54 = **v53;
                  if ( v54 != nullsub_63 )
                    ((void (__fastcall *)(void (***)(), __int64 *, _QWORD, const void **))v54)(v53, a1, 0, v50);
                }
                return 21;
              }
            }
          }
        }
LABEL_43:
        v24 = a1[7];
        v25 = v11 == 1;
        goto LABEL_45;
      }
      v11 = 1;
    }
    else
    {
      if ( (flags & 0x1000) == 0 )
      {
        v24 = a1[7];
        v25 = 0;
        if ( v24 != -1 )
        {
LABEL_45:
          v26 = (_QWORD *)a1[11];
          if ( v26 )
          {
            v27 = *a1;
            v28 = v1;
            do
            {
              while ( 1 )
              {
                v29 = v26[2];
                v30 = v26[3];
                if ( v26[4] < v27 )
                  break;
                v28 = v26;
                v26 = (_QWORD *)v26[2];
                if ( !v29 )
                  goto LABEL_50;
              }
              v26 = (_QWORD *)v26[3];
            }
            while ( v30 );
LABEL_50:
            if ( v1 != v28 && v27 >= v28[4] )
            {
LABEL_53:
              v28[5] = v24;
              result = sub_4512E0((__int64)a1);
              if ( (_DWORD)result != 18 )
                return result;
              if ( !v25 )
                return result;
              result = 18;
              if ( a1[20] )
                return result;
              return 21;
            }
          }
          else
          {
            v28 = v1;
          }
          v67[0] = (unsigned __int64 *)a1;
          v28 = sub_44A1C0(a1 + 9, v28, v67);
          goto LABEL_53;
        }
        a1[7] = *a1;
        goto LABEL_43;
      }
      v11 = 0;
    }
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 || !(unsigned __int8)xrefblk_t_first_to(v67, *a1, 5) )
    {
LABEL_34:
      if ( a1[7] == -1 )
        a1[7] = *a1;
      if ( !v60 )
        goto LABEL_43;
      v12 = *a1;
      goto LABEL_38;
    }
    v59 = (char **)(a1 + 16);
    while ( 1 )
    {
      if ( (unsigned __int8)(v68 - 18) <= 1u )
      {
        if ( *((_BYTE *)a1 + 24) && (v11 || (int)get_flags_ex(v67[0], 4) < 0) )
          return 0;
        v13 = (const void **)v67[0];
        v14 = (void (***)())a1[2];
        ++v11;
        v66 = v67[0];
        v15 = **v14;
        if ( v15 != nullsub_63 )
        {
          ((void (__fastcall *)(void (***)(), unsigned __int64 **, __int64))v15)(v14, &v66, 1);
          v13 = (const void **)v66;
        }
        v16 = (_QWORD *)a1[11];
        v17 = v1;
        while ( v16 )
        {
          while ( 1 )
          {
            v18 = v16[2];
            if ( (unsigned __int64)v13 >= v16[4] )
              break;
            v17 = v16;
            v16 = (_QWORD *)v16[2];
            if ( !v18 )
              goto LABEL_31;
          }
          v16 = (_QWORD *)v16[3];
        }
LABEL_31:
        if ( (_QWORD *)a1[12] == v17 || *(_QWORD *)(std::_Rb_tree_decrement(v17) + 40) < (unsigned __int64)v13 )
          break;
      }
LABEL_33:
      if ( !(unsigned __int8)xrefblk_t_next_to(v67) )
        goto LABEL_34;
    }
    v31 = (char **)a1[17];
    if ( !v31 )
      goto LABEL_87;
    v32 = (char **)(a1 + 16);
    do
    {
      while ( 1 )
      {
        v33 = v31[2];
        v34 = v31[3];
        if ( v31[4] < (char *)v13 )
          break;
        v32 = v31;
        v31 = (char **)v31[2];
        if ( !v33 )
          goto LABEL_64;
      }
      v31 = (char **)v31[3];
    }
    while ( v34 );
LABEL_64:
    if ( v59 == v32 )
    {
LABEL_87:
      v61 = (__int64)(a1 + 15);
      v45 = operator new(0x48u);
      v37 = (unsigned __int64)v66;
      v46 = a1[20] == 0;
      *(_QWORD *)(v45 + 40) = 0;
      v38 = (char **)v45;
      *(_QWORD *)(v45 + 32) = v37;
      *(_DWORD *)(v45 + 64) = -1;
      *(_OWORD *)(v45 + 48) = 0;
      if ( v46 || (v40 = a1[19], v32 = nullptr, *(_QWORD *)(v40 + 32) >= v37) )
      {
        v63 = v37;
        v47 = (char **)sub_44A040(v61, v37);
        v37 = v63;
        v32 = v47;
      }
LABEL_71:
      if ( v40 )
      {
        if ( v32 || v59 == (char **)v40 )
        {
          v42 = 1;
LABEL_75:
          v32 = v38;
          std::_Rb_tree_insert_and_rebalance(v42, v38, v40, v59);
          ++*(_QWORD *)(v61 + 40);
LABEL_76:
          v13 = (const void **)v66;
LABEL_77:
          combine_regs_jpt(a1[2], v32 + 5, (const void **)a1[1], v13);
          v43 = *((_DWORD *)a1 + 16);
          if ( v43 < *((_DWORD *)v32 + 16) )
            *((_DWORD *)v32 + 16) = v43;
          goto LABEL_33;
        }
        v39 = *(_QWORD *)(v40 + 32);
LABEL_100:
        v42 = v37 < v39;
        goto LABEL_75;
      }
LABEL_80:
      if ( v38 )
        operator delete(v38, 0x48u);
      goto LABEL_76;
    }
    if ( v13 >= (const void **)v32[4] )
      goto LABEL_77;
    v61 = (__int64)(a1 + 15);
    v35 = operator new(0x48u);
    v37 = (unsigned __int64)v66;
    *(_QWORD *)(v35 + 40) = 0;
    v38 = (char **)v35;
    *(_QWORD *)(v35 + 32) = v37;
    *(_DWORD *)(v35 + 64) = -1;
    *(_OWORD *)(v35 + 48) = 0;
    v39 = (unsigned __int64)v32[4];
    if ( v37 < v39 )
    {
      v40 = (__int64)v32;
      if ( (char **)a1[18] == v32 )
        goto LABEL_71;
      v62 = v37;
      v41 = std::_Rb_tree_decrement(v32);
      v37 = v62;
      v40 = v41;
      if ( *(_QWORD *)(v41 + 32) < v62 )
      {
        if ( *(_QWORD *)(v41 + 24) )
          v40 = (__int64)v32;
        else
          v32 = nullptr;
        goto LABEL_71;
      }
LABEL_93:
      v64 = v37;
      v48 = (char **)sub_44A040((__int64)(a1 + 15), v37);
      v37 = v64;
      v32 = v48;
      goto LABEL_71;
    }
    if ( v39 >= v37 )
      goto LABEL_80;
    if ( (char **)a1[19] != v32 )
    {
      v65 = v37;
      v44 = std::_Rb_tree_increment(v32, v39, v36, v37);
      v37 = v65;
      v40 = v44;
      if ( v65 >= *(_QWORD *)(v44 + 32) )
        goto LABEL_93;
      if ( v32[3] )
      {
        v32 = (char **)v44;
        goto LABEL_71;
      }
    }
    v40 = (__int64)v32;
    if ( v32 )
      goto LABEL_100;
    goto LABEL_80;
  }
  v8 = a1[7];
  if ( v8 != -1 )
    *(_QWORD *)(v7 + 40) = v8;
  return sub_4512E0((__int64)a1);
}

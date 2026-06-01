__int64 __fastcall sub_43D520(unsigned int *a1)
{
  unsigned int *v1; // rbx
  unsigned int v2; // ebp
  __int64 v3; // rax
  unsigned int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 result; // rax
  int flags; // eax
  __int64 v11; // rbp
  __int64 v12; // rdi
  void (***v13)(); // rdi
  unsigned int v14; // r15d
  void (**v15)(); // rax
  void (*v16)(); // rax
  __int64 v17; // rax
  unsigned int *v18; // rdi
  __int64 v19; // rcx
  unsigned int not_tail; // eax
  unsigned int v21; // esi
  __int64 v22; // rdi
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // r13d
  bool v26; // r12
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // ecx
  void *v38; // r15
  unsigned int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  bool v47; // zf
  unsigned int *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int *v51; // rbx
  void (***v52)(); // rdi
  void (*v53)(); // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  void *v56; // rdi
  void *v57; // rbx
  __int64 v58; // [rsp+10h] [rbp-78h]
  __int64 v59; // [rsp+18h] [rbp-70h]
  unsigned int v60; // [rsp+28h] [rbp-60h]
  unsigned int v61; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v62; // [rsp+34h] [rbp-54h] BYREF
  unsigned int *v63; // [rsp+38h] [rbp-50h] BYREF
  char v64; // [rsp+41h] [rbp-47h]
  unsigned __int64 v65; // [rsp+48h] [rbp-40h]

  v1 = a1 + 18;
  v2 = *a1;
  v3 = *((_QWORD *)a1 + 10);
  v65 = __readfsqword(0x28u);
  v5 = a1 + 18;
  while ( v3 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      if ( v2 >= *(_DWORD *)(v3 + 32) )
        break;
      v5 = (unsigned int *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v6 )
        goto LABEL_5;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
LABEL_5:
  if ( *((unsigned int **)a1 + 11) == v5 || (v7 = std::_Rb_tree_decrement(), *(_DWORD *)(v7 + 36) < v2) )
  {
    flags = get_flags_ex(v2, 4);
    v11 = flags & 0x1000;
    v58 = flags & 0x10000;
    if ( (flags & 0x10000) != 0 )
    {
      if ( (flags & 0x1000) == 0 )
      {
        v12 = *a1;
        if ( a1[13] == -1 )
          a1[13] = v12;
        v11 = 1;
LABEL_37:
        not_tail = prev_not_tail(v12);
        v21 = not_tail;
        if ( not_tail != -1 )
        {
          v22 = *((_QWORD *)a1 + 4);
          *a1 = not_tail;
          if ( v22 )
          {
            if ( (int)get_func_chunknum(v22, not_tail) >= 0 )
              goto LABEL_40;
          }
          else
          {
            v48 = *((unsigned int **)a1 + 5);
            if ( v21 >= *v48 && v21 < v48[1] )
            {
LABEL_40:
              v23 = a1[7];
              v24 = a1[14];
              if ( !v23 || v24 < v23 )
              {
                v49 = *a1;
                a1[14] = v24 + 1;
                v50 = *((_QWORD *)a1 + 16);
                if ( !v50 )
                  goto LABEL_104;
                v51 = a1 + 30;
                do
                {
                  if ( *(_DWORD *)(v50 + 32) >= (unsigned int)v49 )
                  {
                    v51 = (unsigned int *)v50;
                    v50 = *(_QWORD *)(v50 + 16);
                  }
                  else
                  {
                    v50 = *(_QWORD *)(v50 + 24);
                  }
                }
                while ( v50 );
                if ( a1 + 30 != v51 && (unsigned int)v49 >= v51[8] )
                {
                  combine_regs_jpt(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1), v51 + 10, v49);
                  v54 = v51[16];
                  if ( v54 < a1[14] )
                    a1[14] = v54;
                  v55 = std::_Rb_tree_rebalance_for_erase();
                  v56 = *(void **)(v55 + 40);
                  v57 = (void *)v55;
                  if ( v56 )
                  {
                    *(_QWORD *)(v55 + 48) = 0;
                    qfree(v56);
                  }
                  operator delete(v57, 0x48u);
                  --*((_QWORD *)a1 + 19);
                }
                else
                {
LABEL_104:
                  v52 = *((void (****)())a1 + 2);
                  v53 = **v52;
                  if ( v53 != nullsub_42 )
                    ((void (__fastcall *)(void (***)(), unsigned int *, _QWORD, __int64))v53)(v52, a1, 0, v49);
                }
                return 21;
              }
            }
          }
        }
LABEL_42:
        v25 = a1[13];
        v26 = v11 == 1;
        goto LABEL_44;
      }
      v11 = 1;
    }
    else
    {
      if ( (flags & 0x1000) == 0 )
      {
        v25 = a1[13];
        v26 = 0;
        if ( v25 != -1 )
        {
LABEL_44:
          v27 = *((_QWORD *)a1 + 10);
          if ( v27 )
          {
            v28 = *a1;
            v29 = (__int64)v1;
            do
            {
              while ( 1 )
              {
                v30 = *(_QWORD *)(v27 + 16);
                v31 = *(_QWORD *)(v27 + 24);
                if ( *(_DWORD *)(v27 + 32) < v28 )
                  break;
                v29 = v27;
                v27 = *(_QWORD *)(v27 + 16);
                if ( !v30 )
                  goto LABEL_49;
              }
              v27 = *(_QWORD *)(v27 + 24);
            }
            while ( v31 );
LABEL_49:
            if ( v1 != (unsigned int *)v29 && v28 >= *(_DWORD *)(v29 + 32) )
            {
LABEL_52:
              *(_DWORD *)(v29 + 36) = v25;
              result = sub_43D320((__int64)a1);
              if ( (_DWORD)result != 18 )
                return result;
              if ( !v26 )
                return result;
              result = 18;
              if ( *((_QWORD *)a1 + 19) )
                return result;
              return 21;
            }
          }
          else
          {
            v29 = (__int64)v1;
          }
          v63 = a1;
          v29 = sub_4365C0((_QWORD *)a1 + 8, v29, &v63);
          goto LABEL_52;
        }
        a1[13] = *a1;
        goto LABEL_42;
      }
      v11 = 0;
    }
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 || !(unsigned __int8)xrefblk_t_first_to(&v63, *a1, 5) )
    {
LABEL_33:
      if ( a1[13] == -1 )
        a1[13] = *a1;
      if ( !v58 )
        goto LABEL_42;
      v12 = *a1;
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v64 - 18) <= 1u )
      {
        if ( *((_BYTE *)a1 + 24) && (v11 || (int)get_flags_ex((unsigned int)v63, 4) < 0) )
          return 0;
        v13 = *((void (****)())a1 + 2);
        v14 = (unsigned int)v63;
        ++v11;
        v15 = *v13;
        v62 = (unsigned int)v63;
        v16 = *v15;
        if ( v16 != nullsub_42 )
        {
          ((void (__fastcall *)(void (***)(), unsigned int *, __int64))v16)(v13, &v62, 1);
          v14 = v62;
        }
        v17 = *((_QWORD *)a1 + 10);
        v18 = v1;
        while ( v17 )
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v17 + 16);
            if ( v14 >= *(_DWORD *)(v17 + 32) )
              break;
            v18 = (unsigned int *)v17;
            v17 = *(_QWORD *)(v17 + 16);
            if ( !v19 )
              goto LABEL_30;
          }
          v17 = *(_QWORD *)(v17 + 24);
        }
LABEL_30:
        if ( *((unsigned int **)a1 + 11) == v18 || *(_DWORD *)(std::_Rb_tree_decrement() + 36) < v14 )
          break;
      }
LABEL_32:
      if ( !(unsigned __int8)xrefblk_t_next_to(&v63) )
        goto LABEL_33;
    }
    v32 = *((_QWORD *)a1 + 16);
    if ( !v32 )
      goto LABEL_83;
    v33 = (__int64)(a1 + 30);
    do
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)(v32 + 16);
        v35 = *(_QWORD *)(v32 + 24);
        if ( *(_DWORD *)(v32 + 32) < v14 )
          break;
        v33 = v32;
        v32 = *(_QWORD *)(v32 + 16);
        if ( !v34 )
          goto LABEL_63;
      }
      v32 = *(_QWORD *)(v32 + 24);
    }
    while ( v35 );
LABEL_63:
    if ( a1 + 30 == (unsigned int *)v33 )
    {
LABEL_83:
      v59 = (__int64)(a1 + 28);
      v45 = operator new(0x48u);
      v46 = v62;
      v47 = *((_QWORD *)a1 + 19) == 0;
      *(_QWORD *)(v45 + 40) = 0;
      v38 = (void *)v45;
      *(_DWORD *)(v45 + 32) = v46;
      *(_DWORD *)(v45 + 64) = -1;
      *(_OWORD *)(v45 + 48) = 0;
      if ( v47 || (v40 = *((_QWORD *)a1 + 18), v33 = 0, *(_DWORD *)(v40 + 32) >= v46) )
        v33 = sub_436440(v59, v46);
LABEL_70:
      if ( v40 )
      {
LABEL_71:
        v33 = (__int64)v38;
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v59 + 40);
LABEL_72:
        v14 = v62;
LABEL_73:
        combine_regs_jpt(*((_QWORD *)a1 + 2), v33 + 40, *((_QWORD *)a1 + 1), v14);
        v43 = a1[14];
        if ( v43 < *(_DWORD *)(v33 + 64) )
          *(_DWORD *)(v33 + 64) = v43;
        goto LABEL_32;
      }
LABEL_76:
      if ( v38 )
        operator delete(v38, 0x48u);
      goto LABEL_72;
    }
    if ( v14 >= *(_DWORD *)(v33 + 32) )
      goto LABEL_73;
    v59 = (__int64)(a1 + 28);
    v36 = operator new(0x48u);
    v37 = v62;
    *(_QWORD *)(v36 + 40) = 0;
    v38 = (void *)v36;
    *(_DWORD *)(v36 + 32) = v37;
    *(_DWORD *)(v36 + 64) = -1;
    *(_OWORD *)(v36 + 48) = 0;
    v39 = *(_DWORD *)(v33 + 32);
    if ( v37 < v39 )
    {
      v40 = v33;
      if ( *((_QWORD *)a1 + 17) == v33 )
        goto LABEL_70;
      v60 = v37;
      v41 = std::_Rb_tree_decrement();
      v42 = v60;
      v40 = v41;
      if ( *(_DWORD *)(v41 + 32) < v60 )
      {
        if ( *(_QWORD *)(v41 + 24) )
          v40 = v33;
        else
          v33 = 0;
        goto LABEL_70;
      }
LABEL_89:
      v33 = sub_436440((__int64)(a1 + 28), v42);
      goto LABEL_70;
    }
    if ( v39 >= v37 )
      goto LABEL_76;
    if ( *((_QWORD *)a1 + 18) != v33 )
    {
      v61 = v37;
      v44 = std::_Rb_tree_increment();
      v42 = v61;
      v40 = v44;
      if ( v61 >= *(_DWORD *)(v44 + 32) )
        goto LABEL_89;
      if ( *(_QWORD *)(v33 + 24) )
      {
        v33 = v44;
        goto LABEL_70;
      }
    }
    if ( v33 )
      goto LABEL_71;
    goto LABEL_76;
  }
  v8 = a1[13];
  if ( v8 != -1 )
    *(_DWORD *)(v7 + 36) = v8;
  return sub_43D320((__int64)a1);
}


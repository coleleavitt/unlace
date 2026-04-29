__int64 __fastcall sub_380DC0(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  unsigned __int64 v4; // r15
  _QWORD *v6; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  char tinfo; // al
  __int64 not_tail; // rcx
  __int64 func; // rax
  __int16 v18; // ax
  __int64 v19; // rdx
  char v20; // al
  int v21; // r14d
  __int64 v22; // rdi
  __int64 (*v23)(); // rax
  __int64 v24; // r15
  int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r14
  bool v32; // dl
  __int64 v33; // rax
  char v35; // cl
  int flags; // eax
  int aflags; // eax
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  bool v49; // r14
  __int64 v50; // rax
  char v51; // dl
  char tinfo_property; // al
  unsigned __int64 v53; // rcx
  unsigned __int64 tinfo_size; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // r14
  char v60; // al
  char v61; // al
  __int64 v62; // [rsp+0h] [rbp-88h]
  bool v63; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+8h] [rbp-80h]
  __int64 v65; // [rsp+8h] [rbp-80h]
  unsigned __int64 v66; // [rsp+8h] [rbp-80h]
  unsigned __int64 v67; // [rsp+8h] [rbp-80h]
  bool v68; // [rsp+8h] [rbp-80h]
  unsigned __int64 v69; // [rsp+8h] [rbp-80h]
  __int64 v70; // [rsp+10h] [rbp-78h]
  unsigned __int64 v71; // [rsp+18h] [rbp-70h] BYREF
  __int64 v72; // [rsp+20h] [rbp-68h] BYREF
  __int64 v73; // [rsp+28h] [rbp-60h] BYREF
  __int64 *v74[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(_QWORD **)(a1 + 8);
  v71 = a2;
  v74[3] = (__int64 *)__readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_7;
  v8 = 24;
  v9 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
LABEL_3:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 24);
      v8 = v9 + 24;
      if ( a2 < v10 )
      {
        v9 = *(_QWORD *)(v9 + 8);
        goto LABEL_3;
      }
      if ( v10 >= a2 )
        break;
      v9 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_7;
    }
    if ( v6 == (_QWORD *)v9 )
      goto LABEL_7;
  }
  if ( (*(_BYTE *)(v8 + 56) & 0x3F) == 0x30 )
  {
    v6 = (_QWORD *)v9;
  }
  else
  {
    if ( !a4 || sub_32CEA0((_QWORD *)(v9 + 80), *(_QWORD *)a1, a2) )
      return v8 + 8;
    v4 = v71;
    v6 = (_QWORD *)v9;
  }
LABEL_7:
  v11 = *(_QWORD *)(a1 + 40);
  v62 = a1 + 32;
  if ( !v11 )
    goto LABEL_14;
  v12 = a1 + 32;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( *(_QWORD *)(v11 + 32) < v4 )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        goto LABEL_12;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v14 );
LABEL_12:
  if ( v62 == v12 || v4 < *(_QWORD *)(v12 + 32) )
  {
LABEL_14:
    v72 = 0;
    tinfo = get_tinfo(&v72, v4);
    not_tail = v71;
    if ( tinfo && (_BYTE)v72 )
      goto LABEL_46;
    func = get_func(v71);
    if ( func && *(_QWORD *)func == v71 && *(char *)(func + 16) < 0 )
    {
      v73 = -1;
      v58 = calc_thunk_func_target(func, &v73);
      v59 = v73;
      v69 = v58;
      if ( v73 != -1 )
      {
        if ( (unsigned __int8)get_tinfo(&v72, v73) && (_BYTE)v72 )
          v4 = v59;
        if ( (get_tinfo_property(v72, 2) & 0xF) == 0xA )
        {
          v74[0] = nullptr;
          v74[0] = (__int64 *)get_tinfo_property(v72, 9);
          copy_tinfo_t(&v72, v74);
          clear_tinfo_t(v74);
        }
      }
      v20 = v72;
      if ( !(_BYTE)v72 && v69 != -1 )
      {
        v35 = get_tinfo(&v72, v69);
        v20 = v72;
        if ( v35 )
        {
          not_tail = v71;
          v4 = v69;
          if ( (_BYTE)v72 )
          {
LABEL_46:
            flags = get_flags_ex(not_tail, 4);
            if ( (flags & 0x600) == 0x400
              && (flags & 0xF0000000) == 0x50000000
              && (get_tinfo_property(v72, 2) & 0xF) != 0xB
              && (get_tinfo_property(v72, 2) & 0xF) != 0xC )
            {
              v74[0] = nullptr;
              v74[1] = nullptr;
              copy_tinfo_t(v74, &v72);
              create_tinfo(&v72, 11, 11, v74);
              clear_tinfo_t(v74);
            }
            aflags = get_aflags(v4);
            v21 = aflags & 0x2000000;
            if ( (aflags & 0x2000000) != 0 )
            {
              v21 = 0;
            }
            else
            {
              v38 = aflags & 0xC2000000;
              if ( v38 != -1073741824 )
              {
                v21 = 2;
                if ( v38 != 0x40000000 )
                  v21 = 2 * (v38 == 0x80000000) + 1;
              }
            }
            if ( !sub_32CEA0(&v72, *(_QWORD *)a1, v71) )
            {
              v55 = sub_36A440(a1 + 24, v71, v39, v40, v41);
              if ( v56 )
              {
                v68 = v62 == v56 || v55 != nullptr;
                if ( !v68 )
                  v68 = v71 < *(_QWORD *)(v56 + 32);
                v70 = v56;
                v57 = operator new(0x28u);
                *(_QWORD *)(v57 + 32) = v71;
                std::_Rb_tree_insert_and_rebalance(v68, v57, v70, v62);
                ++*(_QWORD *)(a1 + 64);
              }
              clear_tinfo_t(&v72);
            }
            if ( (_BYTE)v72 )
              goto LABEL_53;
            not_tail = v71;
LABEL_24:
            v22 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
            v23 = *(__int64 (**)())(*(_QWORD *)v22 + 152LL);
            if ( v23 != sub_3393C0 )
            {
              ((void (__fastcall *)(__int64, __int64, __int64 *))v23)(v22, not_tail, &v72);
              if ( (_BYTE)v72 )
              {
LABEL_53:
                v24 = v71;
                a3 = v21;
LABEL_54:
                if ( !sub_32CEA0(&v72, *(_QWORD *)a1, v24) )
                {
                  v47 = sub_36A440(a1 + 24, v71, v42, v43, v44);
                  if ( v48 )
                  {
                    v49 = v62 == v48 || v47 != nullptr;
                    if ( !v49 )
                      v49 = v71 < *(_QWORD *)(v48 + 32);
                    v64 = v48;
                    v50 = operator new(0x28u);
                    *(_QWORD *)(v50 + 32) = v71;
                    std::_Rb_tree_insert_and_rebalance(v49, v50, v64, v62);
                    ++*(_QWORD *)(a1 + 64);
                  }
                  v74[0] = (_QWORD *)&dword_30;
                  copy_tinfo_t(&v72, v74);
                  clear_tinfo_t(v74);
                }
                v11 = (unsigned __int64)(v6 + 4);
                if ( *(_QWORD **)(a1 + 8) == v6 )
                {
                  v74[0] = (__int64 *)&v71;
                  v11 = sub_37F290((__m128i *)(a1 + 8), &v71, v74) + 32;
                }
                v45 = v72;
                v46 = *(_QWORD *)(v11 + 48);
                *(_DWORD *)(v11 + 56) = a3;
                *(_QWORD *)(v11 + 48) = v45;
                v72 = v46;
                clear_tinfo_t(&v72);
                return v11;
              }
              not_tail = v71;
            }
            sub_338C40(not_tail, (__int64)&v72);
            v24 = v71;
            if ( (_BYTE)v72 )
            {
              a3 = v21;
            }
            else
            {
              if ( a3 == 3 )
                v25 = guess_tinfo(&v72, v71);
              else
                v25 = sub_338F00(*(_QWORD *)a1, v71, &v72);
              if ( v25 )
              {
                v24 = v71;
                v29 = sub_36A440(a1 + 72, v71, v26, v27, v28);
                v31 = v30;
                if ( v30 )
                {
                  v32 = 1;
                  if ( !v29 && v31 != a1 + 80 )
                    v32 = v71 < *(_QWORD *)(v31 + 32);
                  v63 = v32;
                  v33 = operator new(0x28u);
                  *(_QWORD *)(v33 + 32) = v71;
                  std::_Rb_tree_insert_and_rebalance(v63, v33, v31, a1 + 80);
                  ++*(_QWORD *)(a1 + 112);
                  v24 = v71;
                }
              }
              else
              {
                v74[0] = (_QWORD *)&dword_30;
                copy_tinfo_t(&v72, v74);
                clear_tinfo_t(v74);
                v24 = v71;
              }
              if ( a3 <= 1 )
                a3 = 3;
            }
            goto LABEL_54;
          }
LABEL_23:
          v21 = 1;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v18 = get_flags_ex(v71, 4);
      not_tail = v71;
      if ( (v18 & 0x600) == 0x200 )
        not_tail = prev_not_tail(v71, 4, v19);
      if ( v71 == not_tail )
      {
        v20 = v72;
        goto LABEL_22;
      }
      v65 = not_tail;
      v51 = get_tinfo(&v72, not_tail);
      v20 = v72;
      if ( !v51 )
      {
        not_tail = v71;
LABEL_22:
        if ( v20 )
          goto LABEL_46;
        goto LABEL_23;
      }
      not_tail = v71;
      if ( !(_BYTE)v72 )
        goto LABEL_23;
      tinfo_property = get_tinfo_property(v72, 2);
      v53 = v65;
      if ( (tinfo_property & 0x2F) != 0xD && (v60 = get_tinfo_property(v72, 2), v53 = v65, (v60 & 0xF) != 0xB)
        || (v66 = v53, tinfo_size = get_tinfo_size(0, v72, 0), v53 = v66, v71 - v66 >= tinfo_size)
        || (v61 = sub_334D70(&v72, v71 - v66, 3), v53 = v66, !v61) )
      {
        v67 = v53;
        clear_tinfo_t(&v72);
        v20 = v72;
        v4 = v67;
        not_tail = v71;
        goto LABEL_22;
      }
      v20 = v72;
      v4 = v66;
    }
    not_tail = v71;
    goto LABEL_22;
  }
  return v11;
}

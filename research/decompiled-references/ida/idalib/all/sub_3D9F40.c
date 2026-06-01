void *__fastcall sub_3D9F40(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned __int64 a6,
        _QWORD **a7)
{
  unsigned __int64 v9; // r12
  __int64 v12; // rdi
  _QWORD *v13; // rdi
  int v14; // esi
  __int64 v16; // rax
  _QWORD *v17; // r8
  int v18; // ebx
  unsigned __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rsi
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  unsigned __int64 v25; // rcx
  _QWORD *v26; // r13
  _QWORD *v27; // rbx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // r15
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // r13
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  int v37; // ebx
  unsigned __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 *v40; // rdi
  _BYTE *v41; // rax
  unsigned __int64 v42; // rcx
  bool v43; // al
  _QWORD *i; // rax
  __int64 v45; // r8
  __int64 v46; // rsi
  _QWORD *v47; // rdi
  void *v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rbx
  _QWORD *v51; // r14
  __int64 v52; // rbp
  unsigned __int64 v53; // r13
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned int v57; // [rsp+18h] [rbp-88h]
  _QWORD *v58; // [rsp+18h] [rbp-88h]
  __int64 v59; // [rsp+20h] [rbp-80h]
  unsigned __int64 v60; // [rsp+30h] [rbp-70h] BYREF
  __int128 v61; // [rsp+38h] [rbp-68h] BYREF
  char v62; // [rsp+50h] [rbp-50h]
  unsigned __int64 v63; // [rsp+60h] [rbp-40h]

  v9 = a6;
  v12 = *a1;
  v63 = __readfsqword(0x28u);
  v57 = a3;
  if ( (unsigned __int8)sub_51A9E0(v12, a2, a3, a4, (_DWORD)a5, a6, 0) )
    return (void *)(v63 - __readfsqword(0x28u));
  v13 = a7[7];
  if ( v13 == (_QWORD *)a2 && a3 == 83 )
  {
    v14 = *((_DWORD *)a7 + 16);
    if ( v14 == -1 )
    {
      v43 = (unsigned __int64)(a4 - 12288) <= 0xFFF;
    }
    else
    {
      if ( (unsigned __int64)(a4 - 36864) > 0xFFFFF )
      {
LABEL_10:
        if ( (unsigned __int64)a7[2] > 1 )
        {
LABEL_17:
          v59 = *a1;
          v16 = node2ea(v13);
          v17 = nullptr;
          if ( (unsigned __int64)a7[5] > 1 )
            v17 = a7[4];
          sub_696100(v59, v16, *((unsigned int *)a7 + 16), a7[1], v17);
          a7[2] = nullptr;
          a7[5] = nullptr;
          if ( a7[34] != (_QWORD *)a2 )
            goto LABEL_6;
          goto LABEL_7;
        }
LABEL_11:
        if ( (_QWORD *)a2 != a7[34] )
          a7[34] = (_QWORD *)-1LL;
LABEL_13:
        if ( a4 == 37 && v9 == 4 )
        {
          v37 = *(_DWORD *)a5;
          v38 = sub_3BDE50(a1, a2);
          v39 = (__int64 *)a1[193];
          v60 = v38;
          v40 = a1 + 192;
          if ( !v39 )
            goto LABEL_83;
          do
          {
            if ( v39[4] >= v38 )
            {
              v40 = v39;
              v39 = (__int64 *)v39[2];
            }
            else
            {
              v39 = (__int64 *)v39[3];
            }
          }
          while ( v39 );
          if ( a1 + 192 == v40 || v38 < v40[4] )
          {
LABEL_83:
            *(_QWORD *)&v61 = &v60;
            v40 = sub_3D8E40(a1 + 191, v40, (unsigned __int64 **)&v61);
          }
          *((_DWORD *)v40 + 10) = v37;
        }
        if ( (unsigned __int8)sub_41CBA0(a1, a2, a4, a5, v9)
          || (unsigned __int8)sub_507520(*a1, a2, a4, a5, v9)
          || (unsigned __int8)sub_52CF10(*a1, a2, a4, a5, v9) )
        {
          return (void *)(v63 - __readfsqword(0x28u));
        }
        if ( *((_BYTE *)a7 + 232) )
        {
          switch ( a4 )
          {
            case 5LL:
              v30 = a7 + 26;
              goto LABEL_52;
            case 27LL:
              v30 = a7 + 23;
              goto LABEL_52;
            case 4LL:
              v30 = a7 + 20;
LABEL_52:
              v31 = node2ea(a2);
              v61 = 0;
              getinf_buf(26, &v61, 16);
              if ( v31 < (unsigned __int64)v61 || v31 >= *((_QWORD *)&v61 + 1) )
              {
                v49 = v30[1];
                if ( v30[2] < (unsigned __int64)(v49 + 1) )
                {
                  *v30 = qvector_reserve(v30, *v30, v49 + 1, 8);
                  v49 = v30[1];
                }
                *(_QWORD *)(*v30 + 8 * v49) = v31;
                ++v30[1];
                return (void *)(v63 - __readfsqword(0x28u));
              }
              goto LABEL_54;
          }
        }
        if ( (unsigned __int64)(a4 - 12288) > 0xFFF )
        {
          if ( (unsigned __int64)(a4 - 36864) > 0xFFFFF )
          {
            if ( a4 == 28 )
              return (void *)sub_3D9720((__int64 *)a7, a2, (__int64)a5, v9);
LABEL_54:
            if ( (dword_2CCC3C8 & 0x400000) != 0 && (unsigned __int64)(a4 - 9) <= 2 )
            {
              v32 = a4 - 9;
              v33 = node2ea(a2);
              v34 = sub_3BE900(*a7, v33, 0);
              if ( (unsigned __int8)is_off(v34, v32) )
              {
                sub_4E1C10(&v61, a5, v9);
                if ( (v62 & 0x4F) == 0 || (unsigned __int8)((v62 & 0x4F) - 7) <= 1u )
                {
                  v35 = a7[18];
                  if ( a7[19] < (_QWORD *)((char *)v35 + 1) )
                  {
                    a7[17] = (_QWORD *)qvector_reserve(a7 + 17, a7[17], (char *)v35 + 1, 16);
                    v35 = a7[18];
                  }
                  v36 = (__int64)&a7[17][2 * (_QWORD)v35];
                  a7[18] = (_QWORD *)((char *)v35 + 1);
                  *(_QWORD *)v36 = v33;
                  *(_BYTE *)(v36 + 8) = v32;
                }
              }
            }
            else if ( a4 == 8 )
            {
              return (void *)sub_3D9930((__int64)a7, a2, (__int64)a5, v9);
            }
            return (void *)(v63 - __readfsqword(0x28u));
          }
          if ( *(_QWORD *)(a1[3] + 16) < a2 || !sub_3BD540((__int64)a1, a2) )
            return (void *)(v63 - __readfsqword(0x28u));
          v55 = ((unsigned __int64)(a4 - 36864) >> 12) % 0xFF;
          if ( a7[7] != (_QWORD *)a2 || *((_DWORD *)a7 + 16) != (_DWORD)v55 )
          {
            if ( (a4 & 0xFFF) != 0 )
              return (void *)(v63 - __readfsqword(0x28u));
            a7[7] = (_QWORD *)a2;
            *((_DWORD *)a7 + 16) = v55;
LABEL_114:
            if ( v9 && !a5[v9 - 1] )
              --v9;
            goto LABEL_117;
          }
        }
        else
        {
          v50 = node2ea(a2);
          if ( (get_aflags(v50) & 0x800) == 0 )
          {
            v61 = 0;
            getinf_buf(26, &v61, 16);
            if ( v50 < (unsigned __int64)v61
              || v50 >= *((_QWORD *)&v61 + 1)
              || (_QWORD *)v50 == a7[9] && *((_BYTE *)a7 + 80) )
            {
              return (void *)(v63 - __readfsqword(0x28u));
            }
          }
          if ( a7[7] != (_QWORD *)a2 )
          {
            if ( a4 != 12288 )
              return (void *)(v63 - __readfsqword(0x28u));
            a7[7] = (_QWORD *)a2;
            *((_DWORD *)a7 + 16) = -1;
            a7[2] = nullptr;
            a7[5] = nullptr;
            goto LABEL_114;
          }
        }
        if ( v9 && !a5[v9 - 1] )
          --v9;
        if ( (a4 & 1) != 0 )
        {
          v51 = a7 + 4;
          goto LABEL_118;
        }
LABEL_117:
        v51 = a7 + 1;
LABEL_118:
        v52 = (v51[1] == 0) + v51[1] - 1LL;
        v53 = v9 + (v51[1] == 0) + v51[1];
        if ( v51[2] < v53 )
          *v51 = qvector_reserve(v51, *v51, v9 + (v51[1] == 0) + v51[1], 1);
        v54 = *v51;
        v51[1] = v53;
        *(_BYTE *)(v54 + v9 + v52) = 0;
        return memmove((void *)(v52 + *v51), a5, v9);
      }
      v43 = v14 == ((unsigned __int64)(a4 - 36864) >> 12) % 0xFF;
    }
    if ( v43 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (unsigned __int64)a7[2] > 1 )
    goto LABEL_17;
  if ( a7[34] != (_QWORD *)a2 )
LABEL_6:
    a7[34] = (_QWORD *)-1LL;
LABEL_7:
  switch ( a3 )
  {
    case 'A':
      if ( a4 == 8 && v9 == 8 )
      {
        v18 = *(_DWORD *)a5;
        a7[34] = (_QWORD *)a2;
        v19 = sub_3BDE50(a1, a2);
        v20 = (__int64 *)a1[187];
        v60 = v19;
        v21 = a1 + 186;
        if ( !v20 )
          goto LABEL_79;
        do
        {
          if ( v20[4] >= v19 )
          {
            v21 = v20;
            v20 = (__int64 *)v20[2];
          }
          else
          {
            v20 = (__int64 *)v20[3];
          }
        }
        while ( v20 );
        if ( a1 + 186 == v21 || v19 < v21[4] )
        {
LABEL_79:
          *(_QWORD *)&v61 = &v60;
          v21 = sub_3D8E40(a1 + 185, v21, (unsigned __int64 **)&v61);
        }
        *((_DWORD *)v21 + 10) = v18;
      }
      return (void *)(v63 - __readfsqword(0x28u));
    case 'D':
    case 'X':
    case 'd':
    case 'x':
      return (void *)sub_4118B0(a1, v57, a2, a4, a5, v9);
    case 'N':
      a7[9] = (_QWORD *)sub_3BDE50(a1, a2);
      if ( (int)v9 <= 1 )
        goto LABEL_42;
      if ( *a5 != 36 || a5[1] != 32 )
        goto LABEL_32;
      v41 = a5 + 2;
      v42 = (unsigned __int64)&a5[(int)v9];
      if ( (unsigned __int64)(a5 + 2) >= v42 )
        goto LABEL_34;
      break;
    case 'S':
      goto LABEL_13;
    case 'T':
      return (void *)sub_69ED00(*a1, a2, a4, a5, v9);
    default:
      return (void *)(v63 - __readfsqword(0x28u));
  }
  while ( *v41 != 46 )
  {
    if ( (_BYTE *)v42 == ++v41 )
      goto LABEL_34;
  }
LABEL_32:
  if ( (int)v9 <= 5 || strncmp(a5, "$lib ", 5u) )
  {
LABEL_42:
    *((_BYTE *)a7 + 80) = 0;
    return (void *)sub_3B0390(a1, a5, v9);
  }
LABEL_34:
  v22 = (__int64)a7[34];
  *((_BYTE *)a7 + 80) = 1;
  if ( v22 != -1 )
  {
    v23 = sub_3BDE50(a1, v22);
    v24 = (_QWORD *)a1[187];
    v25 = v23;
    v58 = a1 + 186;
    if ( v24 )
    {
      v26 = a1 + 186;
      v27 = (_QWORD *)a1[187];
      while ( 1 )
      {
        v28 = v27[4];
        if ( v28 < v25 )
        {
          v27 = (_QWORD *)v27[3];
        }
        else
        {
          v29 = (_QWORD *)v27[2];
          if ( v25 >= v28 )
          {
            for ( i = (_QWORD *)v27[3]; i; i = (_QWORD *)i[3] )
            {
              while ( 1 )
              {
                v45 = i[2];
                if ( v25 >= i[4] )
                  break;
                v26 = i;
                i = (_QWORD *)i[2];
                if ( !v45 )
                  goto LABEL_95;
              }
            }
LABEL_95:
            while ( v29 )
            {
              while ( 1 )
              {
                v46 = v29[2];
                if ( v29[4] < v25 )
                  break;
                v27 = v29;
                v29 = (_QWORD *)v29[2];
                if ( !v46 )
                  goto LABEL_98;
              }
              v29 = (_QWORD *)v29[3];
            }
LABEL_98:
            if ( (_QWORD *)a1[188] == v27 && v58 == v26 )
              goto LABEL_89;
            while ( v27 != v26 )
            {
              v47 = v27;
              v27 = (_QWORD *)std::_Rb_tree_increment(v27);
              v48 = (void *)std::_Rb_tree_rebalance_for_erase(v47, v58);
              operator delete(v48, 0x30u);
              --a1[190];
            }
            goto LABEL_90;
          }
          v26 = v27;
          v27 = (_QWORD *)v27[2];
        }
        if ( !v27 )
          goto LABEL_87;
      }
    }
    v26 = a1 + 186;
LABEL_87:
    if ( (_QWORD *)a1[188] == v26 && v58 == v26 )
    {
LABEL_89:
      sub_3D9180(v24);
      a1[187] = 0;
      a1[188] = (__int64)v58;
      a1[189] = (__int64)v58;
      a1[190] = 0;
    }
LABEL_90:
    a7[34] = (_QWORD *)-1LL;
  }
  return (void *)sub_3B0390(a1, a5, v9);
}

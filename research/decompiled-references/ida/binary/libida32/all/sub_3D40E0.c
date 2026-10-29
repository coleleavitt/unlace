void *__fastcall sub_3D40E0(
        __int64 *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v9; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // ecx
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // esi
  unsigned int v22; // eax
  _QWORD *v23; // rdi
  unsigned int v24; // ecx
  _QWORD *v25; // r13
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rdx
  _QWORD *v29; // r15
  unsigned int v30; // eax
  unsigned int v31; // ebx
  unsigned __int8 v32; // r13
  unsigned int v33; // ebx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ebx
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdi
  _BYTE *v41; // rax
  unsigned __int64 v42; // rcx
  bool v43; // al
  __int64 i; // rax
  __int64 v45; // r8
  __int64 v46; // rsi
  void *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ebx
  _QWORD *v50; // r14
  __int64 v51; // rbp
  unsigned __int64 v52; // r13
  __int64 v53; // rax
  unsigned int v54; // edx
  unsigned int v56; // [rsp+18h] [rbp-78h]
  _QWORD *v57; // [rsp+18h] [rbp-78h]
  __int64 v58; // [rsp+20h] [rbp-70h]
  unsigned int v59; // [rsp+34h] [rbp-5Ch] BYREF
  unsigned int *v60; // [rsp+38h] [rbp-58h] BYREF
  char v61; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v62; // [rsp+50h] [rbp-40h]

  v9 = a6;
  v11 = *a1;
  v62 = __readfsqword(0x28u);
  v56 = a3;
  if ( (unsigned __int8)sub_502CC0(v11, a2, a3, a4, (_DWORD)a5, a6, 0) )
    return (void *)(v62 - __readfsqword(0x28u));
  v12 = *(unsigned int *)(a7 + 56);
  if ( (_DWORD)v12 == a2 && a3 == 83 )
  {
    v13 = *(_DWORD *)(a7 + 60);
    if ( v13 == -1 )
    {
      v43 = a4 - 12288 <= 0xFFF;
    }
    else
    {
      if ( a4 - 36864 > 0xFFFFF )
      {
LABEL_10:
        if ( *(_QWORD *)(a7 + 16) > 1u )
        {
LABEL_17:
          v58 = *a1;
          v15 = node2ea(v12);
          v16 = 0;
          if ( *(_QWORD *)(a7 + 40) > 1u )
            v16 = *(_QWORD *)(a7 + 32);
          sub_676390(v58, v15, *(unsigned int *)(a7 + 60), *(_QWORD *)(a7 + 8), v16);
          *(_QWORD *)(a7 + 16) = 0;
          *(_QWORD *)(a7 + 40) = 0;
          if ( *(_DWORD *)(a7 + 256) != a2 )
            goto LABEL_6;
          goto LABEL_7;
        }
LABEL_11:
        if ( a2 != *(_DWORD *)(a7 + 256) )
          *(_DWORD *)(a7 + 256) = -1;
LABEL_13:
        if ( a4 == 37 && v9 == 4 )
        {
          v37 = *(_DWORD *)a5;
          v38 = sub_3B9110(a1, a2);
          v39 = a1[187];
          v59 = v38;
          v40 = (__int64)(a1 + 186);
          if ( !v39 )
            goto LABEL_83;
          do
          {
            if ( *(_DWORD *)(v39 + 32) >= v38 )
            {
              v40 = v39;
              v39 = *(_QWORD *)(v39 + 16);
            }
            else
            {
              v39 = *(_QWORD *)(v39 + 24);
            }
          }
          while ( v39 );
          if ( a1 + 186 == (__int64 *)v40 || v38 < *(_DWORD *)(v40 + 32) )
          {
LABEL_83:
            v60 = &v59;
            v40 = sub_3D3100(a1 + 185, v40, &v60);
          }
          *(_DWORD *)(v40 + 36) = v37;
        }
        if ( (unsigned __int8)sub_409790(a1, a2, a4, a5, v9)
          || (unsigned __int8)sub_4EFF30(*a1, a2, a4, a5, v9)
          || (unsigned __int8)sub_514C80(*a1, a2, a4, a5, v9) )
        {
          return (void *)(v62 - __readfsqword(0x28u));
        }
        if ( *(_BYTE *)(a7 + 216) )
        {
          switch ( a4 )
          {
            case 5u:
              v29 = (_QWORD *)(a7 + 192);
              goto LABEL_52;
            case 0x1Bu:
              v29 = (_QWORD *)(a7 + 168);
              goto LABEL_52;
            case 4u:
              v29 = (_QWORD *)(a7 + 144);
LABEL_52:
              v30 = node2ea(a2);
              v60 = nullptr;
              v31 = v30;
              getinf_buf(26, &v60, 8);
              if ( v31 < (unsigned int)v60 || v31 >= HIDWORD(v60) )
              {
                v48 = v29[1];
                if ( v29[2] < (unsigned __int64)(v48 + 1) )
                {
                  *v29 = qvector_reserve(v29, *v29, v48 + 1, 4);
                  v48 = v29[1];
                }
                *(_DWORD *)(*v29 + 4 * v48) = v31;
                ++v29[1];
                return (void *)(v62 - __readfsqword(0x28u));
              }
              goto LABEL_54;
          }
        }
        if ( a4 - 12288 > 0xFFF )
        {
          if ( a4 - 36864 > 0xFFFFF )
          {
            if ( a4 == 28 )
              return (void *)sub_3D39D0((_QWORD **)a7, a2, (__int64)a5, v9);
LABEL_54:
            if ( (dword_2CA24C8 & 0x400000) != 0 && a4 - 9 <= 2 )
            {
              v32 = a4 - 9;
              v33 = node2ea(a2);
              v34 = sub_3B9AA0(*(_QWORD *)a7, v33, 0);
              if ( (unsigned __int8)is_off(v34, v32) )
              {
                sub_4CA5F0(&v60, a5, v9);
                if ( (v61 & 0x4F) == 0 || (unsigned __int8)((v61 & 0x4F) - 7) <= 1u )
                {
                  v35 = *(_QWORD *)(a7 + 128);
                  if ( *(_QWORD *)(a7 + 136) < (unsigned __int64)(v35 + 1) )
                  {
                    *(_QWORD *)(a7 + 120) = qvector_reserve(a7 + 120, *(_QWORD *)(a7 + 120), v35 + 1, 8);
                    v35 = *(_QWORD *)(a7 + 128);
                  }
                  v36 = *(_QWORD *)(a7 + 120) + 8 * v35;
                  *(_QWORD *)(a7 + 128) = v35 + 1;
                  *(_DWORD *)v36 = v33;
                  *(_BYTE *)(v36 + 4) = v32;
                }
              }
            }
            else if ( a4 == 8 )
            {
              return (void *)sub_3D3BD0(a7, a2, (__int64)a5, v9);
            }
            return (void *)(v62 - __readfsqword(0x28u));
          }
          if ( !sub_3B8910((__int64)a1, a2) )
            return (void *)(v62 - __readfsqword(0x28u));
          v54 = ((a4 - 36864) >> 12) % 0xFF;
          if ( *(_DWORD *)(a7 + 56) != a2 || *(_DWORD *)(a7 + 60) != v54 )
          {
            if ( (a4 & 0xFFF) != 0 )
              return (void *)(v62 - __readfsqword(0x28u));
            *(_DWORD *)(a7 + 56) = a2;
            *(_DWORD *)(a7 + 60) = v54;
LABEL_114:
            if ( v9 && !a5[v9 - 1] )
              --v9;
            goto LABEL_117;
          }
        }
        else
        {
          v49 = node2ea(a2);
          if ( (get_aflags(v49) & 0x800) == 0 )
          {
            v60 = nullptr;
            getinf_buf(26, &v60, 8);
            if ( v49 < (unsigned int)v60 || v49 >= HIDWORD(v60) || v49 == *(_DWORD *)(a7 + 64) && *(_BYTE *)(a7 + 68) )
              return (void *)(v62 - __readfsqword(0x28u));
          }
          if ( *(_DWORD *)(a7 + 56) != a2 )
          {
            if ( a4 != 12288 )
              return (void *)(v62 - __readfsqword(0x28u));
            *(_DWORD *)(a7 + 56) = a2;
            *(_DWORD *)(a7 + 60) = -1;
            *(_QWORD *)(a7 + 16) = 0;
            *(_QWORD *)(a7 + 40) = 0;
            goto LABEL_114;
          }
        }
        if ( v9 && !a5[v9 - 1] )
          --v9;
        if ( (a4 & 1) != 0 )
        {
          v50 = (_QWORD *)(a7 + 32);
          goto LABEL_118;
        }
LABEL_117:
        v50 = (_QWORD *)(a7 + 8);
LABEL_118:
        v51 = (v50[1] == 0) + v50[1] - 1LL;
        v52 = (v50[1] == 0) + v50[1] + v9;
        if ( v50[2] < v52 )
          *v50 = qvector_reserve(v50, *v50, (v50[1] == 0) + v50[1] + v9, 1);
        v53 = *v50;
        v50[1] = v52;
        *(_BYTE *)(v53 + v51 + v9) = 0;
        return memmove((void *)(v51 + *v50), a5, v9);
      }
      v43 = ((a4 - 36864) >> 12) % 0xFF == v13;
    }
    if ( v43 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(a7 + 16) > 1u )
    goto LABEL_17;
  if ( *(_DWORD *)(a7 + 256) != a2 )
LABEL_6:
    *(_DWORD *)(a7 + 256) = -1;
LABEL_7:
  switch ( a3 )
  {
    case 'A':
      if ( a4 == 8 && v9 == 4 )
      {
        v17 = *(_DWORD *)a5;
        *(_DWORD *)(a7 + 256) = a2;
        v18 = sub_3B9110(a1, a2);
        v19 = a1[181];
        v59 = v18;
        v20 = (__int64)(a1 + 180);
        if ( !v19 )
          goto LABEL_79;
        do
        {
          if ( *(_DWORD *)(v19 + 32) >= v18 )
          {
            v20 = v19;
            v19 = *(_QWORD *)(v19 + 16);
          }
          else
          {
            v19 = *(_QWORD *)(v19 + 24);
          }
        }
        while ( v19 );
        if ( a1 + 180 == (__int64 *)v20 || v18 < *(_DWORD *)(v20 + 32) )
        {
LABEL_79:
          v60 = &v59;
          v20 = sub_3D3100(a1 + 179, v20, &v60);
        }
        *(_DWORD *)(v20 + 36) = v17;
      }
      return (void *)(v62 - __readfsqword(0x28u));
    case 'D':
    case 'X':
    case 'd':
    case 'x':
      return (void *)sub_3FE5B0(a1, v56, a2, a4, a5, v9);
    case 'N':
      *(_DWORD *)(a7 + 64) = sub_3B9110(a1, a2);
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
      return (void *)sub_67E600(*a1, a2, a4, a5, v9);
    default:
      return (void *)(v62 - __readfsqword(0x28u));
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
    *(_BYTE *)(a7 + 68) = 0;
    return (void *)sub_3ABC60(a1, a5, v9);
  }
LABEL_34:
  v21 = *(_DWORD *)(a7 + 256);
  *(_BYTE *)(a7 + 68) = 1;
  if ( v21 != -1 )
  {
    v22 = sub_3B9110(a1, v21);
    v23 = (_QWORD *)a1[181];
    v24 = v22;
    v57 = a1 + 180;
    if ( v23 )
    {
      v25 = a1 + 180;
      v26 = a1[181];
      while ( 1 )
      {
        v27 = *(_DWORD *)(v26 + 32);
        if ( v27 < v24 )
        {
          v26 = *(_QWORD *)(v26 + 24);
        }
        else
        {
          v28 = *(_QWORD *)(v26 + 16);
          if ( v24 >= v27 )
          {
            for ( i = *(_QWORD *)(v26 + 24); i; i = *(_QWORD *)(i + 24) )
            {
              while ( 1 )
              {
                v45 = *(_QWORD *)(i + 16);
                if ( v24 >= *(_DWORD *)(i + 32) )
                  break;
                v25 = (_QWORD *)i;
                i = *(_QWORD *)(i + 16);
                if ( !v45 )
                  goto LABEL_95;
              }
            }
LABEL_95:
            while ( v28 )
            {
              while ( 1 )
              {
                v46 = *(_QWORD *)(v28 + 16);
                if ( *(_DWORD *)(v28 + 32) < v24 )
                  break;
                v26 = v28;
                v28 = *(_QWORD *)(v28 + 16);
                if ( !v46 )
                  goto LABEL_98;
              }
              v28 = *(_QWORD *)(v28 + 24);
            }
LABEL_98:
            if ( a1[182] == v26 && v57 == v25 )
              goto LABEL_89;
            while ( (_QWORD *)v26 != v25 )
            {
              v26 = std::_Rb_tree_increment();
              v47 = (void *)std::_Rb_tree_rebalance_for_erase();
              operator delete(v47, 0x28u);
              --a1[184];
            }
            goto LABEL_90;
          }
          v25 = (_QWORD *)v26;
          v26 = *(_QWORD *)(v26 + 16);
        }
        if ( !v26 )
          goto LABEL_87;
      }
    }
    v25 = a1 + 180;
LABEL_87:
    if ( (_QWORD *)a1[182] == v25 && v57 == v25 )
    {
LABEL_89:
      sub_3D3610(v23);
      a1[181] = 0;
      a1[182] = (__int64)v57;
      a1[183] = (__int64)v57;
      a1[184] = 0;
    }
LABEL_90:
    *(_DWORD *)(a7 + 256) = -1;
  }
  return (void *)sub_3ABC60(a1, a5, v9);
}


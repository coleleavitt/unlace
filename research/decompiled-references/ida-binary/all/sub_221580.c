unsigned __int64 __fastcall sub_221580(unsigned int *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // r14
  int *v4; // rbx
  int *v5; // r15
  unsigned __int64 v6; // rax
  int *v7; // rdx
  bool v8; // al
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  char v12; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int *i; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  int *v25; // rdi
  void *v26; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-A8h] BYREF
  int v31; // [rsp+20h] [rbp-88h] BYREF
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int128 v33; // [rsp+30h] [rbp-78h]
  int v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h]
  __int128 v36; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 30) == 0;
  v37 = __readfsqword(0x28u);
  if ( v1 && (int)sub_241C80(a1, 4105) <= 0 )
    return v37 - __readfsqword(0x28u);
  *((_BYTE *)a1 + 156) = 0;
  v3 = *(_QWORD *)(sub_2417E0(&qword_8CC120) + 16);
  if ( (dword_8BA504 & 3) != 0 && v3 != -1 )
  {
    *((_BYTE *)a1 + 154) = sub_241710(&qword_8CC120);
    *((_BYTE *)a1 + 155) = sub_241770(&qword_8CC120);
    if ( (unsigned __int8)sub_241850(&qword_8CC120) )
    {
      v15 = sub_240A80(*a1);
      v16 = v15;
      if ( v15 != -1 )
      {
        v30.m128i_i64[0] = v15;
        v17 = *((_QWORD *)a1 + 15);
        v18 = *((_QWORD *)a1 + 16);
        v30.m128i_i16[4] = 0;
        v19 = *((_QWORD *)a1 + 17);
        v20 = v18 + 1;
        if ( (unsigned __int64)&v30 < v17 || (unsigned __int64)&v30 >= v17 + 16 * v19 )
        {
          if ( v19 < v20 )
          {
            v28 = qvector_reserve(a1 + 30, v17, v20, 16);
            *((_QWORD *)a1 + 15) = v28;
            v17 = v28;
            v18 = *((_QWORD *)a1 + 16);
          }
          *(__m128i *)(v17 + 16 * v18) = _mm_load_si128(&v30);
        }
        else
        {
          if ( v19 < v20 )
          {
            v29 = qvector_reserve(a1 + 30, v17, v20, 16);
            *((_QWORD *)a1 + 15) = v29;
            v17 = v29;
            v18 = *((_QWORD *)a1 + 16);
          }
          v21 = v17 + 16 * v18;
          *(_QWORD *)v21 = v16;
          *(_WORD *)(v21 + 8) = 0;
        }
        ++*((_QWORD *)a1 + 16);
      }
    }
    else
    {
      v27 = sub_241680(&qword_8CC120);
      *((_BYTE *)a1 + 156) = v27;
      if ( v27 )
        sub_211020((__int64)a1, v3);
      else
        sub_218DC0((__int64)a1, v3);
    }
  }
  if ( qword_8CB630 )
  {
    v4 = (int *)qword_8CB630;
    v5 = &dword_8CB628;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)v4 + 4);
        if ( v6 >= v3 )
          break;
        v4 = *((int **)v4 + 3);
        if ( !v4 )
          goto LABEL_10;
      }
      v7 = *((int **)v4 + 2);
      if ( v3 >= v6 )
        break;
      v5 = v4;
      v4 = *((int **)v4 + 2);
      if ( !v7 )
      {
LABEL_10:
        v8 = v5 == &dword_8CB628;
        goto LABEL_11;
      }
    }
    for ( i = *((int **)v4 + 3); i; i = *((int **)i + 3) )
    {
      while ( 1 )
      {
        v23 = *((_QWORD *)i + 2);
        if ( v3 >= *((_QWORD *)i + 4) )
          break;
        v5 = i;
        i = *((int **)i + 2);
        if ( !v23 )
          goto LABEL_45;
      }
    }
LABEL_45:
    while ( v7 )
    {
      while ( 1 )
      {
        v24 = *((_QWORD *)v7 + 2);
        if ( *((_QWORD *)v7 + 4) < v3 )
          break;
        v4 = v7;
        v7 = *((int **)v7 + 2);
        if ( !v24 )
          goto LABEL_48;
      }
      v7 = *((int **)v7 + 3);
    }
LABEL_48:
    if ( (int *)qword_8CB638 != v4 )
      goto LABEL_52;
    if ( v5 != &dword_8CB628 )
    {
      while ( v4 != v5 )
      {
        v25 = v4;
        v4 = (int *)std::_Rb_tree_increment(v4);
        v26 = (void *)std::_Rb_tree_rebalance_for_erase(v25, &dword_8CB628);
        operator delete(v26, 0x30u);
        --qword_8CB648;
LABEL_52:
        ;
      }
      goto LABEL_14;
    }
LABEL_13:
    sub_20B720(qword_8CB630);
    qword_8CB638 = (__int64)&dword_8CB628;
    qword_8CB630 = nullptr;
    qword_8CB640 = (__int64)&dword_8CB628;
    qword_8CB648 = 0;
    goto LABEL_14;
  }
  v8 = 1;
  v5 = &dword_8CB628;
LABEL_11:
  if ( (int *)qword_8CB638 == v5 && v8 )
    goto LABEL_13;
LABEL_14:
  v9 = *a1;
  v31 = -2;
  v10 = (unsigned int)dword_8BA594;
  v33 = 0;
  v32 = -1;
  sub_23F680(v9, (unsigned int)dword_8BA594, &v31);
  if ( v32 == -1 || (*((_BYTE *)a1 + 153) & 2) == 0 )
    goto LABEL_16;
  v10 = *a1;
  v34 = -2;
  v36 = 0;
  v35 = -1;
  sub_20F720((__int64)qword_8CBAA0, (const char *)v10, dword_8BA594, (__int64)&v34);
  v14 = v35;
  if ( v35 == -1 )
  {
    v10 = (__int64)a1;
    sub_2207E0((__m128i *)qword_8CBAA0, (signed int *)a1, 0xFFFFFFFFFFFFFFFFLL, 0);
    v14 = v32;
    if ( (*((_BYTE *)a1 + 153) & 2) == 0 )
      goto LABEL_28;
    goto LABEL_62;
  }
  if ( *a1 != dword_8CB678 )
  {
    if ( (*((_BYTE *)a1 + 153) & 2) == 0 )
    {
LABEL_28:
      *((_QWORD *)a1 + 21) = v14;
      goto LABEL_29;
    }
LABEL_62:
    *((_QWORD *)a1 + 20) = v14;
  }
LABEL_29:
  if ( v34 >= -1 && v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, (const char *)v10);
  }
LABEL_16:
  v11 = sub_241540(&qword_8CC120);
  v12 = *((_BYTE *)a1 + 153);
  if ( (v12 & 4) != 0 && (dword_8BA504 & 4) != 0 )
  {
    if ( !(unsigned __int8)sub_241850(&qword_8CC120) )
    {
      v10 = v11;
      if ( (unsigned __int8)xrefblk_t_first_from(&v30, v11, 1) )
      {
        v10 = v30.m128i_i64[1];
        if ( (unsigned __int8)sub_2105C0((__int64)qword_8CBAA0, v30.m128i_u64[1]) )
          sub_211BF0(a1, v10);
      }
    }
    if ( (*((_BYTE *)a1 + 153) & 0xA) == 0 )
      goto LABEL_19;
    goto LABEL_23;
  }
  if ( (v12 & 0xA) != 0 )
  {
LABEL_23:
    if ( (dword_8BA504 & 8) != 0 )
    {
      v10 = v11;
      sub_211CF0(a1, v11);
    }
  }
LABEL_19:
  if ( v31 >= -1 && v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, (const char *)v10);
  }
  return v37 - __readfsqword(0x28u);
}

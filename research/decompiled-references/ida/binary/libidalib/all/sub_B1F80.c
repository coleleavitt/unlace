unsigned __int64 __fastcall sub_B1F80(unsigned int *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // r14
  int *v4; // rbx
  int *v5; // r15
  unsigned __int64 v6; // rax
  int *v7; // rdx
  bool v8; // al
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  char v11; // al
  int v13; // esi
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
  void *v25; // rax
  char v26; // al
  __int64 v27; // rsi
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
  if ( v1 && (int)sub_D4880(a1, 4105) <= 0 )
    return v37 - __readfsqword(0x28u);
  *((_BYTE *)a1 + 156) = 0;
  v3 = *(_QWORD *)(sub_D2680(&qword_252280) + 16);
  if ( (dword_245124 & 3) != 0 && v3 != -1 )
  {
    *((_BYTE *)a1 + 154) = sub_D25B0(&qword_252280);
    *((_BYTE *)a1 + 155) = sub_D2610(&qword_252280);
    if ( (unsigned __int8)sub_D26F0(&qword_252280) )
    {
      v15 = sub_D1780(*a1);
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
            v28 = qvector_reserve();
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
            v29 = qvector_reserve();
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
      v26 = sub_D2520(&qword_252280);
      *((_BYTE *)a1 + 156) = v26;
      if ( v26 )
        sub_A2660();
      else
        sub_AA000((__int64)a1);
    }
  }
  if ( qword_251AB0 )
  {
    v4 = (int *)qword_251AB0;
    v5 = &dword_251AA8;
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
        v8 = v5 == &dword_251AA8;
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
    if ( (int *)qword_251AB8 != v4 )
      goto LABEL_52;
    if ( v5 != &dword_251AA8 )
    {
      while ( v4 != v5 )
      {
        v4 = (int *)std::_Rb_tree_increment();
        v25 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v25, 0x30u);
        --qword_251AC8;
LABEL_52:
        ;
      }
      goto LABEL_14;
    }
LABEL_13:
    sub_9C760(qword_251AB0);
    qword_251AB8 = (__int64)&dword_251AA8;
    qword_251AB0 = nullptr;
    qword_251AC0 = (__int64)&dword_251AA8;
    qword_251AC8 = 0;
    goto LABEL_14;
  }
  v8 = 1;
  v5 = &dword_251AA8;
LABEL_11:
  if ( (int *)qword_251AB8 == v5 && v8 )
    goto LABEL_13;
LABEL_14:
  v9 = *a1;
  v31 = -2;
  v33 = 0;
  v32 = -1;
  sub_CFEA0(v9, (unsigned int)dword_245174, &v31);
  if ( v32 == -1 || (*((_BYTE *)a1 + 153) & 2) == 0 )
    goto LABEL_16;
  v13 = *a1;
  v34 = -2;
  v36 = 0;
  v35 = -1;
  sub_A0CE0((__int64)xmmword_251F20, v13, dword_245174, (__int64)&v34);
  v14 = v35;
  if ( v35 == -1 )
  {
    sub_B11C0(xmmword_251F20, (signed int *)a1, 0xFFFFFFFFFFFFFFFFLL, 0);
    v14 = v32;
    if ( (*((_BYTE *)a1 + 153) & 2) == 0 )
      goto LABEL_28;
    goto LABEL_62;
  }
  if ( *a1 != dword_251AF8 )
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
    qfree();
  }
LABEL_16:
  v10 = sub_D2300(&qword_252280);
  v11 = *((_BYTE *)a1 + 153);
  if ( (v11 & 4) != 0 && (dword_245124 & 4) != 0 )
  {
    if ( !(unsigned __int8)sub_D26F0(&qword_252280) )
    {
      if ( (unsigned __int8)xrefblk_t_first_from() )
      {
        v27 = v30.m128i_i64[1];
        if ( (unsigned __int8)sub_A1C00((__int64)xmmword_251F20, v30.m128i_u64[1]) )
          sub_A3230(a1, v27);
      }
    }
    if ( (*((_BYTE *)a1 + 153) & 0xA) == 0 )
      goto LABEL_19;
    goto LABEL_23;
  }
  if ( (v11 & 0xA) != 0 )
  {
LABEL_23:
    if ( (dword_245124 & 8) != 0 )
      sub_A3330(a1, v10);
  }
LABEL_19:
  if ( v31 >= -1 && v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return v37 - __readfsqword(0x28u);
}


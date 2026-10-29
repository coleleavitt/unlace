__int64 __fastcall sub_411350(__int64 *a1, unsigned __int64 a2, char **a3, unsigned int a4, double a5, __m128 a6)
{
  bool v10; // r14
  char **p_s; // rsi
  char *v12; // rdi
  __int64 v13; // r9
  __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdi
  void *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // r8
  __int64 v25; // r13
  __int64 idati; // rax
  int v27; // [rsp+0h] [rbp-98h]
  char *ptr; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+10h] [rbp-88h]
  __int64 v30; // [rsp+18h] [rbp-80h] BYREF
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+38h] [rbp-60h]
  __int128 v34; // [rsp+40h] [rbp-58h] BYREF
  int v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]
  int v37; // [rsp+60h] [rbp-38h]
  int v38; // [rsp+68h] [rbp-30h]
  __int64 v39; // [rsp+70h] [rbp-28h]

  v36 = __readfsqword(0x28u);
  if ( (debug & 1) != 0 )
    sub_3879F0();
  v10 = (char **)((char *)a3 + 1) == nullptr || a2 == -1;
  if ( v10 )
    return 0;
  if ( a1[276] == a2 )
  {
    v16 = (_QWORD *)a1[286];
    v17 = a1 + 285;
    v18 = a1 + 285;
    if ( v16 )
    {
      v19 = (_QWORD *)v16[2];
      v20 = (_QWORD *)v16[3];
      if ( v16[4] < (unsigned __int64)a3 )
        goto LABEL_27;
      while ( 1 )
      {
        v18 = v16;
        v16 = v19;
        if ( !v19 )
          break;
        while ( 1 )
        {
          v19 = (_QWORD *)v16[2];
          v20 = (_QWORD *)v16[3];
          if ( v16[4] >= (unsigned __int64)a3 )
            break;
LABEL_27:
          v16 = v20;
          if ( !v20 )
            goto LABEL_28;
        }
      }
LABEL_28:
      if ( v17 != v18 && (unsigned __int64)a3 >= v18[4] )
      {
        if ( (a4 & 0x1F) == (v18[5] & 0x1F) )
        {
          v10 = 1;
          *((_BYTE *)v18 + 40) = a4 & 0x1F | 0x80;
        }
        else
        {
          v22 = (void *)std::_Rb_tree_rebalance_for_erase(v18, v17);
          operator delete(v22, 0x30u);
          --a1[289];
        }
      }
    }
  }
  p_s = (char **)&byte_4;
  v12 = (char *)a2;
  if ( (get_flags_ex(a2, 4) & 0x400) == 0 )
  {
    if ( a4 == 5 )
      goto LABEL_32;
    v15 = *a1;
    a5 = 0.0;
    v32 = 0;
    s = nullptr;
    v34 = 0;
    sub_630CA0(v15, 26, &v34, 16);
    if ( a2 >= (unsigned __int64)v34 && a2 < *((_QWORD *)&v34 + 1) )
    {
      p_s = &s;
      if ( (unsigned __int8)sub_6B9E00(a1, &s, a2) )
      {
        if ( (_QWORD)v32 )
        {
          p_s = (char **)(&qword_28 + 6);
          ptr = s;
          v12 = s;
          if ( strchr(s, 46) )
            goto LABEL_44;
        }
        else
        {
          v12 = (char *)haystack;
        }
        v30 = 0;
        if ( v12 )
        {
          idati = a1[1];
          *((_QWORD *)&v34 + 1) = v12;
          LOWORD(v35) = 256;
          if ( !idati )
            idati = get_idati(v12, p_s);
          *(_QWORD *)&v34 = idati;
          ptr = (char *)&v30;
          if ( (unsigned __int8)create_tinfo(&v30, 61, 61, &v34) )
          {
            p_s = (char **)&dword_120;
            if ( get_tinfo_property(v30, 288) )
            {
              clear_tinfo_t(&v30);
              v12 = s;
LABEL_44:
              if ( v12 )
              {
                *(_QWORD *)&v32 = 0;
                qfree(v12);
              }
              goto LABEL_5;
            }
          }
        }
        clear_tinfo_t(&v30);
      }
    }
    if ( s )
    {
      *(_QWORD *)&v32 = 0;
      qfree(s);
    }
    sub_378D50();
  }
LABEL_5:
  if ( (a4 & 0x20) != 0 )
  {
    if ( (get_merge_state(v12, p_s) & 3) == 0 )
      goto LABEL_7;
    goto LABEL_34;
  }
LABEL_32:
  p_s = a3;
  v12 = (char *)sub_3BDD60(a1, a2);
  if ( (netnode_charval(v12, a3, 100) & 0x20) != 0 )
    return 0;
  if ( (get_merge_state(v12, a3) & 3) != 0 )
  {
LABEL_34:
    if ( (get_merge_state(v12, p_s) & 2) == 0 )
    {
      v21 = *a1;
      a5 = 0.0;
      v34 = 0;
      sub_630CA0(v21, 26, &v34, 16);
      if ( (unsigned __int64)a3 >= (unsigned __int64)v34
        && (unsigned __int64)a3 < *((_QWORD *)&v34 + 1)
        && (unsigned int)sub_42DD50(a1, a3) == 7 )
      {
        return 0;
      }
    }
  }
LABEL_7:
  if ( !v10 && sub_3792E0(0x40u, a2, a3, a4) < 0 )
    return 0;
  sub_4111A0(
    a1,
    a2,
    a3,
    1,
    a4,
    a5,
    a6,
    v13,
    v27,
    ptr,
    v29,
    v30,
    (int)s,
    v32,
    SDWORD2(v32),
    v33,
    v34,
    SDWORD2(v34),
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( sub_3BD540((__int64)a1, (__int64)a3) )
  {
    if ( qword_2CCB548 )
      qword_2CCB548(a3, 1);
    sub_40E770((_DWORD)a1, (_DWORD)a3);
    if ( (a4 & 0x100) == 0 )
      sub_40E620(a1, (unsigned __int64)a3);
    if ( (a4 & 0x1F) == 1 )
    {
      v23 = sub_3BE900(a1, (unsigned __int64)a3, 4);
      v24 = 0;
      v25 = v23;
      if ( (v23 & 0x600) == 0 )
        v24 = sub_3A1F40((__int64)a1, (unsigned __int64)a3, 20) != (_QWORD)a3;
      if ( !(unsigned __int8)sub_410280(a1, a2, (unsigned __int64)a3, v25, v24) )
        sub_40F040(a1, (unsigned __int64)a3, v25, a2);
    }
  }
  return 1;
}

__int64 __fastcall sub_3FE080(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  bool v8; // r14
  __int64 p_s; // rsi
  char *v10; // rdi
  __int64 v11; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  void *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // r8
  __int64 v23; // r13
  __int64 idati; // rax
  int v25; // [rsp+0h] [rbp-98h]
  char *ptr; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+18h] [rbp-80h] BYREF
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h]
  int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  char *v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]
  int v36; // [rsp+60h] [rbp-38h]
  int v37; // [rsp+68h] [rbp-30h]
  __int64 v38; // [rsp+70h] [rbp-28h]

  v35 = __readfsqword(0x28u);
  if ( (debug & 1) != 0 )
    sub_383DA0();
  v8 = a3 == -1 || a2 == -1;
  if ( v8 )
    return 0;
  if ( *(_DWORD *)(a1 + 2120) == a2 )
  {
    v14 = *(_QWORD *)(a1 + 2200);
    v15 = a1 + 2192;
    v16 = a1 + 2192;
    if ( v14 )
    {
      v17 = *(_QWORD *)(v14 + 16);
      v18 = *(_QWORD *)(v14 + 24);
      if ( *(_DWORD *)(v14 + 32) < a3 )
        goto LABEL_27;
      while ( 1 )
      {
        v16 = v14;
        v14 = v17;
        if ( !v17 )
          break;
        while ( 1 )
        {
          v17 = *(_QWORD *)(v14 + 16);
          v18 = *(_QWORD *)(v14 + 24);
          if ( *(_DWORD *)(v14 + 32) >= a3 )
            break;
LABEL_27:
          v14 = v18;
          if ( !v18 )
            goto LABEL_28;
        }
      }
LABEL_28:
      if ( v15 != v16 && a3 >= *(_DWORD *)(v16 + 32) )
      {
        if ( (a4 & 0x1F) == (*(_BYTE *)(v16 + 36) & 0x1F) )
        {
          v8 = 1;
          *(_BYTE *)(v16 + 36) = a4 & 0x1F | 0x80;
        }
        else
        {
          v20 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v20, 0x28u);
          --*(_QWORD *)(a1 + 2224);
        }
      }
    }
  }
  p_s = 4;
  v10 = (char *)a2;
  if ( (get_flags_ex(a2, 4) & 0x400) == 0 )
  {
    if ( a4 == 5 )
      goto LABEL_32;
    v13 = *(_QWORD *)a1;
    s = nullptr;
    v32 = 0;
    v30 = 0;
    sub_6141A0(v13, 26, &v32, 8);
    if ( a2 >= (unsigned int)v32 && a2 < HIDWORD(v32) )
    {
      p_s = (__int64)&s;
      if ( (unsigned __int8)sub_6994A0(a1, &s, a2) )
      {
        if ( (_QWORD)v30 )
        {
          p_s = 46;
          ptr = s;
          v10 = s;
          if ( strchr(s, 46) )
            goto LABEL_44;
        }
        else
        {
          v10 = (char *)haystack;
        }
        v28 = 0;
        if ( v10 )
        {
          idati = *(_QWORD *)(a1 + 8);
          v33 = v10;
          LOWORD(v34) = 256;
          if ( !idati )
            idati = get_idati(v10, p_s);
          v32 = idati;
          ptr = (char *)&v28;
          if ( (unsigned __int8)create_tinfo(&v28, 61, 61, &v32) )
          {
            p_s = 288;
            if ( get_tinfo_property(v28, 288) )
            {
              clear_tinfo_t(&v28);
              v10 = s;
LABEL_44:
              if ( v10 )
              {
                *(_QWORD *)&v30 = 0;
                qfree(v10);
              }
              goto LABEL_5;
            }
          }
        }
        clear_tinfo_t(&v28);
      }
    }
    if ( s )
    {
      *(_QWORD *)&v30 = 0;
      qfree(s);
    }
    sub_375400();
  }
LABEL_5:
  if ( (a4 & 0x20) != 0 )
  {
    if ( (get_merge_state(v10, p_s) & 3) == 0 )
      goto LABEL_7;
    goto LABEL_34;
  }
LABEL_32:
  p_s = a3;
  v10 = (char *)(unsigned int)sub_3B90A0((_QWORD *)a1, a2);
  if ( (netnode_charval(v10, a3, 100) & 0x20) != 0 )
    return 0;
  if ( (get_merge_state(v10, a3) & 3) != 0 )
  {
LABEL_34:
    if ( (get_merge_state(v10, p_s) & 2) == 0 )
    {
      v19 = *(_QWORD *)a1;
      v32 = 0;
      sub_6141A0(v19, 26, &v32, 8);
      if ( a3 >= (unsigned int)v32 && a3 < HIDWORD(v32) && (unsigned int)sub_41A0E0(a1, a3) == 7 )
        return 0;
    }
  }
LABEL_7:
  if ( !v8 && sub_375980(0x40u, a2, a3, a4) < 0 )
    return 0;
  sub_3FDEE0(
    (__int64 *)a1,
    a2,
    a3,
    1,
    a4,
    v11,
    v25,
    ptr,
    v27,
    v28,
    (int)s,
    v30,
    SDWORD2(v30),
    v31,
    v32,
    (int)v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( sub_3B8910(a1, a3) )
  {
    if ( qword_2CA1648 )
      qword_2CA1648(a3, 1);
    sub_3FB600(a1, a3);
    if ( (a4 & 0x100) == 0 )
      sub_3FB4C0(a1, a3);
    if ( (a4 & 0x1F) == 1 )
    {
      v21 = sub_3B9AA0(a1, a3, 4);
      v22 = 0;
      v23 = v21;
      if ( (v21 & 0x600) == 0 )
        v22 = (unsigned int)sub_39D100(a1, a3, 20) != a3;
      if ( !(unsigned __int8)sub_3FD000((_QWORD *)a1, a2, a3, v23, v22) )
        sub_3FBE20((_QWORD *)a1, a3, v23, a2);
    }
  }
  return 1;
}


__int64 __fastcall sub_3E2180(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  bool v6; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // r15d
  char v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  _QWORD *v17; // rdi
  unsigned int v18; // r13d
  char v19; // al
  void *v20; // rax
  void **v21; // rax
  char v22; // al
  unsigned __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-1C8h]
  int v26; // [rsp+0h] [rbp-1C8h]
  void *ptr; // [rsp+8h] [rbp-1C0h]
  int ptra; // [rsp+8h] [rbp-1C0h]
  __int64 v29; // [rsp+10h] [rbp-1B8h] BYREF
  void *v30; // [rsp+18h] [rbp-1B0h]
  __int64 v31[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-198h]
  int v33[2]; // [rsp+38h] [rbp-190h]
  __int64 v34; // [rsp+40h] [rbp-188h]
  void *v35[2]; // [rsp+48h] [rbp-180h] BYREF
  int v36; // [rsp+58h] [rbp-170h]
  int v37; // [rsp+60h] [rbp-168h]
  int v38; // [rsp+68h] [rbp-160h]
  int v39; // [rsp+70h] [rbp-158h]
  __int64 v40; // [rsp+78h] [rbp-150h]
  int v41; // [rsp+80h] [rbp-148h]
  int v42; // [rsp+88h] [rbp-140h]
  __int64 v43; // [rsp+90h] [rbp-138h]
  _QWORD v44[8]; // [rsp+188h] [rbp-40h] BYREF

  v44[0] = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  if ( a2 == -1 )
    return 0;
  v6 = HIDWORD(a3) != 0 && *(_DWORD *)(a1[3] + 24LL) != 8;
  if ( v6 )
    return 0;
  if ( a1[276] == a2 )
  {
    v14 = a4 & 0x1F;
    if ( (a4 & 0x1F) == 0x15 )
    {
      v22 = *((_BYTE *)a1 + 2264);
      if ( (v22 & 1) == 0 )
        goto LABEL_5;
      *((_BYTE *)a1 + 2264) = v22 | 0x80;
    }
    else
    {
      v15 = (_QWORD *)a1[279];
      v16 = a1 + 278;
      if ( !v15 )
        goto LABEL_5;
      v17 = a1 + 278;
      do
      {
        if ( v15[4] >= a3 )
        {
          v17 = v15;
          v15 = (_QWORD *)v15[2];
        }
        else
        {
          v15 = (_QWORD *)v15[3];
        }
      }
      while ( v15 );
      if ( v16 == v17 || a3 < v17[4] )
        goto LABEL_5;
      if ( v14 != (v17[5] & 0x1F) )
      {
        v20 = (void *)std::_Rb_tree_rebalance_for_erase(v17, v16);
        operator delete(v20, 0x30u);
        --a1[282];
        goto LABEL_5;
      }
      *((_BYTE *)v17 + 40) = v14 | 0x80;
    }
    v6 = 1;
  }
LABEL_5:
  if ( (sub_3BE900(a1, a2, 4) & 0x400) == 0 )
    sub_378D50();
  v9 = a4 & 0xFFFFFFDF;
  ptr = (void *)sub_3BDD60(a1, a2);
  v10 = sub_3BDD60(a1, a3);
  if ( (_DWORD)v9 != 21 )
  {
    if ( (a4 & 0x20) == 0 && (netnode_charval(ptr, v10, 120) & 0x20) != 0 )
      return 0;
    v9 = a4;
  }
  if ( !v6 && sub_3792E0(0x3Fu, a2, a3, (unsigned int)v9) < 0 )
    return 0;
  v11 = sub_505D70(a1 + 203, a3);
  if ( !v11 )
    goto LABEL_61;
  sub_57AE80(a1, a3);
  if ( (unsigned int)v9 <= 0x15 )
  {
    v12 = 2752512;
    if ( _bittest64(&v12, v9) )
    {
      if ( !sub_3E1A40((__int64)a1, a2, v11) )
      {
        if ( (*(_BYTE *)(a1[2] + 8LL) & 0x20) == 0
          || (*(_WORD *)(v11 + 44) & 0x18) == 8
          || (*(_WORD *)(sub_505D70(a1 + 203, a2) + 44) & 0x18) == 8 )
        {
          goto LABEL_61;
        }
        if ( a3 >= a2 )
        {
          v23 = (unsigned __int64 *)sub_505EB0(a1 + 203, a2);
          if ( v23 && (a3 < *v23 || a3 >= v23[1] || a3 - get_segm_base(v23) > 0xF) )
            goto LABEL_61;
          sub_3C1F00(a1, a3);
          v19 = sub_687700((int)a1);
        }
        else
        {
          v19 = sub_687700((int)a1);
        }
        if ( v19 )
        {
          v11 = sub_505D70(a1 + 203, a3);
          goto LABEL_16;
        }
LABEL_61:
        sub_4F2EF0(a1, 9, a2, 0);
        return 0;
      }
    }
  }
LABEL_16:
  v13 = sub_3BE900(a1, a3, 4);
  if ( (~BYTE1(v13) & 6) == 0 )
  {
    v29 = -1;
    LOBYTE(v30) = 0;
    if ( (_DWORD)v9 == 21 )
    {
      if ( (v13 & 0x10000000) == 0 )
        goto LABEL_19;
      if ( (unsigned __int8)sub_3E2000(a1, (__int64)&v29, a3) )
        goto LABEL_19;
      if ( (unsigned __int8)sub_4108F0(a1, &v29, a3) )
        goto LABEL_19;
      v32 = -1;
      v21 = v35;
      *(_QWORD *)v33 = 0;
      v34 = 0;
      *(_OWORD *)v31 = -1;
      do
      {
        *(_WORD *)v21 = 0;
        v21 += 5;
        *((_WORD *)v21 - 19) = 0;
        *((_WORD *)v21 - 18) = 0;
        *((_DWORD *)v21 - 2) = 0;
        *((_WORD *)v21 - 17) = 0;
        *((_OWORD *)v21 - 2) = 0;
        *(v21 - 2) = nullptr;
      }
      while ( v44 != v21 );
      if ( (int)decode_insn(v31, a3, v44, 0, 0, 0, 0.0) <= 0 )
        goto LABEL_19;
      if ( (unsigned __int8)sub_4CC920(a1, v31, 2) )
      {
        if ( !(unsigned __int8)sub_5D4180((int)a1, v25, (int)ptr, v29, v30, v31[0], v31[1], v32, v33[0], v34)
          || (~(_WORD)v13 & 0xC000) != 0 )
        {
          goto LABEL_19;
        }
      }
      else
      {
        v24 = sub_5CAA10(a1);
        if ( !v24
          || (*(_BYTE *)(v24 + 16) & 4) == 0
          || (int)sub_3E1B70(a3) >= 0
          || sub_3792E0(0x24u, v31, 0) > 99 && !(unsigned __int8)sub_69F350(*a1, a3, 58)
          || (unsigned __int8)is_public_name(a3)
          || !(unsigned __int8)sub_5D4180((int)a1, v25, (int)ptr, v29, v30, v31[0], v31[1], v32, v33[0], v34) )
        {
          goto LABEL_19;
        }
      }
      sub_4D7EC0(
        (int)a1,
        a3,
        (void *)&byte_22F0C30,
        v26,
        ptra,
        v29,
        (int)v30,
        v31[0],
        (void *)v31[1],
        v32,
        v33[0],
        v34,
        v35[0],
        (__int64)v35[1],
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      goto LABEL_19;
    }
LABEL_34:
    v18 = v9 - 16;
LABEL_35:
    sub_4111A0((_DWORD)a1);
    sub_3A6E80(a1, a2, (char *)a3, v18 <= 1);
    sub_40E620(a1, a3);
    sub_40E770((_DWORD)a1, a3);
    goto LABEL_36;
  }
  if ( !sub_3E1AB0(a1, a2, a3, v11, v9) )
  {
    v29 = -1;
    LOBYTE(v30) = 0;
    if ( (_DWORD)v9 == 21 )
      goto LABEL_19;
    goto LABEL_34;
  }
  if ( (unsigned int)sub_3A1820((__int64)a1) != 25 )
  {
    auto_mark_range(a3, a3 + 1, 20);
    LOBYTE(v30) = 0;
    v29 = -1;
    if ( (_DWORD)v9 == 21 )
      goto LABEL_19;
    goto LABEL_34;
  }
  v18 = v9 - 16;
  if ( (unsigned int)(v9 - 16) <= 1 )
  {
    auto_mark_range(a3, a3 + 1, 20);
    LOBYTE(v30) = 0;
    v29 = -1;
    goto LABEL_35;
  }
  sub_3A3510(*a1, a3);
  LOBYTE(v30) = 0;
  v29 = -1;
  if ( (_DWORD)v9 != 21 )
    goto LABEL_35;
LABEL_19:
  if ( sub_3C1F00(a1, a2) != a3 )
    return 0;
  sub_3CFD10(a1, (void *)a3, (__int64)&stru_10000);
LABEL_36:
  if ( qword_2CCB548 )
    qword_2CCB548(a3, 1);
  return 1;
}

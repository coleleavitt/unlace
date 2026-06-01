__int64 __fastcall sub_3DC640(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  bool v4; // r13
  unsigned __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rax
  char v13; // al
  int v14; // r14d
  unsigned int v15; // r13d
  char v17; // si
  __int64 v18; // rax
  _QWORD *v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // r9
  int *v25; // rax
  void *v26; // rax
  unsigned int *v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-138h]
  int v30; // [rsp+0h] [rbp-138h]
  int v31; // [rsp+8h] [rbp-130h]
  int v32; // [rsp+8h] [rbp-130h]
  unsigned int v33; // [rsp+Ch] [rbp-12Ch]
  int v34; // [rsp+10h] [rbp-128h]
  int v35; // [rsp+10h] [rbp-128h]
  void *v36; // [rsp+18h] [rbp-120h] BYREF
  __int64 v37; // [rsp+20h] [rbp-118h] BYREF
  void *ptr; // [rsp+28h] [rbp-110h]
  __int64 v39; // [rsp+30h] [rbp-108h]
  int v40[4]; // [rsp+38h] [rbp-100h] BYREF
  void *v41; // [rsp+48h] [rbp-F0h]
  __int64 v42; // [rsp+50h] [rbp-E8h]
  int v43; // [rsp+58h] [rbp-E0h]
  int v44; // [rsp+60h] [rbp-D8h]
  int v45; // [rsp+68h] [rbp-D0h]
  int v46; // [rsp+70h] [rbp-C8h]
  __int64 v47; // [rsp+78h] [rbp-C0h]
  int v48; // [rsp+80h] [rbp-B8h]
  int v49; // [rsp+88h] [rbp-B0h]
  __int64 v50; // [rsp+90h] [rbp-A8h]
  _QWORD v51[8]; // [rsp+F8h] [rbp-40h] BYREF

  v51[0] = __readfsqword(0x28u);
  v4 = a2 == -1 || a3 == -1;
  if ( v4 )
    return 0;
  if ( *((_DWORD *)a1 + 530) == a2 )
  {
    v17 = a4 & 0x1F;
    if ( (a4 & 0x1F) == 0x15 )
    {
      v23 = *((_BYTE *)a1 + 2176);
      if ( (v23 & 1) == 0 )
        goto LABEL_3;
      *((_BYTE *)a1 + 2176) = v23 | 0x80;
    }
    else
    {
      v18 = a1[268];
      v19 = a1 + 267;
      if ( !v18 )
        goto LABEL_3;
      v20 = a1 + 267;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v18 + 16);
          v22 = *(_QWORD *)(v18 + 24);
          if ( *(_DWORD *)(v18 + 32) < a3 )
            break;
          v20 = (_QWORD *)v18;
          v18 = *(_QWORD *)(v18 + 16);
          if ( !v21 )
            goto LABEL_35;
        }
        v18 = *(_QWORD *)(v18 + 24);
      }
      while ( v22 );
LABEL_35:
      if ( v19 == v20 || a3 < *((_DWORD *)v20 + 8) )
        goto LABEL_3;
      if ( v17 != (*((_BYTE *)v20 + 36) & 0x1F) )
      {
        v26 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v26, 0x28u);
        --a1[271];
        goto LABEL_3;
      }
      *((_BYTE *)v20 + 36) = v17 | 0x80;
    }
    v4 = 1;
  }
LABEL_3:
  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x400) == 0 )
    sub_375400();
  v9 = a4 & 0xFFFFFFDF;
  v33 = sub_3B90A0(a1, a2);
  v10 = sub_3B90A0(a1, a3);
  if ( (_DWORD)v9 != 21 )
  {
    if ( (a4 & 0x20) == 0 && (netnode_charval(v33, v10, 120) & 0x20) != 0 )
      return 0;
    v9 = a4;
  }
  if ( !v4 && sub_375980(0x3Fu, a2, a3, (unsigned int)v9) < 0 )
    return 0;
  v11 = sub_4EE820(a1 + 194, a3);
  if ( !v11 )
    goto LABEL_60;
  sub_561540(a1, a3);
  if ( (unsigned int)v9 <= 0x15 )
  {
    v12 = 2752512;
    if ( _bittest64(&v12, v9) )
    {
      if ( !sub_3DBF50((__int64)a1, a2, v11) )
      {
        if ( (*(_BYTE *)(a1[2] + 8LL) & 0x20) == 0
          || (*(_WORD *)(v11 + 24) & 0x18) == 8
          || (*(_WORD *)(sub_4EE820(a1 + 194, a2) + 24) & 0x18) == 8 )
        {
          goto LABEL_60;
        }
        if ( a3 >= a2 )
        {
          v27 = (unsigned int *)sub_4EE960(a1 + 194, a2);
          if ( v27 && (a3 < *v27 || a3 >= v27[1] || a3 - (unsigned int)get_segm_base(v27) > 0xF) )
            goto LABEL_60;
          sub_3BCF60((__int64)a1, a3);
          v13 = sub_668550((int)a1);
        }
        else
        {
          v13 = sub_668550((int)a1);
        }
        if ( v13 )
        {
          v11 = sub_4EE820(a1 + 194, a3);
          goto LABEL_19;
        }
LABEL_60:
        sub_4DB6D0(a1, 9, a2, 0);
        return 0;
      }
    }
  }
LABEL_19:
  v14 = sub_3B9AA0((__int64)a1, a3, 4);
  if ( (~BYTE1(v14) & 6) != 0 )
  {
    if ( sub_3DBFC0(a1, a2, a3, v11, v9) )
    {
      if ( (unsigned int)sub_39CC50((__int64)a1) == 25 )
      {
        v15 = v9 - 16;
        if ( (unsigned int)(v9 - 16) <= 1 )
        {
          auto_mark_range(a3, a3 + 1, 20);
          LODWORD(v36) = -1;
          BYTE4(v36) = 0;
          goto LABEL_23;
        }
        sub_39E950(*a1, a3);
        LODWORD(v36) = -1;
        BYTE4(v36) = 0;
        if ( (_DWORD)v9 != 21 )
          goto LABEL_23;
      }
      else
      {
        v15 = v9 - 16;
        auto_mark_range(a3, a3 + 1, 20);
        LODWORD(v36) = -1;
        BYTE4(v36) = 0;
        if ( (_DWORD)v9 != 21 )
          goto LABEL_23;
      }
    }
    else
    {
      LODWORD(v36) = -1;
      BYTE4(v36) = 0;
      if ( (_DWORD)v9 != 21 )
      {
LABEL_22:
        v15 = v9 - 16;
LABEL_23:
        sub_3FDEE0((_DWORD)a1);
        sub_3A26B0(a1, a2, a3, v15 <= 1);
        sub_3FB4C0(a1, a3);
        sub_3FB600((_DWORD)a1, a3);
        goto LABEL_24;
      }
    }
  }
  else
  {
    LODWORD(v36) = -1;
    BYTE4(v36) = 0;
    if ( (_DWORD)v9 != 21 )
      goto LABEL_22;
    if ( (v14 & 0x10000000) != 0
      && !(unsigned __int8)sub_3DC4D0(a1, (__int64)&v36, a3)
      && !(unsigned __int8)sub_3FD660(a1, &v36, a3) )
    {
      v37 = -1;
      v39 = 0;
      ptr = (void *)0xFFFFFFFFLL;
      v25 = v40;
      do
      {
        *(_WORD *)v25 = 0;
        v25 += 6;
        *((_WORD *)v25 - 11) = 0;
        *((_WORD *)v25 - 10) = 0;
        *(v25 - 1) = 0;
        *((_WORD *)v25 - 9) = 0;
        *((_QWORD *)v25 - 2) = 0;
        *(v25 - 2) = 0;
      }
      while ( v51 != (_QWORD *)v25 );
      if ( (int)decode_insn(&v37, a3, v51, 0, 0, v24) > 0 )
      {
        if ( (unsigned __int8)sub_4B5BC0(a1, &v37, 2) )
        {
          if ( !(unsigned __int8)sub_5B9040((int)a1, v29, v31, v34, v36, v37, (int)ptr, v39)
            || (~(_WORD)v14 & 0xC000) != 0 )
          {
            goto LABEL_47;
          }
        }
        else
        {
          v28 = sub_5AFCE0(a1);
          if ( !v28
            || (*(_BYTE *)(v28 + 8) & 4) == 0
            || (int)sub_3DC070(a3) >= 0
            || sub_375980(0x24u, &v37, 0) > 99 && !(unsigned __int8)sub_67EC60(*a1, a3, 58)
            || (unsigned __int8)is_public_name(a3)
            || !(unsigned __int8)sub_5B9040((int)a1, v29, v31, v34, v36, v37, (int)ptr, v39) )
          {
            goto LABEL_47;
          }
        }
        sub_4C0DE0(
          (int)a1,
          a3,
          (void *)&byte_22CD811,
          v30,
          v32,
          v35,
          (int)v36,
          v37,
          ptr,
          v39,
          v40[0],
          v40[2],
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
    }
  }
LABEL_47:
  if ( (unsigned int)sub_3BCF60((__int64)a1, a2) != a3 )
    return 0;
  sub_3CA430(a1, a3, 0x10000);
LABEL_24:
  if ( qword_2CA1648 )
    qword_2CA1648(a3, 1);
  return 1;
}


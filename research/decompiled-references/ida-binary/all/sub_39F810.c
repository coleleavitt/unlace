unsigned __int64 __fastcall sub_39F810(
        _QWORD *a1,
        QT::QPainter *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        int *a8)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  int v13; // r12d
  unsigned __int64 v14; // rbp
  char v15; // al
  unsigned __int64 v16; // r9
  char v17; // al
  __int64 v18; // rbx
  unsigned __int64 v19; // r13
  char v20; // r15
  __int64 v21; // rax
  unsigned __int64 *v22; // rcx
  __int64 v23; // r14
  unsigned __int64 *v24; // rbx
  unsigned __int64 v25; // r15
  unsigned __int64 *v26; // r13
  bool v27; // zf
  int v28; // eax
  char v29; // dl
  unsigned __int64 v30; // r9
  _BOOL4 v31; // eax
  unsigned int v32; // r12d
  int v33; // eax
  int v34; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 *v39; // rbx
  __int64 v40; // r13
  _QWORD *v41; // r12
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r14
  int v45; // eax
  char v46; // dl
  unsigned __int64 v47; // r9
  _BOOL4 v48; // eax
  unsigned int v49; // ebx
  __int64 item_end; // rax
  unsigned __int64 flags; // rax
  __int64 v52; // rax
  _QWORD *v58; // [rsp+38h] [rbp-90h]
  char v59; // [rsp+40h] [rbp-88h]
  unsigned __int64 v60; // [rsp+40h] [rbp-88h]
  bool v61; // [rsp+40h] [rbp-88h]
  _BOOL4 v62; // [rsp+48h] [rbp-80h]
  char v63; // [rsp+50h] [rbp-78h]
  int v64; // [rsp+58h] [rbp-70h]
  int v65; // [rsp+5Ch] [rbp-6Ch]
  _BYTE v66[14]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v67; // [rsp+70h] [rbp-58h]
  unsigned __int64 v68; // [rsp+88h] [rbp-40h]

  v27 = a3[8] == 0;
  v68 = __readfsqword(0x28u);
  *(_DWORD *)v66 = 0;
  *(_QWORD *)&v66[4] = 0xFFFF;
  *(_WORD *)&v66[12] = 0;
  if ( v27 )
  {
    v11 = a1 + 5;
    v10 = 2165563905LL;
  }
  else
  {
    v9 = a1[85];
    if ( v9 == a3[6] || (unsigned __int8)sub_399540((__int64)a3, v9) )
    {
      v10 = 2165563906LL;
      v11 = a1 + 5;
    }
    else
    {
      v10 = 2165563904LL;
      v11 = a1 + 5;
    }
  }
  *(_QWORD *)v66 = sub_524FA0(v11, v10, 0);
  *(_QWORD *)&v67 = *(_QWORD *)v66;
  *((_QWORD *)&v67 + 1) = v12;
  *(_QWORD *)&v66[6] = *(_QWORD *)((char *)&v67 + 6);
  v13 = QT::QColor::rgb((QT::QColor *)v66);
  v64 = *(_DWORD *)(a4 + 44) - 16 * a6;
  v14 = a3[6];
  if ( qword_8BA598 == -1
    || ((v15 = sub_399540((__int64)a3, a7), v16 != v14) || !v15)
    && ((v17 = sub_399540((__int64)a3, v16), a7 != v14) || !v17) )
  {
    v18 = a3[3];
    v19 = *(_QWORD *)(v18 + 32);
    if ( v14 < v19 )
    {
      v26 = a3 + 6;
      v20 = 1;
LABEL_33:
      v62 = v13 != -65536;
      v58 = a3 + 1;
LABEL_34:
      v38 = v18;
      v39 = v26;
      v40 = v38;
      while ( 1 )
      {
        if ( (_QWORD *)v40 == v58 )
        {
          if ( v20 )
            return v68 - __readfsqword(0x28u);
          v41 = a3 + 6;
          v20 = 1;
          v43 = a3[6];
        }
        else if ( v20 || *(_QWORD *)(v40 + 32) < a3[6] )
        {
          v60 = *(_QWORD *)(v40 + 32);
          v41 = (_QWORD *)(v40 + 32);
          v42 = std::_Rb_tree_increment(v40);
          v43 = v60;
          v40 = v42;
        }
        else
        {
          v41 = a3 + 6;
          v43 = a3[6];
          v20 = 1;
        }
        v44 = *v39;
        v45 = *((_DWORD *)v41 + 2);
        v46 = *v39 == v14;
        if ( v45 == -1 )
        {
          v61 = *v39 == v14;
          item_end = get_item_end(v43);
          flags = get_flags_ex(item_end, 4);
          v43 = *v41;
          v46 = v61;
          v48 = (flags >> 16) & 1;
          *((_DWORD *)v41 + 2) = v48;
          v47 = *v39;
        }
        else
        {
          v47 = *v39;
          v48 = v45 != 0;
        }
        v49 = v62 | (2 * v48) | 4;
        sub_39F4A0(a1, a2, a4, v64, v43, v47, v46, (__int64)v66, a5, v49);
        if ( v44 == v14 )
          sub_39F3B0((__int64)a1, a2, a4, v64, v14, (__int64)v66, a5, v49);
        v39 = v41;
      }
    }
    goto LABEL_11;
  }
  *a8 = v64;
  v18 = a3[3];
  v19 = *(_QWORD *)(v18 + 32);
  if ( a3[6] >= v19 )
  {
LABEL_11:
    v20 = 0;
    v21 = std::_Rb_tree_increment(v18);
    v22 = (unsigned __int64 *)(v18 + 32);
    v18 = v21;
    goto LABEL_12;
  }
  v19 = a3[6];
  v20 = 1;
  v22 = a3 + 6;
LABEL_12:
  v58 = a3 + 1;
  if ( v19 >= v14 )
  {
    v26 = v22;
    goto LABEL_33;
  }
  v23 = v18;
  v65 = v13;
  v24 = v22;
  v59 = v20;
  while ( (_QWORD *)v23 != v58 )
  {
    v25 = *(_QWORD *)(v23 + 32);
    if ( v59 || v25 < a3[6] )
    {
      v26 = (unsigned __int64 *)(v23 + 32);
      v23 = std::_Rb_tree_increment(v23);
    }
    else
    {
      v59 = 1;
      v26 = a3 + 6;
      v25 = a3[6];
    }
    v27 = v14 == v25;
    if ( v14 < v25 )
    {
LABEL_26:
      v20 = v59;
      v18 = v23;
      v62 = v65 != -65536;
      v33 = *((_DWORD *)v26 + 2);
      if ( v33 == -1 )
      {
        v52 = get_item_end(*v26);
        v34 = ((unsigned __int64)get_flags_ex(v52, 4) >> 16) & 1;
        *((_DWORD *)v26 + 2) = v34;
      }
      else
      {
        v34 = v33 != 0;
      }
      sub_39F4A0(a1, a2, a4, v64, *v26, v14, 1, (__int64)v66, a5, v62 | (2 * v34) | 4);
      goto LABEL_34;
    }
LABEL_18:
    v28 = *((_DWORD *)v24 + 2);
    v29 = v27;
    if ( v28 == -1 )
    {
      v63 = v27;
      v36 = get_item_end(*v24);
      v37 = get_flags_ex(v36, 4);
      v29 = v63;
      v31 = (v37 >> 16) & 1;
      *((_DWORD *)v24 + 2) = v31;
      v30 = *v26;
    }
    else
    {
      v30 = v25;
      v31 = v28 != 0;
    }
    v32 = (2 * v31) | 4;
    sub_39F4A0(a1, a2, a4, v64, *v24, v30, v29, (__int64)v66, a5, v32);
    if ( v14 == v25 )
      sub_39F3B0((__int64)a1, a2, a4, v64, v14, (__int64)v66, a5, v32);
    v24 = v26;
  }
  if ( !v59 )
  {
    v26 = a3 + 6;
    v59 = 1;
    v25 = a3[6];
    v27 = v14 == v25;
    if ( v14 < v25 )
      goto LABEL_26;
    goto LABEL_18;
  }
  return v68 - __readfsqword(0x28u);
}

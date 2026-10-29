__int64 __fastcall sub_5CAEC0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, bool a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r15
  unsigned int v9; // eax
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r13
  char i; // al
  char v16; // r15
  unsigned __int64 v17; // rsi
  int *v19; // rdx
  unsigned __int64 v20; // rcx
  bool v21; // di
  int *v22; // rax
  bool v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-C8h]
  int *v29; // [rsp+38h] [rbp-B0h]
  int *v30; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v32; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v33[2]; // [rsp+50h] [rbp-98h] BYREF
  char v34; // [rsp+61h] [rbp-87h]
  __int64 v35; // [rsp+70h] [rbp-78h] BYREF
  int v36; // [rsp+78h] [rbp-70h] BYREF
  int *v37; // [rsp+80h] [rbp-68h]
  int *v38; // [rsp+88h] [rbp-60h]
  int *v39; // [rsp+90h] [rbp-58h]
  __int64 v40; // [rsp+98h] [rbp-50h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v6 = sub_3BE900(a1, a2, 4);
  if ( (~(_WORD)v6 & 0x600) != 0 || a4 && (v6 & 0x10000) != 0 && (int)sub_5C9B30(a1, a3, a2 - 1) < 0 )
    return -1;
  v7 = sub_505D70((__int64)(a1 + 203), a2);
  if ( !v7 )
    return -1;
  v8 = v7[1];
  v28 = v8;
  v9 = sub_503F40((__int64)(a1 + 213), a2);
  v10 = sub_505DE0((__int64)(a1 + 213), v9);
  if ( v10 )
  {
    v11 = *v10;
    if ( v8 <= v11 )
      v11 = v8;
    v28 = v11;
  }
  v12 = a2;
  if ( v28 == a2 )
    return -1;
  v36 = 0;
  v38 = &v36;
  v39 = &v36;
  v37 = nullptr;
  v40 = 0;
  do
  {
    v12 = sub_3C1F00(a1, v12);
    v13 = sub_3BE900(a1, v12, 4);
    v14 = ((v13 & 0x10000) >> 16) & 1;
    if ( (v13 & 0x1000) != 0 )
    {
      for ( i = xrefblk_t_first_to(v33, v12, 5); ; i = xrefblk_t_next_to(v33) )
      {
        while ( 1 )
        {
          v16 = i;
          if ( !i )
            goto LABEL_11;
          if ( (unsigned __int8)(v34 - 16) <= 1u )
            goto LABEL_51;
          if ( (int)sub_5C9B30(a1, a3, v33[0]) >= 0 )
          {
LABEL_27:
            LOBYTE(v14) = v16;
            goto LABEL_28;
          }
          v17 = v33[0];
          if ( v33[0] < a2 )
          {
            if ( a4 )
              goto LABEL_21;
            goto LABEL_28;
          }
          if ( v12 >= v33[0] )
            goto LABEL_27;
          if ( a4 )
            break;
LABEL_28:
          i = xrefblk_t_next_to(v33);
        }
        if ( v33[0] >= v28 )
          goto LABEL_21;
        v19 = v37;
        if ( !v37 )
          break;
        while ( 1 )
        {
          v20 = *((_QWORD *)v19 + 4);
          v21 = 0;
          v22 = *((int **)v19 + 3);
          if ( v33[0] < v20 )
          {
            v22 = *((int **)v19 + 2);
            v21 = a4;
          }
          if ( !v22 )
            break;
          v19 = v22;
        }
        if ( !v21 )
          goto LABEL_39;
        if ( v38 != v19 )
          goto LABEL_44;
LABEL_40:
        v23 = a4;
        if ( v19 != &v36 )
          v23 = v17 < *((_QWORD *)v19 + 4);
LABEL_42:
        v29 = v19;
        v24 = operator new(0x28u);
        *(_QWORD *)(v24 + 32) = v33[0];
        std::_Rb_tree_insert_and_rebalance(v23, v24, v29, &v36);
        ++v40;
      }
      v19 = &v36;
      if ( v38 == &v36 )
      {
        v19 = &v36;
        v23 = a4;
        goto LABEL_42;
      }
LABEL_44:
      v32 = v33[0];
      v30 = v19;
      v25 = std::_Rb_tree_decrement(v19);
      v17 = v32;
      v19 = v30;
      v20 = *(_QWORD *)(v25 + 32);
LABEL_39:
      if ( v20 >= v17 )
        goto LABEL_28;
      goto LABEL_40;
    }
LABEL_11:
    if ( !(_BYTE)v14 )
      break;
    if ( (~(_WORD)v13 & 0x600) != 0 )
    {
      if ( a4 )
        goto LABEL_48;
      goto LABEL_23;
    }
    sub_5C5E00(&v35, v12);
  }
  while ( v12 < v28 );
LABEL_51:
  if ( a4 )
  {
LABEL_21:
    if ( v40 || (v13 & 0x10000) != 0 && (int)sub_5C9B30(a1, a3, v12) < 0 )
LABEL_48:
      v12 = -1;
  }
LABEL_23:
  sub_5C5C20(v37);
  return v12;
}

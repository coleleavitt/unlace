__int64 __fastcall sub_5B01A0(_QWORD *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned int *v7; // rax
  unsigned int v8; // r15d
  unsigned int v9; // eax
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r13
  char i; // al
  char v16; // r15
  unsigned int v17; // esi
  int *v19; // rdx
  unsigned int v20; // ecx
  char v21; // di
  int *v22; // rax
  unsigned int v25; // [rsp+1Ch] [rbp-ACh]
  unsigned int v27[2]; // [rsp+44h] [rbp-84h] BYREF
  char v28; // [rsp+4Dh] [rbp-7Bh]
  __int64 v29; // [rsp+50h] [rbp-78h] BYREF
  int v30; // [rsp+58h] [rbp-70h] BYREF
  int *v31; // [rsp+60h] [rbp-68h]
  int *v32; // [rsp+68h] [rbp-60h]
  int *v33; // [rsp+70h] [rbp-58h]
  __int64 v34; // [rsp+78h] [rbp-50h]
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v6 = sub_3B9AA0((__int64)a1, a2, 4);
  if ( (~(_WORD)v6 & 0x600) != 0 || a4 && (v6 & 0x10000) != 0 && (int)sub_5AEEA0(a1, a3, a2 - 1) < 0 )
    return (unsigned int)-1;
  v7 = sub_4EE820((__int64)(a1 + 194), a2);
  if ( !v7 )
    return (unsigned int)-1;
  v8 = v7[1];
  v25 = v8;
  v9 = sub_4ECA50((__int64)(a1 + 203), a2);
  v10 = sub_4EE890((__int64)(a1 + 203), v9);
  if ( v10 )
  {
    v11 = *v10;
    if ( v8 <= v11 )
      v11 = v8;
    v25 = v11;
  }
  v12 = a2;
  if ( v25 == a2 )
    return (unsigned int)-1;
  v30 = 0;
  v32 = &v30;
  v33 = &v30;
  v31 = nullptr;
  v34 = 0;
  do
  {
    v12 = sub_3BCF60((__int64)a1, v12);
    v13 = sub_3B9AA0((__int64)a1, v12, 4);
    v14 = ((v13 & 0x10000) >> 16) & 1;
    if ( (v13 & 0x1000) != 0 )
    {
      for ( i = xrefblk_t_first_to(v27, v12, 5); ; i = xrefblk_t_next_to(v27) )
      {
        while ( 1 )
        {
          v16 = i;
          if ( !i )
            goto LABEL_11;
          if ( (unsigned __int8)(v28 - 16) <= 1u )
            goto LABEL_49;
          if ( (int)sub_5AEEA0(a1, a3, v27[0]) >= 0 )
          {
LABEL_27:
            LOBYTE(v14) = v16;
            goto LABEL_28;
          }
          v17 = v27[0];
          if ( v27[0] < a2 )
          {
            if ( a4 )
              goto LABEL_21;
            goto LABEL_28;
          }
          if ( v12 >= v27[0] )
            goto LABEL_27;
          if ( a4 )
            break;
LABEL_28:
          i = xrefblk_t_next_to(v27);
        }
        if ( v27[0] >= v25 )
          goto LABEL_21;
        v19 = v31;
        if ( !v31 )
          break;
        while ( 1 )
        {
          v20 = v19[8];
          v21 = 0;
          v22 = *((int **)v19 + 3);
          if ( v27[0] < v20 )
          {
            v22 = *((int **)v19 + 2);
            v21 = a4;
          }
          if ( !v22 )
            break;
          v19 = v22;
        }
        if ( v21 )
        {
          if ( v32 == v19 )
            goto LABEL_40;
LABEL_42:
          v17 = v27[0];
          v20 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
        }
        if ( v20 >= v17 )
          goto LABEL_28;
LABEL_40:
        *(_DWORD *)(operator new(0x28u) + 32) = v27[0];
        std::_Rb_tree_insert_and_rebalance();
        ++v34;
      }
      if ( v32 == &v30 )
        goto LABEL_40;
      goto LABEL_42;
    }
LABEL_11:
    if ( !(_BYTE)v14 )
      break;
    if ( (~(_WORD)v13 & 0x600) != 0 )
    {
      if ( a4 )
        goto LABEL_46;
      goto LABEL_23;
    }
    sub_5AB390(&v29, v12);
  }
  while ( v12 < v25 );
LABEL_49:
  if ( a4 )
  {
LABEL_21:
    if ( v34 || (v13 & 0x10000) != 0 && (int)sub_5AEEA0(a1, a3, v12) < 0 )
LABEL_46:
      v12 = -1;
  }
LABEL_23:
  sub_5AB1C0(v31);
  return v12;
}


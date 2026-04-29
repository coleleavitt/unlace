__int64 __fastcall sub_3670E0(__int64 a1, __int64 a2)
{
  char v2; // r9
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // si
  int tinfo_property; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // r10
  int tinfo_size; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h] BYREF
  _QWORD vars10[7]; // [rsp+10h] [rbp+10h] BYREF

  vars10[1] = __readfsqword(0x28u);
  vars0 = 0;
  copy_tinfo_t(&vars0, a1);
  vars8 = 0;
  copy_tinfo_t(&vars8, a2);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(_BYTE)vars0 )
      {
        v7 = -((_BYTE)vars8 != 0);
        goto LABEL_14;
      }
      if ( !(_BYTE)vars8 )
        goto LABEL_27;
      v2 = vars8 & 0x3F;
      if ( (vars0 & 0x3F) == 0x30 )
      {
        v7 = -(v2 != 48);
        goto LABEL_14;
      }
      if ( v2 == 48 )
        goto LABEL_27;
      v3 = vars0 & 0xF;
      if ( (vars0 & 0xF) == 0xA )
        break;
      if ( v3 != 11 )
      {
        v9 = vars8 & 0xE;
        if ( (vars0 & 0xE) != 0 )
        {
          if ( v9 )
          {
            v4 = vars8 & 0xF;
            if ( v3 > 9u )
              goto LABEL_19;
            goto LABEL_30;
          }
          goto LABEL_34;
        }
        goto LABEL_28;
      }
      v4 = vars8 & 0xF;
      if ( (vars8 & 0xF) != 0xB )
        goto LABEL_17;
      tinfo_property = get_tinfo_property(vars0, 12);
      v6 = get_tinfo_property(vars8, 12);
      if ( tinfo_property <= 0 )
      {
        if ( v6 > 0 )
          goto LABEL_13;
      }
      else if ( v6 <= 0 )
      {
        goto LABEL_27;
      }
      vars10[0] = 0;
      vars10[0] = get_tinfo_property(vars0, 11);
      copy_tinfo_t(&vars0, vars10);
      clear_tinfo_t(vars10);
      vars10[0] = 0;
      vars10[0] = get_tinfo_property(vars8, 11);
      copy_tinfo_t(&vars8, vars10);
      clear_tinfo_t(vars10);
    }
    v4 = vars8 & 0xF;
    if ( (vars8 & 0xF) != 0xA )
      break;
    vars10[0] = 0;
    vars10[0] = get_tinfo_property(vars0, 9);
    copy_tinfo_t(&vars0, vars10);
    clear_tinfo_t(vars10);
    vars10[0] = 0;
    vars10[0] = get_tinfo_property(vars8, 9);
    copy_tinfo_t(&vars8, vars10);
    clear_tinfo_t(vars10);
  }
LABEL_17:
  v9 = vars8 & 0xE;
  if ( (vars0 & 0xE) == 0 )
  {
LABEL_28:
    if ( (vars0 & 0x30) == 0 )
    {
      if ( v9 )
      {
LABEL_30:
        v7 = -(((unsigned __int8)vars8 & 0xFu) > 9);
        goto LABEL_14;
      }
LABEL_34:
      v7 = v3 > 9u || (vars8 & 0x30) != 0;
      goto LABEL_14;
    }
    if ( !v9 )
    {
      v7 = -((vars8 & 0x30) == 0);
      goto LABEL_14;
    }
LABEL_13:
    v7 = -1;
    goto LABEL_14;
  }
  if ( !v9 )
    goto LABEL_34;
LABEL_19:
  if ( v4 <= 9u )
    goto LABEL_27;
  if ( (vars0 & 0x3F) == 0x3D )
  {
    v7 = -(v2 != 61);
    goto LABEL_14;
  }
  if ( v2 == 61 )
  {
LABEL_27:
    v7 = 1;
    goto LABEL_14;
  }
  if ( v3 == 12 )
  {
    v7 = v4 != 12;
    goto LABEL_14;
  }
  if ( v4 == 12 )
    goto LABEL_13;
  tinfo_size = get_tinfo_size(0, vars0, 0);
  v11 = vars8;
  if ( tinfo_size < (int)get_tinfo_size(0, vars8, 0) )
    goto LABEL_13;
  v16 = sub_32A000(&vars0, v11, v12, v13, v14, v15);
  v21 = sub_32A000(&vars8, v11, v17, v18, v19, v20);
  if ( v16 < v21 )
    goto LABEL_13;
  v7 = v16 > v21;
LABEL_14:
  clear_tinfo_t(&vars8);
  clear_tinfo_t(&vars0);
  return v7;
}

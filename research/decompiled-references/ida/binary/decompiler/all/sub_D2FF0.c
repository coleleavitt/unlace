bool __fastcall sub_D2FF0(int *a1, __int64 a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // r15
  int *v6; // r14
  __int64 v7; // rax
  int v9; // ebx
  int v10; // ebp
  int v11; // r12d
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  unsigned __int64 v16; // r15
  int v17; // r14d
  int v19; // eax
  char v20; // al
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char v24; // al
  int v25; // [rsp+8h] [rbp-50h]
  int v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+8h] [rbp-50h]
  int v28; // [rsp+Ch] [rbp-4Ch]
  int v29; // [rsp+Ch] [rbp-4Ch]
  int v30; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v7 = *((_QWORD *)a1 + 14);
  v31 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(v7 + 80);
  if ( !a3 )
  {
    v11 = a4 - 1;
    v10 = a4;
    v15 = (a4 - 1) & a4;
    goto LABEL_11;
  }
  a2 = *a3;
  a1 = &v30;
  v30 = 0;
  get_tinfo_size();
  v10 = v30;
  v11 = v30 - 1;
  v12 = (v30 - 1) & v30;
  if ( v12 )
    goto LABEL_81;
  v13 = 2 * v9;
  if ( v30 <= 2 * v9 )
  {
    v14 = a5;
    if ( v9 > v30 )
    {
      if ( a5 > 0x10 )
        goto LABEL_6;
      goto LABEL_69;
    }
    if ( a5 > 0x10 )
    {
LABEL_48:
      if ( v14 == 176 || v14 == 256 )
      {
LABEL_51:
        v11 = v9 - 1;
        v10 = v9;
        v15 = (v9 - 1) & v9;
        goto LABEL_11;
      }
LABEL_50:
      a2 = 4;
      a1 = &dword_40 + 3;
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_9;
      goto LABEL_51;
    }
LABEL_73:
    a1 = (_DWORD *)(&qword_60 + 3);
    v14 = getinf();
    goto LABEL_48;
  }
  if ( a5 > 0x10 )
  {
    if ( a5 == 256 || a5 == 176 )
    {
      v10 = 2 * v9;
      v16 = *(_QWORD *)(v5 + 8);
      if ( v9 <= v13 )
        v10 = v9;
      v11 = v10 - 1;
      v21 = v10 & (v10 - 1);
      if ( *((_BYTE *)v6 + 145) )
      {
        if ( v21 )
          goto LABEL_81;
        v17 = 2 * v9;
        if ( v13 < v10 )
          goto LABEL_28;
      }
      else
      {
        if ( v21 )
          goto LABEL_81;
        v17 = 2 * v9;
        if ( v10 > v13 )
          goto LABEL_28;
      }
      if ( v9 > v13 )
        goto LABEL_16;
      goto LABEL_33;
    }
    goto LABEL_65;
  }
  v28 = v11 & v30;
  v23 = getinf();
  v13 = 2 * v9;
  if ( v23 != 176 && v23 != 256 )
  {
    v12 = v28;
LABEL_65:
    a2 = 512;
    a1 = &dword_40 + 3;
    v27 = v12;
    v29 = v13;
    v24 = getinf_flag();
    v15 = v27;
    if ( v24 )
      goto LABEL_11;
    v13 = v29;
    if ( v9 <= v29 )
    {
      v10 = v29;
      if ( a5 > 0x10 )
        goto LABEL_50;
      v10 = v29;
      goto LABEL_73;
    }
    v10 = v29;
    if ( a5 > 0x10 )
      goto LABEL_8;
    goto LABEL_68;
  }
  if ( v9 <= v13 )
  {
    v10 = 2 * v9;
    goto LABEL_73;
  }
LABEL_68:
  v10 = v13;
LABEL_69:
  a1 = (_DWORD *)(&qword_60 + 3);
  v14 = getinf();
LABEL_6:
  if ( v14 != 176 && v14 != 256 )
  {
LABEL_8:
    a2 = 2;
    a1 = &dword_40 + 3;
    if ( (unsigned __int8)getinf_flag() )
    {
LABEL_9:
      v11 = v10 - 1;
      v15 = v10 & (v10 - 1);
      goto LABEL_11;
    }
    goto LABEL_51;
  }
  v11 = v10 - 1;
  v15 = (v10 - 1) & v10;
LABEL_11:
  v16 = *(_QWORD *)(v5 + 8);
  if ( *((_BYTE *)v6 + 145) )
  {
    v19 = a5;
    if ( a5 <= 0x10 )
    {
      a1 = (_DWORD *)(&qword_60 + 3);
      v26 = v15;
      v19 = getinf();
      v15 = v26;
    }
    if ( v19 != 176 && v19 != 256 )
    {
      a2 = 2;
      a1 = &dword_40 + 3;
      v25 = v15;
      v20 = getinf_flag();
      v15 = v25;
      if ( !v20 )
        v16 &= -v9;
    }
  }
  if ( v15 )
LABEL_81:
    sub_CE830(a1, a2);
  v17 = 2 * v9;
  if ( v10 <= 2 * v9 )
  {
    if ( v9 > v10 )
    {
      if ( a5 > 0x10 )
      {
LABEL_16:
        if ( a5 == 176 || a5 == 256 )
          goto LABEL_19;
LABEL_18:
        if ( (unsigned __int8)getinf_flag() )
        {
LABEL_19:
          v11 = v10 - 1;
          v9 = v10;
          return ((v16 + v11) & -v9) == v16;
        }
LABEL_36:
        v11 = v9 - 1;
        return ((v16 + v11) & -v9) == v16;
      }
LABEL_55:
      a5 = getinf();
      goto LABEL_16;
    }
    if ( a5 > 0x10 )
      goto LABEL_33;
    goto LABEL_58;
  }
  if ( a5 <= 0x10 )
  {
    v22 = getinf();
    if ( v22 == 176 || v22 == 256 )
    {
      v10 = 2 * v9;
      if ( v9 > v17 )
        goto LABEL_55;
LABEL_58:
      a5 = getinf();
LABEL_33:
      if ( a5 == 176 || a5 == 256 )
        goto LABEL_36;
      goto LABEL_35;
    }
LABEL_30:
    if ( (unsigned __int8)getinf_flag() )
    {
      v9 = v10;
      return ((v16 + v11) & -v9) == v16;
    }
    v10 = v17;
    if ( v9 > v17 )
    {
      if ( a5 > 0x10 )
        goto LABEL_18;
      goto LABEL_55;
    }
    if ( a5 > 0x10 )
    {
LABEL_35:
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_19;
      goto LABEL_36;
    }
    goto LABEL_58;
  }
LABEL_28:
  if ( a5 != 256 && a5 != 176 )
    goto LABEL_30;
  if ( v9 > v17 )
    v9 = v17;
  v11 = v9 - 1;
  return ((v16 + v11) & -v9) == v16;
}

void __fastcall sub_FA5F10(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, int a4, _QWORD *a5, int a6)
{
  unsigned __int8 *v6; // r11
  unsigned __int8 *v9; // rdi
  int v10; // ecx
  unsigned __int8 *v12; // r10
  char *v13; // rsi
  unsigned __int8 *v14; // rax
  int v15; // edx
  bool v16; // dl
  signed __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // rcx
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 *v23; // r10
  char *v24; // r8
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // ecx
  int v29; // r8d
  char *v30; // rdx
  int v31; // eax
  unsigned int v32; // ecx
  bool v33; // r8
  char *v34; // rax
  int v35; // edx
  unsigned int v36; // ecx
  char *v37; // rcx
  int v38; // eax
  unsigned int v39; // r8d
  char *v40; // rax
  int v41; // ecx
  unsigned int v42; // r8d

  v6 = &a3[a4];
  v9 = a3;
  v10 = (char)*a3;
  if ( *a3 == 58 )
  {
LABEL_34:
    v13 = (char *)v9;
    goto LABEL_35;
  }
  v12 = v6 - 1;
LABEL_3:
  v13 = (char *)v9;
  do
    ++v13;
  while ( *v13 != 58 );
  v14 = v9;
  if ( (_BYTE)v10 == 37 )
  {
    while ( 1 )
    {
      v24 = (char *)(v14 + 1);
      if ( v13 == (char *)(v14 + 1) || (v25 = (char)v14[1], (unsigned __int8)(v25 - 48) > 9u) )
        BUG();
      v26 = 0;
      while ( 1 )
      {
        ++v24;
        v26 = v25 + 10 * v26 - 48;
        if ( v13 == v24 )
          break;
        v25 = *v24;
        if ( (unsigned __int8)(*v24 - 48) > 9u )
          goto LABEL_44;
      }
      v24 = v13;
LABEL_44:
      v27 = a2 % v26;
      v28 = v24[1];
      if ( v24[1] != 91 )
      {
        v14 = (unsigned __int8 *)(v24 + 1);
        if ( v13 == v24 + 1 )
        {
          v29 = 0;
        }
        else
        {
          v29 = 0;
          if ( (unsigned __int8)(v28 - 48) <= 9u )
          {
            while ( 1 )
            {
              ++v14;
              v29 = v28 + 10 * v29 - 48;
              if ( v13 == (char *)v14 )
                break;
              v28 = (char)*v14;
              a6 = v28 - 48;
              if ( (unsigned __int8)(*v14 - 48) > 9u )
                goto LABEL_49;
            }
            v14 = (unsigned __int8 *)v13;
          }
        }
LABEL_49:
        LOBYTE(a6) = v27 == v29;
        goto LABEL_50;
      }
      v37 = v24 + 2;
      if ( v13 == v24 + 2 )
        break;
      v38 = v24[2];
      if ( (unsigned __int8)(v38 - 48) > 9u )
      {
        a6 = 1;
        goto LABEL_73;
      }
      v39 = 0;
      while ( 1 )
      {
        ++v37;
        v39 = v38 + 10 * v39 - 48;
        if ( v13 == v37 )
          break;
        v38 = *v37;
        a6 = v38 - 48;
        if ( (unsigned __int8)(*v37 - 48) > 9u )
        {
          LOBYTE(a6) = v27 >= v39;
          goto LABEL_73;
        }
      }
      v37 = v13;
      v40 = v13 + 1;
      LOBYTE(a6) = v27 >= v39;
LABEL_74:
      v41 = v37[1];
      v42 = 0;
      if ( (unsigned __int8)(v41 - 48) > 9u )
      {
LABEL_77:
        v14 = (unsigned __int8 *)(v40 + 1);
        LOBYTE(v27) = v27 <= v42;
        a6 &= v27;
      }
      else
      {
        while ( 1 )
        {
          ++v40;
          v42 = v41 + 10 * v42 - 48;
          if ( v13 == v40 )
            break;
          v41 = *v40;
          if ( (unsigned __int8)(*v40 - 48) > 9u )
            goto LABEL_77;
        }
        v14 = (unsigned __int8 *)(v13 + 1);
        LOBYTE(v27) = v27 <= v42;
        a6 &= v27;
      }
LABEL_50:
      if ( (_BYTE)a6 )
        goto LABEL_35;
LABEL_13:
      v17 = v13 - (char *)v14;
      v18 = (v13 - (char *)v14) >> 2;
      if ( v18 > 0 )
      {
        if ( *v14 == 44 )
        {
          v20 = v14;
        }
        else if ( v14[1] == 44 )
        {
          v20 = v14 + 1;
        }
        else if ( v14[2] == 44 )
        {
          v20 = v14 + 2;
        }
        else
        {
          v19 = (char *)&v14[4 * v18];
          v20 = v14 + 3;
          if ( v14[3] != 44 )
          {
            while ( 1 )
            {
              v20 = v14 + 4;
              if ( v19 == (char *)(v14 + 4) )
              {
                v17 = v13 - (char *)v20;
                goto LABEL_26;
              }
              if ( v14[4] == 44 )
                goto LABEL_37;
              if ( v14[5] == 44 )
              {
                v20 = v14 + 5;
                goto LABEL_37;
              }
              if ( v14[6] == 44 )
              {
                v20 = v14 + 6;
                goto LABEL_37;
              }
              if ( v14[7] == 44 )
                break;
              v14 += 4;
            }
            v20 = v14 + 7;
          }
        }
        goto LABEL_37;
      }
      v20 = v14;
LABEL_26:
      if ( v17 == 2 )
        goto LABEL_30;
      if ( v17 == 3 )
      {
        if ( *v20 == 44 )
          goto LABEL_37;
        ++v20;
LABEL_30:
        if ( *v20 == 44 )
          goto LABEL_37;
        ++v20;
        goto LABEL_32;
      }
      if ( v17 != 1 )
      {
LABEL_33:
        v21 = sub_FA1DC0(v9, v12, 124);
        v10 = (char)v21[1];
        v9 = v21 + 1;
        if ( v21[1] == 58 )
          goto LABEL_34;
        goto LABEL_3;
      }
LABEL_32:
      if ( *v20 != 44 )
        goto LABEL_33;
LABEL_37:
      if ( v13 == (char *)v20 )
        goto LABEL_33;
      v10 = (char)v20[1];
      v14 = v20 + 1;
      if ( v20[1] != 37 )
        goto LABEL_6;
    }
    v37 = v13;
    a6 = 1;
LABEL_73:
    v40 = v37 + 1;
    if ( v13 == v37 + 1 )
    {
      v14 = (unsigned __int8 *)(v13 + 1);
      LOBYTE(v27) = v27 == 0;
      a6 &= v27;
      goto LABEL_50;
    }
    goto LABEL_74;
  }
LABEL_6:
  if ( (_BYTE)v10 != 91 )
  {
    if ( v13 == (char *)v14 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 0;
      if ( (unsigned __int8)(v10 - 48) <= 9u )
      {
        while ( 1 )
        {
          ++v14;
          v15 = v10 + 10 * v15 - 48;
          if ( v13 == (char *)v14 )
            break;
          v10 = (char)*v14;
          if ( (unsigned __int8)(*v14 - 48) > 9u )
            goto LABEL_11;
        }
        v14 = (unsigned __int8 *)v13;
      }
    }
LABEL_11:
    v16 = a2 == v15;
    goto LABEL_12;
  }
  v30 = (char *)(v14 + 1);
  if ( v13 == (char *)(v14 + 1) )
  {
    v30 = v13;
    v33 = 1;
LABEL_58:
    v34 = v30 + 1;
    if ( v13 == v30 + 1 )
    {
      v14 = (unsigned __int8 *)(v13 + 1);
      v16 = v33 && a2 == 0;
      goto LABEL_12;
    }
    goto LABEL_59;
  }
  v31 = (char)v14[1];
  if ( (unsigned __int8)(v31 - 48) > 9u )
  {
    v33 = 1;
    goto LABEL_58;
  }
  v32 = 0;
  while ( 1 )
  {
    ++v30;
    v32 = v31 + 10 * v32 - 48;
    if ( v13 == v30 )
      break;
    v31 = *v30;
    if ( (unsigned __int8)(*v30 - 48) > 9u )
    {
      v33 = a2 >= v32;
      goto LABEL_58;
    }
  }
  v30 = v13;
  v34 = v13 + 1;
  v33 = a2 >= v32;
LABEL_59:
  v35 = v30[1];
  v36 = 0;
  if ( (unsigned __int8)(v35 - 48) > 9u )
  {
LABEL_62:
    v14 = (unsigned __int8 *)(v34 + 1);
    v16 = v33 && v36 >= a2;
  }
  else
  {
    while ( 1 )
    {
      ++v34;
      v36 = v35 + 10 * v36 - 48;
      if ( v13 == v34 )
        break;
      v35 = *v34;
      a6 = v35 - 48;
      if ( (unsigned __int8)(*v34 - 48) > 9u )
        goto LABEL_62;
    }
    v14 = (unsigned __int8 *)(v13 + 1);
    v16 = v33 && v36 >= a2;
  }
LABEL_12:
  if ( !v16 )
    goto LABEL_13;
LABEL_35:
  v22 = sub_FA1DC0((unsigned __int8 *)v13 + 1, v6, 124);
  sub_FA4360(a1, v23, v22, a5);
}


double __fastcall CoinMpsCardReader::osi_strtod(CoinMpsCardReader *this, char *a2, char **a3, int a4)
{
  int v4; // eax
  char *v5; // r8
  char *v6; // rbx
  double v7; // xmm6_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int16 v11; // ax
  __int16 v12; // cx
  __int16 v13; // ax
  __int16 v14; // cx
  unsigned __int16 v15; // ax
  __int16 v16; // di
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // di
  unsigned __int16 v21; // ax
  __int16 v22; // di
  unsigned __int64 v23; // rcx
  __int16 v24; // ax
  __int16 v25; // ax
  __int16 v26; // di
  unsigned __int16 v27; // ax
  int v28; // edi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // ecx
  char v32; // r8
  char *v33; // rax
  int v34; // r11d
  int v35; // eax
  int v36; // edi
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int16 v42; // ax
  __int64 v43; // rcx
  __int16 v44; // di
  __int16 v45; // ax
  __int16 v46; // di
  unsigned __int16 v47; // ax
  __int16 v48; // di
  unsigned __int64 v49; // rcx
  __int16 v50; // ax
  __int16 v51; // ax
  __int16 v52; // di
  unsigned __int16 v53; // ax
  __int16 v54; // di
  unsigned __int64 v55; // rcx
  __int16 v56; // ax
  __int16 v57; // ax
  char *v58; // r8
  bool v59; // r9
  bool v60; // bp
  char *v61; // r8
  double v62; // xmm2_8
  int v63; // r10d
  int v64; // r10d
  __int64 v65; // rcx
  char v66; // di
  __int16 v67; // ax
  int v68; // eax
  int v69; // eax
  int v70; // ecx
  int v71; // ecx
  unsigned __int8 v72; // di
  unsigned __int8 v73; // r9
  unsigned __int8 v74; // r9
  int v75; // ecx
  unsigned __int8 v76; // r9
  unsigned __int8 v77; // r9
  int v78; // ecx
  char **v79; // [rsp+28h] [rbp-30h]
  double v80; // [rsp+38h] [rbp-20h]

  v4 = *a2;
  v80 = 0.0;
  if ( *a2 == 32 || (v5 = a2, (_BYTE)v4 == 9) )
  {
    v5 = a2;
    do
    {
      do
        v4 = *++v5;
      while ( *v5 == 32 );
    }
    while ( (_BYTE)v4 == 9 );
  }
  if ( !a4 )
  {
    v6 = v5 + 1;
    if ( (_BYTE)v4 == 45 )
    {
      v4 = v5[1];
      v58 = v5 + 2;
      v7 = -1.0;
      v59 = (_BYTE)v4 != 9 && (_BYTE)v4 != 32;
    }
    else
    {
      v7 = 1.0;
      if ( (_BYTE)v4 != 43 )
        goto LABEL_9;
      v4 = v5[1];
      v58 = v5 + 2;
      v59 = (_BYTE)v4 != 9 && (_BYTE)v4 != 32;
    }
    if ( v59 )
    {
      v6 = v58;
    }
    else
    {
      while ( 1 )
      {
        v4 = v6[1];
        if ( v6[1] != 32 && (_BYTE)v4 != 9 )
          break;
        ++v6;
      }
      v6 += 2;
    }
LABEL_9:
    v8 = 0.0;
    v9 = 0.0;
    if ( (unsigned __int8)(v4 - 48) > 9u )
    {
LABEL_41:
      if ( (_BYTE)v4 == 46 )
      {
        v61 = v6;
        v62 = 0.0;
        while ( 1 )
        {
          v4 = *v61;
          v63 = (int)v61++;
          v64 = v63 - (_DWORD)v6;
          if ( (unsigned __int8)(v4 - 48) > 9u )
            break;
          v62 = v62 * 10.0 + (double)v4 - 48.0;
          if ( v61 == v6 + 24 )
            goto LABEL_13;
        }
        v6 = v61;
        v80 = v9 + v62 * *(double *)&qword_298040[v64];
      }
      if ( (v4 & 0xDF) == 0x45 )
      {
        v32 = *v6;
        v33 = v6 + 1;
        if ( *v6 == 45 )
        {
          v32 = v6[1];
          v34 = -1;
          v33 = v6 + 2;
        }
        else
        {
          v34 = 1;
          if ( v32 == 43 )
          {
            v32 = v6[1];
            v33 = v6 + 2;
          }
        }
        while ( 1 )
        {
          v6 = v33;
          if ( (unsigned __int8)(v32 - 48) > 9u )
            break;
          a4 = v32 + 10 * a4 - 48;
          if ( a4 > 999 )
            goto LABEL_79;
          v32 = *v33++;
        }
        v60 = v32 == 9 || (v32 & 0xDF) == 0;
        if ( a4 > 299 )
        {
LABEL_79:
          v60 = v32 == 9 || (v32 & 0xDF) == 0;
          if ( (double)v34 < 0.0 )
            v80 = 0.0;
          else
            v80 = 1.797693134862316e308;
          goto LABEL_85;
        }
        v75 = v34 * a4;
        if ( (unsigned int)(v75 + 9) > 0x12 )
        {
          v79 = a3;
          v8 = pow(10.0, (double)v75);
          a3 = v79;
          v80 = v80 * v8;
        }
        else
        {
          v80 = v80 * *(double *)&qword_297FA0[v75 + 9];
        }
      }
      else
      {
        v60 = (v4 & 0xDF) == 0 || (_BYTE)v4 == 9;
      }
LABEL_85:
      if ( v60 )
      {
        *a3 = v6;
        v8 = v80;
        return v8 * v7;
      }
    }
    else
    {
      while ( 1 )
      {
        v9 = v9 * 10.0 + (double)v4 - 48.0;
        if ( v9 >= 1.0e30 )
          break;
        v4 = *v6++;
        if ( (unsigned __int8)(v4 - 48) > 9u )
        {
          v80 = v9;
          goto LABEL_41;
        }
      }
    }
LABEL_13:
    CoinMpsCardReader::osi_strtod(this, a2, a3);
    v7 = 1.0;
    return v8 * v7;
  }
  *a3 = v5 + 12;
  if ( a4 == 1 )
  {
    v35 = (unsigned __int8)v5[2];
    v36 = (unsigned __int8)v5[1];
    v37 = v35 - 48;
    if ( (unsigned __int8)(v35 - 48) > 9u )
    {
      v70 = v35 - 97;
      if ( (unsigned __int8)(v35 - 97) <= 0x19u )
      {
        LOWORD(v70) = (char)v35;
        v38 = (v70 - 87) << 6;
      }
      else
      {
        v71 = v35 - 65;
        if ( (unsigned __int8)(v35 - 65) > 0x19u )
        {
          v78 = v35 - 42;
          if ( (unsigned __int8)(v35 - 42) <= 1u )
          {
            LOWORD(v78) = (char)v35;
            v38 = (v78 + 20) << 6;
          }
          else
          {
            *a3 = a2;
            v38 = 0;
            v36 = (unsigned __int8)v5[1];
          }
        }
        else
        {
          LOWORD(v71) = (char)v35;
          v38 = (v71 - 29) << 6;
        }
      }
    }
    else
    {
      LOWORD(v37) = (char)v35;
      v38 = (v37 - 48) << 6;
    }
    v39 = v36 - 48;
    if ( (unsigned __int8)(v36 - 48) > 9u )
    {
      v68 = v36 - 97;
      if ( (unsigned __int8)(v36 - 97) <= 0x19u )
      {
        LOWORD(v68) = (char)v36;
        v40 = v68 - 87;
        v38 |= v40;
      }
      else
      {
        v69 = v36 - 65;
        if ( (unsigned __int8)(v36 - 65) > 0x19u )
        {
          v40 = v36 - 42;
          if ( (unsigned __int8)(v36 - 42) <= 1u )
          {
            LOWORD(v40) = (char)v36;
            v40 += 20;
            v38 |= v40;
          }
          else
          {
            *a3 = a2;
          }
        }
        else
        {
          LOWORD(v69) = (char)v36;
          v40 = v69 - 29;
          v38 |= v40;
        }
      }
    }
    else
    {
      LOWORD(v39) = (char)v36;
      v40 = v39 - 48;
      v38 |= v40;
    }
    LOWORD(v40) = *v5;
    v41 = (unsigned int)(v38 << 6);
    if ( (unsigned __int8)(v40 - 48) > 9u )
    {
      if ( (unsigned __int8)(v40 - 97) <= 0x19u )
      {
        v41 = (v40 - 87) | (unsigned int)v41;
      }
      else if ( (unsigned __int8)(v40 - 65) > 0x19u )
      {
        if ( (unsigned __int8)(v40 - 42) <= 1u )
          v41 = (v40 + 20) | (unsigned int)v41;
        else
          *a3 = a2;
      }
      else
      {
        v41 = (v40 - 29) | (unsigned int)v41;
      }
    }
    else
    {
      v41 = (v40 - 48) | (unsigned int)v41;
    }
    v42 = v5[5];
    v43 = v41 << 48;
    v44 = v5[4];
    if ( (unsigned __int8)(v42 - 48) > 9u )
    {
      if ( (unsigned __int8)(v42 - 97) <= 0x19u )
      {
        v45 = (v42 - 87) << 6;
      }
      else if ( (unsigned __int8)(v42 - 65) > 0x19u )
      {
        v77 = v42 - 42;
        v45 = (v42 + 20) << 6;
        if ( v77 > 1u )
        {
          *a3 = a2;
          v45 = 0;
          v44 = v5[4];
        }
      }
      else
      {
        v45 = (v42 - 29) << 6;
      }
    }
    else
    {
      v45 = (v42 - 48) << 6;
    }
    if ( (unsigned __int8)(v44 - 48) > 9u )
    {
      if ( (unsigned __int8)(v44 - 97) <= 0x19u )
      {
        v45 |= v44 - 87;
      }
      else if ( (unsigned __int8)(v44 - 65) > 0x19u )
      {
        if ( (unsigned __int8)(v44 - 42) <= 1u )
          v45 |= v44 + 20;
        else
          *a3 = a2;
      }
      else
      {
        v45 |= v44 - 29;
      }
    }
    else
    {
      v45 |= v44 - 48;
    }
    v46 = v5[3];
    v47 = v45 << 6;
    if ( (unsigned __int8)(v46 - 48) > 9u )
    {
      if ( (unsigned __int8)(v46 - 97) <= 0x19u )
      {
        v47 |= v46 - 87;
      }
      else if ( (unsigned __int8)(v46 - 65) > 0x19u )
      {
        if ( (unsigned __int8)(v46 - 42) <= 1u )
          v47 |= v46 + 20;
        else
          *a3 = a2;
      }
      else
      {
        v47 |= v46 - 29;
      }
    }
    else
    {
      v47 |= v46 - 48;
    }
    v48 = v5[7];
    v49 = ((unsigned __int64)v47 << 32) | v43;
    v50 = v5[8];
    if ( (unsigned __int8)(v50 - 48) > 9u )
    {
      if ( (unsigned __int8)(v50 - 97) <= 0x19u )
      {
        v51 = (v50 - 87) << 6;
      }
      else if ( (unsigned __int8)(v50 - 65) > 0x19u )
      {
        v76 = v50 - 42;
        v51 = (v50 + 20) << 6;
        if ( v76 > 1u )
        {
          *a3 = a2;
          v51 = 0;
          v48 = v5[7];
        }
      }
      else
      {
        v51 = (v50 - 29) << 6;
      }
    }
    else
    {
      v51 = (v50 - 48) << 6;
    }
    if ( (unsigned __int8)(v48 - 48) > 9u )
    {
      if ( (unsigned __int8)(v48 - 97) <= 0x19u )
      {
        v51 |= v48 - 87;
      }
      else if ( (unsigned __int8)(v48 - 65) > 0x19u )
      {
        if ( (unsigned __int8)(v48 - 42) <= 1u )
          v51 |= v48 + 20;
        else
          *a3 = a2;
      }
      else
      {
        v51 |= v48 - 29;
      }
    }
    else
    {
      v51 |= v48 - 48;
    }
    v52 = v5[6];
    v53 = v51 << 6;
    if ( (unsigned __int8)(v52 - 48) > 9u )
    {
      if ( (unsigned __int8)(v52 - 97) <= 0x19u )
      {
        v53 |= v52 - 87;
      }
      else if ( (unsigned __int8)(v52 - 65) > 0x19u )
      {
        if ( (unsigned __int8)(v52 - 42) <= 1u )
          v53 |= v52 + 20;
        else
          *a3 = a2;
      }
      else
      {
        v53 |= v52 - 29;
      }
    }
    else
    {
      v53 |= v52 - 48;
    }
    v54 = v5[10];
    v55 = ((unsigned __int64)v53 << 16) | v49;
    v56 = v5[11];
    if ( (unsigned __int8)(v56 - 48) <= 9u )
    {
      v57 = (v56 - 48) << 6;
    }
    else if ( (unsigned __int8)(v56 - 97) <= 0x19u )
    {
      v57 = (v56 - 87) << 6;
    }
    else if ( (unsigned __int8)(v56 - 65) <= 0x19u )
    {
      v57 = (v56 - 29) << 6;
    }
    else if ( (unsigned __int8)(v56 - 42) <= 1u )
    {
      v57 = (v56 + 20) << 6;
    }
    else
    {
      *a3 = a2;
      v57 = 0;
      v54 = v5[10];
    }
    if ( (unsigned __int8)(v54 - 48) <= 9u )
    {
      v57 |= v54 - 48;
    }
    else if ( (unsigned __int8)(v54 - 97) <= 0x19u )
    {
      v57 |= v54 - 87;
    }
    else if ( (unsigned __int8)(v54 - 65) <= 0x19u )
    {
      v57 |= v54 - 29;
    }
    else if ( (unsigned __int8)(v54 - 42) <= 1u )
    {
      v57 |= v54 + 20;
    }
    else
    {
      *a3 = a2;
    }
    v66 = v5[9];
    v67 = v57 << 6;
    if ( (unsigned __int8)(v66 - 48) <= 9u )
    {
      v67 |= v66 - 48;
    }
    else if ( (unsigned __int8)(v66 - 97) <= 0x19u )
    {
      v67 |= v66 - 87;
    }
    else if ( (unsigned __int8)(v66 - 65) <= 0x19u )
    {
      v67 |= v66 - 29;
    }
    else if ( (unsigned __int8)(v66 - 42) <= 1u )
    {
      v67 |= v66 + 20;
    }
    else
    {
      *a3 = a2;
    }
    LOWORD(v55) = v67;
    return *(double *)&v55;
  }
  v11 = v5[2];
  v12 = v5[1];
  if ( (unsigned __int8)(v11 - 48) <= 9u )
  {
    v13 = (v11 - 48) << 6;
    if ( (unsigned __int8)(v12 - 48) <= 9u )
    {
LABEL_20:
      v13 |= v12 - 48;
      goto LABEL_21;
    }
  }
  else
  {
    if ( (unsigned __int8)(v11 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v11 - 65) <= 0x19u )
      {
        v13 = (v11 - 29) << 6;
      }
      else
      {
        v72 = v11 - 42;
        v13 = (v11 + 20) << 6;
        if ( v72 > 1u )
        {
          *a3 = a2;
          v13 = 0;
          v12 = v5[1];
        }
      }
    }
    else
    {
      v13 = (v11 - 87) << 6;
    }
    if ( (unsigned __int8)(v12 - 48) <= 9u )
      goto LABEL_20;
  }
  if ( (unsigned __int8)(v12 - 97) > 0x19u )
  {
    if ( (unsigned __int8)(v12 - 65) <= 0x19u )
    {
      v13 |= v12 - 29;
    }
    else if ( (unsigned __int8)(v12 - 42) <= 1u )
    {
      v13 |= v12 + 20;
    }
    else
    {
      *a3 = a2;
    }
  }
  else
  {
    v13 |= v12 - 87;
  }
LABEL_21:
  v14 = *v5;
  v15 = v13 << 6;
  if ( (unsigned __int8)(v14 - 48) > 9u )
  {
    if ( (unsigned __int8)(v14 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v14 - 65) <= 0x19u )
      {
        v15 |= v14 - 29;
      }
      else if ( (unsigned __int8)(v14 - 42) <= 1u )
      {
        v15 |= v14 + 20;
      }
      else
      {
        *a3 = a2;
      }
    }
    else
    {
      v15 |= v14 - 87;
    }
  }
  else
  {
    v15 |= v14 - 48;
  }
  v16 = v5[4];
  v17 = v15;
  v18 = v5[5];
  if ( (unsigned __int8)(v18 - 48) > 9u )
  {
    if ( (unsigned __int8)(v18 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v18 - 65) <= 0x19u )
      {
        v19 = (v18 - 29) << 6;
      }
      else
      {
        v73 = v18 - 42;
        v19 = (v18 + 20) << 6;
        if ( v73 > 1u )
        {
          *a3 = a2;
          v19 = 0;
          v16 = v5[4];
        }
      }
    }
    else
    {
      v19 = (v18 - 87) << 6;
    }
  }
  else
  {
    v19 = (v18 - 48) << 6;
  }
  if ( (unsigned __int8)(v16 - 48) > 9u )
  {
    if ( (unsigned __int8)(v16 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v16 - 65) <= 0x19u )
      {
        v19 |= v16 - 29;
      }
      else if ( (unsigned __int8)(v16 - 42) <= 1u )
      {
        v19 |= v16 + 20;
      }
      else
      {
        *a3 = a2;
      }
    }
    else
    {
      v19 |= v16 - 87;
    }
  }
  else
  {
    v19 |= v16 - 48;
  }
  v20 = v5[3];
  v21 = v19 << 6;
  if ( (unsigned __int8)(v20 - 48) > 9u )
  {
    if ( (unsigned __int8)(v20 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v20 - 65) <= 0x19u )
      {
        v21 |= v20 - 29;
      }
      else if ( (unsigned __int8)(v20 - 42) <= 1u )
      {
        v21 |= v20 + 20;
      }
      else
      {
        *a3 = a2;
      }
    }
    else
    {
      v21 |= v20 - 87;
    }
  }
  else
  {
    v21 |= v20 - 48;
  }
  v22 = v5[7];
  v23 = ((unsigned __int64)v21 << 16) | v17 & 0xFFFFFFFF0000FFFFLL;
  v24 = v5[8];
  if ( (unsigned __int8)(v24 - 48) > 9u )
  {
    if ( (unsigned __int8)(v24 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v24 - 65) <= 0x19u )
      {
        v25 = (v24 - 29) << 6;
      }
      else
      {
        v74 = v24 - 42;
        v25 = (v24 + 20) << 6;
        if ( v74 > 1u )
        {
          *a3 = a2;
          v25 = 0;
          v22 = v5[7];
        }
      }
    }
    else
    {
      v25 = (v24 - 87) << 6;
    }
  }
  else
  {
    v25 = (v24 - 48) << 6;
  }
  if ( (unsigned __int8)(v22 - 48) > 9u )
  {
    if ( (unsigned __int8)(v22 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v22 - 65) <= 0x19u )
      {
        v25 |= v22 - 29;
      }
      else if ( (unsigned __int8)(v22 - 42) <= 1u )
      {
        v25 |= v22 + 20;
      }
      else
      {
        *a3 = a2;
      }
    }
    else
    {
      v25 |= v22 - 87;
    }
  }
  else
  {
    v25 |= v22 - 48;
  }
  v26 = v5[6];
  v27 = v25 << 6;
  if ( (unsigned __int8)(v26 - 48) > 9u )
  {
    if ( (unsigned __int8)(v26 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v26 - 65) <= 0x19u )
      {
        v27 |= v26 - 29;
      }
      else if ( (unsigned __int8)(v26 - 42) <= 1u )
      {
        v27 |= v26 + 20;
      }
      else
      {
        *a3 = a2;
      }
    }
    else
    {
      v27 |= v26 - 87;
    }
  }
  else
  {
    v27 |= v26 - 48;
  }
  HIWORD(v28) = -1;
  v30 = v23 & 0xFFFF0000FFFFFFFFLL;
  LOWORD(v28) = v5[10];
  v29 = v30 | ((unsigned __int64)v27 << 32);
  LOWORD(v30) = v5[11];
  if ( (unsigned __int8)(v30 - 48) <= 9u )
  {
    v31 = ((_DWORD)v30 - 48) << 6;
  }
  else if ( (unsigned __int8)(v30 - 97) <= 0x19u )
  {
    v31 = ((_DWORD)v30 - 87) << 6;
  }
  else if ( (unsigned __int8)(v30 - 65) <= 0x19u )
  {
    v31 = ((_DWORD)v30 - 29) << 6;
  }
  else if ( (unsigned __int8)(v30 - 42) <= 1u )
  {
    v31 = ((_DWORD)v30 + 20) << 6;
  }
  else
  {
    *a3 = a2;
    v31 = 0;
    LOWORD(v28) = v5[10];
  }
  if ( (unsigned __int8)(v28 - 48) <= 9u )
  {
    v28 -= 48;
    v31 |= v28;
  }
  else if ( (unsigned __int8)(v28 - 97) <= 0x19u )
  {
    v28 -= 87;
    v31 |= v28;
  }
  else if ( (unsigned __int8)(v28 - 65) <= 0x19u )
  {
    v28 -= 29;
    v31 |= v28;
  }
  else if ( (unsigned __int8)(v28 - 42) <= 1u )
  {
    v28 += 20;
    v31 |= v28;
  }
  else
  {
    *a3 = a2;
  }
  LOWORD(v28) = v5[9];
  v65 = (unsigned int)(v31 << 6);
  if ( (unsigned __int8)(v28 - 48) <= 9u )
  {
    v65 = (v28 - 48) | (unsigned int)v65;
  }
  else if ( (unsigned __int8)(v28 - 97) <= 0x19u )
  {
    LOWORD(a3) = (char)v28;
    v65 = ((_DWORD)a3 - 87) | (unsigned int)v65;
  }
  else if ( (unsigned __int8)(v28 - 65) <= 0x19u )
  {
    LOWORD(a3) = (char)v28;
    v65 = ((_DWORD)a3 - 29) | (unsigned int)v65;
  }
  else if ( (unsigned __int8)(v28 - 42) <= 1u )
  {
    LOWORD(a3) = (char)v28;
    v65 = ((_DWORD)a3 + 20) | (unsigned int)v65;
  }
  else
  {
    *a3 = a2;
  }
  v55 = v29 & 0xFFFFFFFFFFFFLL | (v65 << 48);
  return *(double *)&v55;
}


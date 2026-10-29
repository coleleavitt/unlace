_BYTE *__fastcall sub_E287A0(__int64 *a1, const char *a2, __int64 a3)
{
  unsigned int v3; // r13d
  char v5; // al
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int16 **v12; // r8
  __int64 v13; // r9
  char v14; // si
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  char v17; // cl
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int16 *v20; // rsi
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  _BYTE *v24; // rax
  char v25; // al
  __int64 v26; // rdi
  _BYTE *v27; // rax
  __int64 v28; // rdi
  _BYTE *result; // rax
  __int64 v30; // rbx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  char v39; // dl
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r8
  __int64 v44; // rsi
  char v45; // dl
  char v46; // al
  unsigned __int64 v47; // rdi
  _BOOL8 v48; // rdx
  __int64 *v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rdi
  _BYTE *v56; // rax

  v3 = 0;
  v5 = a2[19];
  v6 = (__int64)a2;
  if ( (v5 & 0x40) != 0 )
  {
    a3 = *((unsigned __int16 *)a2 + 11);
    v7 = (unsigned __int64)&a2[8 * a3 + 55 + ((v5 >> 5) & 4)] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v7 + 1) & 4) != 0 )
    {
      v3 = *(_WORD *)(v7 + 8) & 0x1FF;
      if ( (*(_WORD *)(v7 + 8) & 0x1FF) != 0 )
      {
        a2 = "11__SME_ATTRSI";
        sub_971800(a1[1], "11__SME_ATTRSI");
      }
    }
  }
  if ( *(_WORD *)(v6 + 20) >> 2 )
    __asm { jmp     rax }
  v9 = *(_QWORD *)(v6 + 16);
  if ( (v9 & 0x1000000) != 0 )
  {
    v34 = *(unsigned __int16 *)(v6 + 22);
    v35 = 8 * v34 + 48;
    v36 = *(_BYTE *)(v6 + 19);
    v37 = (v9 & 0x40000000) != 0;
    if ( (v36 & 0x40) != 0 )
      v37 += (*(_BYTE *)(((v6 + v35 + ((v36 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v38 = ((v6 + v35 + ((SBYTE3(v9) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v37;
    v39 = ((unsigned __int8)v36 >> 1) & 0xF;
    if ( v39 != 2 )
    {
      switch ( v39 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( v39 )
          {
            case 6:
            case 7:
            case 8:
              v38 += 8LL;
              goto LABEL_41;
            case 9:
              goto LABEL_67;
            case 10:
              goto LABEL_66;
            default:
LABEL_41:
              switch ( v39 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_43;
                case 9:
                  goto LABEL_67;
                case 10:
                  goto LABEL_66;
                default:
                  goto LABEL_72;
              }
          }
        case 9:
LABEL_67:
          v40 = v38 + 8;
          v41 = 8;
          goto LABEL_44;
        case 10:
LABEL_66:
          v40 = v38 + 16;
          v41 = 16;
          goto LABEL_44;
        default:
          goto LABEL_72;
      }
    }
    v38 += 8LL * (*(_WORD *)((v6 + ((v36 >> 5) & 4) + v35 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_43:
    v40 = v38;
    v41 = 0;
LABEL_44:
    v42 = v38 + v41 + v34;
    if ( (v9 & 0x20000000) != 0 )
      v40 = v42;
    v10 = *(_QWORD *)((v40 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else if ( *(_BYTE *)(v6 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
         && sub_F3F310(v6, a2, a3, v9) )
  {
    v10 = *(_BYTE *)(v6 + 18) >> 5;
  }
  else
  {
    v10 = 0;
  }
  sub_E27640(a1, v10, 0);
  if ( (unsigned __int8)sub_F39810(v6) )
  {
    v11 = a1[1];
    if ( ((*(_BYTE *)(v6 + 19) >> 1) & 0xFu) - 6 > 2 )
    {
      sub_971800(v11, "Dw");
      v44 = 8LL * *(unsigned __int16 *)(v6 + 22) + 48;
      v45 = BYTE3(*(_QWORD *)(v6 + 16));
      v46 = *(_BYTE *)(v6 + 19);
      v47 = (v6 + v44 + ((v45 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v48 = (v45 & 0x40) != 0;
      if ( (v46 & 0x40) != 0 )
      {
        v53 = (v6 + v44 + ((v46 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v51 = (*(_BYTE *)(v53 + 1) & 4) != 0;
        v49 = (__int64 *)(v47 + 8 * (v51 + v48));
        v50 = v51 + 1;
        v52 = v53 + 8 * (v51 + 1);
      }
      else
      {
        v49 = (__int64 *)(v47 + 8 * v48);
        v50 = 0;
        v51 = v44 + ((v46 >> 5) & 4);
        v52 = (v6 + v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v53 = v52;
      }
      if ( (((unsigned __int8)v46 >> 1) & 0xF) == 2 )
      {
        v50 += *(_WORD *)v53 & 0x3FF;
        v52 = v53 + 8 * v50;
      }
      while ( (__int64 *)v52 != v49 )
      {
        v54 = *v49++;
        sub_E1BE40((__int64)a1, v54, v50, v51, v43);
      }
      sub_971800(a1[1], "E");
      v23 = a1[1];
      v24 = *(_BYTE **)(v23 + 32);
      if ( (unsigned __int64)v24 < *(_QWORD *)(v23 + 24) )
        goto LABEL_19;
      goto LABEL_56;
    }
    sub_971800(v11, "DO");
    v14 = *(_BYTE *)(v6 + 19);
    v15 = ((unsigned __int8)v14 >> 1) & 0xF;
    if ( (unsigned int)v15 - 6 > 2 )
    {
      v20 = nullptr;
    }
    else
    {
      v16 = 8LL * *(unsigned __int16 *)(v6 + 22) + 48;
      v17 = BYTE3(*(_QWORD *)(v6 + 16));
      v18 = (v17 & 0x40) != 0;
      v19 = (v6 + v16 + ((v17 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 0x40) != 0 )
        v18 += (*(_BYTE *)(((v6 + v16 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v12 = (unsigned __int16 **)(v19 + 8 * v18);
      if ( v15 == 2 )
      {
        v12 = (unsigned __int16 **)(v19
                                  + 8
                                  * ((*(_WORD *)((v6 + v16 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v18));
      }
      else if ( v15 > 1u && ((v15 + 13) & 0xFu) > 8 )
      {
LABEL_72:
        BUG();
      }
      v20 = *v12;
    }
    sub_E24970((__int64)a1, v20, (unsigned __int16 *)0xFFFFFFFFLL, 0, (unsigned __int64)v12, v13);
    sub_971800(a1[1], "E");
  }
  else if ( !(unsigned int)sub_F3F320(v6) )
  {
    sub_971800(a1[1], "Do");
  }
  v23 = a1[1];
  v24 = *(_BYTE **)(v23 + 32);
  if ( (unsigned __int64)v24 < *(_QWORD *)(v23 + 24) )
  {
LABEL_19:
    *(_QWORD *)(v23 + 32) = v24 + 1;
    *v24 = 70;
    goto LABEL_20;
  }
LABEL_56:
  sub_2257CD0(v23, 70);
LABEL_20:
  sub_E280E0((__int64)a1, v6, 1u, 0, v21, v22);
  v25 = (*(_BYTE *)(v6 + 18) >> 3) & 3;
  if ( v25 == 1 )
  {
    v55 = a1[1];
    v56 = *(_BYTE **)(v55 + 32);
    if ( (unsigned __int64)v56 < *(_QWORD *)(v55 + 24) )
    {
      *(_QWORD *)(v55 + 32) = v56 + 1;
      *v56 = 82;
      v28 = a1[1];
      result = *(_BYTE **)(v28 + 32);
      if ( (unsigned __int64)result < *(_QWORD *)(v28 + 24) )
        goto LABEL_25;
      goto LABEL_59;
    }
    sub_2257CD0(v55, 82);
  }
  else if ( v25 == 2 )
  {
    v26 = a1[1];
    v27 = *(_BYTE **)(v26 + 32);
    if ( (unsigned __int64)v27 >= *(_QWORD *)(v26 + 24) )
    {
      sub_2257CD0(v26, 79);
    }
    else
    {
      *(_QWORD *)(v26 + 32) = v27 + 1;
      *v27 = 79;
    }
  }
  v28 = a1[1];
  result = *(_BYTE **)(v28 + 32);
  if ( (unsigned __int64)result < *(_QWORD *)(v28 + 24) )
  {
LABEL_25:
    *(_QWORD *)(v28 + 32) = result + 1;
    *result = 69;
    goto LABEL_26;
  }
LABEL_59:
  result = (_BYTE *)sub_2257CD0(v28, 69);
LABEL_26:
  if ( v3 )
  {
    v30 = 5;
    v31 = v3 & 1;
    if ( (v3 & 1) == 0 )
    {
      v30 = 4;
      v31 = v3 & 2;
      if ( (v3 & 2) != 0 )
      {
        v30 = 6;
        v31 = 2;
      }
    }
    if ( (v3 & 0x100) == 0 )
      v30 = v31 | (dword_23D1660[(unsigned __int8)v3 >> 5] << 6) | (unsigned int)(8 * dword_23D1660[(v3 >> 2) & 7]);
    v32 = sub_971800(a1[1], "Lj");
    v33 = sub_2257BD0(v32, v30);
    return (_BYTE *)sub_971800(v33, "EE");
  }
  return result;
}


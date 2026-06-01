__int64 __fastcall sub_75B1C0(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r15
  unsigned __int8 v6; // r14
  char *v7; // rax
  char v8; // bp
  char *v9; // r13
  unsigned __int8 v10; // r12
  unsigned __int8 v11; // r9
  unsigned __int8 v12; // al
  int v13; // edx
  unsigned __int8 v14; // r12
  __int64 v15; // rsi
  int v17; // r15d
  char v18; // al
  int v19; // eax
  int v20; // r12d
  unsigned __int8 v21; // al
  unsigned int v22; // r15d
  __int64 v23; // rdx
  int v24; // r12d
  unsigned int v25; // eax
  unsigned __int8 v26; // r9
  char v27; // ah
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // r9
  int v33; // r12d
  __int16 v34; // dx
  char v35; // r9
  int v36; // eax
  int v37; // ecx
  char *v38; // rdx
  char v39; // al
  int v40; // eax
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  _DWORD *v45; // [rsp+0h] [rbp-78h]
  _BYTE *v46; // [rsp+8h] [rbp-70h]
  unsigned __int8 v47; // [rsp+8h] [rbp-70h]
  char v48; // [rsp+8h] [rbp-70h]
  unsigned __int8 v49; // [rsp+8h] [rbp-70h]
  unsigned __int8 v50; // [rsp+8h] [rbp-70h]
  unsigned __int8 v51; // [rsp+10h] [rbp-68h]
  int v52; // [rsp+18h] [rbp-60h]
  unsigned __int8 v53; // [rsp+18h] [rbp-60h]
  unsigned __int8 v54; // [rsp+18h] [rbp-60h]
  unsigned __int8 v55; // [rsp+18h] [rbp-60h]
  unsigned __int8 v56; // [rsp+18h] [rbp-60h]
  unsigned __int8 v57; // [rsp+18h] [rbp-60h]
  unsigned __int8 v58; // [rsp+18h] [rbp-60h]
  unsigned __int8 v59; // [rsp+1Eh] [rbp-5Ah]
  unsigned __int8 v60; // [rsp+1Eh] [rbp-5Ah]
  unsigned __int8 v61; // [rsp+1Fh] [rbp-59h]
  unsigned int v62; // [rsp+20h] [rbp-58h] BYREF
  int v63; // [rsp+24h] [rbp-54h] BYREF
  int v64; // [rsp+28h] [rbp-50h] BYREF
  int v65; // [rsp+2Ch] [rbp-4Ch] BYREF
  int v66; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v67; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v68; // [rsp+38h] [rbp-40h]

  v5 = 0;
  v6 = 0;
  v45 = a1;
  v46 = (_BYTE *)a2;
  v7 = qword_2CD44C0;
  v68 = __readfsqword(0x28u);
  v8 = a3;
  v62 = 0;
  while ( 1 )
  {
    v9 = v7 + 1;
    qword_2CD44C0 = v7 + 1;
    v10 = *v7;
    v11 = *v7;
    if ( *v7 != 68 )
      break;
    if ( v6 )
      goto LABEL_117;
    v6 = 1;
LABEL_5:
    ++v7;
  }
  if ( v10 == 77 )
  {
    if ( v5 )
      goto LABEL_117;
    v5 = 1;
    goto LABEL_5;
  }
  if ( (unsigned __int8)(v10 - 97) <= 0x16u )
  {
    a3 = (__int64)byte_23B7730;
    v12 = byte_23B7730[v10 - 97];
    if ( !v12 )
      goto LABEL_17;
    a2 = v12;
    v13 = v12 & 0xE0;
    switch ( v13 )
    {
      case '@':
        v14 = v12 & 0x1F;
        v15 = (unsigned int)((v12 & 0x1F) == 3) + 99;
        break;
      case '`':
        v15 = 105;
        v14 = v12 & 0x1F;
        break;
      case ' ':
        v14 = v12 & 0x1F;
        v15 = 2 * (unsigned int)((v12 & 0x1F) == 3) + 117;
        break;
      default:
LABEL_16:
        a1 = (int *)&v62;
        sub_770800(&v62, a2);
LABEL_17:
        if ( !v6 )
        {
LABEL_18:
          if ( (dword_2CD44CC & 8) != 0 )
            goto LABEL_19;
          goto LABEL_20;
        }
LABEL_117:
        sub_76E6C0(a1, a2, a3, a4);
    }
    sub_76FD20(&v62, v15);
    a2 = v14;
    goto LABEL_16;
  }
  a3 = v10;
  switch ( v10 )
  {
    case 0u:
    case 0x42u:
      goto LABEL_117;
    case 0x41u:
    case 0x50u:
      v62 = sub_75B1C0(0, 0, 0);
      if ( v10 == 80 )
      {
        a2 = 42;
        a1 = (int *)&v62;
        sub_76FD20(&v62, 42);
      }
      else
      {
        a2 = 23899;
        a1 = (int *)&v62;
        sub_770730(&v62, 23899);
      }
      goto LABEL_17;
    case 0x43u:
      v11 = 82;
      goto LABEL_67;
    case 0x45u:
      v11 = 83;
      goto LABEL_67;
    case 0x46u:
    case 0x52u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
      goto LABEL_28;
    case 0x47u:
      if ( (unsigned __int8)(v7[1] - 48) > 9u )
        goto LABEL_117;
      sub_76E990(a1, a2, v10, a4, a5);
      sub_76F980(&v67, v9, (unsigned __int16)((_WORD)qword_2CD44C0 - (_WORD)v9));
      v62 = v67;
LABEL_126:
      v67 = sub_772E80(&v62);
      a1 = &v66;
      a2 = (__int64)&v67;
      v66 = sub_75B1C0(0, 0, 0);
      v62 = sub_771320(&v66, &v67);
      goto LABEL_17;
    case 0x48u:
      v62 = sub_75B1C0(0, 0, 0);
      goto LABEL_126;
    case 0x49u:
      v11 = 85;
      goto LABEL_67;
    case 0x4Eu:
      qword_2CD44C0 = v7 + 2;
      v33 = (unsigned __int8)v7[1];
      a3 = (unsigned int)(v33 - 103);
      v10 = v33 - 23;
      if ( (unsigned __int8)a3 <= 1u )
        goto LABEL_52;
      if ( (_BYTE)a3 == 0xFE )
        goto LABEL_17;
      qword_2CD44C0 = v7 + 1;
      if ( v7[1] )
        goto LABEL_98;
      goto LABEL_117;
    case 0x4Fu:
LABEL_52:
      v11 = v10 + 43;
      goto LABEL_53;
    case 0x51u:
      qword_2CD44C0 = v7;
      a2 = (__int64)&v67;
      a1 = (int *)&v62;
      v67 = sub_75BEC0(1);
      sub_770B70(&v62, &v67);
      goto LABEL_17;
    case 0x53u:
      v11 = 81;
      goto LABEL_67;
    case 0x54u:
LABEL_67:
      if ( (dword_2CD44CC & 0x2000) == 0 )
      {
        a2 = 0;
        v62 = sub_76E8E0((unsigned int)v11 - 80, 0);
      }
      while ( 2 )
      {
        v29 = sub_75B000(v46, (char *)a2, a3, a4, a5);
        a2 = (__int64)&v67;
        a1 = (int *)&v62;
        v67 = v29;
        sub_770B70(&v62, &v67);
        if ( *qword_2CD44C0 != 77 )
          goto LABEL_17;
        a2 = (__int64)&v67;
        a1 = (int *)&v62;
        v67 = sub_75B1C0(0, 0, 0);
        sub_770B70(&v62, &v67);
        if ( *qword_2CD44C0 == 81 )
        {
          a2 = 0;
          a1 = nullptr;
          if ( !(unsigned int)sub_75A2F0(0, nullptr) )
            goto LABEL_17;
        }
        else if ( (unsigned __int8)(*qword_2CD44C0 - 48) > 9u )
        {
          goto LABEL_17;
        }
        a2 = 46;
        sub_76FD20(&v62, 46);
        continue;
      }
    case 0x59u:
      v11 = 88;
LABEL_28:
      v63 = 0;
      if ( v7[1] != 78 )
        goto LABEL_43;
      v17 = 0;
      while ( 2 )
      {
        a3 = (__int64)(v9 + 2);
        qword_2CD44C0 = v9 + 2;
        a2 = (unsigned __int8)v9[1];
        v19 = a2 - 97;
        a4 = (unsigned int)(a2 - 97);
        if ( (unsigned __int8)(a2 - 97) > 0xCu )
          goto LABEL_117;
        if ( (unsigned __int8)v19 <= 5u )
          goto LABEL_37;
        if ( (unsigned __int8)v19 > 9u )
        {
          if ( (_BYTE)a2 == 107 )
            break;
          v19 = a2 - 98;
          goto LABEL_36;
        }
        if ( (unsigned __int8)v19 > 7u )
        {
LABEL_36:
          a4 = (unsigned int)(v19 - 2);
LABEL_37:
          if ( (v17 & (1 << a4)) != 0 )
            goto LABEL_117;
          v17 |= 1 << a4;
          v9 += 2;
          if ( (dword_2CD44CC & 0x800) == 0 )
          {
            v47 = v11;
            sub_76FB60(&v67, &(&off_2B38980)[2 * (unsigned __int8)a4]);
            a1 = &v63;
            a2 = (__int64)&v67;
            sub_770B70(&v63, &v67);
            v9 = qword_2CD44C0;
            v11 = v47;
          }
          v18 = *v9;
          if ( *v9 != 78 )
            goto LABEL_42;
          continue;
        }
        break;
      }
      qword_2CD44C0 = v9;
      v18 = *v9;
LABEL_42:
      if ( !v18 )
        goto LABEL_117;
LABEL_43:
      v66 = 0;
      a4 = (__int64)&v67;
      qword_2CD44C0 = v9 + 1;
      v20 = (unsigned __int8)*v9;
      v21 = 0;
      v48 = (v45 != nullptr) & (v6 ^ 1);
      v22 = 0;
      if ( (_BYTE)v20 == 90 )
        goto LABEL_87;
      break;
    case 0x5Au:
      goto LABEL_17;
    case 0x78u:
    case 0x79u:
LABEL_53:
      if ( a1
        && (unsigned __int8)(*qword_2CD44C0 - 70) <= 0x13u
        && (v23 = 757761, _bittest64(&v23, (unsigned int)(unsigned __int8)*qword_2CD44C0 - 70)) )
      {
        a2 = 0;
        v49 = v11;
        v24 = dword_2CD44C8;
        v25 = sub_75B1C0(a1, 0, 0);
        a3 = 0;
        v26 = v49;
        v62 = v25;
        v27 = BYTE1(dword_2CD44CC);
        dword_2CD44C8 = v24;
        if ( (dword_2CD44CC & 8) != 0 )
          a3 = (__int64)a1;
        v45 = (_DWORD *)a3;
      }
      else
      {
        a2 = 0;
        a1 = nullptr;
        v50 = v11;
        v28 = sub_75B1C0(0, 0, 0);
        v26 = v50;
        v62 = v28;
        v27 = BYTE1(dword_2CD44CC);
      }
      if ( (v27 & 0x40) != 0 )
        goto LABEL_17;
      v66 = 0;
      if ( v26 == 120 )
      {
        sub_76FFF0(&v66);
      }
      else
      {
        sub_76FB60(&v67, &(&off_2B38A20)[2 * (char)(v26 - 121)]);
        sub_770B70(&v66, &v67);
      }
      if ( v6 || v5 )
      {
        if ( (_WORD)v66 )
          sub_76FD20(&v66, 32);
        a1 = &v66;
        a2 = (__int64)&v62;
        v62 = sub_771320(&v66, &v62);
        goto LABEL_17;
      }
      v62 = sub_772CF0(&v62);
      v62 = sub_771320(&v66, &v62);
      goto LABEL_18;
    case 0x7Au:
      a3 = (__int64)(v7 + 2);
      qword_2CD44C0 = v7 + 2;
      v39 = v7[1];
      if ( v39 == 105 )
        goto LABEL_123;
      if ( v39 != 107 )
        goto LABEL_117;
      sub_76FD20(&v62, 117);
LABEL_123:
      sub_76FCD0(&v67, 1953391971, 4);
      a2 = (__int64)&v67;
      a1 = (int *)&v62;
      sub_770B70(&v62, &v67);
      goto LABEL_17;
    default:
LABEL_98:
      qword_2CD44C0 = v7;
      a1 = (int *)&v62;
      a2 = (unsigned int)(qword_2CD44B8 - (_DWORD)v7);
      sub_76EF20(&v62);
      goto LABEL_17;
  }
  while ( 1 )
  {
    if ( !(_BYTE)v20 )
      goto LABEL_117;
    if ( (_BYTE)v20 == 88 )
      break;
    if ( v21 || !v22 )
    {
      if ( (_BYTE)v20 != 78 )
      {
        if ( (char)v20 > 78 )
        {
          if ( (_BYTE)v20 == 89 )
            goto LABEL_100;
        }
        else if ( (unsigned __int8)(v20 - 73) <= 4u )
        {
          goto LABEL_76;
        }
        v38 = qword_2CD44C0;
        goto LABEL_133;
      }
    }
    else
    {
      v59 = v11;
      a1 = &v66;
      sub_770C10(&v66);
      v21 = 0;
      v11 = v59;
      if ( (_BYTE)v20 != 78 )
      {
        if ( (char)v20 > 78 )
        {
          if ( (_BYTE)v20 == 89 )
            goto LABEL_101;
        }
        else if ( (unsigned __int8)(v20 - 73) <= 4u )
        {
          v52 = 1 << (v20 - 73);
          goto LABEL_77;
        }
        v38 = qword_2CD44C0;
        goto LABEL_133;
      }
    }
    v38 = qword_2CD44C0;
    if ( *qword_2CD44C0 == 107 )
    {
      ++qword_2CD44C0;
LABEL_76:
      a4 = (unsigned int)(v20 - 73);
      a3 = (unsigned int)(1 << (v20 - 73));
      LOBYTE(v52) = a3;
      if ( ((unsigned __int8)a3 & v21) != 0 )
        goto LABEL_117;
LABEL_77:
      if ( (dword_2CD44CC & 0x400) == 0 )
      {
        v61 = v11;
        v60 = v21;
        if ( (unsigned __int8)v20 > 0x4Bu )
        {
          sub_76FB60(&v67, &(&off_2B388C0)[2 * (char)(v20 - 76)]);
          a2 = (__int64)&v67;
          a1 = &v66;
          sub_770B70(&v66, &v67);
          v21 = v60;
          v11 = v61;
        }
        else
        {
          sub_76FCD0(&v67, dword_23B7710[(char)(v20 - 73)], (unsigned int)((_BYTE)v20 != 73) + 3);
          a2 = (__int64)&v67;
          a1 = &v66;
          sub_770B70(&v66, &v67);
          v11 = v61;
          v21 = v60;
        }
      }
      v21 |= v52;
      goto LABEL_81;
    }
LABEL_133:
    v55 = v11;
    qword_2CD44C0 = v38 - 1;
    ++v22;
    a2 = (__int64)&v67;
    a1 = &v66;
    v67 = sub_75B1C0(0, 0, 0);
    sub_770B70(&v66, &v67);
    v11 = v55;
    v21 = 0;
LABEL_81:
    a3 = (__int64)qword_2CD44C0;
    a4 = (__int64)++qword_2CD44C0;
    v20 = *(unsigned __int8 *)a3;
    if ( (_BYTE)v20 == 90 )
      goto LABEL_82;
  }
  if ( !(_WORD)v66 )
    goto LABEL_117;
  a3 = dword_2CD44CC & 0x400000;
  if ( (dword_2CD44CC & 0x400000) != 0 )
  {
    a2 = 32;
    v51 = v11;
    a1 = &v66;
    v58 = v21;
    sub_76FD20(&v66, 32);
    v21 = v58;
    v11 = v51;
  }
LABEL_100:
  if ( v21 )
    goto LABEL_117;
LABEL_101:
  v54 = v11;
  if ( v48 )
  {
    dword_2CD44C8 |= 0x10000u;
    sub_770800(&v66, 1);
    v11 = v54;
LABEL_82:
    if ( v22 && v48 )
    {
      v30 = 255;
      if ( v22 <= 0xFF )
        v30 = v22;
      dword_2CD44C8 |= v30 << 8;
    }
  }
  else
  {
    sub_770800(&v66, 1);
    v11 = v54;
  }
LABEL_87:
  v53 = v11;
  v31 = sub_772CF0(&v66);
  v65 = 0;
  v32 = v53;
  v64 = v31;
  if ( v8 )
  {
    if ( (*(_DWORD *)qword_2CD44C0 & 0xFFFFFF) == 0x545F5F )
      return sub_771320(&v62, &v64);
    if ( *qword_2CD44C0 == 81 )
    {
      v40 = sub_75A2F0(1, nullptr);
      v32 = v53;
      if ( v40 )
        goto LABEL_141;
      goto LABEL_144;
    }
    if ( (unsigned __int8)(*qword_2CD44C0 - 48) <= 9u )
      return sub_771320(&v62, &v64);
LABEL_141:
    v56 = v32;
    v41 = sub_75B1C0(0, 0, 0);
    v32 = v56;
    v65 = v41;
    if ( (dword_2CD44CC & 0x40) != 0 )
    {
      v65 = 0;
    }
    else if ( (_WORD)v65 )
    {
      sub_76FD20(&v65, 32);
      v32 = v56;
    }
    if ( v8 )
    {
LABEL_144:
      v42 = *qword_2CD44C0;
      if ( v42 <= 0x7F && v42 - 48 <= 9 )
        return sub_771320(&v62, &v64);
LABEL_19:
      v62 = 0;
LABEL_20:
      if ( v45 )
      {
        if ( (_WORD)v62 )
          sub_76FD20(&v62, 32);
LABEL_23:
        sub_770B70(&v62, v45);
      }
      return v62;
    }
  }
  else if ( *qword_2CD44C0 == 81 )
  {
    v44 = sub_75A2F0(1, nullptr);
    v32 = v53;
    if ( v44 )
      goto LABEL_141;
  }
  else if ( (unsigned __int8)(*qword_2CD44C0 - 48) > 9u )
  {
    goto LABEL_141;
  }
  v34 = dword_2CD44CC;
  if ( (dword_2CD44CC & 0x800) == 0 )
  {
    v57 = v32;
    v43 = sub_771320(&v63, &v62);
    v32 = v57;
    v62 = v43;
    v34 = dword_2CD44CC;
  }
  if ( !v48 )
  {
    if ( (v34 & 0x8000u) == 0 )
    {
      sub_76FB60(&v67, &off_2B38900 + 2 * v6);
      sub_770B70(&v62, &v67);
    }
    v67 = sub_771320(&v65, &v62);
    v62 = sub_771320(&v67, &v64);
    goto LABEL_18;
  }
  if ( v32 == 70 )
  {
    dword_2CD44C8 |= 0xCu;
  }
  else
  {
    if ( v32 == 82 )
    {
      v37 = 2;
      v36 = 0;
    }
    else
    {
      v35 = v32 - 84;
      v36 = v35;
      v37 = byte_23B771C[v35];
    }
    dword_2CD44C8 |= v37;
    if ( (v34 & 0x120) == 0 )
    {
      sub_76FB60(&v67, &(&off_2B38920)[2 * v36]);
      sub_76FA20(&v66, "extern (", 8);
      v62 = sub_771320(&v66, &v67);
      LOBYTE(v34) = dword_2CD44CC;
    }
  }
  if ( (v34 & 8) != 0 )
  {
    v62 = 0;
    goto LABEL_23;
  }
  v66 = sub_771320(&v62, &v65);
  v67 = sub_771320(&v66, v45);
  return sub_771320(&v67, &v64);
}

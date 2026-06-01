void __fastcall sub_B169D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // bp
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // rsi
  bool v22; // cl
  int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // r12
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // dl
  __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // dl
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned __int64 v48; // rdx
  __int64 *v49; // rbp
  unsigned int v50; // eax
  __int64 *v51; // r14
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 *v54; // r15
  unsigned int v55; // eax
  int v56; // edx
  char v57; // al
  char v58; // dl
  __int64 *v59; // rbx
  unsigned int v60; // eax
  char v61; // al
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned int v64; // eax
  unsigned __int64 v65; // rbx
  unsigned int v66; // eax

  v2 = *a1;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  *((_WORD *)a1 + 24) &= 0xFC01u;
  if ( !v2 )
  {
    *((_BYTE *)a1 + 48) |= 1u;
    return;
  }
  a1[1] = v2;
  v4 = *(_BYTE *)(v2 + 28) & 0x7F;
  switch ( (v4 + 110) & 0x7F )
  {
    case 0:
      v42 = a1[6] & 0xB1 | 0x42;
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 2;
      v43 = *(_QWORD *)(v2 + 96);
      a1[3] = *(unsigned int *)(v2 + 104);
      a1[2] = v43;
      v44 = *(_QWORD *)(v2 + 80);
      *((_BYTE *)a1 + 48) = v42;
      a1[4] = v44;
      LODWORD(v44) = v42 & 0x7F | (((*(_QWORD *)(v2 + 56) >> 17) & 1) << 7);
      v45 = *((_BYTE *)a1 + 49);
      *((_BYTE *)a1 + 48) = v44;
      LOBYTE(v44) = v45 & 0xFE | ((unsigned __int8)~(_BYTE)v44 >> 7);
      *((_BYTE *)a1 + 49) = v44;
      *((_BYTE *)a1 + 49) = (2 * ((*(_QWORD *)(v2 + 56) & 0x40000LL) != 0)) | v44 & 0xFD;
      goto LABEL_20;
    case 6:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 8;
      goto LABEL_20;
    case 0xF:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x39:
      goto LABEL_24;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 2;
      v25 = *(_QWORD *)(v2 + 120);
      sub_B52330(v2);
      a1[2] = v25;
      a1[3] = v27;
      v28 = *(_QWORD *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v29 = (unsigned int)*(unsigned __int8 *)(v28 + 16) - 25;
      if ( (unsigned int)v29 > 1 )
        v28 = sub_F3F310(v28, a2, v29, v26);
      a1[4] = *(_QWORD *)(v28 + 24);
      v30 = *(_QWORD *)(v2 + 56);
      if ( (v30 & 4) != 0 )
      {
        v56 = *(_DWORD *)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        if ( v56 )
        {
          *((_BYTE *)a1 + 48) = a1[6] & 0xCF | 0x20;
          a1[5] = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v2 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 24)
                            + 8LL * (unsigned int)(v56 - 1));
        }
      }
      if ( ((v4 + 93) & 0x7Fu) <= 3 )
      {
        v57 = (((unsigned __int8)sub_B73CB0(*a1) ^ 1) << 7) | a1[6] & 0x7F;
        v58 = *((_BYTE *)a1 + 49);
        *((_BYTE *)a1 + 48) = v57;
        *((_BYTE *)a1 + 49) = v58 & 0xFE | ((unsigned __int8)~v57 >> 7);
      }
      v31 = v2;
      goto LABEL_47;
    case 0x16:
      v13 = sub_B4FEA0(v2);
      if ( v13 )
      {
        *((_BYTE *)a1 + 48) = a1[6] & 0xCF | 0x20;
        a1[5] = *(_QWORD *)(v13 + 56);
      }
      v2 = *a1;
      v4 = *(_BYTE *)(*a1 + 28) & 0x7F;
LABEL_24:
      if ( (unsigned int)v4 - 34 > 0x11 )
      {
        if ( v4 != 75 )
        {
          *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 6;
          goto LABEL_20;
        }
        v14 = *(__int64 **)(v2 + 64);
      }
      else
      {
        v14 = (__int64 *)(*(_QWORD *)(v2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v2 + 56) & 4) != 0 )
          v14 = (__int64 *)v14[4];
      }
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 6;
LABEL_28:
      if ( !v14 )
        goto LABEL_20;
      v10 = *v14;
      v8 = (unsigned __int64)(v14 + 1);
      if ( *v14 & 7 | (*v14 >> 3) & 1 && v10 )
      {
        v54 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
        v55 = sub_F487E0(*v54 & 0xFFFFFFFFFFFFFFF0LL);
        v10 = *v54;
        v8 = v55 * ((v8 - (v8 != 0)) / v55 + (v8 != 0));
      }
      v15 = 0;
      v16 = 0;
      break;
    case 0x18:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x36;
      a1[5] = *(_QWORD *)(v2 + 144);
      goto LABEL_20;
    case 0x28:
    case 0x29:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 4;
      goto LABEL_20;
    case 0x2A:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x24;
      goto LABEL_20;
    case 0x2B:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x34;
      a1[5] = *(_QWORD *)(v2 + 184);
      goto LABEL_20;
    case 0x2C:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 0xC;
      goto LABEL_20;
    case 0x2E:
    case 0x2F:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 0xA;
      v14 = (__int64 *)(*(_QWORD *)(v2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v2 + 80) & 4) != 0 )
        goto LABEL_60;
      goto LABEL_28;
    case 0x33:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x16;
      a1[5] = *(_QWORD *)(v2 + 56);
      v32 = *(_QWORD *)(v2 + 48);
      if ( !v32 )
        goto LABEL_20;
      v33 = *(_QWORD *)(v32 + 56);
      v14 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v33 & 4) != 0 )
        v14 = (__int64 *)v14[4];
      goto LABEL_28;
    case 0x34:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x1A;
      a1[5] = *(_QWORD *)(v2 + 56);
      v34 = *(_QWORD *)(v2 + 48);
      if ( !v34 )
        goto LABEL_20;
      v35 = *(_QWORD *)(v34 + 80);
      v14 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v35 & 4) != 0 )
LABEL_60:
        v14 = (__int64 *)*v14;
      goto LABEL_28;
    case 0x35:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x12;
      v36 = *(_QWORD *)(v2 + 48);
      v37 = *(_QWORD *)(v36 + 120);
      sub_B52330(v36);
      a1[2] = v37;
      a1[3] = v39;
      v40 = *(_QWORD *)(*(_QWORD *)(v36 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v41 = (unsigned int)*(unsigned __int8 *)(v40 + 16) - 25;
      if ( (unsigned int)v41 > 1 )
        v40 = sub_F3F310(v40, a2, v41, v38);
      v31 = v36;
      a1[4] = *(_QWORD *)(v40 + 24);
      a1[5] = *(_QWORD *)(v2 + 56);
LABEL_47:
      *((_BYTE *)a1 + 49) = (2 * (sub_B50B60(v31) & 1)) | *((_BYTE *)a1 + 49) & 0xFD;
      goto LABEL_20;
    case 0x36:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x14;
      a1[5] = *(_QWORD *)(v2 + 56);
      goto LABEL_20;
    default:
      goto LABEL_20;
  }
  while ( v16 != v10 || v15 != v8 )
  {
    v17 = v10;
    v18 = v10 & 7;
    if ( (v10 & 0xF) != 0 )
    {
      v22 = 1;
      v19 = v10;
      v20 = v8;
      v21 = v10 & 8;
LABEL_74:
      if ( v19 )
      {
        v49 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
        v50 = sub_F487E0(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        v19 = *v49;
        v20 = v50 * ((v20 != 0) + (v20 - (v20 != 0)) / v50);
        goto LABEL_40;
      }
      if ( v18 )
        goto LABEL_40;
      v23 = *(unsigned __int8 *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v23 == 42 )
        goto LABEL_40;
LABEL_37:
      if ( (unsigned int)(v23 - 43) > 1 )
        goto LABEL_67;
      goto LABEL_38;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
    {
      v17 = sub_F492D0(v10, v8);
      v19 = v17;
      v20 = v48;
      v18 = v17 & 7;
      v21 = v17 & 8;
      if ( (v17 & 0xF) != 0 )
      {
        v22 = 1;
        goto LABEL_74;
      }
      v22 = 0;
    }
    else
    {
      v19 = v10;
      v20 = v8;
      v21 = v10 & 8;
      v22 = (v10 & 8) != 0;
    }
    v23 = *(unsigned __int8 *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (_BYTE)v23 == 8 )
    {
      if ( v19 )
      {
        v53 = sub_F487E0(*(_QWORD *)(v19 + 40));
        v19 = *(_QWORD *)(v19 + 40);
        v20 = ((v20 != -8) + (v20 + 8 - (v20 != -8)) / v53) * v53;
        goto LABEL_40;
      }
      goto LABEL_37;
    }
    if ( (_BYTE)v23 != 42 )
      goto LABEL_37;
LABEL_38:
    if ( v19 )
    {
      v24 = sub_F487E0(*(_QWORD *)(v19 + 32));
      v19 = *(_QWORD *)(v19 + 32);
      v20 = v24 * ((v20 != -4) + (v20 + 4 - (v20 != -4)) / v24);
      if ( (v19 & 0xF) != 0 && v19 )
        goto LABEL_78;
      goto LABEL_40;
    }
LABEL_67:
    if ( v22 )
      goto LABEL_40;
    v46 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v46 + 16) <= 1u )
    {
      if ( v19 )
      {
        v47 = sub_F487E0(*(_QWORD *)(v19 + 32));
        v19 = *(_QWORD *)(v19 + 32);
        v20 = v47 * ((v20 != 0) + (v20 - (v20 != 0)) / v47);
        goto LABEL_40;
      }
      v61 = *(_BYTE *)(v46 + 16);
      if ( v61 == 11 )
        goto LABEL_40;
LABEL_99:
      if ( v61 != 33 )
      {
        if ( v61 == 24 && v19 )
        {
          v62 = 16;
          if ( (unsigned __int8)(*(_WORD *)(v19 + 18) >> 3) == 6 )
            v62 = *(_QWORD *)(v19 + 32) != 0 ? 0x10 : 0;
          v63 = v62 + v20;
          v64 = sub_F487E0(*(_QWORD *)(v19 + 40));
          v19 = *(_QWORD *)(v19 + 40);
          v20 = v64 * ((v63 != 0) + (v63 - (v63 != 0)) / v64);
        }
        goto LABEL_40;
      }
      if ( !v19 )
        goto LABEL_40;
      v65 = v20 + 16;
      goto LABEL_107;
    }
    if ( v21 )
      goto LABEL_40;
    v61 = *(_BYTE *)(v46 + 16);
    if ( v61 != 11 )
      goto LABEL_99;
    if ( !v19 )
      goto LABEL_40;
    v65 = v20 + 4;
LABEL_107:
    v66 = sub_F487E0(*(_QWORD *)(v19 + 32));
    v19 = *(_QWORD *)(v19 + 32);
    v20 = v66 * ((v65 != 0) + (v65 - (v65 != 0)) / v66);
    if ( (v19 & 0xF) != 0 && v19 )
    {
LABEL_78:
      v51 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
      v52 = sub_F487E0(*v51 & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *v51;
      v20 = v52 * ((v20 != 0) + (v20 - (v20 != 0)) / v52);
    }
LABEL_40:
    v16 = v10;
    v15 = v8;
    v10 = v19;
    v8 = v20;
  }
  v5 = (v10 >> 3) & 1;
  if ( !(v5 | v10 & 7) )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      goto LABEL_6;
    if ( !v10 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( (v10 & 7) != 0 )
    goto LABEL_20;
LABEL_6:
  if ( !v5
    && *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 49
    && v10
    && *(_DWORD *)(v10 + 20) == 1
    && (*(_DWORD *)(v10 + 48) & 0x7FFFFFFF) == 1 )
  {
    v6 = (__int64 *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *v6;
    v8 = (unsigned __int64)(v6 + 1);
    v9 = *v6 & 7;
    if ( v9 | (*v6 >> 3) & 1 && v7 )
    {
      v59 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      v60 = sub_F487E0(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
      v10 = *v59;
      v9 = *v59 & 7;
      v8 = v60 * ((v8 != 0) + (v8 - (v8 != 0)) / v60);
      v7 = *v59;
    }
    else
    {
      v10 = *v6;
    }
    if ( !(v9 | (v7 >> 3) & 1)
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
      && v7 )
    {
LABEL_16:
      v11 = v8 + 16;
      v12 = 0;
      if ( *(_BYTE *)(v10 + 16) != 25 )
        v12 = *(unsigned __int16 *)(v10 + 22);
      a1[2] = v11;
      a1[3] = v12;
      sub_F487E0(*(_QWORD *)(v10 + 24));
      a1[4] = *(_QWORD *)(v10 + 24);
      if ( *(_BYTE *)(v10 + 16) == 26 )
        *((_BYTE *)a1 + 49) = *((_BYTE *)a1 + 49) & 0xFD | (2 * ((unsigned __int8)BYTE3(*(_QWORD *)(v10 + 16)) >> 7));
    }
  }
LABEL_20:
  *((_BYTE *)a1 + 48) |= 1u;
}


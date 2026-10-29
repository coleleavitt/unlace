void __fastcall sub_7671E0(__int64 *a1)
{
  __int64 v2; // r12
  unsigned __int8 v3; // bl
  __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdx
  __int64 *v15; // r15
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // r12
  int v19; // edx
  __int64 *v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdx
  char v32; // al
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // eax
  int v44; // edx
  char v45; // al
  char v46; // dl
  unsigned int v47; // eax
  __int64 *v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // r13
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rcx
  __int64 v55; // r15
  unsigned int v56; // eax

  v2 = *a1;
  *((_WORD *)a1 + 24) &= 0xFC01u;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  if ( !v2 )
    goto LABEL_10;
  a1[1] = v2;
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  switch ( (v3 + 112) & 0x7F )
  {
    case 0:
      v29 = a1[6] & 0xB1 | 0x42;
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 2;
      v30 = *(_QWORD *)(v2 + 96);
      a1[3] = *(unsigned int *)(v2 + 104);
      a1[2] = v30;
      v31 = *(_QWORD *)(v2 + 80);
      *((_BYTE *)a1 + 48) = v29;
      a1[4] = v31;
      v32 = (*(_BYTE *)(v2 + 58) >> 1 << 7) | v29 & 0x7F;
      LOBYTE(v31) = *((_BYTE *)a1 + 49);
      *((_BYTE *)a1 + 48) = v32;
      v33 = v31 & 0xFE | ((unsigned __int8)~v32 >> 7);
      *((_BYTE *)a1 + 49) = v33;
      *((_BYTE *)a1 + 49) = (*(_BYTE *)(v2 + 58) >> 1) & 2 | v33 & 0xFD;
      goto LABEL_10;
    case 6:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 8;
      goto LABEL_10;
    case 0xF:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x39:
      goto LABEL_14;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 2;
      v4 = *(_QWORD *)(v2 + 120);
      v5 = sub_77F620(v2);
      a1[2] = v4;
      a1[3] = v5;
      v6 = *(_QWORD *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25 > 1 )
        v6 = sub_B0D320(v6);
      a1[4] = *(_QWORD *)(v6 + 24);
      v7 = *(_QWORD *)(v2 + 56);
      if ( (v7 & 4) != 0 )
      {
        v44 = *(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        if ( v44 )
        {
          *((_BYTE *)a1 + 48) = a1[6] & 0xCF | 0x20;
          a1[5] = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v2 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 24)
                            + 8LL * (unsigned int)(v44 - 1));
        }
      }
      if ( ((v3 + 95) & 0x7Fu) <= 3 )
      {
        v45 = (((unsigned __int8)sub_7A4F00(*a1) ^ 1) << 7) | a1[6] & 0x7F;
        v46 = *((_BYTE *)a1 + 49);
        *((_BYTE *)a1 + 48) = v45;
        *((_BYTE *)a1 + 49) = v46 & 0xFE | ((unsigned __int8)~v45 >> 7);
      }
      v8 = v2;
      goto LABEL_9;
    case 0x16:
      v9 = sub_77CBA0(v2);
      if ( v9 )
      {
        *((_BYTE *)a1 + 48) = a1[6] & 0xCF | 0x20;
        a1[5] = *(_QWORD *)(v9 + 56);
      }
      v2 = *a1;
      v3 = *(_BYTE *)(*a1 + 28) & 0x7F;
LABEL_14:
      if ( (unsigned int)v3 - 32 > 0x11 )
      {
        if ( v3 != 73 )
        {
          *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 6;
          goto LABEL_10;
        }
        v10 = *(__int64 **)(v2 + 64);
      }
      else
      {
        v10 = (__int64 *)(*(_QWORD *)(v2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v2 + 56) & 4) != 0 )
          v10 = (__int64 *)v10[4];
      }
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 6;
LABEL_18:
      if ( !v10 )
        goto LABEL_10;
      v11 = *v10;
      v12 = (unsigned __int64)(v10 + 1);
      if ( (*v10 & 7) != 0 || (v11 & 8) != 0 )
      {
        v20 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        v21 = sub_B1AFD0(*v20 & 0xFFFFFFFFFFFFFFF0LL);
        v11 = *v20;
        v12 = v21 * ((v12 - 1) / v21 + 1);
      }
      v13 = 0;
      v14 = 0;
      break;
    case 0x28:
    case 0x29:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 4;
      goto LABEL_10;
    case 0x2A:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x24;
      goto LABEL_10;
    case 0x2B:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x34;
      a1[5] = *(_QWORD *)(v2 + 184);
      goto LABEL_10;
    case 0x2C:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 0xC;
      goto LABEL_10;
    case 0x2E:
    case 0x2F:
      *((_BYTE *)a1 + 48) = a1[6] & 0xF1 | 0xA;
      v10 = (__int64 *)(*(_QWORD *)(v2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v2 + 80) & 4) != 0 )
        goto LABEL_40;
      goto LABEL_18;
    case 0x33:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x16;
      a1[5] = *(_QWORD *)(v2 + 56);
      v34 = *(_QWORD *)(v2 + 48);
      if ( !v34 )
        goto LABEL_10;
      v35 = *(_QWORD *)(v34 + 56);
      v10 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v35 & 4) != 0 )
        v10 = (__int64 *)v10[4];
      goto LABEL_18;
    case 0x34:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x1A;
      a1[5] = *(_QWORD *)(v2 + 56);
      v22 = *(_QWORD *)(v2 + 48);
      if ( !v22 )
        goto LABEL_10;
      v23 = *(_QWORD *)(v22 + 80);
      v10 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v23 & 4) != 0 )
LABEL_40:
        v10 = (__int64 *)*v10;
      goto LABEL_18;
    case 0x35:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x12;
      v24 = *(_QWORD *)(v2 + 48);
      v25 = *(_QWORD *)(v24 + 120);
      v26 = sub_77F620(v24);
      a1[2] = v25;
      a1[3] = v26;
      v27 = *(_QWORD *)(*(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v27 + 16) - 25 > 1 )
        v27 = sub_B0D320(v27);
      v28 = *(_QWORD *)(v27 + 24);
      v8 = v24;
      a1[4] = v28;
      a1[5] = *(_QWORD *)(v2 + 56);
LABEL_9:
      *((_BYTE *)a1 + 49) = (2 * (sub_77D8C0(v8) & 1)) | *((_BYTE *)a1 + 49) & 0xFD;
      goto LABEL_10;
    case 0x36:
      *((_BYTE *)a1 + 48) = a1[6] & 0xC1 | 0x14;
      a1[5] = *(_QWORD *)(v2 + 56);
      goto LABEL_10;
    default:
      goto LABEL_10;
  }
LABEL_22:
  if ( v14 == v11 )
    goto LABEL_25;
  do
  {
    do
    {
      v13 = v12;
      v15 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v11 & 7) == 0 )
      {
        while ( (v11 & 8) == 0 )
        {
          v36 = v11;
          if ( *(_BYTE *)(v16 + 16) == 39 )
          {
            v42 = sub_B1B150(v11, v12, v14);
            v36 = v42;
            v12 = v14;
            v15 = (__int64 *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
            v16 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (v42 & 7) != 0 || (v42 & 8) != 0 )
              break;
            v37 = *(_BYTE *)(v16 + 16);
            if ( v37 == 8 )
            {
LABEL_67:
              if ( v36 )
              {
                v43 = sub_B1AFD0(*(_QWORD *)(v36 + 40));
                v14 = v11;
                v11 = *(_QWORD *)(v36 + 40);
                v12 = v43 * ((v12 != -8) + (v12 + 8 - (v12 != -8)) / v43);
                goto LABEL_22;
              }
              goto LABEL_53;
            }
          }
          else
          {
            v37 = *(_BYTE *)(v16 + 16);
            if ( v37 == 8 )
              goto LABEL_67;
          }
          if ( v37 == 41 )
          {
            if ( !v36 )
            {
LABEL_96:
              v14 = v11;
              v11 = v36;
              goto LABEL_22;
            }
            v38 = (unsigned int)sub_B1AFD0(*(_QWORD *)(v36 + 32));
            v39 = *(_QWORD *)(v36 + 32);
            v12 = v38 * ((v12 + 4 - (v12 != -4)) / v38 + (v12 != -4));
            if ( (v39 & 7) == 0 )
              goto LABEL_61;
            goto LABEL_62;
          }
          v14 = (unsigned int)v37 - 42;
          if ( (unsigned int)v14 <= 1 )
          {
            if ( !v36 )
            {
              v14 = v11;
              v11 = 0;
              goto LABEL_22;
            }
            v47 = sub_B1AFD0(*(_QWORD *)(v36 + 32));
            v12 = v47 * ((v12 != -4) + (v12 + 4 - (v12 != -4)) / v47);
            v39 = *(_QWORD *)(v36 + 32);
            if ( (v39 & 7) == 0 )
              goto LABEL_61;
            goto LABEL_62;
          }
          if ( v37 > 1u )
          {
            switch ( v37 )
            {
              case 0xBu:
                if ( v36 )
                {
                  v53 = v12 + 4;
                  goto LABEL_100;
                }
                break;
              case 0x20u:
                if ( v36 )
                {
                  v53 = v12 + 16;
LABEL_100:
                  v54 = (unsigned int)sub_B1AFD0(*(_QWORD *)(v36 + 32));
                  v39 = *(_QWORD *)(v36 + 32);
                  v12 = v54 * ((v53 != 0) + (v53 - (v53 != 0)) / v54);
                  if ( (v39 & 7) == 0 )
                  {
LABEL_61:
                    if ( (v39 & 8) != 0 )
                      goto LABEL_62;
LABEL_63:
                    v14 = v11;
                    v11 = v39;
                    goto LABEL_22;
                  }
LABEL_62:
                  v40 = (__int64 *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
                  v41 = sub_B1AFD0(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
                  v12 = v41 * ((v12 != 0) + (v12 - (v12 != 0)) / v41);
                  v39 = *v40;
                  goto LABEL_63;
                }
                break;
              case 0x18u:
                if ( v36 )
                {
                  v55 = 16;
                  if ( (unsigned __int8)(*(_WORD *)(v36 + 18) >> 3) == 6 )
                    v55 = 16LL * (*(_QWORD *)(v36 + 32) != 0);
                  v56 = sub_B1AFD0(*(_QWORD *)(v36 + 40));
                  v14 = v11;
                  v11 = *(_QWORD *)(v36 + 40);
                  v12 = ((v12 + v55 != 0) + (v12 + v55 - (v12 + v55 != 0)) / v56) * v56;
                  goto LABEL_22;
                }
                break;
              default:
                goto LABEL_96;
            }
          }
          else if ( v36 )
          {
            v52 = sub_B1AFD0(*(_QWORD *)(v36 + 32));
            v14 = v11;
            v11 = *(_QWORD *)(v36 + 32);
            v12 = v52 * ((v12 != 0) + (v12 - (v12 != 0)) / v52);
            goto LABEL_22;
          }
LABEL_53:
          if ( !v11 && v13 == v12 )
            goto LABEL_26;
          v16 = 0x10102464C457FLL;
          v13 = v12;
          v11 = 0;
          v15 = nullptr;
        }
      }
      v17 = sub_B1AFD0(v16 & 0xFFFFFFFFFFFFFFF0LL);
      v14 = v11;
      v11 = *v15;
      v12 = v17 * ((v12 != 0) + (v12 - (v12 != 0)) / v17);
    }
    while ( v14 != *v15 );
LABEL_25:
    ;
  }
  while ( v13 != v12 );
LABEL_26:
  v18 = v11 & 7;
  if ( (v11 & 7) == 0 && (v11 & 8) == 0 )
  {
    v19 = *(unsigned __int8 *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v19 - 25) > 1 )
    {
      if ( (_BYTE)v19 != 48 || !v11 || *(_DWORD *)(v11 + 20) != 1 || (*(_DWORD *)(v11 + 48) & 0x7FFFFFFF) != 1 )
        goto LABEL_10;
      v48 = (__int64 *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCLL);
      v49 = *v48;
      v12 = (unsigned __int64)(v48 + 1);
      if ( (*v48 & 7) != 0 || (v11 = *v48, (v49 & 8) != 0) )
      {
        v50 = (__int64 *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
        v51 = sub_B1AFD0(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        v49 = *v50;
        v11 = v49;
        if ( (v49 & 7) != 0 || (v49 & 8) != 0 )
          goto LABEL_10;
        v12 = v51 * ((v12 - 1) / v51 + 1);
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 || !v49 )
        goto LABEL_10;
    }
    else if ( !v11 )
    {
      goto LABEL_10;
    }
    if ( *(_BYTE *)(v11 + 16) != 25 )
      v18 = (unsigned __int16)(*(_DWORD *)(v11 + 20) >> 6);
    a1[3] = v18;
    a1[2] = v12 + 16;
    sub_B1AFD0(*(_QWORD *)(v11 + 24));
    a1[4] = *(_QWORD *)(v11 + 24);
    if ( *(_BYTE *)(v11 + 16) == 26 )
      *((_BYTE *)a1 + 49) = (*(_BYTE *)(v11 + 23) >> 3) & 2 | *((_BYTE *)a1 + 49) & 0xFD;
  }
LABEL_10:
  *((_BYTE *)a1 + 48) |= 1u;
}


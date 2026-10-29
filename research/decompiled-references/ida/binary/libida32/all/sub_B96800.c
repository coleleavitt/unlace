void __fastcall sub_B96800(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  char v5; // dl
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int8 v10; // dl
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rdi
  _WORD *v14; // rdx
  const char *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 *v33; // rax
  __int64 *v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rcx
  int v38; // r12d
  int v39; // r15d
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rsi
  bool (__fastcall *v47)(__int64); // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // r12
  __int64 v50; // rdx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v54; // [rsp+18h] [rbp-50h]
  _BYTE v55[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(char *)(a1 + 11) >= 0 )
  {
    if ( a3 )
      *(_DWORD *)(a1 + 32) += *(unsigned __int8 *)(a1 + 8);
    ptr = v55;
    v54 = 0x200000000LL;
    v4 = sub_B6AC30(a2);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_BYTE *)(v4 + 28);
        LOBYTE(v6) = v5 & 0x7F;
        if ( (v5 & 0x7F) == 0x32 || (*(_BYTE *)(v4 + 29) & 2) != 0 )
          goto LABEL_31;
        v6 = (unsigned __int8)v6;
        if ( (unsigned int)(unsigned __int8)v6 - 34 > 5 )
          goto LABEL_10;
        if ( (unsigned int)sub_B53FE0(v4) == 1 && (*(_BYTE *)(a2 + 8) & 0x7Fu) - 60 > 1 )
        {
          v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v4 )
            break;
        }
        else
        {
          v5 = *(_BYTE *)(v4 + 28);
          v6 = v5 & 0x7F;
LABEL_10:
          if ( (unsigned int)(v6 - 64) > 2 )
          {
            if ( (unsigned int)(v6 - 26) > 0x1A )
            {
              if ( !(_DWORD)v54 )
                goto LABEL_16;
              goto LABEL_15;
            }
            v8 = *(_QWORD *)(v4 + 48);
          }
          else
          {
            v7 = (__int64 *)(*(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v4 + 80) & 4) != 0 )
              v8 = v7[1];
            else
              v8 = *v7;
          }
          v9 = (unsigned int)v54;
          if ( (_DWORD)v54 )
          {
            if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
              goto LABEL_15;
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_49:
                v26 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
                if ( (unsigned __int8)sub_F34880(*v26) )
                {
LABEL_104:
                  v41 = (unsigned int)v54;
                  if ( v26 )
                  {
                    v42 = *v26;
                    if ( *(_BYTE *)(*v26 + 16) == 24 )
                    {
                      v45 = 0;
                      if ( (*(_BYTE *)(v42 + 19) & 8) != 0 )
                        v45 = *(_QWORD *)(v42 + 48);
                      v46 = ptr;
                      if ( *(_QWORD *)ptr == v45 )
                      {
                        if ( (unsigned __int64)(unsigned int)v54 + 1 > HIDWORD(v54) )
                        {
                          sub_22134E0(&ptr, v55, (unsigned int)v54 + 1LL, 8);
                          v46 = ptr;
                          v41 = (unsigned int)v54;
                        }
                        v46[v41] = v4;
                        LODWORD(v54) = v54 + 1;
                        goto LABEL_31;
                      }
                    }
                  }
                  if ( !(_DWORD)v54 )
                  {
                    v5 = *(_BYTE *)(v4 + 28);
                    goto LABEL_16;
                  }
LABEL_15:
                  sub_B96720((_DWORD *)a1, (__int64)&ptr);
                  v5 = *(_BYTE *)(v4 + 28);
                  goto LABEL_16;
                }
                v24 = *v26;
                v27 = *(unsigned __int8 *)(*v26 + 16);
                v21 = *v26;
                if ( (_BYTE)v27 == 42 )
                  goto LABEL_48;
                v28 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v28 + 16) == 42 )
                {
                  v21 = sub_F3F310(v24, v9, v27, v28);
                  if ( v21 )
                    goto LABEL_48;
                  v24 = *v26;
                  v27 = *(unsigned __int8 *)(*v26 + 16);
                  v21 = *v26;
                }
                if ( (_BYTE)v27 == 34 )
                  goto LABEL_48;
                v29 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v29 + 16) == 34 )
                {
                  v21 = sub_F3F310(v24, v9, v27, v29);
                  if ( v21 )
                    goto LABEL_48;
                  v24 = *v26;
                  v27 = *(unsigned __int8 *)(*v26 + 16);
                  v21 = *v26;
                }
                if ( (_BYTE)v27 == 11 )
                  goto LABEL_48;
                v30 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v30 + 16) == 11 )
                {
                  v21 = sub_F3F310(v24, v9, v27, v30);
                  if ( v21 )
                    goto LABEL_48;
                  v24 = *v26;
                  v27 = *(unsigned __int8 *)(*v26 + 16);
                  v21 = *v26;
                }
                if ( (unsigned __int8)(v27 - 2) > 4u )
                  break;
                v8 = *(_QWORD *)(v24 + 32);
              }
              if ( (unsigned int)(v27 - 25) <= 1 )
                goto LABEL_133;
              v48 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 25;
              if ( (unsigned int)v48 <= 1 )
              {
                v21 = sub_F3F310(v24, v9, v27, v48);
                if ( v21 )
                  goto LABEL_133;
                v24 = *v26;
                v27 = *(unsigned __int8 *)(*v26 + 16);
                v21 = *v26;
              }
              if ( (unsigned int)(v27 - 57) <= 1 )
                goto LABEL_48;
              v23 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 57;
              if ( (unsigned int)v23 <= 1 )
              {
                v21 = sub_F3F310(v24, v9, v27, v23);
                if ( v21 )
                  goto LABEL_48;
                v24 = *v26;
                LODWORD(v27) = *(unsigned __int8 *)(*v26 + 16);
                v21 = *v26;
              }
              v22 = (unsigned int)(v27 - 43);
              if ( (unsigned int)v22 > 1 )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 43 > 1 )
                  goto LABEL_41;
                v21 = sub_F3F310(v24, v9, v22, v23);
                if ( !v21 )
                  break;
              }
              while ( 1 )
              {
                v8 = *(_QWORD *)(v21 + 32);
                if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
                  break;
                v49 = v8 & 0xFFFFFFFFFFFFFFF0LL;
                v21 = *(_QWORD *)v49;
                v50 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v49 + 16LL) - 43;
                if ( (unsigned int)v50 > 1 )
                  v21 = sub_F3F310(v21, v9, v50, v23);
              }
            }
            v24 = *v26;
LABEL_41:
            v21 = v24;
            if ( *(_BYTE *)(v24 + 16) != 16 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
                goto LABEL_45;
              v21 = sub_F3F310(v24, v9, v22, v23);
              if ( !v21 )
              {
                v24 = *v26;
LABEL_45:
                v21 = v24;
                if ( *(_BYTE *)(v24 + 16) != 40 )
                {
                  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(v25 + 16) != 40 )
                    goto LABEL_104;
                  v21 = sub_F3F310(v24, v9, v25, v23);
                  if ( !v21 )
                    goto LABEL_104;
                }
LABEL_48:
                v8 = *(_QWORD *)(v21 + 32);
                goto LABEL_49;
              }
            }
LABEL_133:
            v8 = *(_QWORD *)(v21 + 24);
            goto LABEL_49;
          }
LABEL_16:
          v10 = v5 & 0x7F;
          if ( (unsigned int)v10 - 58 > 4 || (*(_BYTE *)(v4 + 74) & 8) != 0 )
          {
            v11 = *(_DWORD *)(a1 + 32);
            if ( v10 == 89 )
            {
              v38 = 0;
              v39 = v11 - *(unsigned __int8 *)(a1 + 8);
              *(_DWORD *)(a1 + 32) = v39;
              if ( v39 )
              {
                do
                {
                  ++v38;
                  sub_971800(*(_QWORD *)a1, "  ");
                }
                while ( v39 != v38 );
              }
              sub_B8ED40((__int64 *)a1, (*(_BYTE *)(v4 + 29) >> 5) & 3);
              sub_971800(*(_QWORD *)a1, ":\n");
              *(_DWORD *)(a1 + 32) += *(unsigned __int8 *)(a1 + 8);
              v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v4 )
                break;
            }
            else
            {
              v12 = 0;
              if ( v11 )
              {
                do
                {
                  while ( 1 )
                  {
                    v13 = *(_QWORD *)a1;
                    v14 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
                    if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v14 > 1u )
                      break;
                    ++v12;
                    sub_22581D0(v13, "  ", 2);
                    if ( v11 == v12 )
                      goto LABEL_22;
                  }
                  ++v12;
                  *v14 = 8224;
                  *(_QWORD *)(v13 + 32) += 2LL;
                }
                while ( v12 != v11 );
              }
LABEL_22:
              v15 = (const char *)v4;
              sub_B91A70(a1, v4);
              v18 = *(_BYTE *)(v4 + 28) & 0x7F;
              if ( (unsigned __int8)v18 > 0x1Bu )
                goto LABEL_23;
              v31 = 201568256;
              if ( !_bittest64(&v31, v18) )
              {
                if ( (_BYTE)v18 != 18 )
                {
                  if ( (((_BYTE)v18 + 109) & 0x7Fu) <= 6 || (_BYTE)v18 == 4 )
                    goto LABEL_29;
                  goto LABEL_130;
                }
                v15 = (const char *)sub_6CE2D0;
                v47 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL);
                if ( v47 == sub_6CE2D0 )
                {
                  if ( (*(_BYTE *)(v4 + 112) & 1) != 0 || *(_QWORD *)(v4 + 112) )
                    goto LABEL_29;
                  goto LABEL_130;
                }
                if ( v47(v4) )
                  goto LABEL_67;
                LOBYTE(v18) = *(_BYTE *)(v4 + 28) & 0x7F;
LABEL_23:
                if ( (unsigned int)(unsigned __int8)v18 - 34 > 5 )
                {
                  if ( (_BYTE)v18 == 71 )
                  {
                    v32 = *(_QWORD *)(v4 + 48);
                    v19 = *(unsigned __int8 *)(v32 + 83);
                    v20 = *(_BYTE *)(v32 + 83) & 8;
                    if ( (*(_BYTE *)(v32 + 83) & 8) == 0 && ((*(_BYTE *)(v32 + 128) & 1) != 0 || *(_QWORD *)(v32 + 128)) )
                    {
                      if ( *(char *)(a1 + 11) >= 0 )
                        goto LABEL_120;
                      goto LABEL_29;
                    }
                    if ( (v19 & 0x40) != 0 )
                    {
                      if ( *(char *)(a1 + 11) >= 0 )
                        goto LABEL_76;
                      goto LABEL_29;
                    }
                    goto LABEL_130;
                  }
                  if ( (((_BYTE)v18 + 109) & 0x7Fu) <= 6 || (_BYTE)v18 == 4 )
                    goto LABEL_29;
                  if ( (_BYTE)v18 != 33 )
                    goto LABEL_130;
                  if ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                    goto LABEL_29;
                  v15 = ",";
                }
                else
                {
                  v19 = *(unsigned __int8 *)(v4 + 83);
                  v20 = *(_BYTE *)(v4 + 83) & 8;
                  if ( ((*(_BYTE *)(v4 + 83) & 8) == 0 && ((*(_BYTE *)(v4 + 128) & 1) != 0 || *(_QWORD *)(v4 + 128))
                     || (v19 & 0x40) != 0)
                    && (v19 & 2) == 0 )
                  {
                    if ( *(char *)(a1 + 11) < 0 )
                      goto LABEL_29;
                    goto LABEL_70;
                  }
LABEL_130:
                  v15 = ";";
                }
                sub_971800(*(_QWORD *)a1, v15);
              }
LABEL_67:
              if ( *(char *)(a1 + 11) < 0 )
                goto LABEL_29;
              LOBYTE(v18) = *(_BYTE *)(v4 + 28) & 0x7F;
              if ( (unsigned int)(unsigned __int8)v18 - 34 > 5 )
                goto LABEL_74;
              v19 = *(unsigned __int8 *)(v4 + 83);
              v20 = *(_BYTE *)(v4 + 83) & 8;
LABEL_70:
              if ( !(_BYTE)v20 && ((*(_BYTE *)(v4 + 128) & 1) != 0 || *(_QWORD *)(v4 + 128)) )
                goto LABEL_30;
              v19 &= 0x40u;
              if ( (_DWORD)v19 )
                goto LABEL_30;
LABEL_74:
              if ( (_BYTE)v18 == 71 )
              {
                v32 = *(_QWORD *)(v4 + 48);
                v19 = *(unsigned __int8 *)(v32 + 83);
                v20 = *(_BYTE *)(v32 + 83) & 8;
LABEL_76:
                if ( !(_BYTE)v20 )
                {
LABEL_120:
                  if ( (*(_BYTE *)(v32 + 128) & 1) != 0 || *(_QWORD *)(v32 + 128) )
                    goto LABEL_30;
                }
                v19 &= 0x40u;
                if ( (_DWORD)v19 )
                  goto LABEL_30;
              }
LABEL_29:
              v15 = "\n";
              sub_971800(*(_QWORD *)a1, "\n");
LABEL_30:
              if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
                goto LABEL_31;
              v33 = sub_B68690(v4, (__int64)v15, v19, v20, v16, v17);
              v34 = (__int64 *)*v33;
              v35 = *v33 + 8LL * *((unsigned int *)v33 + 2);
              if ( *v33 < v35 )
              {
                v40 = *v33;
                if ( *(_WORD *)(*v34 + 36) != 295 )
                {
                  do
                  {
                    v40 += 8LL;
                    if ( v35 == v40 )
                      goto LABEL_31;
                  }
                  while ( *(_WORD *)(*(_QWORD *)v40 + 36LL) != 295 );
                }
                if ( v35 == v40 )
                  goto LABEL_31;
LABEL_100:
                sub_971800(*(_QWORD *)a1, "#pragma omp end declare target\n");
                v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v4 )
                  break;
              }
              else
              {
                if ( v34 == (__int64 *)v35 )
                  goto LABEL_31;
                if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 295 )
                  goto LABEL_100;
                v36 = (__int64 *)(v35 + 8);
                while ( v36 != v34 )
                {
                  v37 = *v36++;
                  if ( *(_WORD *)(v37 + 36) == 295 )
                    goto LABEL_100;
                }
LABEL_31:
                v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v4 )
                  break;
              }
            }
          }
          else
          {
            v43 = (unsigned int)v54;
            v44 = (unsigned int)v54 + 1LL;
            if ( v44 > HIDWORD(v54) )
            {
              sub_22134E0(&ptr, v55, v44, 8);
              v43 = (unsigned int)v54;
            }
            *((_QWORD *)ptr + v43) = v4;
            LODWORD(v54) = v54 + 1;
            v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v4 )
              break;
          }
        }
      }
    }
    if ( (_DWORD)v54 )
    {
      sub_B96720((_DWORD *)a1, (__int64)&ptr);
      if ( !a3 )
      {
LABEL_35:
        if ( ptr != v55 )
          free(ptr);
        return;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_35;
    }
    *(_DWORD *)(a1 + 32) -= *(unsigned __int8 *)(a1 + 8);
    goto LABEL_35;
  }
}


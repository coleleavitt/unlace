void __fastcall sub_185A590(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r12
  bool v16; // r13
  __int64 v17; // r12
  unsigned __int8 v18; // al
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdi
  int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rax
  __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  char v32; // al
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // cl
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r13
  unsigned int *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r13
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // [rsp+0h] [rbp-1F0h]
  __int64 v47; // [rsp+10h] [rbp-1E0h] BYREF
  _QWORD v48[2]; // [rsp+18h] [rbp-1D8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-1C8h]
  unsigned __int8 *v50; // [rsp+38h] [rbp-1B8h] BYREF
  char v51; // [rsp+90h] [rbp-160h]
  unsigned int v52; // [rsp+98h] [rbp-158h]
  char v53; // [rsp+9Ch] [rbp-154h]
  unsigned __int8 *v54; // [rsp+A8h] [rbp-148h] BYREF
  unsigned __int64 v55; // [rsp+B0h] [rbp-140h]
  __int64 v56; // [rsp+B8h] [rbp-138h] BYREF

  if ( *(char *)(a2 + 28) >= 0 && (!sub_B73640(a2) || (*(_DWORD *)sub_B73640(a2) & 0x40000) == 0) )
  {
    v10 = (char *)sub_F60F10(a3, a2, v6, v7, v8, v9);
    v15 = v10;
    if ( v10[28] >= 0 )
    {
      sub_7052B0((__int64 *)(*((_QWORD *)v10 + 13) + 96LL), *((_QWORD *)v10 + 13), v11, v12, v13, v14);
      if ( *(char *)(*((_QWORD *)v15 + 16) + 7LL) >= 0 && !(unsigned __int8)sub_B8E180((unsigned __int64)(v15 + 64)) )
      {
        v16 = sub_B73C40(a2, a1[31]);
        if ( !v16 )
        {
          v17 = sub_1A69EF0(a1, v15);
          if ( v17 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 2) > 4u )
            {
              sub_1910D40(a1, *(unsigned int *)(a2 + 24), v17, 1);
              sub_168B9B0((__int64)&v54, (__int64)(a1 + 1), 2951);
              sub_AE9DF0(&v54, *(_QWORD *)(a2 + 40), 9u);
              sub_AE9DF0(&v54, *(_QWORD *)(a2 + 48), 8u);
              sub_16602B0(a1, *(_DWORD *)(a2 + 24), v17, (__int64)&v54, 0);
              if ( v54 && v55 )
                sub_1580C40(v55, (unsigned __int64)v54);
              LODWORD(v54) = *(_DWORD *)(a2 + 24);
              sub_18F5260((_DWORD)a1, v17, (unsigned int)&v54, 1, 0, 0, 0, 0, 0);
            }
            if ( *(char *)(v17 + 82) >= 0 )
            {
              if ( (*(_BYTE *)(v17 + 84) & 3) != 0 )
              {
                if ( sub_B73640(a2) && (*(_DWORD *)sub_B73640(a2) & 0x20000) == 0 )
                  v16 = sub_B7C110(a2) != 0;
                v54 = (unsigned __int8 *)&v56;
                v55 = 0x800000000LL;
                if ( !(unsigned __int8)sub_C56F10(a2, (__int64)&v54)
                  && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B
                  && *(char *)(a2 + 97) < 0
                  && v16 )
                {
                  sub_168B9F0((__int64)v48, a1 + 1, *(_DWORD *)(a2 + 24), 0xDA1u, 0);
                  if ( v51 )
                  {
                    sub_AE9DF0(&v50, a2, 0xAu);
                  }
                  else if ( v53 )
                  {
                    v43 = sub_168B9E0(v48);
                    v44 = v49;
                    if ( v49 )
                      v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
                    v47 = v44;
                    v45 = sub_1587BC0(v43, &v47, v39, v40, v41, v42);
                    sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v52 + 8), a2, 0xAu);
                  }
                  sub_15F7200(v48);
                  if ( (_DWORD)v55 )
                  {
                    v46 = 32 * ((unsigned int)(v55 - 1) + 1LL);
                    v37 = 0;
                    do
                    {
                      v38 = (unsigned int *)&v54[v37];
                      v37 += 32;
                      sub_168CDE0((__int64)v48, a1 + 1, *v38, (__int64)(v38 + 2), 0);
                      sub_15F7200(v48);
                    }
                    while ( v46 != v37 );
                  }
                }
                sub_C23820((__int64)&v54);
              }
              v18 = *(_BYTE *)(a2 + 96) & 7;
              if ( !v18 )
              {
                v19 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
                if ( ((v19 & 8) == 0
                   || (*(_DWORD *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v19 & 7)) >> 9 != 3)
                  && !sub_A5EB90(a2)
                  && (*(_BYTE *)(a2 + 96) & 0x18) == 0 )
                {
                  return;
                }
LABEL_18:
                v20 = a1[31];
                if ( !(unsigned int)sub_B73D90(a2, v20) )
                  return;
                if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
                {
                  v28 = sub_B8C3D0(a2, v20, v21, v22, v23, v24);
                  v29 = (__int64 *)*v28;
                  v30 = *v28 + 8LL * *((unsigned int *)v28 + 2);
                  if ( *v28 >= v30 )
                  {
                    if ( v29 != (__int64 *)v30 )
                    {
                      if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) == 129 )
                      {
LABEL_21:
                        if ( (*(_BYTE *)(a2 + 96) & 7) != 2
                          && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
                        {
                          goto LABEL_24;
                        }
                        if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) != 0 )
                        {
                          v25 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                            v25 = *(_QWORD *)(v25 + 8);
                          v26 = *(_BYTE *)(sub_B8EAA0(v25) + 8) & 0x7F;
                          if ( !v26 || v26 == 24 )
                            goto LABEL_24;
                          if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
                          {
                            v27 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                            if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                              v27 = *(_QWORD *)v27;
                            if ( ((*(_BYTE *)(v27 + 8) + 70) & 0x7Fu) <= 3 )
                            {
LABEL_24:
                              sub_168B9F0((__int64)&v54, a1 + 1, *(_DWORD *)(a2 + 24), 0x1B2Fu, 0);
                              sub_15F7200(&v54);
                            }
                          }
                        }
                        return;
                      }
                      v35 = (__int64 *)(v30 + 8);
                      while ( v29 != v35 )
                      {
                        v36 = *v35++;
                        if ( *(_WORD *)(v36 + 36) == 129 )
                          goto LABEL_21;
                      }
                    }
                  }
                  else
                  {
                    v31 = *v28;
                    while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 129 )
                    {
                      v31 += 8LL;
                      if ( v30 == v31 )
                        goto LABEL_20;
                    }
                    if ( v30 != v31 )
                      goto LABEL_21;
                  }
                }
LABEL_20:
                sub_168B9F0((__int64)&v54, a1 + 1, *(_DWORD *)(a2 + 24), 0x1ADDu, 0);
                sub_15F7200(&v54);
                goto LABEL_21;
              }
              if ( v18 != 5 )
              {
LABEL_26:
                if ( v18 > 3u )
                  return;
                goto LABEL_18;
              }
              v32 = *(_BYTE *)(a2 + 28) & 0x7F;
              if ( v32 != 46 && v32 != 40 )
                goto LABEL_67;
              v33 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                v33 = *(_QWORD *)(v33 + 8);
              if ( !v33 )
              {
LABEL_67:
                if ( v32 == 43 )
                  return;
                goto LABEL_18;
              }
              v34 = *(_BYTE *)(sub_B8EAA0(v33) + 8) & 0x7F;
              if ( v34 > 0x12u )
              {
                if ( ((v34 + 94) & 0x7Fu) > 5 )
                {
LABEL_65:
                  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
                    goto LABEL_18;
                }
              }
              else if ( ((1LL << v34) & 0x40182) == 0 )
              {
                goto LABEL_65;
              }
              v18 = *(_BYTE *)(a2 + 96) & 7;
              goto LABEL_26;
            }
          }
        }
      }
    }
  }
}

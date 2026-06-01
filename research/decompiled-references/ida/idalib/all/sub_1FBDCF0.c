char __fastcall sub_1FBDCF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rsi
  int v9; // ebp
  unsigned __int8 v10; // dl
  int v11; // r14d
  bool v12; // r13
  unsigned __int8 v13; // cl
  int v14; // esi
  bool v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbp
  int v28; // ebp
  _BOOL4 v29; // ebp
  char v30; // al
  int v31; // ebp
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rbp

  v7 = (__int64 *)(a2 + 72);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB7E60((__int64 *)a1, v7, a3, a4, a5, a6);
  sub_1FBCB60((__int64 *)a1, a2);
  v9 = (unsigned __int8)sub_B81B70(a2);
  if ( sub_9B48E0(a2) )
  {
    v10 = *(_BYTE *)(a2 + 96);
    v11 = 0;
    v12 = 0;
    v13 = (v10 >> 3) & 3;
  }
  else
  {
    v10 = *(_BYTE *)(a2 + 96);
    v12 = 0;
    v11 = 0;
    v13 = (v10 >> 3) & 3;
    if ( !v13 )
    {
      if ( !sub_B73BE0(a2) )
      {
        v12 = sub_1FB11D0(a2, a2);
        v11 = 8 * v12;
      }
      v10 = *(_BYTE *)(a2 + 96);
      v13 = (v10 >> 3) & 3;
    }
  }
  v14 = v11 | v9 | (((v10 >> 5) & 3) << 9) | (16 * (v10 & 7)) | (*(_BYTE *)(a2 + 96) >> 7 << 11);
  v15 = 0;
  v16 = (v13 << 7) | (unsigned int)v14;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
  {
LABEL_6:
    sub_9B9C90(*(_QWORD *)(a1 + 24), v16);
    if ( !v12 )
      goto LABEL_7;
    goto LABEL_40;
  }
  v28 = v16
      | (((*(_BYTE *)(a2 + 98) & 2) != 0) << 20)
      | (*(unsigned __int8 *)(a2 + 97) << 11) & 0x40000
      | (((*(_BYTE *)(a2 + 97) & 0x40) != 0) << 17)
      | (((*(_BYTE *)(a2 + 97) & 0x20) != 0) << 16)
      | (((*(_BYTE *)(a2 + 97) & 8) != 0) << 15)
      | (((*(_BYTE *)(a2 + 97) & 4) != 0) << 14)
      | ((*(_BYTE *)(a2 + 97) & 1) << 12)
      | ((*(_BYTE *)(a2 + 98) & 1) << 19)
      | (((*(_BYTE *)(a2 + 97) & 2) != 0) << 13);
  v29 = (sub_B73970(a2) << 21) | v28;
  v15 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
  v30 = *(_BYTE *)(a2 + 28) & 0x7F;
  v31 = (v15 << 22) | v29;
  if ( v30 == 45 )
  {
    LODWORD(v16) = v31 | (((*(_BYTE *)(a2 + 98) >> 2) & 7) << 23) | (((*(_BYTE *)(a2 + 97) & 0x10) != 0) << 26);
  }
  else
  {
    v16 = v31 | ((unsigned __int8)((*(_BYTE *)(a2 + 97) & 0x10) != 0) << 26);
    if ( v30 == 43 )
      goto LABEL_6;
  }
  v16 = ((unsigned int)*(char *)(a2 + 98) >> 31 << 27) | (unsigned int)v16;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v16);
  if ( !v12 )
  {
LABEL_7:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_8;
    goto LABEL_41;
  }
LABEL_40:
  v16 = a2;
  sub_1F92A90(*(_QWORD *)a1, a2, *(_QWORD *)a1 + 2000LL);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
LABEL_41:
  v32 = sub_B8C3D0(a2, v16, v17, v18, v19, v20);
  v33 = *v32;
  v34 = *v32 + 8LL * *((unsigned int *)v32 + 2);
  if ( *v32 >= v34 )
  {
    if ( v33 == v34 )
      goto LABEL_8;
    while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 148 )
    {
      v34 += 8LL;
      if ( v33 == v34 )
        goto LABEL_8;
    }
    goto LABEL_46;
  }
  v35 = *v32;
  while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 148 )
  {
    v35 += 8LL;
    if ( v34 == v35 )
      goto LABEL_8;
  }
  if ( v34 != v35 )
  {
LABEL_46:
    v36 = sub_A85CF0(*(_QWORD *)(a1 + 8), a2);
    sub_183F100(a1 + 32, v36 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v36 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      sub_9B9C90(*(_QWORD *)(a1 + 24), (v36 >> 1) & 1);
  }
LABEL_8:
  v21 = sub_B73BE0(a2);
  if ( v21 )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), 1);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v21, *(_QWORD *)(a1 + 24));
  }
  else
  {
    v37 = sub_B73ED0(a2);
    v38 = *(_QWORD *)(a1 + 24);
    v39 = v37;
    if ( v37 )
    {
      sub_9B9C90(v38, 2);
      sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)v39 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
      sub_9B9C90(*(_QWORD *)(a1 + 24), ((*(__int64 *)v39 >> 1) & 3) + 1);
      sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v39 + 8), *(_QWORD *)(a1 + 24));
    }
    else
    {
      sub_1FB1190(v38);
    }
  }
  v22 = *(_QWORD *)(a2 + 16);
  if ( (v22 & 4) == 0 || (v22 &= 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(v22 + 8) == *(_QWORD *)v22) )
  {
    if ( (*(_BYTE *)(a2 + 29) & 0x11) == 0 )
    {
      LOBYTE(v22) = sub_1EA74C0(a2);
      if ( !(_BYTE)v22 && (*(_BYTE *)(a2 + 40) & 7) == 0 && (*(_BYTE *)(a2 + 56) & 4) == 0 )
      {
        v27 = *(_QWORD *)(a2 + 80);
        v22 = (unsigned __int64)sub_705340((__int64 *)(v27 + 72), v27, v23, v24, v25, v26);
        if ( v27 == v22 )
        {
          LOBYTE(v22) = *(_BYTE *)(a2 + 28) & 0x7F;
          if ( (_BYTE)v22 == 40 )
          {
            LOBYTE(v22) = *(_BYTE *)(a2 + 97);
            if ( (v22 & 0x20) == 0 && (v22 & 0x80u) == 0LL && (*(_BYTE *)(a2 + 98) & 3) == 0 )
            {
              LOBYTE(v22) = sub_B7C390(a2);
              if ( !(_BYTE)v22 )
              {
                LOBYTE(v22) = sub_B73970(a2);
                if ( !(_BYTE)v22 && !v15 )
                {
                  LOBYTE(v22) = sub_9B48E0(a2);
                  if ( (_BYTE)v22 || (*(_BYTE *)(a2 + 96) & 0x18) != 0 )
                  {
                    v22 = sub_B73BE0(a2);
                    if ( !v22 )
                    {
                      v22 = sub_B73ED0(a2);
                      if ( !v22 && (*(_BYTE *)(a2 + 97) & 0x10) == 0 )
                      {
                        LOBYTE(v22) = *(_BYTE *)(a2 + 28) & 0x7F;
                        if ( (_BYTE)v22 != 45 )
                        {
                          LOBYTE(v22) = sub_B73970(a2);
                          if ( !(_BYTE)v22 )
                          {
                            LODWORD(v22) = *(_DWORD *)(*(_QWORD *)a1 + 3492LL);
                            *(_DWORD *)(a1 + 228) = v22;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 72;
  return v22;
}

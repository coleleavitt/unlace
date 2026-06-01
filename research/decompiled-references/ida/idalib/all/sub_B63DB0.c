__int64 __fastcall sub_B63DB0(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  char v10; // al
  char v11; // dl
  int v12; // eax
  int v13; // r14d
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // r13
  unsigned __int64 *i; // rbp
  char v20; // al
  char v21; // dl
  char v22; // si
  char v23; // cl
  char v24; // dl
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r13
  char v30; // dl
  char v31; // si
  int v32; // ecx
  char v33; // al
  char v34; // dl
  char v35; // di
  int v36; // eax
  unsigned int v37; // r14d
  int v38; // eax
  unsigned __int8 v39; // al
  _DWORD *v40; // rbx
  unsigned __int64 v41; // rdi
  char v43; // al
  _QWORD *v44; // rdi
  __int64 v45; // rdi
  _QWORD *v46; // rdx
  char v47[64]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *a1;
  v8 = (*a1 >> 16) & 8;
  if ( ((*a1 >> 16) & 8) != 0 )
  {
    v9 = a1[4];
    LODWORD(v8) = 0;
    if ( v9 )
    {
      v10 = sub_E91240(v9, a2, a3, a4, a5);
      v11 = v10 & 1;
      if ( (v10 & 8) != 0 )
      {
        if ( (v10 & 2) != 0 )
        {
          v11 |= 0x12u;
          v12 = 16;
          v13 = 2;
          goto LABEL_6;
        }
        v11 |= 0x10u;
        v12 = 16;
      }
      else
      {
        v12 = v10 & 2;
        if ( v12 )
        {
          v11 |= 2u;
          v12 = 0;
          v13 = 2;
LABEL_6:
          v14 = v12 | v11 & 1;
          v7 = *a1;
          LODWORD(v8) = v14 | v13;
          goto LABEL_7;
        }
      }
      v13 = 0;
      goto LABEL_6;
    }
  }
LABEL_7:
  v15 = v7 >> 16;
  if ( (v15 & 0x10) != 0 )
  {
    v16 = (v15 & 0x20) != 0;
    v17 = &a1[2 * ((v15 & 8) != 0) + v16];
    if ( *((_DWORD *)v17 + 8) )
    {
      v18 = &a1[2 * ((v15 & 8) != 0) + 4 + 2 * (unsigned __int64)((v15 & 0x10) != 0) + v16];
      if ( v18 )
      {
        if ( *((_DWORD *)v17 + 8) )
        {
          for ( i = &v18[4 * *((unsigned int *)v17 + 11)]; i > v18; LODWORD(v8) = v27 | v26 | v25 | v24 & 1 | 2 | v8 )
          {
            while ( 1 )
            {
              v20 = sub_F1D2B0(v18);
              v21 = v20 & 8;
              if ( (v20 & 8) != 0 )
                v21 = 16;
              v22 = v20 & 4;
              if ( (v20 & 4) != 0 )
                v22 = 12;
              v23 = v20 & 2;
              if ( (v20 & 2) != 0 )
                v23 = 2;
              v24 = v23 | v22 | v20 & 1 | v21;
              v25 = v24 & 0x10;
              if ( (v24 & 0x10) != 0 )
                v25 = 16;
              v26 = v24 & 8;
              if ( (v24 & 8) != 0 )
                v26 = 8;
              v27 = v24 & 4;
              if ( (v24 & 4) != 0 )
                v27 = 4;
              if ( (v24 & 2) != 0 )
                break;
              v18 += 4;
              LODWORD(v8) = v27 | v26 | v25 | v24 & 1 | v8;
              if ( i <= v18 )
                goto LABEL_26;
            }
            v18 += 4;
          }
        }
      }
    }
  }
LABEL_26:
  v28 = a1[2];
  v29 = a1[1];
  if ( (unsigned __int8)sub_B799A0(v28) )
    LODWORD(v8) = v8 | 1;
  v30 = *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v31 = v30 & 4;
  v32 = v30 & 2;
  v33 = 8;
  v34 = (2 * (v32 != 0)) | ((v30 & 4) != 0 ? 0xC : 0) | (16 * ((v30 & 0x10) != 0)) | (32 * ((v30 & 8) != 0)) | v30 & 1;
  v35 = v34 & 0x10;
  if ( (v34 & 0x10) != 0 )
  {
    v33 = 24;
    v35 = 16;
  }
  if ( (v34 & 8) == 0 )
    v33 = v35;
  v36 = v33 & 0x10 | v8;
  v37 = v32 | v36;
  v38 = v36 | 0xE;
  if ( v31 )
    v37 = v38;
  if ( (*a1 & 0x1000000) != 0 )
    v37 |= 4u;
  if ( (*(_DWORD *)(v28 + 40) & 7) == 5 )
  {
    v43 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL)
                   + 17LL);
    if ( (v43 & 4) != 0 )
      goto LABEL_50;
    if ( (v43 & 2) != 0 )
      v37 |= 2u;
  }
  v39 = *(_BYTE *)(v28 + 28) & 0x7F;
  if ( v39 == 47 )
  {
    v37 |= 0xAu;
    return v37;
  }
  if ( (unsigned int)v39 - 40 > 6 )
  {
    if ( (unsigned int)v39 - 35 <= 3 && (unsigned __int8)sub_B979F0(v28) )
    {
      v44 = (_QWORD *)(*(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v28 + 16) & 4) != 0 )
        v44 = (_QWORD *)*v44;
      if ( (unsigned __int8)sub_B8E180(v44) )
        v37 |= 0xAu;
    }
  }
  else
  {
    v40 = (_DWORD *)sub_B7D120(v28, v47);
    if ( v40 )
    {
      if ( (*v40 & 0x40000) != 0 )
        v37 |= 0x10u;
      if ( (unsigned __int8)sub_B79830(v28, a2) && (*v40 & 0x20000) != 0 )
        v37 |= 0xAu;
    }
    if ( (*(_BYTE *)(v28 + 28) & 0x7F) != 0x2B )
    {
      v41 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v28 + 16) & 4) != 0 )
      {
        v41 = *(_QWORD *)v41;
        if ( ((*(_BYTE *)(v41 + 8) + 70) & 0x7Fu) > 3 )
          return v37;
      }
      else if ( ((*(_BYTE *)(v41 + 8) + 70) & 0x7Fu) > 3 )
      {
        return v37;
      }
      if ( (unsigned __int8)sub_B8E180(v41) && !(unsigned __int8)sub_B735C0(*(_QWORD *)(v28 + 80)) )
      {
        v45 = *(_QWORD *)(v28 + 80);
        v46 = (_QWORD *)(*(_QWORD *)(v45 + 56) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v45 + 56) & 4) != 0 )
          v46 = (_QWORD *)v46[4];
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v46 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 5 )
        {
          if ( !(unsigned __int8)sub_B735C0(v45) )
            v37 |= 0xAu;
          return v37;
        }
LABEL_50:
        v37 |= 0xEu;
      }
    }
  }
  return v37;
}

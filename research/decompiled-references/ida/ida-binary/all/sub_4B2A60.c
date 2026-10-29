__int64 __fastcall sub_4B2A60(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r15
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int8 *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v22; // rbx
  unsigned __int8 *v23; // rdi
  __int64 v24; // r15
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // rsi
  unsigned __int8 v29; // al
  _QWORD *v30; // r13
  __int64 v31; // rbp
  char v32; // al
  __int64 v33; // rsi
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdi
  _QWORD *v36; // rax
  unsigned __int8 v37; // dl
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  void *v40; // rdi
  char *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-98h]
  _QWORD *v44; // [rsp+0h] [rbp-98h]
  char v45; // [rsp+0h] [rbp-98h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+18h] [rbp-80h]
  unsigned __int64 v48; // [rsp+18h] [rbp-80h]
  unsigned __int64 v49; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v50; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+38h] [rbp-60h]

  v3 = a2;
  v5 = a2[2];
  v49 = v5;
  if ( !v5 )
  {
    v17 = a2[1];
LABEL_10:
    sub_4B2480(v3, v17 + 1);
    v18 = *(_QWORD *)(a3 + 8);
    v19 = *(_QWORD *)(a3 + 16);
    v20 = QT::qHash(v19, v18, v3[3]);
    v21 = v3;
    v22 = v3[2] - 1LL;
    v48 = v3[2];
    v23 = (unsigned __int8 *)v3[4];
    v24 = a1;
    v25 = v18;
    v26 = v20 & v22;
    v27 = v26 & 0x7F;
    v11 = &v23[144 * (v26 >> 7)];
    v28 = v11[v27];
    if ( v28 == 255 )
    {
LABEL_11:
      a1 = v24;
      v29 = v11[137];
      v10 = v27;
      v3 = v21;
      if ( v29 == v11[136] )
      {
LABEL_27:
        if ( v29 )
        {
          if ( v29 == 48 )
          {
            v45 = 80;
            v35 = 2560;
            v34 = 80;
          }
          else
          {
            v34 = v29 + 16LL;
            v45 = v29 + 16;
            v35 = 32 * v34;
          }
        }
        else
        {
          v45 = 48;
          v35 = 1536;
          v34 = 48;
        }
        v36 = (_QWORD *)operator new[](v35);
        v37 = v11[136];
        v30 = v36;
        v38 = 0;
        if ( !v37
          || (v41 = *((char **)v11 + 16),
              v38 = v37,
              v42 = 32LL * v37,
              *v30 = *(_QWORD *)v41,
              v30[(unsigned __int64)v42 / 8 - 1] = *(_QWORD *)&v41[v42 - 8],
              qmemcpy(
                (void *)((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v41 - ((char *)v30 - ((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v30 - (((_DWORD)v30 + 8) & 0xFFFFFFF8) + (unsigned int)v42) >> 3)),
              v38 < v34) )
        {
          do
          {
            v39 = v38++;
            LOBYTE(v30[4 * v39]) = v38;
          }
          while ( v38 < v34 );
        }
        v40 = *((void **)v11 + 16);
        if ( v40 )
          operator delete[](v40);
        *((_QWORD *)v11 + 16) = v30;
        v11[136] = v45;
        v29 = v11[137];
        goto LABEL_13;
      }
LABEL_12:
      v30 = *((_QWORD **)v11 + 16);
LABEL_13:
      v11[137] = v30[4 * v29];
      v11[v10] = v29;
      v31 = (__int64)&v11[-v3[4]] >> 4;
      ++v3[1];
      v14 = 0;
      v15 = (0x1C71C71C71C71C80LL * v31) | v10;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v33 = *((_QWORD *)v11 + 16) + 32 * v28;
      if ( v19 == *(_QWORD *)(v33 + 16) )
        break;
      if ( ++v27 == 128 )
        goto LABEL_19;
LABEL_16:
      v28 = v11[v27];
      if ( v28 == 255 )
        goto LABEL_11;
    }
    v44 = v21;
    v32 = QT::QtPrivate::equalStrings(v19, *(_QWORD *)(v33 + 8), v19, v25);
    v21 = v44;
    if ( v32 )
      goto LABEL_11;
    if ( ++v27 != 128 )
      goto LABEL_16;
LABEL_19:
    v11 += 144;
    v27 = 0;
    if ( 0x8E38E38E38E38E39LL * ((v11 - v23) >> 4) == v48 >> 7 )
      v11 = v23;
    goto LABEL_16;
  }
  v52 = *(_QWORD *)(a3 + 16);
  v46 = *(_QWORD *)(a3 + 8);
  v6 = QT::qHash(v52, v46, a2[3]);
  v7 = v46;
  v8 = v52;
  v9 = v6 & (v5 - 1);
  v50 = (unsigned __int8 *)a2[4];
  v10 = v9 & 0x7F;
  v11 = &v50[144 * (v9 >> 7)];
LABEL_4:
  v12 = v11[v10];
  if ( v12 == 255 )
  {
LABEL_25:
    v17 = a2[1];
    if ( v17 < v49 >> 1 )
    {
      v29 = v11[137];
      if ( v29 == v11[136] )
        goto LABEL_27;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v11 + 16) + 32 * v12;
    if ( v8 == *(_QWORD *)(v13 + 16) )
    {
      v47 = v7;
      v43 = v8;
      v14 = QT::QtPrivate::equalStrings(v8, *(_QWORD *)(v13 + 8), v8, v7);
      v8 = v43;
      v7 = v47;
      if ( v14 )
        break;
    }
    if ( ++v10 != 128 )
      goto LABEL_4;
    v11 += 144;
    v10 = 0;
    if ( 0x8E38E38E38E38E39LL * ((v11 - v50) >> 4) == v49 >> 7 )
      v11 = v50;
    v12 = *v11;
    if ( v12 == 255 )
      goto LABEL_25;
  }
  v15 = (0x1C71C71C71C71C80LL * ((v11 - v50) >> 4)) | v10;
LABEL_8:
  *(_BYTE *)(a1 + 16) = v14;
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v15;
  return a1;
}

__int64 __fastcall sub_16CB850(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // ax
  __int16 v12; // r12
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  char v37; // al
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-50h]
  __int64 v41[2]; // [rsp+10h] [rbp-48h] BYREF
  char v42; // [rsp+20h] [rbp-38h]

  for ( i = a2; ; i = *(_QWORD *)(v8 + 24) )
  {
    while ( 1 )
    {
      v8 = sub_BFB9F0(i);
      v11 = *(_WORD *)v8 & 0x1FF;
      if ( v11 == 81 )
        goto LABEL_17;
      if ( v11 > 0x51u )
        break;
      if ( v11 == 4 )
      {
        if ( *(_BYTE *)(v8 + 2) >> 3 == 4 )
        {
LABEL_15:
          sub_16CB490(a1, *(_QWORD *)(v8 + 16), a3);
          return a1;
        }
LABEL_11:
        *(_BYTE *)(a1 + 16) = 0;
        return a1;
      }
      if ( v11 != 79 )
        goto LABEL_11;
LABEL_17:
      i = *(_QWORD *)(v8 + 16);
      v14 = (*(_WORD *)(v8 + 2) >> 3) & 0x7F;
      if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x7Fu) > 8 )
      {
        if ( (_BYTE)v14 == 11 )
          goto LABEL_15;
        goto LABEL_11;
      }
      if ( (unsigned __int8)v14 >= 7u )
      {
        v29 = *(_QWORD *)(v8 + 16);
        sub_16CB850(v41, v29, a3);
        if ( v42 )
        {
          v33 = sub_F68450(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL), v29, v30, v31, v32);
          v34 = sub_16CAC80(v8, v33, v41[0], v41[1], (__int64)a3);
          *(_BYTE *)(a1 + 16) = 1;
          *(_QWORD *)a1 = v34;
          *(_QWORD *)(a1 + 8) = v35;
          return a1;
        }
        goto LABEL_11;
      }
      if ( (_BYTE)v14 != 5 )
        goto LABEL_11;
    }
    if ( v11 == 98 )
      break;
    if ( v11 != 118 )
    {
      if ( v11 != 87 )
        goto LABEL_11;
      goto LABEL_17;
    }
    v12 = (*(_WORD *)(v8 + 2) >> 3) & 0x3F;
    if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x3Fu) < 5 )
      goto LABEL_11;
    if ( (unsigned __int8)v12 <= 6u )
    {
      v27 = *(_QWORD *)(v8 + 16);
      v28 = *(_QWORD *)(v8 + 24);
      if ( (_BYTE)v12 != 5 )
        goto LABEL_25;
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v37 = *(_BYTE *)(v36 + 16);
      if ( v37 != 13 )
      {
        if ( v37 == 47 )
        {
          v40 = *(_QWORD *)(v8 + 24);
          v39 = sub_F60F10(v36, v27, v28, v7, v9, v10);
          v28 = v40;
          if ( (*((_BYTE *)v39 + 74) & 1) != 0 || (v39[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_25;
        }
        else if ( v37 == 10 )
        {
          goto LABEL_25;
        }
LABEL_30:
        v38 = v27;
        v27 = v28;
        v28 = v38;
        goto LABEL_25;
      }
      if ( (((*(_WORD *)(v36 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        goto LABEL_30;
LABEL_25:
      sub_16CBAB0(a1, v27, v28, (_BYTE)v12 == 6, a3);
      return a1;
    }
    if ( (_BYTE)v12 != 32 )
      goto LABEL_11;
  }
  v15 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, v9);
  v20 = (char *)sub_F63270(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), a2, v16, v17, v18, v19);
  v25 = sub_EDE580((__int64)a3, v20, v21, v22, v23, v24);
  *(_QWORD *)(a1 + 8) = 0;
  v26 = v25[9];
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)a1 = *(_QWORD *)(v26 + 8);
  return a1;
}

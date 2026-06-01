void __fastcall sub_EB3E00(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // rax
  _BOOL4 v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // al
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // rsi
  unsigned __int8 *v34[10]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int8 *v35[17]; // [rsp+50h] [rbp-88h] BYREF

  v5 = 1;
  v6 = a2 - a3;
  if ( (((_BYTE)a2 - (_BYTE)a3) & 7) == 0 )
  {
    v6 >>= 3;
    v5 = 0;
  }
  v7 = *(_QWORD *)(a4 + 40);
  v8 = !(*(_BYTE *)(a4 + 68) & 1);
  if ( (v7 & 7) == 0 && (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v9 = sub_A3ED80(a1);
    sub_FA3370(v35, v9, *(unsigned int *)(a4 + 24), (unsigned int)(v8 + 2585));
    v10 = *(_QWORD *)(a4 + 16);
    if ( (v10 & 4) != 0 )
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 58 <= 3 )
    {
      v12 = *(_BYTE *)(v11 + 9) >> 5;
      switch ( v12 )
      {
        case 1:
          v13 = 1;
LABEL_11:
          sub_AC60B0(v35, v13, 3u);
          v17 = *(_QWORD *)(a4 + 16);
          if ( (v17 & 4) != 0 )
            v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v18 + 8) & 0x7Fu) - 58 <= 3 )
          {
            v19 = *(_QWORD *)(v18 - 16);
            if ( v19 )
              v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
            else
              v20 = sub_A56D30(a1, v18 - 64, v18, v14, v15, v16);
            sub_AC60B0(v35, v20, 8u);
            sub_AC60B0(v35, v6, 3u);
            sub_AC60B0(v35, v5, 2u);
            v21 = *(_QWORD *)(a4 + 40) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a4 + 40) & 7) != 0 )
              v21 = 0;
            sub_AC60B0(v35, v21, 5u);
            sub_AC6300((__int64)v35);
            return;
          }
LABEL_44:
          BUG();
        case 0:
          v13 = 0;
          goto LABEL_11;
        case 3:
          v13 = 2;
          goto LABEL_11;
      }
LABEL_43:
      sub_EB4100();
      return;
    }
LABEL_45:
    BUG();
  }
  v22 = sub_A3ED80(a1);
  sub_FA3370(v34, v22, *(unsigned int *)(a4 + 24), (unsigned int)(v8 + 2583));
  v23 = *(_QWORD *)(a4 + 16);
  if ( (v23 & 4) != 0 )
    v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v24 + 8) & 0x7Fu) - 58 > 3 )
    goto LABEL_45;
  v25 = *(_BYTE *)(v24 + 9) >> 5;
  if ( v25 == 1 )
  {
    v26 = 1;
  }
  else if ( v25 )
  {
    if ( v25 != 3 )
      goto LABEL_43;
    v26 = 2;
  }
  else
  {
    v26 = 0;
  }
  sub_AC60B0(v34, v26, 3u);
  v30 = *(_QWORD *)(a4 + 16);
  if ( (v30 & 4) != 0 )
    v31 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v31 + 8) & 0x7Fu) - 58 > 3 )
    goto LABEL_44;
  v32 = *(_QWORD *)(v31 - 16);
  if ( v32 )
    v33 = v32 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v33 = sub_A56D30(a1, v31 - 64, v31, v27, v28, v29);
  sub_AC60B0(v34, v33, 8u);
  sub_AC60B0(v34, v6, 3u);
  sub_AC60B0(v34, v5, 2u);
  sub_AC6300((__int64)v34);
}


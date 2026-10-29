unsigned __int64 __fastcall sub_B80EA0(
        unsigned __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v28[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = sub_B6C590(112, (_QWORD *)a1, a2, 0);
  sub_B4E870(v10, 0x18u, a2, a5);
  *(_QWORD *)(v10 + 40) = a6;
  *(_QWORD *)v10 = &off_2B206B0;
  sub_B6A340(v10 + 48, 24);
  *(_QWORD *)(v10 + 88) = v10;
  *(_DWORD *)(v10 + 96) = a4;
  v14 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_DWORD *)(v10 + 100) = 0;
  *(_QWORD *)(v10 + 80) = v14;
  *(_QWORD *)v10 = &off_2BD9010;
  v15 = *(unsigned __int8 *)(v10 + 57);
  *(_QWORD *)(v10 + 104) = 0;
  v16 = ((a8 & 1) << 6) | (32 * (a3 & 1)) | v15 & 0xFFFFFF9F;
  *(_BYTE *)(v10 + 57) = v16;
  if ( a7 )
  {
    v17 = *(_QWORD *)(a7 + 88);
    *(_QWORD *)(v10 + 88) = v17;
    v18 = *(_QWORD *)(v17 + 80);
    if ( (v18 & 1) != 0 || (v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL), (v18 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
    {
      v24 = v18 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v20 = *(_QWORD *)(v17 + 80) & 2LL;
      v21 = (unsigned __int64)v19;
      if ( !(_DWORD)v20 )
        goto LABEL_5;
      v24 = sub_6C1EC0(v19, v17, v20, v11, v12, v13) & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v17 + 80) = v24 | 1;
    }
    v28[0] = v24;
    v21 = sub_B57E30(v28);
    v17 = *(_QWORD *)(v10 + 88);
    v19 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_5:
    *(_QWORD *)(v10 + 80) = v19;
    v11 = *(_WORD *)(v10 + 30) & 0x3FFF;
    v16 = (unsigned int)v11 | *(_WORD *)(v21 + 30) & 0x26;
    *(_WORD *)(v10 + 30) = v11 | *(_WORD *)(v21 + 30) & 0x26 | *(_WORD *)(v10 + 30) & 0xC000;
    v14 = *(_QWORD *)(v17 + 80);
    if ( (v14 & 1) != 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
  v17 = v10;
LABEL_15:
  if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    *(_QWORD *)(v17 + 80) = sub_6C1EC0((_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL), v10, v16, v11, v12, v13) | 1;
    return v10;
  }
LABEL_6:
  v22 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v14 & 4) != 0 && (v23 = v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    *(_QWORD *)(v23 + 16) = v10;
  else
    v22 = v10 & 0xFFFFFFFFFFFFFFFALL;
  *(_QWORD *)(v17 + 80) = v22 | 1;
  return v10;
}


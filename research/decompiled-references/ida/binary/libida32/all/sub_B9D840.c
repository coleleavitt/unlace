_QWORD *__fastcall sub_B9D840(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // eax
  _QWORD *v27; // rax
  char v28; // al
  unsigned __int64 v29; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a1[283] + 80LL);
  v6 = *(_QWORD *)(v5 + 72);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) == 0 )
  {
    v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v9 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v6 & 2) == 0 )
        goto LABEL_4;
      v21 = *(_QWORD *)(v8 + 18360);
      v22 = v5 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v21 )
      {
        v23 = sub_B9D510((__int64 *)(v8 + 2352), 24, 3u);
        *(_QWORD *)v23 = v21;
        *(_DWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = v5;
        v22 = v23 | 4;
      }
      v7 = v22 & 0xFFFFFFFFFFFFFFFELL;
      v6 = v7 | 1;
      *(_QWORD *)(v5 + 72) = v7 | 1;
    }
  }
  v24 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v24;
  if ( v7 && (v7 & 4) != 0 )
  {
    if ( v24 )
    {
      v25 = *(_QWORD *)v24;
      v26 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
      if ( *(_DWORD *)(v24 + 8) != v26 )
      {
        *(_DWORD *)(v24 + 8) = v26;
        v29 = v24;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 152LL))(v25, v5);
        v24 = v29;
      }
      v9 = *(_QWORD *)(v24 + 16);
      if ( v9 )
        goto LABEL_5;
    }
LABEL_18:
    v27 = (_QWORD *)sub_B6C590(120, a1, 0, 0);
    v13 = 0;
    v16 = 0;
    v14 = v27;
    *v27 = off_2BD8B30;
    goto LABEL_6;
  }
LABEL_4:
  if ( !v9 )
    goto LABEL_18;
LABEL_5:
  v10 = v9 + 40;
  v11 = (_QWORD *)sub_B6C590(120, a1, v10, 0);
  v12 = v10;
  v13 = v10 & 0xFFFFFFFFFFFFFFFBLL;
  v14 = v11;
  *v11 = off_2BD8B30;
  v15 = sub_B68470(v12);
  v16 = 0;
  v17 = *(_QWORD *)(v15 + 8) & 7LL;
  if ( (*(_QWORD *)(v15 + 8) & 7) != 0 )
  {
    if ( *(char *)(v15 + 29) < 0 )
    {
      v28 = sub_B688D0(v15);
      v16 = 0;
      if ( v28 )
        v16 = v17;
    }
    else
    {
      v16 = *(_QWORD *)(v15 + 8) & 7LL;
    }
  }
LABEL_6:
  v14[1] = v16;
  v18 = v14[3] & 0xFFFF000000000000LL;
  v14[2] = v13;
  v14[3] = v18 | 0x601E00000000LL;
  v19 = sub_B68380(30);
  *((_BYTE *)v14 + 32) &= 0xF8u;
  *((_WORD *)v14 + 15) = v19 & 0x3FFF | *((_WORD *)v14 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(30);
  v14[6] = a2;
  v14[5] = 0;
  v14[7] = 0;
  *v14 = &off_2BDAA68;
  sub_A2FF00((__int64)(v14 + 8), a3);
  sub_A3B850((__int64)a1, (__int64)sub_B4CF80, (__int64)(v14 + 8));
  return v14;
}


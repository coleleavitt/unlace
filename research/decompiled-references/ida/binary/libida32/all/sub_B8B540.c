unsigned __int64 __fastcall sub_B8B540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi

  sub_B4E870(a1, 0x13u, a3, a5);
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)a1 = &off_2B206B0;
  sub_B6A340(a1 + 48, 19);
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 60) = a6;
  v13 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 96) = a1;
  *(_QWORD *)(a1 + 88) = v13;
  *(_QWORD *)a1 = &off_2BD9B70;
  *(_QWORD *)(a1 + 104) = 0;
  if ( a7 )
  {
    v14 = *(_QWORD *)(a7 + 96);
    *(_QWORD *)(a1 + 96) = v14;
    v15 = (unsigned __int64)sub_A55AE0((__int64 *)(v14 + 88), v14, v9, v10, v11, v12);
    v16 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = v15 & 0xFFFFFFFFFFFFFFFCLL;
    v10 = *(_WORD *)(a1 + 30) & 0x3FFF;
    v9 = (unsigned int)v10 | *(_WORD *)(v15 + 30) & 0x26;
    *(_WORD *)(a1 + 30) = v10 | *(_WORD *)(v15 + 30) & 0x26 | *(_WORD *)(a1 + 30) & 0xC000;
    v13 = *(_QWORD *)(v16 + 88);
    if ( (v13 & 1) != 0 )
      goto LABEL_8;
  }
  else
  {
    v16 = a1;
    if ( (v13 & 1) != 0 )
    {
      v18 = v13;
      goto LABEL_9;
    }
  }
  if ( (v13 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    result = sub_6C1EC0((_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL), a1, v9, v10, v11, v12) | 1;
    *(_QWORD *)(v16 + 88) = result;
    goto LABEL_5;
  }
LABEL_8:
  v18 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
LABEL_12:
    v18 = a1 & 0xFFFFFFFFFFFFFFFALL;
    goto LABEL_13;
  }
LABEL_9:
  if ( (v18 & 4) == 0 )
    goto LABEL_12;
  v19 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v19 )
    goto LABEL_12;
  *(_QWORD *)(v19 + 16) = a1;
LABEL_13:
  result = v18 | 1;
  *(_QWORD *)(v16 + 88) = result;
LABEL_5:
  if ( a7 )
  {
    result = *(_QWORD *)(a7 + 104);
    *(_QWORD *)(a1 + 104) = result;
  }
  return result;
}


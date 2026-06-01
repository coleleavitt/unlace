__int64 __fastcall sub_B7FFB0(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  char v21; // al
  __int64 result; // rax

  sub_B725B0(a1, a2, a5, a6);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = a7;
  *(_QWORD *)a1 = &off_2B4AFA8;
  *(_DWORD *)(a1 + 56) = a9;
  sub_B8E080(a1 + 64, a2);
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 112) = 0;
  v14 = a4 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)a1 = &off_2B4A920;
  if ( a8 )
  {
    v15 = *(_QWORD *)(a8 + 104);
    *(_QWORD *)(a1 + 104) = v15;
    v16 = (unsigned __int64)sub_7052B0((__int64 *)(v15 + 96), v15, v11, v14, v12, v13);
    v17 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 96) = v16 & 0xFFFFFFFFFFFFFFFCLL;
    v18 = *(unsigned __int16 *)(a1 + 30);
    LOWORD(v18) = v18 & 0x3FFF;
    v11 = v18 | *(unsigned __int16 *)(v16 + 30) & 0x26u;
    *(_WORD *)(a1 + 30) = v18 | *(_WORD *)(v16 + 30) & 0x26 | *(_WORD *)(a1 + 30) & 0xC000;
    v14 = *(_QWORD *)(v17 + 96);
    if ( (v14 & 1) != 0 )
      goto LABEL_3;
  }
  else
  {
    v17 = a1;
    if ( (v14 & 1) != 0 )
    {
      v19 = v14;
LABEL_4:
      if ( (v19 & 4) != 0 )
      {
        v20 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v20 )
        {
          *(_QWORD *)(v20 + 16) = a1;
LABEL_11:
          *(_QWORD *)(v17 + 96) = v19 | 1;
          goto LABEL_9;
        }
      }
LABEL_10:
      v19 = a1 & 0xFFFFFFFFFFFFFFFALL;
      goto LABEL_11;
    }
  }
  if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
LABEL_3:
    v19 = v14 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v14 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      goto LABEL_10;
    goto LABEL_4;
  }
  *(_QWORD *)(v17 + 96) = sub_6E2500((_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL), a1, v11, v14, v12, v13) | 1;
LABEL_9:
  v21 = *(_BYTE *)(a1 + 73);
  *(_BYTE *)(a1 + 74) &= 0x90u;
  result = v21 & 0x1F;
  *(_BYTE *)(a1 + 73) = result | (32 * a3);
  return result;
}

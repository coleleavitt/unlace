unsigned __int64 __fastcall sub_B8E2E0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int16 v14; // ax
  char v16; // al
  __int64 v17; // [rsp+8h] [rbp-40h]

  v10 = sub_B6C590(144, a1, a2, 0);
  *(_QWORD *)v10 = off_2BD8B30;
  if ( a2
    && (v11 = sub_B68470(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) != 0)
    && (*(char *)(v11 + 29) >= 0 || (v17 = *(_QWORD *)(v11 + 8) & 7LL, v16 = sub_B688D0(v11), v12 = v17, v16)) )
  {
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  *(_QWORD *)(v10 + 8) = v13;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v10 + 24) = a3;
  *(_WORD *)(v10 + 28) = 24602;
  v14 = sub_B68380(26);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v14 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(26);
  *(_QWORD *)(v10 + 40) = a4;
  *(_QWORD *)(v10 + 48) = a5;
  *(_QWORD *)v10 = &off_2B20D68;
  sub_B6A340(v10 + 56, 26);
  *(_QWORD *)(v10 + 88) = 0;
  *(_OWORD *)(v10 + 104) = 0;
  *(_OWORD *)(v10 + 120) = 0;
  *(_QWORD *)v10 = &off_2BDA1F0;
  *(_QWORD *)(v10 + 136) = a6;
  *(_QWORD *)(v10 + 96) = 0;
  *(_BYTE *)(v10 + 65) &= 0x9Fu;
  return v10;
}


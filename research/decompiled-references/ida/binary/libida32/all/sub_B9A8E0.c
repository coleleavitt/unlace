unsigned __int64 __fastcall sub_B9A8E0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int16 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  _QWORD *v10; // r11
  __int64 v14; // rcx
  char v15; // r15
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 result; // rax
  int v19; // edx
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-48h]

  v10 = a1;
  if ( *(char *)(a1[290] + 1LL) < 0
    && (v21 = sub_F34140(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL)), v10 = a1, v21)
    && *(_BYTE *)(v21 + 16) == 16
    && *(_QWORD *)(v21 + 32) )
  {
    v14 = 8;
    v15 = 1;
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  v16 = sub_B6C590(88, v10, a2, v14);
  v17 = a4;
  v23 = v16;
  sub_B4E870(v16, 0x2Fu, a2, v17);
  result = v23;
  *(_QWORD *)(v23 + 40) = a7;
  *(_QWORD *)(v23 + 48) = a8;
  *(_DWORD *)(v23 + 64) = a3;
  *(_QWORD *)(v23 + 56) = a10 & 0xFFFFFFFFFFFFFFFBLL;
  v19 = *(_DWORD *)(v23 + 68);
  *(_QWORD *)(v23 + 72) = 0;
  *(_BYTE *)(v23 + 80) = a9;
  v20 = v19 & 0xFFF00000 | a5 & 0xFFFFF;
  *(_BYTE *)(v23 + 81) = 0;
  *(_DWORD *)(v23 + 68) = v20;
  *(_DWORD *)(v23 + 84) = 0;
  *(_QWORD *)v23 = &off_2BDA5A8;
  *(_WORD *)(v23 + 70) = BYTE2(v20) & 0xF | (16 * a6);
  if ( v15 )
    *(_QWORD *)(v23 + 88) = 0;
  return result;
}


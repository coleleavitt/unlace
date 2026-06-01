__int64 __fastcall sub_B57F10(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  __int64 v13; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax

  v13 = sub_B6C590(80, a1, a2, 0);
  sub_B4E870(v13, 0x31u, a2, a4);
  *(_QWORD *)(v13 + 48) = a6;
  *(_DWORD *)(v13 + 64) = a3;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v13 + 40) = a5;
  *(_QWORD *)v13 = &off_2B20908;
  *(_BYTE *)(v13 + 68) = (4 * (a10 & 3)) | (2 * (a9 & 1)) | *(_BYTE *)(v13 + 68) & 0xF1;
  *(_DWORD *)(v13 + 68) &= 0xEu;
  if ( a8 )
  {
    if ( (*(_BYTE *)(v13 + 68) & 0xC) != 0xC && (a10 & 3) != 0 )
    {
      v15 = sub_B685F0(v13);
      v16 = (_QWORD *)sub_B57ED0((__int64 *)(v15 + 2352), 16, 3u);
      *v16 = *(_QWORD *)(v13 + 72);
      v16[1] = a8;
      *(_QWORD *)(v13 + 72) = v16;
    }
    else
    {
      *(_QWORD *)(v13 + 72) = a8;
    }
    *(_BYTE *)(v13 + 68) |= 1u;
  }
  return v13;
}


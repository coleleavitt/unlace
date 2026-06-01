__int64 __fastcall sub_B8B7D0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdi

  v7 = (__int64)sub_B6C230(112, (_QWORD *)a1, a2, 0, a5, a6);
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = off_2BD8B30;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xFFFF000000000000LL | 0x601300000000LL;
  v8 = sub_B68380(19);
  *(_BYTE *)(v7 + 32) &= 0xF8u;
  *(_WORD *)(v7 + 30) = v8 & 0x3FFF | *(_WORD *)(v7 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(19);
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)v7 = &off_2B206B0;
  sub_B6A340(v7 + 48, 19);
  *(_DWORD *)(v7 + 60) = 0;
  v13 = a1 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v7 + 80) = 0;
  *(_QWORD *)(v7 + 96) = v7;
  *(_QWORD *)(v7 + 104) = 0;
  *(_QWORD *)(v7 + 88) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v7 = &off_2BD9B70;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v14 = sub_6C1EC0((_QWORD *)v13, v7, v9, v10, v11, v12);
    v15 = *(_QWORD *)(v7 + 104);
    *(_QWORD *)(v7 + 88) = v14 | 1;
    v13 = v15 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    *(_QWORD *)(v7 + 88) = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
  }
  *(_QWORD *)(v7 + 104) = v13 | (4LL * (((*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 21LL) >> 1) ^ 1) & 1));
  return v7;
}


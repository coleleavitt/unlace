unsigned __int64 __fastcall sub_7B7BC0(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int16 v4; // ax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  v3 = (unsigned __int64)sub_7943D0(128, (_QWORD *)a1, a2, 0);
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = off_49F5208;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xFFFF000000000000LL | 0x601200000000LL;
  v4 = sub_799DF0(0x12u);
  *(_BYTE *)(v3 + 32) &= 0xF8u;
  *(_WORD *)(v3 + 30) = v4 & 0x3FFF | *(_WORD *)(v3 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(18);
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &off_47D9B58;
  sub_79B760(v3 + 48, 18);
  *(_QWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  v5 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v3 + 96) = v3;
  *(_QWORD *)(v3 + 88) = v5;
  *(_QWORD *)v3 = &off_49F5F80;
  *(_QWORD *)(v3 + 104) = 0;
  *(_QWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 120) = 0;
  if ( v5 > 3 )
  {
    v9 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCLL);
    v10 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFCLL) + 18200);
    if ( v10 )
    {
      v11 = v9[274];
      v9[284] += 24LL;
      v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v9[275] >= v12 + 24 && v11 )
        v9[274] = v12 + 24;
      else
        v12 = sub_7B4EB0((__int64)(v9 + 274), 24, 3);
      *(_QWORD *)v12 = v10;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = v3;
      v13 = v12 | 4;
      v6 = *(_QWORD *)(v3 + 120) & 0xFFFFFFFFFFFFFFFBLL;
    }
    else
    {
      v6 = 0;
      v13 = v3 & 0xFFFFFFFFFFFFFFFBLL;
    }
    v7 = v13 | 1;
  }
  else
  {
    v6 = 0;
    v7 = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
  }
  *(_BYTE *)(v3 + 29) &= ~2u;
  *(_QWORD *)(v3 + 88) = v7;
  *(_QWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 120) = v6 | (4LL * (*(char *)(*(_QWORD *)(a1 + 2160) + 18LL) >= 0LL));
  return v3;
}


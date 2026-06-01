void __fastcall sub_8C73C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  bool v14; // al
  __int16 v15; // ax
  int v16; // [rsp+0h] [rbp-44h]
  __int64 v17; // [rsp+4h] [rbp-40h]

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( (v4 & 4) == 0 )
    {
      v6 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v6 = (_QWORD *)*v6;
      v7 = (_QWORD *)sub_798D40(a2);
      v8 = (_QWORD *)sub_79A610(72, v7, (__int64)v6, 0);
      v9 = *(_DWORD *)(a2 + 24);
      v10 = (unsigned __int64)v8;
      v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v11 = *(_QWORD *)v11;
      *v8 = off_49F5208;
      if ( !v11
        || (v16 = v9, v12 = sub_79A2E0(v11), v9 = v16, v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) == 0)
        || *(char *)(v12 + 29) < 0
        && (v17 = *(_QWORD *)(v12 + 8) & 7LL, v14 = sub_7946A0(v12), v9 = v16, v13 = v17, !v14) )
      {
        v13 = 0;
      }
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 16) = v11 & 0xFFFFFFFFFFFFFFFBLL;
      *(_DWORD *)(v10 + 24) = v9;
      *(_WORD *)(v10 + 28) = 24655;
      v15 = sub_799DF0(0x4Fu);
      *(_BYTE *)(v10 + 32) &= 0xF8u;
      *(_WORD *)(v10 + 30) = v15 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
      if ( (_BYTE)dword_4AD21D4 )
        sub_797E90(79);
      *(_QWORD *)(v10 + 48) = a2;
      *(_QWORD *)(v10 + 40) = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v4 = v10 | 4;
      *(_DWORD *)(v10 + 56) = a3;
      *(_QWORD *)v10 = &off_49F57D8;
      *(_QWORD *)(v10 + 64) = 0;
      *(_QWORD *)(a1 + 16) = v10 | 4;
    }
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(v5 + 48) = a2;
    *(_DWORD *)(v5 + 56) = a3;
  }
}


unsigned __int64 __fastcall sub_7BAB10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  bool v17; // al
  __int64 v18; // [rsp+8h] [rbp-40h]

  v10 = a4;
  if ( a4 )
  {
    v11 = *(_QWORD *)(a4 + 120);
    if ( v11 )
    {
      if ( v11 <= 7 )
        goto LABEL_4;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a4 + 96) + 88LL), *(_QWORD *)(a4 + 96));
      v11 = *(_QWORD *)(v10 + 120);
      if ( v11 <= 7 )
        goto LABEL_4;
    }
    v10 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_4:
  v12 = sub_79A610(104, a1, a2, 0);
  *(_QWORD *)v12 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && (v18 = *(_QWORD *)(v13 + 8) & 7LL, v17 = sub_7946A0(v13), v14 = v18, !v17) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v12 + 24) = a5;
  *(_WORD *)(v12 + 28) = 24596;
  v15 = sub_799DF0(0x14u);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(20);
  *(_QWORD *)(v12 + 40) = a3;
  *(_QWORD *)v12 = &off_47D9B58;
  sub_79B760(v12 + 48, 20);
  *(_DWORD *)(v12 + 60) = a6;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 88) = v10;
  *(_QWORD *)v12 = &off_49F62E0;
  *(_DWORD *)(v12 + 96) = a7;
  return v12;
}


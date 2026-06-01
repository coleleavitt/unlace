__int64 __fastcall sub_789320(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  __int16 v12; // ax
  _DWORD *v14; // rdi
  int v15; // eax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rax

  v2 = 0;
  if ( a2 )
    v2 = sub_AC6DA0(a2);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2112) + 80LL);
  v5 = *(_QWORD *)(v4 + 72);
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v5 & 1) != 0 )
    goto LABEL_7;
  if ( v6 <= 3 )
    goto LABEL_23;
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v6 & 2) != 0 )
  {
    v8 = sub_6D4E90(v7, *(_QWORD *)(*(_QWORD *)(a1 + 2112) + 80LL));
    v6 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v5 = v8 | 1;
    *(_QWORD *)(v4 + 72) = v5;
LABEL_7:
    if ( v6 )
    {
      v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      v9 = (__int64)v7;
      if ( (v6 & 4) != 0 )
      {
        if ( !v7 )
        {
          v10 = 0;
          v11 = sub_79A610(88, a1, 0, 0);
          *(_QWORD *)v11 = off_49F5208;
          goto LABEL_11;
        }
        v14 = (_DWORD *)*v7;
        v15 = v14[3];
        if ( *(_DWORD *)(v9 + 8) != v15 )
        {
          *(_DWORD *)(v9 + 8) = v15;
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 144LL))(v14, v4);
        }
        v7 = *(_QWORD **)(v9 + 16);
      }
      if ( v7 )
        goto LABEL_18;
    }
LABEL_23:
    v10 = 0;
    v9 = 0;
    v11 = sub_79A610(88, a1, 0, 0);
    *(_QWORD *)v11 = off_49F5208;
    goto LABEL_11;
  }
LABEL_18:
  v16 = (_QWORD *)sub_79A610(88, a1, v7 + 5, 0);
  v17 = (unsigned __int64)(v7 + 5);
  v10 = v17 & 0xFFFFFFFFFFFFFFFBLL;
  v11 = (__int64)v16;
  *v16 = off_49F5208;
  v18 = sub_79A2E0(v17);
  v9 = *(_QWORD *)(v18 + 8) & 7LL;
  if ( (*(_QWORD *)(v18 + 8) & 7) != 0 && *(char *)(v18 + 29) < 0 && !(unsigned __int8)sub_7946A0(v18) )
    v9 = 0;
LABEL_11:
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)(v11 + 16) = v10;
  *(_DWORD *)(v11 + 24) = v2;
  *(_WORD *)(v11 + 28) = 24577;
  v12 = sub_799DF0(1);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v12 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(1);
  sub_79B760(v11 + 40, 1);
  *(_QWORD *)(v11 + 72) = a2;
  *(_BYTE *)(v11 + 80) = 0;
  *(_QWORD *)v11 = &off_47DA680;
  return v11;
}


unsigned __int64 __fastcall sub_7D2EB0(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // r12
  __int64 *v9; // r14
  __int64 v10; // r15
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  __int16 v15; // ax
  __int64 v17; // [rsp+8h] [rbp-60h]

  v7 = 0;
  v8 = sub_79AC10(a6);
  v17 = a5 + (unsigned int)(8 * *(_DWORD *)(a5 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a5 + 20) )
  {
    v9 = (__int64 *)(a5 + 24);
    do
    {
      while ( 1 )
      {
        v10 = *v9;
        sub_798630(*v9, v8);
        v11 = *(unsigned __int8 *)(v10 + 28);
        if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x42 )
          break;
        ++v9;
        v7 |= sub_7D1000(*(_QWORD *)(v10 + 56), v8) | (*(_BYTE *)(v10 + 28) >> 7);
        if ( (__int64 *)v17 == v9 )
          goto LABEL_5;
      }
      LOBYTE(v11) = (unsigned __int8)v11 >> 7;
      ++v9;
      v7 |= v11;
    }
    while ( (__int64 *)v17 != v9 );
  }
LABEL_5:
  v12 = sub_79A610(88, (_QWORD *)a1, a2, 0);
  *(_QWORD *)v12 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && !sub_7946A0(v13) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v12 + 24) = a3;
  *(_WORD *)(v12 + 28) = 24645;
  v15 = sub_799DF0(0x45u);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(69);
  *(_QWORD *)(v12 + 56) = a5;
  *(_QWORD *)(v12 + 72) = v12;
  *(_QWORD *)(v12 + 40) = a4;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 48) = a6;
  *(_QWORD *)(v12 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v12 = &off_49F6608;
  if ( (_BYTE)v7 )
    sub_794C70(v12, 1);
  return v12;
}


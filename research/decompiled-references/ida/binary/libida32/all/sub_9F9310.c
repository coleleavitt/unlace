__int64 __fastcall sub_9F9310(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // al
  char v5; // al
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rbp
  char *v13; // rdi
  char *v14; // rdi

  sub_9E6D90(a1, (_QWORD *)a2);
  v3 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 2 | v3 & 0xFD;
  *(_BYTE *)(a1 + 32) = v4;
  v5 = *(_BYTE *)(a2 + 32) & 4 | v4 & 0xFB;
  *(_BYTE *)(a1 + 32) = v5;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v5 & 0xF7;
  sub_9E6D90(a1 + 40, (_QWORD *)(a2 + 40));
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72) & 1 | *(_BYTE *)(a1 + 72) & 0xFE;
  *(_WORD *)(a1 + 72) = *(_WORD *)(a2 + 72) & 0x1FE | *(_WORD *)(a1 + 72) & 0xFE01;
  *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 73) & 0xE | *(_BYTE *)(a1 + 73) & 0xF1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  sub_9E6D90(a1 + 88, (_QWORD *)(a2 + 88));
  sub_9E6D90(a1 + 120, (_QWORD *)(a2 + 120));
  *(_QWORD *)(a1 + 168) = 0;
  v6 = *(_QWORD **)(a1 + 152);
  v7 = *(_QWORD **)(a1 + 160);
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  v8 = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a2 + 152) = 0;
  v9 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v8;
  v10 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 160) = v9;
  v11 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v10;
  *(_QWORD *)(a2 + 168) = v11;
  if ( v6 != v7 )
  {
    v12 = v6;
    do
    {
      while ( 1 )
      {
        v13 = (char *)v12[10];
        if ( v13 != (char *)(v12 + 12) )
          operator delete(v13);
        v14 = (char *)v12[5];
        if ( v14 != (char *)(v12 + 7) )
          operator delete(v14);
        if ( (_QWORD *)*v12 == v12 + 2 )
          break;
        operator delete((void *)*v12);
        v12 += 15;
        if ( v7 == v12 )
          goto LABEL_9;
      }
      v12 += 15;
    }
    while ( v7 != v12 );
  }
LABEL_9:
  if ( v6 )
    operator delete(v6);
  return a1;
}


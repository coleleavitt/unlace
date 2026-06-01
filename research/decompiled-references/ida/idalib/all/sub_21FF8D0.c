__int64 __fastcall sub_21FF8D0(__int64 a1, __int64 a2, int a3, char a4)
{
  int v5; // edi
  char v6; // dl
  char v7; // al
  __int64 v8; // rax
  char v9; // dl

  v5 = ~(**(_DWORD **)a2 + *(_DWORD *)(*(_QWORD *)a2 + 8LL) - *(_DWORD *)(*(_QWORD *)a2 + 4LL));
  if ( v5 <= a3 )
  {
    if ( **(_DWORD **)a2 + *(_DWORD *)(*(_QWORD *)a2 + 8LL) - *(_DWORD *)(*(_QWORD *)a2 + 4LL) <= a3 )
      a3 = **(_DWORD **)a2 + *(_DWORD *)(*(_QWORD *)a2 + 8LL) - *(_DWORD *)(*(_QWORD *)a2 + 4LL);
    v5 = a3;
  }
  v6 = *(_BYTE *)(a2 + 20);
  *(_DWORD *)(a2 + 16) += v5;
  v7 = v6 & 7;
  if ( (v6 & 6) != 0 && v7 != 3 )
  {
    sub_21FAC20(a2, a4, 0);
    if ( (*(_BYTE *)(a2 + 20) & 7) != 1 )
      goto LABEL_8;
LABEL_10:
    sub_21FD230((__int64 *)a2);
    goto LABEL_8;
  }
  if ( v7 == 1 )
    goto LABEL_10;
LABEL_8:
  *(_QWORD *)a1 = &unk_26F7B40;
  sub_21F9170((_QWORD *)a1);
  v8 = *(_QWORD *)a2;
  v9 = *(_BYTE *)(a2 + 20);
  *(_QWORD *)a2 = &unk_26F7B40;
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 20) = v9 & 0xF | *(_BYTE *)(a1 + 20) & 0xF0;
  return a1;
}

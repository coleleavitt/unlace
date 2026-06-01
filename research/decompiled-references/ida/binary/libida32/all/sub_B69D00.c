bool __fastcall sub_B69D00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // rax

  v2 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) >= 0 )
  {
    if ( !v2 || !*(_QWORD *)(a1 - 8) )
      return 0;
    goto LABEL_4;
  }
  if ( !v2 )
    return 0;
  v6 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v6 = sub_B68580(a1);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 88) + 18360LL);
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 104LL);
  if ( v8 == sub_6CE270 || !((__int64 (__fastcall *)(__int64, _QWORD))v8)(v7, *(unsigned __int16 *)(a1 - 2)) )
    return 0;
  v9 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) >= 0 )
  {
    if ( v9 )
    {
LABEL_4:
      v3 = *(_QWORD *)(a1 - 8);
      goto LABEL_5;
    }
LABEL_20:
    BUG();
  }
  if ( !v9 )
    goto LABEL_20;
  v10 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v10 = sub_B68580(a1);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 18360LL);
  v12 = *(__int64 (**)())(*(_QWORD *)v11 + 104LL);
  if ( v12 == sub_6CE270 )
    goto LABEL_20;
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD))v12)(v11, *(unsigned __int16 *)(a1 - 2));
LABEL_5:
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 > 7 )
    return 0;
  return ((1LL << v4) & 0xBC) != 0;
}


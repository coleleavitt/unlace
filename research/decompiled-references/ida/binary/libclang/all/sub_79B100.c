bool __fastcall sub_79B100(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // rax

  v2 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) >= 0 )
  {
    if ( v2 && *(_QWORD *)(a1 - 8) )
      goto LABEL_4;
    return 0;
  }
  if ( !v2 )
    return 0;
  v6 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v6 = sub_793320(a1);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 88) + 18200LL);
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 104LL);
  if ( v8 == sub_792D90 || !((__int64 (__fastcall *)(__int64, _QWORD))v8)(v7, *(unsigned __int16 *)(a1 - 2)) )
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
LABEL_21:
    BUG();
  }
  if ( !v9 )
    goto LABEL_21;
  v10 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v10 = sub_793320(a1);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 18200LL);
  v12 = *(__int64 (**)())(*(_QWORD *)v11 + 104LL);
  if ( v12 == sub_792D90 )
    goto LABEL_21;
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD))v12)(v11, *(unsigned __int16 *)(a1 - 2));
LABEL_5:
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 > 5 )
    return v4 == 7;
  else
    return v4 > 1;
}


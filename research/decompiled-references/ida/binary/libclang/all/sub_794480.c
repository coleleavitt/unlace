__int64 __fastcall sub_794480(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 (*v15)(); // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 (*v18)(); // rax

  v3 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) >= 0 )
  {
    if ( !v3 || !*(_QWORD *)(a1 - 8) )
      return 0;
    goto LABEL_4;
  }
  if ( !v3 )
    return 0;
  v9 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v9 = sub_793320(a1);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 18200LL);
  v11 = *(__int64 (**)())(*(_QWORD *)v10 + 104LL);
  if ( v11 == sub_792D90 )
    return 0;
  a2 = *(unsigned __int16 *)(a1 - 2);
  if ( !((__int64 (__fastcall *)(__int64, __int64))v11)(v10, a2) )
    return 0;
  v12 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) >= 0 )
  {
    if ( v12 )
    {
LABEL_4:
      v4 = *(_QWORD *)(a1 - 8);
      goto LABEL_5;
    }
    v4 = 0;
  }
  else
  {
    v4 = 0;
    if ( v12 )
    {
      v13 = a1;
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
        v13 = sub_793320(a1);
      v4 = 0;
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 88) + 18200LL);
      v15 = *(__int64 (**)())(*(_QWORD *)v14 + 104LL);
      if ( v15 != sub_792D90 )
      {
        a2 = *(unsigned __int16 *)(a1 - 2);
        v4 = ((__int64 (__fastcall *)(__int64, __int64))v15)(v14, a2);
      }
    }
  }
LABEL_5:
  v5 = *(_DWORD *)(sub_C92EB0(v4, a2) + 36);
  if ( v5 <= 5 )
  {
    if ( v5 > 1 )
      goto LABEL_7;
    return 0;
  }
  if ( v5 != 7 )
    return 0;
LABEL_7:
  v6 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    v7 = 0;
    if ( v6 )
    {
      v16 = a1;
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
        v16 = sub_793320(a1);
      v7 = 0;
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 88) + 18200LL);
      v18 = *(__int64 (**)())(*(_QWORD *)v17 + 104LL);
      if ( v18 != sub_792D90 )
      {
        a2 = *(unsigned __int16 *)(a1 - 2);
        v7 = ((__int64 (__fastcall *)(__int64, __int64))v18)(v17, a2);
      }
    }
  }
  else if ( v6 )
  {
    v7 = *(_QWORD *)(a1 - 8);
  }
  else
  {
    v7 = 0;
  }
  return sub_C92EB0(v7, a2);
}


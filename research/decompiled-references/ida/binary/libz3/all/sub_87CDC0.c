__int64 __fastcall sub_87CDC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int **v10; // rax
  char v12; // al
  unsigned int *v13; // rax

  v4 = sub_7E4F00(a1, (unsigned int *)a2);
  if ( !v4 )
    return 1;
  v5 = *(_BYTE **)(a1 + 80);
  v6 = v4;
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 488LL);
  if ( v7 == sub_795570 )
  {
    if ( !v5[168] )
      goto LABEL_4;
    v12 = *(_BYTE *)(v6 + 16);
  }
  else
  {
    v12 = v7((__int64)v5, v6);
  }
  if ( !v12 )
    return 1;
LABEL_4:
  if ( (unsigned int)sub_87A620(a1, a2) )
    return 1;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 4);
    if ( v9 == 6 )
      return sub_87C810(a1, (unsigned int *)a2);
    if ( (unsigned int)(v9 - 52) <= 2 )
    {
      v10 = (unsigned int **)sub_7E4F00(a1, (unsigned int *)a2);
      return sub_87CBE0(a1, v10);
    }
  }
  v13 = (unsigned int *)sub_7E4F00(a1, (unsigned int *)a2);
  return sub_87CA50(a1, v13);
}


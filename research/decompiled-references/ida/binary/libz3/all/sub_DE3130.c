_DWORD *__fastcall sub_DE3130(__int64 a1, int a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  __int64 v10; // rdx

  v5 = sub_17E9C90(*(_QWORD *)(a1 + 8), 40);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && (v7 = *(_DWORD *)(v6 - 4)) != 0 )
  {
    v10 = (unsigned int)(v7 - 1);
    v8 = *(_DWORD *)(v6 + 4 * v10);
    *(_DWORD *)(v6 - 4) = v10;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v8 + 1;
  }
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)v5 = off_1C5AAF8;
  *(_DWORD *)(v5 + 32) = a3;
  return sub_DE2E10(a1, (_DWORD *)v5);
}


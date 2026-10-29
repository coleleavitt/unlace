__int64 __fastcall sub_100DD0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 v5; // rax
  int v6; // edx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx

  v3 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v3 - 2) > 2 )
  {
    v5 = *(_QWORD *)(a3 + 760);
    v6 = *(_DWORD *)(a1 + 16);
    if ( v6 != *(_DWORD *)(v5 + 24) )
    {
LABEL_3:
      *(_DWORD *)(v5 + 24) = v6;
      *(_DWORD *)(v5 + 36) = v3;
      return 1;
    }
LABEL_10:
    if ( *(_DWORD *)(v5 + 36) == v3 )
      return 1;
    goto LABEL_3;
  }
  v8 = sub_163F30(a3, 0);
  v9 = sub_15D8F0(a3 + 440);
  v10 = sub_100B80(a3, nullptr, v8, *(__int16 *)(v9 + 28), 1, 0);
  v11 = getseg();
  if ( v10 != -1 && v11 )
  {
    *(_DWORD *)(*(_QWORD *)(a3 + 760) + 28LL) = 1;
    v12 = 1 << (*(_BYTE *)(v11 + 43) + 4);
    v3 = *(_DWORD *)(a1 + 12);
    v13 = v12 + 7;
    if ( v12 >= 0 )
      v13 = v12;
    v5 = *(_QWORD *)(a3 + 760);
    v6 = v13 >> 3;
    if ( v6 != *(_DWORD *)(v5 + 24) )
      goto LABEL_3;
    goto LABEL_10;
  }
  TScreen::makeBeep(nullptr);
  return 0;
}


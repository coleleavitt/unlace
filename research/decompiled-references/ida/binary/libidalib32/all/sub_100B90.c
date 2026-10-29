__int64 __fastcall sub_100B90(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 v5; // rax
  int v6; // edx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx

  v3 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v3 - 2) > 2 )
  {
    v5 = *(_QWORD *)(a3 + 752);
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
  v8 = sub_1635F0(a3, 0);
  v9 = sub_15D010(a3 + 440);
  LODWORD(v8) = sub_100950(a3, nullptr, v8, *(__int16 *)(v9 + 28), 1, 0);
  v10 = getseg();
  if ( (_DWORD)v8 != -1 && v10 )
  {
    *(_DWORD *)(*(_QWORD *)(a3 + 752) + 28LL) = 1;
    v11 = 1 << (*(_BYTE *)(v10 + 23) + 4);
    v3 = *(_DWORD *)(a1 + 12);
    v12 = v11 + 7;
    if ( v11 >= 0 )
      v12 = v11;
    v5 = *(_QWORD *)(a3 + 752);
    v6 = v12 >> 3;
    if ( v6 != *(_DWORD *)(v5 + 24) )
      goto LABEL_3;
    goto LABEL_10;
  }
  TScreen::makeBeep(nullptr);
  return 0;
}


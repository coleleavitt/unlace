__int64 __fastcall sub_CDC890(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int8 **v8; // rax
  int v9; // edx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = (_QWORD *)(a1 + 384);
  v4[107] = *a3;
  v5 = v4[50];
  v6 = *(_QWORD *)(v5 + 32);
  if ( !v6 || *(_DWORD *)(v6 + 8) != 1 )
    goto LABEL_7;
  v9 = *(_DWORD *)(v5 + 64);
  if ( v9 == 1 )
  {
    v10 = *(__int64 **)(v5 + 72);
  }
  else
  {
    if ( (unsigned int)(v9 - 2) <= 1 )
      BUG();
    v10 = *(__int64 **)(*(_QWORD *)(v5 + 72) + 32LL);
  }
  v11 = *v10;
  v12 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v11 & 2) != 0 )
    v12 = 0;
  if ( v4[52] == v12 )
    return 1;
LABEL_7:
  v7 = sub_DFB220(v5);
  if ( (*(_BYTE *)(sub_E0E500(v4) + 1) & 0x10) != 0 )
  {
    v8 = (unsigned __int8 **)sub_E0FED0(v4, v7, 2458, 0);
    if ( v8 )
    {
      sub_AC60B0(v8, *(_QWORD *)(v7 + 8), 8u);
      return 0;
    }
  }
  else
  {
    sub_E0FED0(v4, v7, 108, 0);
  }
  return 0;
}


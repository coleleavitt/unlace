__int64 __fastcall sub_2202100(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v6; // rax
  void **v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD **)v2;
  if ( *(_UNKNOWN **)v2 == &unk_26F7B20 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 20LL) & 7) != 2 )
      return 0;
    if ( (unsigned __int8)sub_2202100(*(_QWORD *)(a1 + 8)) )
      return 1;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(v2 + 20) & 7) != 2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 20) & 6) != 0 && *(_DWORD *)(v2 + 16) == v3[1] )
  {
    v9 = v3[2];
    v10 = v2 + 8;
    if ( (unsigned int)(v9 + 64) > 0x7F )
      v10 = *(_QWORD *)(v2 + 8);
    if ( !(unsigned int)sub_22097E0(v10, (unsigned int)(v9 - 1)) )
      return 1;
LABEL_21:
    v2 = *(_QWORD *)(a1 + 8);
  }
  v6 = *(_QWORD *)(v2 + 24);
  if ( (_UNKNOWN *)v6 == &unk_26F7B20 )
  {
    if ( !(unsigned __int8)sub_2202100(v2 + 24) )
    {
LABEL_16:
      v2 = *(_QWORD *)(a1 + 8);
      goto LABEL_12;
    }
    return 1;
  }
  if ( (*(_BYTE *)(v2 + 44) & 7) != 3 && (*(_BYTE *)(v2 + 44) & 6) != 0 && *(_DWORD *)(v2 + 40) == *(_DWORD *)(v6 + 4) )
  {
    v11 = *(_DWORD *)(v6 + 8);
    v12 = v2 + 32;
    if ( (unsigned int)(v11 + 64) > 0x7F )
      v12 = *(_QWORD *)(v2 + 32);
    if ( (unsigned int)sub_22097E0(v12, (unsigned int)(v11 - 1)) )
      goto LABEL_16;
    return 1;
  }
LABEL_12:
  sub_995620((__int64)v13, (_QWORD *)v2);
  sub_C16CE0(v13, v2 + 24, 1u);
  v7 = *(void ***)(a1 + 8);
  if ( *v7 == &unk_26F7B20 )
    v8 = sub_2201020((__int64)v7, (__int64)v13);
  else
    v8 = sub_21FA440((__int64)v7, (__int64)v13);
  LOBYTE(v2) = v8 != 1;
  sub_9955A0(v13);
  return (unsigned int)v2;
}

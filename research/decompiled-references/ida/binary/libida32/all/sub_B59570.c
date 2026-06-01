__int64 __fastcall sub_B59570(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // ebp
  __int64 v5; // r14
  char v6; // r13
  __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v7[0] = 0;
  v2 = (_DWORD *)sub_B593E0(a1, v7);
  if ( !v2 )
    return 0;
  if ( (*v2 & 0x20000) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  v3 = sub_B55AF0(v7[0], a2);
  if ( !(_BYTE)v3 )
    return 0;
  v5 = *(_QWORD *)(a2 + 2320);
  v6 = *(_BYTE *)(v5 + 1);
  if ( (v6 & 8) == 0 && (*(_BYTE *)sub_B68890(a1) & 8) == 0 )
  {
LABEL_9:
    if ( (*(_BYTE *)(v5 + 47) & 0x20) == 0 )
      return v3;
    goto LABEL_10;
  }
  if ( !sub_B4FBC0(v7[0]) )
    return 0;
  v5 = *(_QWORD *)(a2 + 2320);
  v6 = *(_BYTE *)(v5 + 1);
  if ( (v6 & 8) == 0 )
    goto LABEL_9;
LABEL_10:
  if ( (v6 & 0x10) == 0 )
    return (unsigned int)sub_B58200(v7[0], a2);
  return v3;
}


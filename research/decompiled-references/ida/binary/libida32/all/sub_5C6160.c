__int64 __fastcall sub_5C6160(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // al
  char v5; // al

  v2 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)v2 )
    return 0;
  v4 = *(_BYTE *)(v2 + 186);
  if ( (v4 & 0xF) == 0xD )
  {
    v5 = v4 & 0x30;
    if ( v5 != 16 )
    {
      if ( v5 != 32 || *(_DWORD *)(a1 + 208) != 1 )
        goto LABEL_4;
      *(_DWORD *)(a1 + 208) = 0;
    }
    return 0;
  }
LABEL_4:
  if ( *(_DWORD *)(a1 + 212) == 1 )
    return set_qerrno(64, a2);
  *(_DWORD *)(a1 + 212) = 2;
  return 0;
}


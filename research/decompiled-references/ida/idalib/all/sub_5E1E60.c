__int64 __fastcall sub_5E1E60(__int64 a1)
{
  __int64 v1; // rax
  char v3; // al
  char v4; // al

  v1 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)v1 )
    return 0;
  v3 = *(_BYTE *)(v1 + 186);
  if ( (v3 & 0xF) == 0xD )
  {
    v4 = v3 & 0x30;
    if ( v4 != 16 )
    {
      if ( v4 != 32 || *(_DWORD *)(a1 + 216) != 1 )
        goto LABEL_4;
      *(_DWORD *)(a1 + 216) = 0;
    }
    return 0;
  }
LABEL_4:
  if ( *(_DWORD *)(a1 + 220) == 1 )
    return set_qerrno(64);
  *(_DWORD *)(a1 + 220) = 2;
  return 0;
}

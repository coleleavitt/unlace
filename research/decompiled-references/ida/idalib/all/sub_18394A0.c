__int64 __fastcall sub_18394A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rax

  v2 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = **(_QWORD **)(a2 + 16);
    if ( v3 )
    {
      v4 = *(_BYTE *)(v3 + 28) & 0x7F;
      LOBYTE(v2) = (((_BYTE)v4 + 52) & 0x7Fu) > 1 && (unsigned int)(unsigned __int8)v4 - 53 > 1;
      if ( (_BYTE)v2 )
      {
LABEL_6:
        LOBYTE(v2) = (_BYTE)v4 == 24;
        LOBYTE(v4) = (_BYTE)v4 == 77;
        v2 |= v4;
        return v2;
      }
      v5 = sub_B72ED0(v3);
      if ( v5 )
      {
        v4 = *(_BYTE *)(v5 + 28) & 0x7F;
        goto LABEL_6;
      }
    }
  }
  return v2;
}

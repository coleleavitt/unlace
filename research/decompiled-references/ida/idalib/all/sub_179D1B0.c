__int64 __fastcall sub_179D1B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  unsigned __int8 v4; // dl
  int v5; // eax
  __int64 v6; // rax

  v2 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = **(_QWORD **)(a2 + 16);
    if ( v3 )
    {
      v4 = *(_BYTE *)(v3 + 28) & 0x7F;
      v5 = v4;
      LOBYTE(v2) = (unsigned int)v4 - 53 > 1 && ((v4 + 52) & 0x7Fu) > 1;
      if ( (_BYTE)v2 )
      {
LABEL_6:
        LOBYTE(v2) = (unsigned int)(v5 - 34) <= 5;
        return v2;
      }
      v6 = sub_B72ED0(v3);
      if ( v6 )
      {
        v5 = *(_BYTE *)(v6 + 28) & 0x7F;
        goto LABEL_6;
      }
    }
  }
  return v2;
}

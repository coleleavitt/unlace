__int64 __fastcall sub_19CF4C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  unsigned __int8 v4; // al
  __int64 v5; // rax
  __int64 v7; // rax
  _BOOL4 v8; // eax

  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = **(_QWORD **)(a2 + 16);
    if ( v3 )
    {
      v4 = *(_BYTE *)(v3 + 28) & 0x7F;
      LOBYTE(v2) = (unsigned int)v4 - 53 > 1 && ((v4 + 52) & 0x7Fu) > 1;
      if ( (_BYTE)v2 )
      {
LABEL_6:
        LOBYTE(v2) = v4 == 20;
        return v2;
      }
      v5 = sub_B72ED0(v3);
      if ( v5 )
      {
        v4 = *(_BYTE *)(v5 + 28) & 0x7F;
        goto LABEL_6;
      }
    }
    else
    {
      if ( (*(_QWORD *)a2 & 7) != 0 )
        BUG();
      v2 = 0;
      v7 = *(_QWORD *)((*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( *(_DWORD *)v7 == 5 )
      {
        v8 = *(_DWORD *)(v7 + 16) != 1701868915 || *(_BYTE *)(v7 + 20) != 114;
        LOBYTE(v2) = !v8;
      }
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

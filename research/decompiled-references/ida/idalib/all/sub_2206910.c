__int64 __fastcall sub_2206910(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r10d
  int v3; // eax
  __int64 **v4; // r9
  unsigned int v5; // ecx
  int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // r11d
  unsigned int v11; // ecx

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 <= 0x40 )
  {
    _RDX = *(_QWORD *)a1;
    v11 = 1;
    if ( *(_QWORD *)a1 )
    {
      __asm { tzcnt   rax, rdx }
      if ( (unsigned int)_RAX > v2 )
        LODWORD(_RAX) = *(_DWORD *)(a1 + 8);
      LOBYTE(v11) = a2 <= (unsigned int)_RAX;
    }
    return v11;
  }
  else
  {
    v3 = sub_2206780((__int64 *)a1);
    v5 = 1;
    if ( v6 != v3 )
    {
      v7 = sub_22068B0(v4);
      LOBYTE(v5) = v8 <= v7;
    }
    return v5;
  }
}

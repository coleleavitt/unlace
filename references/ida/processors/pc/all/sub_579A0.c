__int64 __fastcall sub_579A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13

  if ( (unsigned __int64)(*(_QWORD *)(getseg() + 8) - a2) <= 0x1F )
    return 0;
  if ( (unsigned __int8)get_fixups() )
    return 0;
  v5 = sub_51C60(a1, a2 + 8, 0, 0, 0);
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDLL )
    return 0;
  v3 = sub_51B00(v5, 0);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = sub_51C60(a1, a2 + 12, 0, 1u, 0);
  if ( v6 == -1 || v6 && !(unsigned __int8)sub_55F90(a1, v6, 1, 0) )
    return 0;
  v7 = a2 + 16;
  if ( (unsigned __int8)get_fixups() || (unsigned int)get_dword() )
  {
    return 0;
  }
  else
  {
    while ( v7 + 4 != a2 + 32 )
    {
      v7 += 4;
      if ( (unsigned int)get_dword() )
        return 0;
    }
    sub_519A0(v7 - 28, 32, 0);
    sub_53480(a1);
  }
  return v3;
}

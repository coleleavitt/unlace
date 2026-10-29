__int64 __fastcall sub_2DBA0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx

  if ( !a2 )
  {
    sub_EAA0((__int64)"%a: Relocation to invalid symbol\n", a4);
    return 0;
  }
  v5 = sub_3A3D0(*(_QWORD *)(a1 + 8), a3);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_WORD *)(v6 + 520) != 1 )
      return 0;
    if ( *(_BYTE *)(v6 + 249) )
    {
      sub_EAA0((__int64)"%a: Invalid GOT relocation (.got already exists)\n", a4);
      return 0;
    }
    if ( !v5 )
    {
      sub_EAA0((__int64)"%a: Illegal GOT relocation to zero symbol\n", a4);
      return 0;
    }
    goto LABEL_6;
  }
  if ( v5 )
  {
LABEL_6:
    if ( *(_BYTE *)(a2 + 93) == 6 )
      return 1;
    sub_49020(a2, *(_QWORD *)(a1 + 8));
    sub_EAA0((__int64)"%a: Invalid TLS relocation to the non-TLS symbol '%s'\n", a4, *(const char **)(a1 + 24));
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
  if ( *(_BYTE *)(v9 + 24) && v8 >= 0 && (unsigned __int64)v8 < *(_QWORD *)(v9 + 8) )
  {
    v10 = *(_QWORD *)v9 + v8;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = v10;
    return 1;
  }
  sub_EAA0((__int64)"%a: Invalid addend 0x%a of the TLS relocation to the zero symbol\n", a4, a5);
  return 0;
}


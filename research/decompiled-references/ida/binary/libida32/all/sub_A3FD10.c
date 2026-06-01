__int64 __fastcall sub_A3FD10(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v5; // r12
  unsigned int v6; // eax
  const char *v7; // rax
  __int64 v8; // r12
  unsigned int v9; // eax
  const char *v10; // rax

  if ( (*(_BYTE *)(a1[290] + 89LL) & 1) != 0 )
  {
    if ( (unsigned int)sub_B51D10(a2, 0) )
    {
      v5 = a1[2190];
      v6 = sub_B51D10(a2, 0);
      v7 = (const char *)sub_F99770(v5, v6);
      if ( strchr(v7, 116) )
        return 1;
    }
  }
  if ( (unsigned int)(*(_DWORD *)(a1[2181] + 248LL) - 47) <= 4 && (unsigned int)sub_B51D10(a2, 0) > 0x5DA )
  {
    v8 = a1[2190];
    v9 = sub_B51D10(a2, 0);
    v10 = (const char *)sub_F99770(v8, v9);
    if ( strchr(v10, 116) )
      return 1;
  }
  v2 = a1[2190];
  v3 = sub_B51D10(a2, 0);
  return sub_F99D80(v2, v3);
}


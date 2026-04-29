__int64 __fastcall sub_2DCE0(__int64 a1, double a2, double a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
  if ( *(_BYTE *)(v4 + 24)
    && v3 >= *(_QWORD *)v4
    && v3 < (*(_QWORD *)(*(_QWORD *)(v4 + 64) + 456LL) & (*(_QWORD *)(v4 + 8) + *(_QWORD *)v4)) )
  {
    *(_DWORD *)(a1 + 48) = 1;
    return 1;
  }
  v5 = *(_QWORD **)(v4 + 40);
  v6 = v5[2];
  if ( v6 )
  {
    if ( v3 < v6 )
      goto LABEL_9;
  }
  else if ( !v5[3] )
  {
LABEL_9:
    *(_DWORD *)(a1 + 48) = 0;
    sub_EAA0((__int64)"%a: Invalid TLS relocation not to the TLS template 0x%a\n", a2, a3);
    return 0;
  }
  if ( v3 >= v5[4] )
    goto LABEL_9;
  *(_DWORD *)(a1 + 48) = 2;
  return 1;
}

__int64 __fastcall sub_ADF5E0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  void *v4; // rdi

  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_5;
  v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v3 || *v3 != 3 || v3[1] )
  {
    if ( !*(_DWORD *)(a2 + 24) )
      return 0;
LABEL_5:
    v4 = *(void **)(a1 + 176);
    if ( v4 )
      memset(v4, 0, 4LL * *(unsigned int *)(a1 + 172));
    *(_DWORD *)(a1 + 168) = 0;
    sub_ADE5B0(a1 + 160, (_DWORD *)a2);
    return 0;
  }
  return 1;
}


__int64 __fastcall sub_51B7E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax

  if ( *a3 <= 0xFFu )
    return 0;
  v4 = *a3 >> 9;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1632LL);
  if ( v4 >= *(_QWORD *)(v5 + 152) || (v7 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 8 * v4)) == 0 )
  {
    if ( *(_BYTE *)(v5 + 134) || *(_DWORD *)(v5 + 128) )
      return 0;
    if ( !under_debugger )
      interr(918);
LABEL_22:
    JUMPOUT(0x2BF322);
  }
  if ( !*(_DWORD *)(v7 + 64) && !*(_DWORD *)(v5 + 128) )
  {
    if ( !under_debugger )
      interr(878);
    goto LABEL_22;
  }
  if ( (~(unsigned __int8)*(_WORD *)(v7 + 68) & 0x70) != 0 )
  {
LABEL_11:
    v8 = *(__int64 **)(v7 + 32);
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
      {
        *(_QWORD *)(a1 + 24) = v9;
        return 1;
      }
    }
    return 0;
  }
  if ( *(_QWORD *)v7 > 0xFFu )
  {
    v7 = sub_51B750(v5, *(_QWORD *)v7);
    if ( !v7 )
      return 0;
    goto LABEL_11;
  }
  return 0;
}


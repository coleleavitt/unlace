bool __fastcall sub_62A0B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  _DWORD *v4; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax

  v2 = a2;
  v3 = *(_WORD *)(a2 + 4);
  if ( !v3 )
  {
    v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v4 || *v4 || v4[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
      return 0;
    v6 = *(_QWORD *)(a2 + 32);
    v7 = *(_QWORD *)(a2 + 40);
    if ( !(unsigned __int8)sub_15D2CB0(a1, v6) )
      goto LABEL_8;
    v8 = *(_QWORD *)(a1 + 856);
    if ( v8 == v7 )
    {
      v2 = v6;
      if ( *(_WORD *)(v6 + 4) == 2 )
        return *(_DWORD *)(v2 + 16) == 0;
    }
    else
    {
      if ( v8 != v6 )
      {
LABEL_8:
        v3 = *(_WORD *)(a2 + 4);
        goto LABEL_9;
      }
      v2 = v7;
      if ( *(_WORD *)(v7 + 4) == 2 )
        return *(_DWORD *)(v2 + 16) == 0;
    }
    return 0;
  }
LABEL_9:
  if ( v3 != 2 )
    return 0;
  return *(_DWORD *)(v2 + 16) == 0;
}


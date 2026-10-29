__int64 __fastcall sub_B7A360(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 v4; // rdi
  __int64 v5; // r8
  _DWORD *v7; // rdx
  _DWORD *v8; // rsi
  _DWORD *v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _DWORD *v13; // rax

  v3 = *(_WORD *)(a2 + 4);
  v4 = *(_QWORD *)(a1 + 864);
  v5 = a2;
  if ( v3 || (v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v7 != 5 || v7[1] )
  {
    if ( *(_WORD *)(a3 + 4) || (v8 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v8 != 5 || v8[1] )
    {
      if ( *(_DWORD *)a3 >= *(_DWORD *)v5 )
      {
        v3 = *(_WORD *)(a3 + 4);
        v11 = a3;
        a3 = v5;
        v5 = v11;
        if ( a3 != v11 )
          goto LABEL_9;
        return *(_QWORD *)(v4 + 856);
      }
    }
    else
    {
      v12 = a3;
      v3 = 0;
      a3 = v5;
      v5 = v12;
    }
  }
  if ( a3 == v5 )
    return *(_QWORD *)(v4 + 856);
LABEL_9:
  if ( *(_WORD *)(a3 + 4) )
    return sub_15E1B70(v4);
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 )
    return sub_15E1B70(v4);
  if ( *v9 != 5 )
    return sub_15E1B70(v4);
  if ( v9[1] )
    return sub_15E1B70(v4);
  if ( v3 )
    return sub_15E1B70(v4);
  v13 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( !v13 || *v13 != 5 || v13[1] )
    return sub_15E1B70(v4);
  else
    return *(_QWORD *)(v4 + 864);
}


__int64 __fastcall sub_A72D10(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 v4; // r8
  _DWORD *v6; // rdx
  _DWORD *v7; // rsi
  _DWORD *v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rax

  v3 = *(_WORD *)(a2 + 4);
  v4 = a2;
  if ( v3 || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v6 != 5 || v6[1] )
  {
    if ( *(_WORD *)(a3 + 4) || (v7 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v7 != 5 || v7[1] )
    {
      if ( *(_DWORD *)a3 >= *(_DWORD *)v4 )
      {
        v3 = *(_WORD *)(a3 + 4);
        v10 = a3;
        a3 = v4;
        v4 = v10;
        if ( a3 != v10 )
          goto LABEL_9;
        return *(_QWORD *)(a1 + 856);
      }
    }
    else
    {
      v11 = a3;
      v3 = 0;
      a3 = v4;
      v4 = v11;
    }
  }
  if ( a3 == v4 )
    return *(_QWORD *)(a1 + 856);
LABEL_9:
  if ( *(_WORD *)(a3 + 4) )
    return sub_15E1B70(a1);
  v8 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v8 )
    return sub_15E1B70(a1);
  if ( *v8 != 5 )
    return sub_15E1B70(a1);
  if ( v8[1] )
    return sub_15E1B70(a1);
  if ( v3 )
    return sub_15E1B70(a1);
  v12 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( !v12 || *v12 != 5 || v12[1] )
    return sub_15E1B70(a1);
  else
    return *(_QWORD *)(a1 + 864);
}


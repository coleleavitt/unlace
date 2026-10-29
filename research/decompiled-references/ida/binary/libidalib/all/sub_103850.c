__int64 __fastcall sub_103850(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi

  if ( *(_DWORD *)a3 != 5 )
    return sub_16C470();
  v3 = *(_QWORD *)(a3 + 56);
  if ( v3 == -1 )
    return (unsigned __int8)sub_FF990(a1, *(_QWORD *)(a3 + 88), 0);
  else
    return (unsigned __int8)sub_FF990(a1, v3, 0);
}


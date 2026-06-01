__int64 __fastcall delete_plugin_actions(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( *(_DWORD *)(a2 + 124) != 2 )
    return 0;
  v4 = a1[2];
  v5 = a1[1];
  if ( a1[3] < (unsigned __int64)(v4 + 1) )
  {
    v6 = qvector_reserve(a1 + 1, v5, v4 + 1, 8);
    a1[1] = v6;
    v5 = v6;
    v4 = a1[2];
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  ++a1[2];
  return 0;
}

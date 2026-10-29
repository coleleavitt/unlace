__int64 __fastcall sub_A715D0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi

  if ( (a2 == nullptr) != (a3 == nullptr) )
    return 0;
  if ( !a2 )
    return 1;
  v4 = a2[1];
  v5 = a3[1];
  v6 = *(_QWORD *)(v4 + 56);
  v7 = *(_QWORD *)(v5 + 56);
  if ( !v6 || !v7 )
    return 0;
  if ( v6 != v7 )
  {
    if ( *(_QWORD *)(v6 + 40) != *(_QWORD *)(v7 + 40) || !(unsigned __int8)sub_A70C90(a1, v6, v7) )
      return 0;
    v4 = a2[1];
    v5 = a3[1];
  }
  v10 = *(_QWORD *)(v4 + 64);
  v11 = *(_QWORD *)(v5 + 64);
  if ( (v10 != 0) != (v11 != 0) || v10 && *(_DWORD *)(v10 + 8) != *(_DWORD *)(v11 + 8) )
    return 0;
  v12 = *a2;
  if ( (*a2 == 0) != (*a3 == 0) )
    return 0;
  if ( v12 )
    return sub_A32C10((__int64)a1, v12, *a3);
  else
    return 1;
}


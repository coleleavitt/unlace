__int64 __fastcall sub_3E7D00(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int v8; // eax
  __int64 result; // rax

  v8 = sub_333AE0(a1, a2, a3, *(_QWORD *)(a4 + 24), a5, (char *)a6);
  if ( !v8 )
    return 0;
  if ( v8 == 1 )
    return 1;
  result = 0;
  if ( *(_BYTE *)a6 == 4 )
    return sub_3E7A80(a1, a2, *(_DWORD **)(a6 + 8), a7);
  return result;
}

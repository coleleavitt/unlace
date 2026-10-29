char __fastcall sub_E345A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // r8
  bool v5; // r9
  char result; // al
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9

  if ( a3 == -1 || a1 == -1 )
    return (a1 & a3) == -1;
  v4 = a1 == -2;
  v5 = a3 == -2;
  result = v4 || v5;
  if ( v4 || v5 )
    return v4 && v5;
  if ( a2 == a4 )
  {
    v7 = a1 + 8 * a2;
    if ( v7 == a1 )
      return 1;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
      v11 = *(_QWORD *)(*(_QWORD *)a3 + 40LL) & 7LL;
      if ( (v10 & 7) == 0 )
        break;
      v8 = 0;
      if ( !(_DWORD)v11 )
        goto LABEL_11;
LABEL_13:
      a1 += 8;
      a3 += 8;
      if ( v7 == a1 )
        return 1;
    }
    v8 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = 0;
    if ( !(_DWORD)v11 )
LABEL_11:
      v9 = *(_QWORD *)(*(_QWORD *)a3 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9 != v8 )
      return result;
    goto LABEL_13;
  }
  return result;
}

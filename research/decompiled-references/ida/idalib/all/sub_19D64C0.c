__int64 __fastcall sub_19D64C0(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // [rsp+Eh] [rbp-2Ah] BYREF
  _BYTE v11[41]; // [rsp+Fh] [rbp-29h] BYREF

  result = sub_168B6E0((__int64)a1);
  if ( (*(_BYTE *)(result + 2) & 4) == 0 )
    return result;
  v7 = sub_19CF160(*(_QWORD *)(a3 + 8), a2, v5, v6);
  result = sub_19CF160(a2, a2, v8, v9);
  if ( (_DWORD)result == 1 && v7 == 4 )
  {
    result = sub_19D4140(*a1, a2, a3, &v10, 0);
    if ( (_BYTE)result && v10 )
      return result;
    result = sub_19D5300(*a1, a2, a3, v11, 0);
    if ( (_BYTE)result )
    {
      if ( v11[0] || !v10 )
        return result;
    }
    else if ( !v10 )
    {
      if ( v11[0] )
        return sub_19D5300(*a1, a2, a3, v11, 1);
      return result;
    }
    return sub_19D4140(*a1, a2, a3, &v10, 1);
  }
  if ( (_DWORD)result != 4 )
    return result;
  if ( v7 != 1 )
    return result;
  result = sub_19D4A20(*a1, a2, a3, &v10, 0);
  if ( (_BYTE)result )
  {
    if ( v10 )
      return result;
  }
  result = sub_19D5BE0(*a1, a2, a3, v11, 0);
  if ( (_BYTE)result )
  {
    if ( v11[0] || !v10 )
      return result;
    return sub_19D4A20(*a1, a2, a3, &v10, 1);
  }
  if ( v10 )
    return sub_19D4A20(*a1, a2, a3, &v10, 1);
  if ( v11[0] )
    return sub_19D5BE0(*a1, a2, a3, v11, 1);
  return result;
}

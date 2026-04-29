__int64 __fastcall sub_D39F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 func; // rax
  __int64 result; // rax

  v2 = sub_32CB20(*(_QWORD *)(a1 + 64), a2);
  v3 = v2;
  if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
  {
    func = get_func(v2);
    if ( func )
      return *(_QWORD *)(func + 48);
  }
  result = sub_D3970(*(_QWORD *)(a1 + 64), v3);
  if ( result == -1 )
    return 0;
  return result;
}

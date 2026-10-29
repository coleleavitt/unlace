__int64 __fastcall sub_3B8A30(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // r12d
  unsigned int v4; // edx
  bool v5; // zf

  if ( (unsigned __int8)sub_3E9640(a1) )
    return sub_3EA070(a1, a2);
  v3 = sub_895700(*(_QWORD *)(a1 + 1008), a2);
  result = rangeset_t_prev_range(a1 + 1112, a2);
  if ( v3 != -1 )
  {
    v4 = v3;
    if ( (unsigned int)result >= v3 )
      v4 = result;
    v5 = (_DWORD)result == -1;
    result = v3;
    if ( !v5 )
      return v4;
  }
  return result;
}


__int64 __fastcall sub_4ECA20(__int64 a1, _DWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rax

  if ( (unsigned __int8)sub_1673B10(a1 + 48, a3) )
    return sub_16746C0(a1 + 48, a2, a3);
  v4 = *(_QWORD **)(a1 + 40);
  if ( a3 == v4[105] )
  {
    if ( *a2 )
      return v4[107];
    else
      return v4[108];
  }
  else
  {
    v5 = sub_182D020(qword_1C7F2C0, a2);
    return sub_1625BE0(a1 + 72, v5, a3);
  }
}


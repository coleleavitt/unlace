__int64 __fastcall sub_7884D0(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 result; // rax
  __int64 v3; // rax

  sub_35A790((char **)(a1 + 40));
  sub_781D40((_QWORD *)a1);
  sub_781F80(a1);
  v1 = *(_DWORD **)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56) <= 4u )
  {
    v3 = qvector_reserve(a1 + 40, v1, 5, 1);
    *(_QWORD *)(a1 + 40) = v3;
    v1 = (_DWORD *)v3;
  }
  *(_QWORD *)(a1 + 48) = 5;
  *v1 = 1936287860;
  *(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL) = 0;
  sub_781D40((_QWORD *)a1);
  result = sub_787700(a1, 0, 0);
  if ( !(_DWORD)result )
    return sub_783580(a1);
  return result;
}

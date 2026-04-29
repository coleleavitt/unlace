__int64 __fastcall sub_3BA9F0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == 10 )
  {
    v10 = *(_QWORD *)(a2 + 200);
    if ( v10 && *(_QWORD *)(v10 + 8) )
      return 3;
    else
      return 7;
  }
  else
  {
    if ( v3 == 58 )
    {
      if ( (unsigned __int8)get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 208) + 8LL), 2) )
        return 3;
      return 7;
    }
    v4 = *(_QWORD *)a2;
    v6 = *(_QWORD *)a2;
    v7 = sub_389BF0(*(_QWORD *)(a1 + 16), v6);
    if ( !v7 )
      return 6;
    v8 = *(_DWORD *)(a1 + 24);
    if ( !v8 )
      goto LABEL_20;
    if ( v8 != 1 )
      sub_3BA9D0(a3, v7, v6);
    result = 6;
    if ( v4 == *(_QWORD *)(v7 + 8) )
    {
LABEL_20:
      if ( (unsigned __int8)sub_3AD5A0(v7, 0, nullptr) )
        return 3;
      return 7;
    }
  }
  return result;
}

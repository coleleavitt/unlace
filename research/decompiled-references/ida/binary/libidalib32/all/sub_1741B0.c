__int64 __fastcall sub_1741B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v6; // [rsp+1h] [rbp-19h]

  *(_QWORD *)(a2 + 8) = 0;
  if ( !a3 )
    return 0;
  v4 = sub_1954B0(a3);
  if ( !v4 )
    return 0;
  v6 = v4;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 272LL))(a3, a2);
  return v6;
}


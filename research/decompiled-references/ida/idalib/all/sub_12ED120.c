__int64 __fastcall sub_12ED120(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp-10h] [rbp-28h]

  v2 = *(_QWORD *)(a1[2] + 160LL);
  if ( a1[17] )
  {
    result = sub_12ECF50(
               a1[12],
               *(_BYTE **)(v2 + 168),
               *(_QWORD *)(v2 + 176),
               *(_DWORD *)(v2 + 200),
               *(_DWORD *)(v2 + 204));
    if ( (_BYTE)result )
    {
      v4 = a1[17];
      a1[17] = 0;
      if ( v4 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  else
  {
    v5 = sub_227D600();
    v6 = *(_BYTE **)(v2 + 168);
    v7 = sub_12ED050(
           a1[12],
           v6,
           *(_QWORD *)(v2 + 176),
           *(_DWORD *)(v2 + 200),
           *(_DWORD *)(v2 + 204),
           (_DWORD *)(*(_QWORD *)(a1[2] + 160LL) + 8LL),
           v5);
    v8 = a1[17];
    a1[17] = v7;
    result = v9;
    if ( v8 )
      return (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 8LL))(v8, v6);
  }
  return result;
}

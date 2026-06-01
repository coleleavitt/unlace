unsigned __int64 __fastcall sub_8C9090(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  if ( (*(_BYTE *)(a1 + 27) & 1) == 0 )
    return sub_6C9B00((__int64)a2, a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return sub_6C9B00((__int64)a2, a1);
  v4 = *(_QWORD *)(v3 + 80);
  v5 = sub_6E9BB0(a2);
  v6 = *(_QWORD *)(v5 + 48);
  if ( v6 )
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v7 = sub_6E8D60((__int64)a2, v5);
  result = v4;
  if ( v4 == v7 )
    return *(_QWORD *)(a1 + 8);
  return result;
}


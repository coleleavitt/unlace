__int64 __fastcall sub_8B9E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v4; // cf
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( !v2 )
  {
    v3 = **(_QWORD **)a1;
    if ( a2 > 0 )
      goto LABEL_3;
LABEL_8:
    v5 = v3 + a2;
    return sub_8B9D60(a1, v5);
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v7 + 24 * v2;
  v9 = (_QWORD *)(v8 - 24);
  if ( v7 == v8 )
    v9 = *(_QWORD **)(a1 + 88);
  v3 = v9[2] + 4LL * (v9[1] - *v9);
  if ( a2 <= 0 )
    goto LABEL_8;
LABEL_3:
  v4 = __CFADD__(v3, a2);
  v5 = v3 + a2;
  if ( !v4 )
    return sub_8B9D60(a1, v5);
  return 4;
}

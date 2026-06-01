unsigned __int64 __fastcall sub_6BFC90(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r13

  v3 = 32 * a3;
  v5 = 32 * a3 + *(_QWORD *)(a1 + 40);
  result = *(_BYTE *)(a1 + 32) & 0x2F;
  v7 = *(_QWORD *)(v5 + 24);
  if ( (_BYTE)result == 13 )
  {
    result = sub_6BB530(a2, v7, *(_QWORD *)(a1 + 144) + 144 * a3);
    v8 = *(_QWORD *)(a1 + 40) + v3;
    v7 = *(_QWORD *)(v8 + 24);
    v5 = v8;
  }
  if ( v7 != -1 )
  {
    result = sub_6BF360(*(__int64 **)(*a2 + 1672LL), v7, 1);
    *(_QWORD *)(v5 + 24) = -1;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4350F0
// Address: 0x00000000004350F0

//----- (00000000004350F0) ----------------------------------------------------
__int64 __fastcall sub_4350F0(_QWORD *a1, const char *a2)
{
  _DWORD *v2; // rsi
  __int64 result; // rax
  _DWORD *v4; // rax

  sub_4172B0((__int64)(a1 + 5), "%s.%s", a2, a2);
  sub_42E970(a1);
  sub_42EBB0((__int64)a1);
  v2 = (_DWORD *)a1[5];
  if ( a1[7] <= 4u )
  {
    v4 = sub_481540((__int64)(a1 + 5), v2, 5u, 1u);
    a1[5] = v4;
    v2 = v4;
  }
  a1[6] = 5;
  *v2 = 1936287860;
  *(_BYTE *)(a1[5] + 4LL) = 0;
  sub_42E970(a1);
  result = sub_434330((__int64)a1, 0, 0);
  if ( !(_DWORD)result )
    return sub_4301B0((__int64)a1);
  return result;
}

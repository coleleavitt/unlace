/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65C50
// Address: 0x0000000000065C50

//----- (0000000000065C50) ----------------------------------------------------
__int64 __fastcall sub_65C50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  const char *v3; // rsi

  result = 0;
  if ( *(_DWORD *)(a1 + 216) == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * *(int *)(*(_QWORD *)(a1 + 184) + 24LL));
    if ( *(_QWORD *)(v2 + 40) )
      v3 = *(const char **)(v2 + 32);
    else
      v3 = s1;
    result = sub_658A0((_QWORD *)a1, v3);
    if ( !(_DWORD)result )
      return sub_65CB0((_QWORD *)a1);
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B720
// Address: 0x000000010002B720

//----- (000000010002B720) ----------------------------------------------------
__int64 __fastcall sub_10002B720(__int64 a1)
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
      v3 = _s1;
    result = sub_10002B380(a1, v3);
    if ( !(_DWORD)result )
      return sub_10002B790((_QWORD *)a1);
  }
  return result;
}

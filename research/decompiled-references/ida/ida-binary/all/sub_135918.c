__int64 __fastcall sub_135918(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = *(_QWORD *)(a1 + 728);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * result - 4);
  if ( result )
    *(_QWORD *)(a1 + 728) = --result;
  if ( v2 >= 0 )
    return j__switch_dbctx(v2);
  return result;
}

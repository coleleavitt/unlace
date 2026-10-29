__int64 __fastcall sub_40E220(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1448);
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1448);
  result = 1;
  if ( *(_DWORD *)(v2 + 72) == *(_DWORD *)(v3 + 72) )
    return *(_OWORD *)(v3 + 8) - *(_OWORD *)(v2 + 8) != 0
        || *(_OWORD *)(v3 + 24) - *(_OWORD *)(v2 + 24) != 0
        || *(_OWORD *)(v3 + 40) - *(_OWORD *)(v2 + 40) != 0
        || *(_OWORD *)(v3 + 56) - *(_OWORD *)(v2 + 56) != 0;
  return result;
}


__int64 __fastcall sub_40E2E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1448);
  result = -1;
  if ( *(_DWORD *)(v5 + 72) && a3 != 1 )
  {
    if ( a3 == 2 )
      v4 = (a2 != 0) - 1LL;
    return -(__int64)(v4 != 0);
  }
  return result;
}


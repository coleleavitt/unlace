__int64 __fastcall sub_46AE90(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = a1 + 48;
  v3 = switch_dbctx(*(int *)(a1 + 8));
  if ( (unsigned int)sub_3B8D10(*(__int64 **)(v3 + 1480), (unsigned int *)(a1 + 48), a2) == -1 )
    return 0;
  return v2;
}


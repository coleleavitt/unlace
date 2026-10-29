__int64 __fastcall sub_5A27D0(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // r8d
  int i; // esi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *(_QWORD **)(v2 + 32);
      if ( !v5 || (v6 = v5[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      v2 = *v5 + 56 * v6 - 56;
    }
  }
  sub_5A1F00(v2, *(_DWORD *)(a1 + 56));
  v8 = *(_QWORD *)(v7 + 32);
  if ( !v8 )
    sub_5A1120();
  v9 = v8 - 1;
  v10 = *(_BYTE *)(*(_QWORD *)(v7 + 24) + v8 - 1);
  *(_QWORD *)(v7 + 32) = v9;
  if ( v10 )
    --*(_DWORD *)(v7 + 16);
  result = (unsigned int)(*(char *)(v7 + 56) < 0) + 1;
  *(_DWORD *)(v7 + 48) += result;
  return result;
}

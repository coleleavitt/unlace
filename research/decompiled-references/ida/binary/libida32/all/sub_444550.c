__int64 __fastcall sub_444550(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int *v3; // r9
  int v4; // ecx
  __int64 v5; // rax

  v2 = a2 - 1;
  if ( a2 - 1 < 0 )
  {
LABEL_12:
    if ( !under_debugger )
      interr(1972);
    BUG();
  }
  v3 = &off_2BD0460[10 * a2 - 3];
  while ( *(_QWORD *)(a1 + 328) - 1LL < 0 )
  {
    --v2;
    v3 -= 10;
    if ( v2 == -1 )
      goto LABEL_12;
  }
  v4 = *v3;
LABEL_5:
  v5 = *(_QWORD *)(a1 + 328) - 1LL;
  while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v5) + 40LL) != v4 )
  {
    if ( v5-- == 0 )
    {
      --v2;
      v3 -= 10;
      if ( v2 == -1 )
        goto LABEL_12;
      v4 = *v3;
      goto LABEL_5;
    }
  }
  return v5 + 1;
}


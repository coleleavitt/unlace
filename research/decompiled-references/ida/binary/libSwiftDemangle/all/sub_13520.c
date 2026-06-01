unsigned __int64 __fastcall sub_13520(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // r9

  v1 = sub_EE90((_QWORD *)a1);
  v2 = sub_13360(a1);
  v3 = *(_DWORD *)(a1 + 96);
  if ( v3 && (v4 = (unsigned int)(v3 - 1), v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4), *(_WORD *)(v5 + 16) == 221) )
    *(_DWORD *)(a1 + 96) = v4;
  else
    v5 = 0;
  return sub_CEE0((_QWORD *)a1, 44, v5, v2, v1);
}


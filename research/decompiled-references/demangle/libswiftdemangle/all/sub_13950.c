unsigned __int64 __fastcall sub_13950(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // r9

  v1 = sub_EE90((_QWORD *)a1);
  v2 = sub_13360(a1);
  v3 = *(_DWORD *)(a1 + 96);
  if ( v3 && (v4 = (unsigned int)(v3 - 1), v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4), *(_WORD *)(v5 + 16) == 221) )
    *(_DWORD *)(a1 + 96) = v4;
  else
    v5 = 0;
  v6 = sub_CE00((_QWORD *)a1, 31, v5, v2);
  v7 = *(_DWORD *)(a1 + 96);
  if ( v7
    && (v8 = (unsigned int)(v7 - 1),
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8),
        (unsigned __int16)(*(_WORD *)(v9 + 16) - 44) <= 2u) )
  {
    *(_DWORD *)(a1 + 96) = v8;
  }
  else
  {
    v9 = 0;
  }
  return sub_CEE0((_QWORD *)a1, 46, v9, v6, v1);
}

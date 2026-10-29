_QWORD *__fastcall sub_20D4DC0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( *(_QWORD *)(a1 + 16) > 3u )
  {
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v6 + 1;
    *(_BYTE *)(v7 + v6) = 40;
    sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 16), *(const void **)(a1 + 24));
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v8 + 1;
    *(_BYTE *)(v9 + v8) = 41;
  }
  v2 = *(_BYTE **)(a1 + 40);
  if ( *v2 != 110 )
  {
    result = sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 32), v2);
    if ( *(_QWORD *)(a1 + 16) > 3u )
      return result;
    return sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 16), *(const void **)(a1 + 24));
  }
  sub_20CFD70(a2);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v4 + 1;
  *(_BYTE *)(v5 + v4) = 45;
  result = sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 32) - 1LL, (const void *)(*(_QWORD *)(a1 + 40) + 1LL));
  if ( *(_QWORD *)(a1 + 16) <= 3u )
    return sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 16), *(const void **)(a1 + 24));
  return result;
}

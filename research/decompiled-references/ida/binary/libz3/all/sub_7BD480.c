__int64 __fastcall sub_7BD480(__int64 a1, __m128i a2)
{
  __int64 (*v2)(void); // rax
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 result; // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 608LL);
  if ( v2 == sub_7C5860 )
  {
    v3 = *(__int64 **)(a1 + 160);
    if ( v3 )
      v4 = *v3;
    else
      v4 = *(_QWORD *)(a1 + 24);
    v5 = v4 + 24;
  }
  else
  {
    v5 = v2();
  }
  v6 = *(_DWORD *)(v5 + 356);
  if ( !v6 )
    return sub_7BCDF0(a1, a2);
  if ( v6 != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 3332);
  }
  v7 = *(_QWORD *)(a1 + 984);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  sub_7BC8D0(a1, (_QWORD *)(a1 + 984));
  if ( *(_BYTE *)(a1 + 996) )
    return 0;
  result = sub_7B8DC0(a1, 0xFFFFFFFE, (int **)(a1 + 984), *(_DWORD *)(a1 + 808), 1u, v8, a2);
  ++*(_DWORD *)(a1 + 216);
  return result;
}


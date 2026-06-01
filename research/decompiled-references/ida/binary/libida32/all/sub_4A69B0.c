__int64 __fastcall sub_4A69B0(__int64 a1, int a2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  const char *v4; // rax

  v2 = *(_DWORD **)(a1 + 24);
  v3 = &v2[8 * *(_QWORD *)(a1 + 32)];
  if ( v2 == v3 )
    return 0;
  while ( a2 != v2[4] )
  {
    v2 += 8;
    if ( v3 == v2 )
      return 0;
  }
  if ( !v2 )
    return 0;
  v4 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 120LL))(*(_QWORD *)v2);
  sub_4A6940(a1, v4);
  memmove(v2, v2 + 8, *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - (_QWORD)v2 - 32);
  --*(_QWORD *)(a1 + 32);
  return 1;
}


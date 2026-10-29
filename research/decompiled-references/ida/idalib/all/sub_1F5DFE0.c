__int64 __fastcall sub_1F5DFE0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax

  v2 = *a1;
  v4 = *(_DWORD *)(v2 + 24);
  v5 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 24) = v4 + 2;
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8LL * (unsigned int)(v4 + 1));
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * *(unsigned int *)(v5 + 13072) - 8);
  v8 = *(_DWORD *)(v5 + 13072) - 1;
  *(_DWORD *)(v5 + 13072) = v8;
  *(_QWORD *)(a2 + 16) = v7;
  v9 = *(unsigned __int16 *)(a2 + 12);
  if ( v9 )
  {
    v10 = 0;
    do
    {
      *(_QWORD *)(a2 + 8 * v10 + 24) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (v8 - (unsigned int)v10) - 8);
      ++v10;
    }
    while ( v9 != (_DWORD)v10 );
    v8 -= v9;
    *(_DWORD *)(v5 + 13072) = v8;
  }
  if ( v6 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * v8 - 8);
    *(_DWORD *)(v5 + 13072) = v8 - 1;
    *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 12) + 24) = v11;
  }
  result = sub_1EE7490(v2);
  *(_DWORD *)(a2 + 8) = result;
  return result;
}

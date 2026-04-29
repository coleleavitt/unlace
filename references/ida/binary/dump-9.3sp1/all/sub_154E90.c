__int64 __fastcall sub_154E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // r13
  int v10; // r12d
  __int64 v11; // rax

  v4 = sub_154D70(a1 + 32, *(_DWORD *)a1, 0, a4);
  v7 = sub_154D70(a1 + 48, *(_DWORD *)a1, 0, v5) | v4;
  if ( *(_BYTE *)(a1 + 64) != 8 )
    return v7;
  v9 = *(_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)(v9 + 32) )
    return v7;
  v10 = 0;
  v11 = 0;
  do
  {
    ++v10;
    v7 |= sub_154D70(*(_QWORD *)(v9 + 24) + 80 * v11, *(_DWORD *)a1, 0, v6);
    v11 = v10;
  }
  while ( (unsigned __int64)v10 < *(_QWORD *)(v9 + 32) );
  return v7;
}

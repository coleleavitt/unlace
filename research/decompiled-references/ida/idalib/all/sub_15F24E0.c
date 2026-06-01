__int64 __fastcall sub_15F24E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax

  v6 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(v7 + 8 * v6 - 8);
  if ( (*(_BYTE *)(v8 + 8) & 7) != 1 )
    return 0;
  v9 = *(_QWORD *)(v8 + 1528);
  if ( v9 )
  {
    if ( !(unsigned __int8)sub_B91990(v9 + 40, *(_QWORD *)(a1 + 544), v7, a4, a5, a6) )
      return 0;
  }
  return v8;
}

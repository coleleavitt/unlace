__int64 __fastcall sub_15F25A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // rax

  v6 = *(_QWORD *)(a1 + 32);
  v7 = v6 + 8LL * *(unsigned int *)(a1 + 40);
  if ( v6 == v7 )
    return 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 - 8);
    v9 = *(_BYTE *)(v8 + 8) & 7;
    if ( (unsigned __int8)(v9 - 1) <= 2u )
      break;
    v7 -= 8;
    if ( v6 == v7 )
      return 0;
  }
  if ( v9 == 2 )
  {
    v10 = *(_QWORD *)(v8 + 1584);
    if ( v10 )
    {
      if ( !(unsigned __int8)sub_B91990(v10 + 64, *(_QWORD *)(a1 + 544), v7, v6, a5, a6) && *(_BYTE *)(v8 + 1600) )
        return 0;
    }
  }
  return v8;
}

__int64 __fastcall sub_173150(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // ebx
  __int64 v5; // rax

  if ( *(_BYTE *)a2 != 8 )
    return 0;
  *(_BYTE *)(a1 + 40) = 1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)(v3 + 32) )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( !sub_151D70(*(_QWORD *)(v3 + 24) + 80 * v5, *(_QWORD *)(a1 + 48)) )
  {
    v5 = ++v4;
    if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 32) )
      return 0;
  }
  return 1;
}

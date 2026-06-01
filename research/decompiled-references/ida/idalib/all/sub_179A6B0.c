unsigned __int64 __fastcall sub_179A6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
      v7 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v8 = (unsigned int)(v7 - 42);
      if ( (unsigned __int8)(v7 - 42) > 2u )
        break;
      a1 = sub_F68450(v6, a2, v7, v8, a5);
    }
    v9 = (unsigned int)(v7 - 2);
    if ( (unsigned __int8)v9 > 4u )
      break;
    if ( (unsigned __int8)(*(_BYTE *)(v6 + 16) - 2) > 4u )
      v6 = sub_F63050(v6, a2, v9, v8);
    a1 = *(_QWORD *)(v6 + 32);
  }
  return a1 & 0xFFFFFFFFFFFFFFF8LL;
}

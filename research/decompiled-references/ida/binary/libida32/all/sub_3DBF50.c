bool __fastcall sub_3DBF50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r12d

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 10LL) & 4) == 0 )
    return 1;
  if ( *(_BYTE *)(a3 + 96) == 1 )
    return 1;
  v4 = sub_4EE820(a1 + 1552, a2);
  if ( a3 == v4 )
    return 1;
  v5 = sub_4F8800(a1, *(unsigned int *)(v4 + 28));
  return v5 == (unsigned int)sub_4F8800(a1, *(unsigned int *)(a3 + 28));
}


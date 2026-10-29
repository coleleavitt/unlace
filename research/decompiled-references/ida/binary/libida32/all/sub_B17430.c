char *__fastcall sub_B17430(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  char *result; // rax
  unsigned __int64 v6; // rdx

  v2 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v2 == -2 )
    return "...";
  v3 = *(_QWORD *)(a2 + 32);
  if ( (*(_BYTE *)(v3 + 48) & 1) == 0 )
  {
    sub_B169D0(*(__int64 **)(a2 + 32), a2);
    v2 = *(unsigned int *)(a1 + 40);
    v3 = *(_QWORD *)(a2 + 32);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 8 * v2) + 40LL);
  if ( (v4 & 7) != 0 )
    return (char *)&byte_22CD811;
  result = (char *)&byte_22CD811;
  v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6 )
    return (char *)(*(_QWORD *)(v6 + 16) + 16LL);
  return result;
}


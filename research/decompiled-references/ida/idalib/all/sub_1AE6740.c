__int64 __fastcall sub_1AE6740(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi

  if ( *(char *)(a2 + 28) >= 0
    && (v2 = *(_QWORD *)(a1 + 8),
        v3 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL],
        (v3 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v3 | (unsigned __int8)*(_QWORD *)(a2 + 48)) & 7) == (*(_QWORD *)&byte_8[v2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v2) & 7)) )
  {
    return a2;
  }
  else
  {
    return 0;
  }
}

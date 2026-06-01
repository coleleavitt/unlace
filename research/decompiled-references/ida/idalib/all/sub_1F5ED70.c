unsigned __int64 __fastcall sub_1F5ED70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 result; // rax

  sub_1F58FC0(a1, a2);
  *(_QWORD *)(a2 + 24) = sub_1EEDED0(
                           *(_QWORD *)(*a1 + 8),
                           *(_QWORD *)(*a1 + 16),
                           (_QWORD *)(*a1 + 32),
                           (_DWORD *)(*a1 + 24));
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
  {
    result = (unsigned __int64)sub_1F19370(*a1) | 4;
    *(_QWORD *)(a2 + 16) = result;
  }
  else
  {
    v2 = *(_QWORD *)(*a1 + 8);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 13072))-- - 8);
    *(_QWORD *)(a2 + 16) = v3 & 0xFFFFFFFFFFFFFFFBLL;
    return v3 & 0xFFFFFFFFFFFFFFFBLL;
  }
  return result;
}

__int64 __fastcall sub_1AEC890(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)v1
    && (v2 = *(_QWORD *)(a1 + 336) + 6776 * v1 - 6776, *(_QWORD *)(v2 + 6768) == *(_QWORD *)(a1 + 328))
    && (v4 = *(unsigned int *)(v2 + 8), v5 = *(unsigned int *)(a1 + 27504), (unsigned int)v4 > (unsigned int)v5)
    && (v6 = v4 - v5) != 0
    && (v7 = *(_QWORD *)v2 + 1688 * (v6 - 1)) != 0
    && *(_BYTE *)(v7 + 1072) )
  {
    return *(_QWORD *)(v7 + 1056);
  }
  else
  {
    return 0;
  }
}

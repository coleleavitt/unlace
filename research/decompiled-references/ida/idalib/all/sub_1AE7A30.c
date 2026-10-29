__int64 __fastcall sub_1AE7A30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)v1
    && (v2 = *(_QWORD *)(a1 + 336) + 6776 * v1 - 6776, *(_QWORD *)(v2 + 6768) == *(_QWORD *)(a1 + 328))
    && *(_DWORD *)(v2 + 8) > *(_DWORD *)(a1 + 27504) )
  {
    return *(unsigned int *)(sub_1AE5FF0(a1) + 932);
  }
  else
  {
    return 0;
  }
}

void __fastcall sub_3F1070(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3
    && sub_11E300((unsigned int *)a3)
    && *(_BYTE *)(a3 + 64) == 1
    && *(_DWORD *)(a1 + 656) == *(_DWORD *)(a3 + 72)
    && (*(_DWORD *)a3 != 4 || *(_BYTE *)(a3 + 32) != 1 || *(_DWORD *)(a1 + 660) != *(_DWORD *)(a3 + 40)) )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 920) + 192LL) |= 2u;
  }
}

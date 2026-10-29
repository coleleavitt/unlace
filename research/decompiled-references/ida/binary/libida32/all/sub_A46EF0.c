unsigned __int64 __fastcall sub_A46EF0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_F3BFD0(
    a3,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 32),
    (unsigned __int8)BYTE2(*(_DWORD *)(a2 - 8)) >> 7,
    HIBYTE(*(_DWORD *)(a2 - 8)) & 1);
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}


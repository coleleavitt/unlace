__int64 __fastcall sub_367780(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = netnode_supprev(
                          *(unsigned int *)(a1 + 40),
                          *(unsigned int *)(a1 + 72),
                          *(unsigned __int8 *)(a1 + 8));
  return 0;
}


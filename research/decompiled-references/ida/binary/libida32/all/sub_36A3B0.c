__int64 __fastcall sub_36A3B0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = (unsigned __int8)op_enum(
                                           *(unsigned int *)(a1 + 8),
                                           *(unsigned int *)(a1 + 40),
                                           *(unsigned int *)(a1 + 72),
                                           *(unsigned __int8 *)(a1 + 104));
  return 0;
}


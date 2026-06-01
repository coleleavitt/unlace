__int64 __fastcall sub_36A220(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = (unsigned __int8)set_op_type(
                                           *(unsigned int *)(a1 + 8),
                                           0x11111101100000LL,
                                           *(unsigned int *)(a1 + 40));
  return 0;
}


__int64 __fastcall sub_36DBA0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_op_type(
                                           *(_QWORD *)(a1 + 8),
                                           0x66666606600000LL,
                                           *(unsigned int *)(a1 + 40));
  return 0;
}

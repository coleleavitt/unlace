__int64 __fastcall sub_36DCB0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = (unsigned __int8)op_enum(
                                           *(_QWORD *)(a1 + 8),
                                           *(unsigned int *)(a1 + 40),
                                           *(_QWORD *)(a1 + 72),
                                           *(unsigned __int8 *)(a1 + 104));
  return 0;
}

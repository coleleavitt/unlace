__int64 __fastcall sub_36DA10(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = (unsigned __int8)del_items(
                                           *(_QWORD *)(a1 + 8),
                                           *(unsigned int *)(a1 + 40),
                                           *(_QWORD *)(a1 + 72),
                                           0);
  return 0;
}

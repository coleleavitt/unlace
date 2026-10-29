__int64 __fastcall sub_36CFD0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = rotate_left(
                          *(_QWORD *)(a1 + 8),
                          *(unsigned int *)(a1 + 40),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 104));
  return 0;
}

__int64 __fastcall sub_3676F0(__int64 a1, __int64 a2)
{
  int *v2; // rax

  v2 = *(int **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = *v2;
  *v2 = *(_QWORD *)(a1 + 40);
  return 0;
}

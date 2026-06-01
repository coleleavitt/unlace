__int64 __fastcall sub_3699B0(__int64 a1, __int64 a2)
{
  void *v2; // rax

  v2 = (void *)getseg(*(unsigned int *)(a1 + 8));
  *(_DWORD *)(a2 + 8) = move_segm(v2);
  return 0;
}


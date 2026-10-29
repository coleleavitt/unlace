__int64 __fastcall enable_flags(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  void *v5; // [rsp+8h] [rbp-10h]

  v5 = (void *)__readfsqword(0x28u);
  v4 = __PAIR64__(a2, a1);
  return sub_3BB410(*(_QWORD *)(qword_2CA1698 + 1480), &v4, a3, 0);
}


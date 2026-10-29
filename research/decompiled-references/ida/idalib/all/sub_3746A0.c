__int64 __fastcall sub_3746A0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v5; // r13
  void *v6; // rax
  char _0[4104]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars1008; // [rsp+1008h] [rbp+1008h]

  vars1008 = __readfsqword(0x28u);
  memset(_0, 0, 0x1000u);
  qdirname(_0);
  v2 = strlen(_0);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v3 = v2;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v2 )
  {
    v5 = v2 + 1;
    v6 = (void *)qvector_reserve(a2 + 8, 0, v2 + 1, 1);
    *(_QWORD *)(a2 + 8) = v6;
    *(_QWORD *)(a2 + 16) = v5;
    memmove(v6, _0, v3);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v3) = 0;
  }
  return 0;
}

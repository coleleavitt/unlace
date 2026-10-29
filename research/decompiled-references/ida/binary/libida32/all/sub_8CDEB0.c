__int64 __fastcall sub_8CDEB0(__int64 a1)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbp
  void *v4; // rax
  char v6[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( !getcwd(v6, 0x1000u) )
    v6[0] = 0;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v1 = strlen(v6);
  v2 = v1 + 1;
  v3 = v1;
  v4 = (void *)qvector_reserve(a1, 0, v1 + 1, 1);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v2;
  memmove(v4, v6, v3);
  *(_BYTE *)(*(_QWORD *)a1 + v3) = 0;
  return a1;
}


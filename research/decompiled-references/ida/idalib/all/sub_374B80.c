__int64 __fastcall sub_374B80(_QWORD *a1, __int64 a2)
{
  const char *v2; // rax
  size_t v3; // rax
  size_t v4; // r12
  size_t v6; // r13
  void *v7; // rax
  char _0[4104]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars1008; // [rsp+1008h] [rbp+1008h]

  vars1008 = __readfsqword(0x28u);
  memset(_0, 0, 0x1000u);
  v2 = haystack;
  if ( a1[2] )
    v2 = (const char *)a1[1];
  search_path(_0, 4096, v2, a1[5] != 0);
  v3 = strlen(_0);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v4 = v3;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v6 = v3 + 1;
    v7 = (void *)qvector_reserve(a2 + 8, 0, v3 + 1, 1);
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)(a2 + 16) = v6;
    memmove(v7, _0, v4);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v4) = 0;
  }
  return 0;
}

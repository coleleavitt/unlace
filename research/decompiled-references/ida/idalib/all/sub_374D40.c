__int64 __fastcall sub_374D40(_QWORD *a1, __int64 a2)
{
  bool v2; // zf
  const char *v3; // rcx
  const char *v4; // rax
  size_t v5; // rax
  size_t v6; // r12
  size_t v8; // r13
  void *v9; // rax
  char _0[4104]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars1008; // [rsp+1008h] [rbp+1008h]

  vars1008 = __readfsqword(0x28u);
  v2 = a1[6] == 0;
  memset(_0, 0, 0x1000u);
  v3 = haystack;
  if ( !v2 )
    v3 = (const char *)a1[5];
  v4 = haystack;
  if ( a1[2] )
    v4 = (const char *)a1[1];
  qmakefile(_0, 4096, v4, v3);
  v5 = strlen(_0);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v6 = v5;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    v8 = v5 + 1;
    v9 = (void *)qvector_reserve(a2 + 8, 0, v5 + 1, 1);
    *(_QWORD *)(a2 + 8) = v9;
    *(_QWORD *)(a2 + 16) = v8;
    memmove(v9, _0, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
  }
  return 0;
}

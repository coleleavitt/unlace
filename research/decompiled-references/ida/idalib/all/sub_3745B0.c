__int64 __fastcall sub_3745B0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v3; // rax
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r13
  void *v8; // rax
  char _0[4104]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars1008; // [rsp+1008h] [rbp+1008h]

  vars1008 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 16) == 0;
  memset(_0, 0, 0x1000u);
  v3 = haystack;
  if ( !v2 )
    v3 = *(const char **)(a1 + 8);
  qmake_full_path(_0, 4096, v3);
  v4 = strlen(_0);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v5 = v4;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v7 = v4 + 1;
    v8 = (void *)qvector_reserve(a2 + 8, 0, v4 + 1, 1);
    *(_QWORD *)(a2 + 8) = v8;
    *(_QWORD *)(a2 + 16) = v7;
    memmove(v8, _0, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}

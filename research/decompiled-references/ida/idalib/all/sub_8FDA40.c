__int64 __fastcall sub_8FDA40(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbp
  void *v6; // rax
  _BYTE v8[48]; // [rsp+0h] [rbp-1068h] BYREF
  char s[4104]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1038h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_838D50(a3, (__int64)v8, 33);
  qdirname(s);
  qmakepath((unsigned int)s, 4096, (unsigned int)s, (unsigned int)".vault", (unsigned int)v8, 0);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (void *)qvector_reserve(a1, 0, v3 + 1, 1);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v4;
  memmove(v6, s, v5);
  *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  return a1;
}

__int64 *__fastcall sub_17A0050(__int64 a1, _QWORD *a2, _BYTE *a3, __int64 a4)
{
  __int64 *v4; // rbp
  unsigned __int64 v5; // rax

  v4 = nullptr;
  v5 = sub_179FCF0(*(_QWORD *)a1, a2, a3, a4);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v4 = sub_A81910(a2, v5, 0);
    sub_179CB10(*(_QWORD *)a1, (unsigned int *)(a1 + 8), *v4, (unsigned __int64)(v4 + 1));
  }
  return v4;
}

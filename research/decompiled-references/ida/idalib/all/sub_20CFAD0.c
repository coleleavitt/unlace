void *__fastcall sub_20CFAD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // r15
  _BYTE *v5; // r12
  void *v6; // rax
  void *v7; // rcx

  v3 = a1 + 816;
  v4 = *(_BYTE **)(v3 - 792);
  v5 = (_BYTE *)(8 * a2 + *(_QWORD *)(v3 - 800));
  v6 = (void *)sub_20CF970(v3, (int)v4 - (int)v5);
  v7 = v6;
  if ( v5 != v4 )
    v7 = memmove(v6, v5, v4 - v5);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 16) + 8 * a2;
  return v7;
}

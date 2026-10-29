__int64 __fastcall sub_53DC50(__int64 a1, const char *a2)
{
  size_t v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  QT::QString::fromUtf8(ptr, v2, a2);
  v3 = *(_QWORD *)(a1 + 40);
  if ( !v3
    || (v4 = v3 + 8, v5 = (_QWORD *)(v3 + 16), v5 == sub_53DBB0(v4, (__int64)ptr))
    || (v6 = sub_53DBB0(v4, (__int64)ptr), v5 == v6) )
  {
    v7 = 0;
  }
  else
  {
    v7 = v6[7];
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v7;
}

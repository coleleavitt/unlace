bool __fastcall sub_1E5F370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 v4; // r12
  bool result; // al
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp

  for ( i = a2; ; i = *(_QWORD *)(v8 + 40) )
  {
    v6 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v7 = sub_F6A5F0(*v6, a2, a3);
    v8 = v7;
    if ( !v7 )
      break;
    v4 = sub_F6AC00(v7);
    if ( v4 != sub_F6AC00(*v6) )
      break;
    result = sub_F5E2E0(v8);
    if ( result )
      return result;
  }
  return 0;
}

__int64 __fastcall sub_429B60(__int64 a1, __int64 a2, unsigned int a3)
{
  const char *v3; // r13
  __int64 v5; // rax
  __int64 result; // rax

  v3 = &s1;
  if ( *(_QWORD *)(a1 + 2336) )
    v3 = *(const char **)(a1 + 2328);
  v5 = sub_5313F0(unk_8CA798);
  if ( v5 )
    sub_537630(v5, 1, v3);
  result = sub_51F0E0(a1, a2, a3);
  if ( (_BYTE)result && a3 == 4 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      return sub_4297C0((unsigned int *)a1, nullptr, a2);
  }
  return result;
}

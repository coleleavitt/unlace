unsigned __int64 __fastcall sub_B971E0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  _QWORD *v3; // rdx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0;
  if ( v1 && (v1 & 4) != 0 )
  {
    v3 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v3 )
      return *v3 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}

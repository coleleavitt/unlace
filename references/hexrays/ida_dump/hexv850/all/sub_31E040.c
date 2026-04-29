__int64 __fastcall sub_31E040(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax

  v3 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v3 > 0x3A )
    return 0;
  v5 = 0x409001800000000LL;
  if ( _bittest64(&v5, v3) )
    return 1;
  if ( (_DWORD)v3 == 57 )
  {
    if ( *(_QWORD *)(a1 + 24) != a2 )
    {
      v6 = sub_27EFA0(a1, a2, nullptr);
      return sub_31D800(a3, (__int64 *)(v6 + 64));
    }
    return 0;
  }
  if ( (unsigned int)(v3 - 22) > 9 )
    return 0;
  v8 = *(_QWORD *)(a1 + 24);
  if ( a2 == v8 )
    v8 = *(_QWORD *)(a1 + 32);
  return sub_31D800(a3, (__int64 *)(v8 + 48));
}

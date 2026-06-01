__int64 __fastcall sub_692AB0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax

  sub_6927C0(a1, a2, a3);
  v3 = *(_QWORD *)(a1 + 4408);
  if ( v3 )
    result = *(unsigned int *)(v3 - 4);
  else
    result = 0;
  if ( *(_DWORD *)(a1 + 4456) == (_DWORD)result && *(_BYTE *)(a1 + 4808) )
  {
    v5 = *(_QWORD *)(a1 + 4824);
    if ( v5 )
      return *(unsigned int *)(v5 - 4);
    else
      return 0;
  }
  return result;
}


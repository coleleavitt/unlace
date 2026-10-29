__int64 __fastcall sub_640910(__int64 a1)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // r12
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 <= 1 )
    return 0;
  v2 = *(_BYTE **)a1;
  v3 = *(_QWORD *)a1 + v1 - 1;
  v4 = *(_QWORD *)a1 + 2LL;
  while ( v4 < v3 && sub_640880(v2, (_BYTE *)(v3 - 2)) )
    v3 -= 2LL;
  result = 0;
  if ( (unsigned __int64)v2 < v3 )
    return *(unsigned __int8 *)(v3 - 1);
  return result;
}


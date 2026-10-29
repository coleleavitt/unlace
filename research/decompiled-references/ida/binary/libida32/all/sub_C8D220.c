__int64 __fastcall sub_C8D220(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rax
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 584);
  if ( (_BYTE)v2 )
    return v2;
  v4 = sub_CC4E50(*(_QWORD *)(a1 + 488));
  if ( !v4 )
    return v2;
  v5[0] = a2 | 4;
  return (unsigned int)sub_C83980((_QWORD *)a1, v4, v5);
}


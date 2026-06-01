__int64 __fastcall sub_C90A80(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rax
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 1360);
  if ( (_BYTE)v2 )
    return v2;
  v4 = sub_CC4E50(*(_QWORD *)(a1 + 1264));
  if ( !v4 )
    return v2;
  v5[0] = a2 | 4;
  return (unsigned int)sub_CE1DA0(a1, v4, v5);
}


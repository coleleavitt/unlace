__int64 __fastcall sub_517FB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  v7 = __readfsqword(0x28u);
  v3 = sub_698F20(*(_QWORD *)(v2 + 1480), a2, 0, 0);
  result = sub_5185C0(a1, v3, 0);
  if ( !result )
  {
    netnode_check(&v6, a2, 0, 0);
    v5 = 0xFFFFFFFFLL;
    if ( (unsigned __int8)sub_79B370(*a1, &v6) )
      v5 = (unsigned int)sub_3B9110(*(_QWORD **)(*a1 + 1480LL), v6);
    return sub_5185C0(a1, v5, 0);
  }
  return result;
}


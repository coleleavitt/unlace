__int64 __fastcall sub_4CA4A0(unsigned int *a1)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  __int64 v7; // r12
  int v8; // r14d

  if ( (*(_BYTE *)(*(_QWORD *)a1 + 772LL) & 1) == 0 )
    return 1;
  v3 = use_mapping(a1[11]);
  v4 = a1[12];
  v5 = v3;
  if ( !(_DWORD)v4 )
  {
    if ( a1[11] != v3 && (debug & 2) != 0 )
      sub_383DA0();
    a1[11] = v3;
    return 1;
  }
  v6 = use_mapping(v4);
  v7 = sub_4EE820(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 1552LL, a1[6]);
  v8 = sub_4F8EA0(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), v7, a1[11] - a1[12]);
  if ( v8 == (unsigned int)sub_4F8EA0(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), v7, v5 - v6) )
  {
    if ( a1[12] != v6 && (debug & 2) != 0 )
      sub_383DA0();
    a1[11] = v5;
    a1[12] = v6;
    return 1;
  }
  if ( (debug & 2) != 0 )
    sub_383DA0();
  return 0;
}


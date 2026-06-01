__int64 __fastcall sub_6A9640(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  v7 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(v2 + 1480);
  netnode_check(&v6, a2, 0, 0);
  v4 = sub_3B9110(v3, v6);
  if ( !(unsigned int)sub_79B3A0(*(_QWORD *)(*a1 + 1480LL) + 2348LL, *a1, v4, 345) )
    return (unsigned int)-1;
  return v4;
}


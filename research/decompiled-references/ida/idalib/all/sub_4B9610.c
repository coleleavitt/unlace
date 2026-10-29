__int64 __fastcall sub_4B9610(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  int v10; // r13d
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = 0;
  v7 = a1[3];
  v8 = *a1;
  v12[1] = __readfsqword(0x28u);
  v12[0] = v7;
  v10 = sub_7BE710(v12, v8, 1, 65);
  if ( v10 )
  {
    while ( !(unsigned __int8)sub_4B8DE0(*a1, a2, a1[3], v6)
         || (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 40) + 8LL))(*(_QWORD *)(a2 + 40), a1[2]) != a4 )
    {
      if ( ++v6 == v10 )
        return (unsigned int)-1;
    }
    if ( a3 )
      netnode_qsupstr(a1[3], a3, v6, 82);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

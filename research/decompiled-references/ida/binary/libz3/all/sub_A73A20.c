__int64 __fastcall sub_A73A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // r13
  unsigned int v7; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(_QWORD **)(a1 + 64);
  v7 = sub_B39350(a2, *(unsigned int *)(*v6 + 8LL));
  if ( v7 == -1 )
    return 0;
  v9 = v7;
  if ( !(unsigned __int8)sub_FFAE60(v6[63]) )
    return 0;
  v10 = sub_FF9FB0(v6[63], v9);
  return sub_FFB810(v6[63], v10, v11, a3, a4);
}


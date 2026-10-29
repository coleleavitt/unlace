__int64 __fastcall sub_9017C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r12
  _DWORD *v8; // rbx
  __int64 v9[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4FE0(a1, a2, v4, 2) || !(unsigned __int8)sub_9D7120(a1, a2, v4, 2) )
    return 0;
  sub_A1C030(v9, *(_QWORD *)(v4 + 24), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_9E4580(a1, a2, v9, 0);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = (_DWORD *)sub_8F7480(v9);
    *(_DWORD *)sub_A1A4E0(v7, 8) = *v8;
  }
  sub_A1C0C0(v9);
  return v6;
}


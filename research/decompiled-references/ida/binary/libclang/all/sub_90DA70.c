__int64 __fastcall sub_90DA70(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  char v5; // r14
  __int64 v6; // rbp
  unsigned int v8; // ebx
  __int64 v9[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_BYTE *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4FE0(a1, a2, v6, 2) || !(unsigned __int8)sub_9D7120(a1, a2, v6, 2) )
    return 0;
  sub_A1C030(v9, *(_QWORD *)(v6 + 24), (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
  v8 = sub_9E26A0(a1, a2, v9);
  if ( (_BYTE)v8 )
  {
    sub_A1DB00(v9);
    *(_BYTE *)sub_8F63E0(v9) = v5;
  }
  sub_A1C0C0(v9);
  return v8;
}


__int64 __fastcall sub_901B40(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  _BYTE *v10; // rbx
  _QWORD v11[4]; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]

  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4FE0(a1, a2, v4, 2) || !(unsigned __int8)sub_9D7120(a1, a2, v4, 2) )
    return 0;
  sub_A1C030(v11, *(_QWORD *)(v4 + 24), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_9E4580(a1, a2, v11, 0);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = v11[3];
    v9 = v11[0];
    if ( !v13 && *(_BYTE *)(sub_8E5480((__int64)v11) + 51) && v9 == v12 )
      v10 = (_BYTE *)(v8 + v9 + 72);
    else
      v10 = (_BYTE *)(v8 + v9 + 40);
    *(_BYTE *)sub_A1A4E0(v7, 8) = *v10;
    sub_A1C0C0(v11);
  }
  else
  {
    sub_A1C0C0(v11);
  }
  return v6;
}


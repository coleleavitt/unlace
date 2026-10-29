__int64 __fastcall sub_90E7C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r12
  _QWORD v13[4]; // [rsp+0h] [rbp-C8h] BYREF
  int v14; // [rsp+20h] [rbp-A8h]
  int v15; // [rsp+30h] [rbp-98h]
  _BYTE v16[56]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+78h] [rbp-50h]
  int v18; // [rsp+80h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 72);
  sub_A1C070(v16, v5);
  v17 = *(_QWORD *)(v5 + 56);
  v18 = *(_DWORD *)(v5 + 64);
  sub_A1A5E0(v4, 72);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v6, 2) && (unsigned __int8)sub_9D7120(a1, a2, v6, 2) )
  {
    sub_A1C030(v13, *(_QWORD *)(v6 + 24), (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
    v7 = sub_9E26A0(a1, a2, v13);
    if ( (_BYTE)v7 )
    {
      sub_A1DB00(v13);
      v10 = v13[3];
      v11 = v13[0];
      if ( !v15 && *(_BYTE *)(sub_8E5480((__int64)v13) + 51) && v11 == v14 )
        v12 = v10 + v11 + 72;
      else
        v12 = v10 + v11 + 40;
      sub_A1C120(v12, v16, v9);
      *(_QWORD *)(v12 + 56) = v17;
      *(_DWORD *)(v12 + 64) = v18;
      sub_A1C0C0(v13);
    }
    else
    {
      sub_A1C0C0(v13);
    }
  }
  else
  {
    v7 = 0;
  }
  sub_A1C0C0(v16);
  return v7;
}


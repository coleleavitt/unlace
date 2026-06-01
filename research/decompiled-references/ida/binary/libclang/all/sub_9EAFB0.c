__int64 __fastcall sub_9EAFB0(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rbx
  _QWORD v12[4]; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]

  v4 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9E1180(a1, a2, (__int64)v4) || !(unsigned __int8)sub_9E1270(a1, a2, *v4) )
    return 0;
  sub_A1C030(v12, v4[3], (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_9E82D0(a1, a2, (__int64)v12);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = v12[3];
    v9 = v12[0];
    if ( !v14 && *(_BYTE *)(sub_8E5480((__int64)v12) + 51) && v9 == v13 )
      v10 = v8 + v9 + 72;
    else
      v10 = v8 + v9 + 40;
    v11 = sub_A1A4E0(v7, 72);
    sub_A1BFE0(v11, v10);
    *(_QWORD *)(v11 + 56) = *(_QWORD *)(v10 + 56);
    *(_DWORD *)(v11 + 64) = *(_DWORD *)(v10 + 64);
    sub_A1C0C0(v12);
  }
  else
  {
    sub_A1C0C0(v12);
  }
  return v6;
}


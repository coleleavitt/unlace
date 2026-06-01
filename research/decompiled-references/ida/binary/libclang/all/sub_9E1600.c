__int64 __fastcall sub_9E1600(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int64 v9[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v10[104]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v9, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9E1180(a1, a2, (__int64)v9) && (v6 = sub_9E1270(a1, a2, v9[0]), (_BYTE)v6) )
  {
    sub_A1C030(v10, v9[3], (unsigned int)(a3 + LODWORD(v9[0])), (unsigned int)(a3 + LODWORD(v9[0])));
    nullsub_98(v9);
    sub_A1C490(v10);
    v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1C070(v8, v10);
    sub_A1C0C0(v10);
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v9);
  return v6;
}


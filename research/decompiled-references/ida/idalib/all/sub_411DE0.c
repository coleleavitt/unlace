unsigned __int64 __fastcall sub_411DE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  bool v5; // zf
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  char v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 2321) == 0;
  v16 = __readfsqword(0x28u);
  if ( !v5 )
    sub_411C80(a1, a2, a3, a4);
  v7 = sub_3BDD60((_QWORD *)a1, a2);
  v8 = sub_3BDD60((_QWORD *)a1, a3);
  v14 = v7;
  v9 = *(_QWORD *)a1;
  v10 = v8;
  if ( a4 )
  {
    sub_7BE850(&v14, v9, v8, 4196);
    v11 = 4164;
  }
  else
  {
    sub_7BE850(&v14, v9, v8, 4216);
    v11 = 4184;
  }
  v12 = *(_QWORD *)a1;
  v14 = v10;
  sub_7BE850(&v14, v12, v7, v11);
  v14 = -1;
  v15 = 0;
  if ( !(unsigned __int8)sub_3E2000((_QWORD *)a1, (__int64)&v14, a3)
    && !(unsigned __int8)sub_4108F0((_QWORD *)a1, (__int64)&v14, a3) )
  {
    sub_3D0150(a1, a3);
  }
  return v16 - __readfsqword(0x28u);
}

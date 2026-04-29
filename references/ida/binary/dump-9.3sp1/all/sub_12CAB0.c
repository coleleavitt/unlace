__int64 __fastcall sub_12CAB0(unsigned __int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int8 v15[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v5 = a1[12];
  v16 = __readfsqword(0x28u);
  v6 = a4;
  if ( *(_BYTE *)(v5 + 145) )
    v6 = -(int)a4;
  sub_123A40((__int64)v15, a2, (__int64)a3, a4);
  sub_12C760((__int64)v15, a1, -1, v6);
  v7 = sub_339CA0();
  LOBYTE(v8) = sub_1255D0(v15, v7, (__int64)a3, 0);
  v9 = v8;
  if ( !(_BYTE)v8 )
  {
    sub_11CDA0((__int64)v15);
    sub_123A40((__int64)v15, a3, v11, v12);
    sub_12C760((__int64)v15, a1, -1, -v6);
    v13 = sub_339CA0();
    LOBYTE(v14) = sub_1255D0(v15, v13, (__int64)a2, 0);
    v9 = v14;
  }
  sub_11CDA0((__int64)v15);
  return v9;
}

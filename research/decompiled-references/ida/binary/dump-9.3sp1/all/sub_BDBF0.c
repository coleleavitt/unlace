__int64 __fastcall sub_BDBF0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v8[4]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+4h] [rbp-44h]
  __int64 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_123A40(v8);
  v4 = sub_BDAD0(a1, (__int64)v8, 0);
  if ( (_BYTE)v4
    && v8[0] == 2
    && (v6 = sub_32ABC0(*(_QWORD *)(v10 + 16), v9, 0),
        v7 = v6
           & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL) + 96LL) + 24LL) + 16LL),
        v7 == v6) )
  {
    if ( a3 )
      *a3 = v7;
  }
  else
  {
    v4 = 0;
  }
  sub_11CDA0(v8);
  return v4;
}

__int64 __fastcall sub_1652B0(__int128 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  _BYTE *v4; // r12
  _QWORD v5[2]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v6; // [rsp+10h] [rbp-80h] BYREF
  __int128 v7; // [rsp+18h] [rbp-78h]
  _QWORD v8[2]; // [rsp+30h] [rbp-60h] BYREF
  _QWORD v9[10]; // [rsp+40h] [rbp-50h] BYREF

  v9[3] = __readfsqword(0x28u);
  v1 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = v5;
  v6 = 0;
  v5[0] = 0;
  v5[1] = 0;
  v7 = 0;
  sub_120460(a1, v1, 0, 0xFFFF0000);
  if ( (unsigned __int8)sub_60E40(v5) && !(_QWORD)v7
    || !(unsigned __int8)sub_60DE0(v5, (_QWORD *)(a1 + 200))
    || !(unsigned __int8)sub_313DC0(a1 + 216, &v6) )
  {
    goto LABEL_3;
  }
  v4 = (_BYTE *)sub_125710(a1, v5, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0, nullptr, 0, 0x101u);
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_37EEE0(52499);
    BUG();
  }
  if ( !sub_11C940(v4, 0) && (v4[6] & 2) == 0 && (unsigned __int8)sub_32AA30(*(unsigned int *)v4) )
  {
    sub_123FE0((__int64)v8, a1, (__int64)v4, 0);
    if ( !(unsigned __int8)sub_60DE0(v5, v8) || (v2 = sub_313DC0(v9, &v6), !(_BYTE)v2) )
    {
      v2 = sub_60DE0(v8, v5);
      if ( (_BYTE)v2 )
        v2 = sub_313DC0(&v6, v9);
    }
    if ( v9[0] )
    {
      v9[1] = 0;
      qfree(v9[0]);
    }
    qfree(v8[0]);
  }
  else
  {
LABEL_3:
    v2 = 0;
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  qfree(v5[0]);
  return v2;
}

__int64 __fastcall sub_168CF0(__int128 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  _BYTE *v4; // r12
  int v5; // r8d
  int v6; // r9d
  __int64 v7[2]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v8; // [rsp+10h] [rbp-80h] BYREF
  __int128 v9; // [rsp+18h] [rbp-78h]
  __int64 v10[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v11[10]; // [rsp+40h] [rbp-50h] BYREF

  v11[3] = __readfsqword(0x28u);
  v1 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = v7;
  v8 = 0;
  v7[0] = 0;
  v7[1] = 0;
  v9 = 0;
  sub_123EA0(a1, v1, 0, 0xFFFF0000);
  if ( (unsigned __int8)sub_64880(v7) && !(_QWORD)v9
    || !(unsigned __int8)sub_64820(v7, (_QWORD *)(a1 + 200))
    || !(unsigned __int8)sub_317F40(a1 + 216, &v8) )
  {
    goto LABEL_3;
  }
  v4 = (_BYTE *)sub_129150(a1, v7, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0, 0, 0, 0x101u);
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(52499);
    BUG();
  }
  if ( !sub_120380(v4, 0) && (v4[6] & 2) == 0 && (unsigned __int8)sub_32ED70(*(unsigned int *)v4) )
  {
    sub_127A20((__int64)v10, a1, (__int64)v4, 0, v5, v6);
    if ( !(unsigned __int8)sub_64820(v7, v10) || (v2 = sub_317F40(v11, &v8), !(_BYTE)v2) )
    {
      v2 = sub_64820(v10, v7);
      if ( (_BYTE)v2 )
        v2 = sub_317F40(&v8, v11);
    }
    if ( v11[0] )
    {
      v11[1] = 0;
      qfree(v11[0]);
    }
    qfree(v10[0]);
  }
  else
  {
LABEL_3:
    v2 = 0;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  qfree(v7[0]);
  return v2;
}

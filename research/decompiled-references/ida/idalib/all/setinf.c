__int64 __fastcall setinf(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3FB5F0() )
  {
    if ( (unsigned __int8)sub_3FB5F0() )
    {
      v6 = 0;
      v4 = qword_2CCB598 + 640;
      goto LABEL_9;
    }
LABEL_10:
    if ( !under_debugger )
      interr(3123);
    BUG();
  }
  v2 = qword_2CCB598;
  if ( !(unsigned __int8)sub_3FB5F0() )
    goto LABEL_10;
  v6 = v2;
  v4 = qword_2CCB598 + 640;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 1520);
    v7 = v3;
    goto LABEL_5;
  }
LABEL_9:
  v7 = -1;
LABEL_5:
  v8 = v4;
  if ( (unsigned int)a1 > 0x63 )
    sub_629970(a1, a2, v3);
  return sub_632390(
           (__int64)&v6,
           (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a1],
           a2,
           (unsigned int)a1,
           1);
}

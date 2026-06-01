bool __fastcall getinf_flag(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3FB5F0() )
  {
    if ( (unsigned __int8)sub_3FB5F0() )
    {
      v9 = 0;
      v7 = qword_2CCB598 + 640;
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
  v9 = v2;
  v7 = qword_2CCB598 + 640;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 1520);
    v10 = v3;
    goto LABEL_5;
  }
LABEL_9:
  v10 = -1;
LABEL_5:
  v11 = v7;
  if ( (unsigned int)a1 > 0x63 )
    sub_629970(a1, a2, v3);
  return ((unsigned int)a2
        & (unsigned __int64)~sub_6317E0(
                               &v9,
                               (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a1],
                               0,
                               v4,
                               v5,
                               v6)) == 0;
}

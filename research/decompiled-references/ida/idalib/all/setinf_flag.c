bool __fastcall setinf_flag(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3FB5F0() )
  {
    if ( (unsigned __int8)sub_3FB5F0() )
    {
      v16 = 0;
      v9 = qword_2CCB598 + 640;
      goto LABEL_11;
    }
LABEL_12:
    if ( !under_debugger )
      interr(3123);
    BUG();
  }
  v4 = qword_2CCB598;
  if ( !(unsigned __int8)sub_3FB5F0() )
    goto LABEL_12;
  v16 = v4;
  v9 = qword_2CCB598 + 640;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 1520);
    v17 = v5;
    goto LABEL_5;
  }
LABEL_11:
  v17 = -1;
LABEL_5:
  v18 = v9;
  if ( (unsigned int)a1 > 0x63 )
    sub_629970(a1, a2, v5);
  v10 = sub_6317E0(&v16, (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a1], 0, v6, v7, v8);
  v11 = v10 | a2;
  v12 = v10 & ~(_DWORD)a2;
  v13 = ~v10;
  v14 = v11;
  if ( !a3 )
    v14 = v12;
  sub_632390((__int64)&v16, (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a1], v14, (unsigned int)a1, 1);
  return ((unsigned int)a2 & v13) == 0;
}

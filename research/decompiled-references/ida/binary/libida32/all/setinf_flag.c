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
  int v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3E8690() )
  {
    if ( (unsigned __int8)sub_3E8690() )
    {
      v16 = 0;
      v9 = qword_2CA1698 + 552;
      goto LABEL_11;
    }
LABEL_12:
    if ( !under_debugger )
      interr(3123);
    BUG();
  }
  v4 = qword_2CA1698;
  if ( !(unsigned __int8)sub_3E8690() )
    goto LABEL_12;
  v16 = v4;
  v9 = qword_2CA1698 + 552;
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 + 1332);
    v17 = *(_DWORD *)(v4 + 1332);
    goto LABEL_5;
  }
LABEL_11:
  v17 = -1;
LABEL_5:
  v18 = v9;
  if ( (unsigned int)a1 > 0x63 )
    sub_60D510(a1, a2, v5);
  v10 = sub_614CE0((__int64)&v16, (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)a1], 0, v6, v7, v8);
  v11 = v10 | a2;
  v12 = v10 & ~(_DWORD)a2;
  v13 = ~v10;
  v14 = v11;
  if ( !a3 )
    v14 = v12;
  sub_615840((__int64)&v16, (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)a1], v14, (unsigned int)a1, 1);
  return ((unsigned int)a2 & v13) == 0;
}


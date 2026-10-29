__int64 __fastcall setinf(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3E8690() )
  {
    if ( (unsigned __int8)sub_3E8690() )
    {
      v6 = 0;
      v4 = qword_2CA1698 + 552;
      goto LABEL_9;
    }
LABEL_10:
    if ( !under_debugger )
      interr(3123);
    BUG();
  }
  v2 = qword_2CA1698;
  if ( !(unsigned __int8)sub_3E8690() )
    goto LABEL_10;
  v6 = v2;
  v4 = qword_2CA1698 + 552;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 + 1332);
    v7 = *(_DWORD *)(v2 + 1332);
    goto LABEL_5;
  }
LABEL_9:
  v7 = -1;
LABEL_5:
  v8 = v4;
  if ( (unsigned int)a1 > 0x63 )
    sub_60D510(a1, a2, v3);
  return sub_615840(
           (__int64)&v6,
           (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)a1],
           a2,
           (unsigned int)a1,
           1);
}


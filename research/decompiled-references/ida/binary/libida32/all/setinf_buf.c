__int64 __fastcall setinf_buf(__int64 a1, const char *a2, size_t a3)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3E8690() )
  {
    if ( (unsigned __int8)sub_3E8690() )
    {
      v9 = 0;
      v7 = qword_2CA1698 + 552;
      goto LABEL_9;
    }
LABEL_10:
    if ( !under_debugger )
      interr(3123);
    BUG();
  }
  v4 = qword_2CA1698;
  if ( !(unsigned __int8)sub_3E8690() )
    goto LABEL_10;
  v9 = v4;
  v7 = qword_2CA1698 + 552;
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 + 1332);
    v10 = *(_DWORD *)(v4 + 1332);
    goto LABEL_5;
  }
LABEL_9:
  v10 = -1;
LABEL_5:
  v11 = v7;
  if ( (unsigned int)a1 > 0x63 )
    sub_60D510(a1, a2, v5);
  return sub_615C80(
           (const char *)&v9,
           (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)a1],
           a2,
           a3,
           (unsigned int)a1,
           v6);
}


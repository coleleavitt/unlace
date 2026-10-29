__int64 __fastcall bookmarks_t_get_desc(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v8[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+30h] [rbp-28h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_4A2850(v8, qword_2CA1698, a2, a4, 0);
  v5 = v10 & 1;
  if ( (v10 & 1) != 0 && (v7 = v9, a3 < (unsigned int)sub_79B3A0(&v7, v8[0], 1, 65)) )
  {
    if ( a1 )
      netnode_qsupstr(v9, a1, a3, 82);
  }
  else
  {
    v5 = 0;
  }
  qfree((void *)v8[1]);
  return v5;
}


__int64 __fastcall bookmarks_t_get_desc(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9[3]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  char v11; // [rsp+34h] [rbp-24h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_4B7DA0(v9, qword_2CCB598, a2, a4, 0, a5);
  v6 = v11 & 1;
  if ( (v11 & 1) != 0 && (v8 = v10, a3 < (unsigned int)sub_7BE710(&v8, v9[0], 1, 65)) )
  {
    if ( a1 )
      netnode_qsupstr(v10, a1, a3, 82);
  }
  else
  {
    v6 = 0;
  }
  qfree((void *)v9[1]);
  return v6;
}

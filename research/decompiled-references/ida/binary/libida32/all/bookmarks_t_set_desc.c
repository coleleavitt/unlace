__int64 __fastcall bookmarks_t_set_desc(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v7; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v8[3]; // [rsp+10h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_4A2850(v8, qword_2CA1698, a2, a4, 0);
  v5 = v10 & 1;
  if ( (v10 & 1) != 0 && (v7 = v9, a3 < (unsigned int)sub_79B3A0(&v7, v8[0], 1, 65)) )
  {
    if ( a1[1] )
      sub_4A2090(v8, a3, *a1);
    else
      sub_4A2090(v8, a3, (__int64)haystack);
  }
  else
  {
    v5 = 0;
  }
  qfree((void *)v8[1]);
  return v5;
}


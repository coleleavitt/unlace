__int64 __fastcall bookmarks_t_set_desc(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  __int64 v9[4]; // [rsp+10h] [rbp-58h] BYREF
  char v10; // [rsp+34h] [rbp-34h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_4B7DA0(v9, qword_2CCB598, a2, a4, 0, a5);
  v6 = v10 & 1;
  if ( (v10 & 1) != 0 && (v8 = v9[3], a3 < (unsigned int)sub_7BE710(&v8, v9[0], 1, 65)) )
  {
    if ( a1[1] )
      sub_4B7750(v9, a3, *a1);
    else
      sub_4B7750(v9, a3, (__int64)haystack);
  }
  else
  {
    v6 = 0;
  }
  qfree((void *)v9[1]);
  return v6;
}

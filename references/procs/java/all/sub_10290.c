__int64 __fastcall sub_10290(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  if ( get_name_expr(&v13, a2, a3, a5 + a4, a5, 1) <= 0 )
  {
    v8 = a1[30];
    remember_problem(2, v8, 0);
    v11 = 0;
  }
  else
  {
    v7 = tag_strlen(v13);
    v8 = v13;
    v11 = 1;
    if ( (unsigned __int8)sub_FDF0(a1, v13, v7) )
    {
      *a6 = 1;
      v11 = 0;
    }
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v8, v9, v10);
  }
  return v11;
}

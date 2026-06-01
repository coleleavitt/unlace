unsigned __int64 __fastcall set_str_type(unsigned __int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = a2 + 1;
  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( a1 != -1 )
    a1 = sub_3B9DC0(*(_QWORD **)(qword_2CCB598 + 1672), a1);
  v5 = a1;
  sub_7BE7C0(&v5, *v2, 16, &v4, 4, 65);
  return v6 - __readfsqword(0x28u);
}

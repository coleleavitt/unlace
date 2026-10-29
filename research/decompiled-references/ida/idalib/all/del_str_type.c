unsigned __int64 __fastcall del_str_type(unsigned __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( a1 != -1 )
    a1 = sub_3B9DC0(*(_QWORD **)(qword_2CCB598 + 1672), a1);
  v3 = a1;
  sub_7BE850(&v3, *v1, 16, 65);
  return v4 - __readfsqword(0x28u);
}

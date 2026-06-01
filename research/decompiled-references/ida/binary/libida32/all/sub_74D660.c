__int64 __fastcall sub_74D660(unsigned int *a1, int *a2)
{
  int v2; // ebp
  __int64 v3; // rcx
  char *v4; // rax
  char *v5; // rdx
  unsigned int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = (int)a1;
  ++qword_2CAA5C0;
  v7 = sub_74CA00();
  if ( *qword_2CAA5C0 == 58 )
  {
    a1 = &v7;
    sub_74D3F0((int *)&v7, a2);
  }
  if ( v2 )
  {
    v4 = qword_2CAA5C0;
    v5 = ++qword_2CAA5C0;
    if ( *v4 != 36 )
      sub_74E200(a1, a2, v5, v3);
  }
  return v7;
}


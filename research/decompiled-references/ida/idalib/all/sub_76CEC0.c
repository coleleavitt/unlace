__int64 sub_76CEC0()
{
  char *v0; // rdx
  unsigned int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v0 = qword_2CD44C0;
  if ( (unsigned __int8)(*qword_2CD44C0 - 48) > 9u )
  {
    sub_76F5E0(&v2, 1);
    sub_772B70(qword_2CD44D0, &v2);
    return v2;
  }
  else
  {
    ++qword_2CD44C0;
    return *(unsigned int *)sub_772CD0(qword_2CD44D0, (unsigned int)(*v0 - 48), v0, &qword_2CD44C0);
  }
}

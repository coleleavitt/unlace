__int64 sub_74CA00()
{
  char *v0; // rdx
  unsigned int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v0 = qword_2CAA5C0;
  if ( (unsigned __int8)(*qword_2CAA5C0 - 48) > 9u )
  {
    sub_74F120(&v2, 1);
    sub_7526B0(qword_2CAA5D0, &v2);
    return v2;
  }
  else
  {
    ++qword_2CAA5C0;
    return *(unsigned int *)sub_752810(qword_2CAA5D0, (unsigned int)(*v0 - 48), v0, &qword_2CAA5C0);
  }
}


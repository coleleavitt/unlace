__int64 __fastcall sub_742E60(unsigned int *a1, __int64 a2, __int64 a3, char *a4)
{
  char **v4; // rdx
  unsigned int v6; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v4 = &qword_2CAA5C0;
  v8 = __readfsqword(0x28u);
  v6 = 0;
  if ( *qword_2CAA5C0 == 63 )
  {
    a2 = 45;
    a1 = &v7;
    ++qword_2CAA5C0;
    sub_74F400(&v7, 45);
    v6 = v7;
  }
  v7 = sub_742C80(a1, a2, (__int64)v4, a4);
  sub_7506B0(&v6, &v7);
  return v6;
}


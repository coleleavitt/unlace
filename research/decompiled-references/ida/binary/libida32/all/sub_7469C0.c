__int64 sub_7469C0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3 = 0;
  if ( *qword_2CAA5C0 == 90 )
  {
    ++qword_2CAA5C0;
  }
  else if ( *qword_2CAA5C0 == 69 && qword_2CAA5C0[1] == 95 )
  {
    qword_2CAA5C0 += 2;
    sub_74F560(&v4, "noexcept", 8);
    return v4;
  }
  else
  {
    sub_74F560(&v4, " throw(", 7);
    v3 = v4;
    if ( *qword_2CAA5C0 )
    {
      v4 = sub_746790(nullptr, (unsigned int *)" throw(", v0, v1);
      sub_7506B0(&v3, &v4);
    }
    sub_74F860(&v3, 41);
  }
  return v3;
}


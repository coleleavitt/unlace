__int64 sub_766E80()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3 = 0;
  if ( *qword_2CD44C0 == 90 )
  {
    ++qword_2CD44C0;
  }
  else if ( *qword_2CD44C0 == 69 && qword_2CD44C0[1] == 95 )
  {
    qword_2CD44C0 += 2;
    sub_76FA20(&v4, "noexcept", 8);
    return v4;
  }
  else
  {
    sub_76FA20(&v4, " throw(", 7);
    v3 = v4;
    if ( *qword_2CD44C0 )
    {
      v4 = sub_766C50(nullptr, (unsigned int *)" throw(", v0, v1);
      sub_770B70(&v3, &v4);
    }
    sub_76FD20(&v3, 41);
  }
  return v3;
}

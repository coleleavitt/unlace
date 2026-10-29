__int64 sub_10BEC0()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  v0 = (unsigned __int8)sub_10BCA0(3, (__int64)&v2, 1u);
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v0;
}


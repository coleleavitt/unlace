unsigned __int64 __fastcall sub_1AB10(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  __int128 v4; // [rsp+8h] [rbp-40h]
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v1 = *a1;
  v7 = __readfsqword(0x28u);
  v3 = 0;
  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(v1 + 280))(a1, &v3) )
  {
    v5 = 0;
    v6 = 0;
    sub_D6A0(&v5);
    set_name();
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v7 - __readfsqword(0x28u);
}

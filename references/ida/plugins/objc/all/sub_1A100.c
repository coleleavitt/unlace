unsigned __int64 __fastcall sub_1A100(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = *a1;
  v11 = __readfsqword(0x28u);
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(v2 + 464))(a1, &v7, a2) )
  {
    v3 = *a1;
    v4 = a1[43] + v7;
    v8 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(v3 + 136))(a1, &v8, v4) )
    {
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 168LL))(a1) )
        {
          v9 = 0;
          v10 = 0;
          sub_D6A0(&v9);
          set_name();
          if ( v9 )
          {
            *(_QWORD *)&v10 = 0;
            qfree();
          }
        }
      }
    }
    v5 = *a1;
    v8 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(v5 + 136))(a1, &v8, a1[44] + v7) )
    {
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 168LL))(a1) )
        {
          v9 = 0;
          v10 = 0;
          sub_D6A0(&v9);
          set_name();
          if ( v9 )
          {
            *(_QWORD *)&v10 = 0;
            qfree();
          }
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

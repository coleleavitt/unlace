__int64 __fastcall sub_10C580(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const char *v6; // r12
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __int128 v10; // [rsp+8h] [rbp-60h]
  const char *v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v4 = sub_105830(a1, a2, a4);
  if ( v4 <= 3 )
  {
    v5 = *(_QWORD *)(a2 + 608);
    if ( v5 )
    {
      v9 = 0;
      v10 = 0;
      if ( v5 == 1 )
      {
        v12 = 0;
        v11 = nullptr;
        get_ea_name();
        sub_94440(&v9);
        if ( v11 )
        {
          *(_QWORD *)&v12 = 0;
          qfree();
        }
      }
      else
      {
        sub_94440(&v9);
      }
      v11 = nullptr;
      v12 = 0;
      sub_94440((__int64 *)&v11);
      v6 = s1;
      if ( (_QWORD)v12 )
        v6 = v11;
      v7 = sub_19DCF0(*(_QWORD *)(a2 + 72));
      if ( v7 )
        sub_19CC00(v7, 1, v6);
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree();
      }
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
    }
    else
    {
      return 7;
    }
  }
  return v4;
}


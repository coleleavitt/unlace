__int64 __fastcall sub_5DEC0(char *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int i; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v14; // [rsp+0h] [rbp-C8h]
  __int64 v15; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-B0h]
  char *v17; // [rsp+28h] [rbp-A0h]
  unsigned int v18; // [rsp+30h] [rbp-98h]
  unsigned __int64 v19; // [rsp+38h] [rbp-90h]
  __int64 v20; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+58h] [rbp-70h]
  __int64 v22; // [rsp+60h] [rbp-68h]
  char v23; // [rsp+87h] [rbp-41h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v5 = *a2;
  v6 = *a4;
  v24 = __readfsqword(0x28u);
  if ( v5 )
  {
    *a2 = 0;
  }
  else
  {
    v5 = 1;
    a1 = &v23;
  }
  v15 = a3;
  v16 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v7 = sub_5E520(&v15, "1.3.1", 112, 0);
  if ( !v7 )
  {
    v18 = 0;
    v17 = a1;
    for ( i = 0; ; i = v18 )
    {
      if ( !i )
      {
        v9 = 0xFFFFFFFFLL;
        if ( v5 <= 0xFFFFFFFF )
          v9 = v5;
        v18 = v9;
        v5 -= v9;
      }
      if ( !v16 )
      {
        v10 = 0xFFFFFFFFLL;
        if ( v6 <= 0xFFFFFFFF )
          v10 = v6;
        v16 = v10;
        v6 -= v10;
      }
      v11 = sub_5E530(&v15, 0);
      if ( v11 )
        break;
    }
    *a4 = *a4 - v16 - v6;
    if ( a1 == &v23 )
    {
      if ( v19 && v11 == -5 )
      {
        sub_602D0(&v15);
        return (unsigned int)-3;
      }
    }
    else
    {
      *a2 = v19;
    }
    v14 = v11;
    sub_602D0(&v15);
    if ( v14 != 1 )
    {
      if ( v14 == 2 )
        return (unsigned int)-3;
      v7 = v14;
      if ( v14 == -5 )
      {
        if ( v5 + v18 )
          return (unsigned int)-3;
      }
    }
  }
  return v7;
}


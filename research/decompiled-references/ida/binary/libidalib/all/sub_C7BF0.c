__int64 __fastcall sub_C7BF0(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+Fh] [rbp-79h]
  unsigned __int8 v6; // [rsp+Fh] [rbp-79h]
  int v7; // [rsp+10h] [rbp-78h] BYREF
  __int64 v8; // [rsp+18h] [rbp-70h]
  __int128 v9; // [rsp+20h] [rbp-68h]
  int v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-48h]
  unsigned __int64 v13; // [rsp+58h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  if ( !*(_QWORD *)(a1 + 72) )
    return 1;
  if ( a3 < 0 )
    return 0;
  if ( a3 >= (unsigned __int64)xmmword_2524F8 )
    return 0;
  v3 = qword_2524F0 + 56LL * a3;
  if ( !v3 )
    return 0;
  v7 = -2;
  v8 = -1;
  v9 = 0;
  sub_C7700(qword_2524F0 + 56LL * a3, (__int64)&v7, a2);
  v10 = -2;
  v11 = -1;
  v12 = 0;
  sub_C7700(v3, (__int64)&v10, (_QWORD *)(a1 + 64));
  result = (unsigned int)sub_C61A0(&v7, (__int64)&v10) ^ 1;
  if ( v10 >= -1 && v11 )
  {
    v5 = result;
    *(_QWORD *)&v12 = 0;
    qfree();
    result = v5;
  }
  if ( v7 >= -1 )
  {
    if ( v8 )
    {
      v6 = result;
      *(_QWORD *)&v9 = 0;
      qfree();
      return v6;
    }
  }
  return result;
}


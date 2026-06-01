__int64 __fastcall sub_158DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h]
  __int128 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  tag_remove();
  v8 = -1;
  v11 = 0;
  v12 = 0;
  extract_name();
  if ( (unsigned __int8)sub_120650(&v8, s1, (a5 & 2) != 0) )
  {
    v6 = v8;
  }
  else
  {
    v8 = -1;
    v6 = -1;
  }
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
  return v6;
}


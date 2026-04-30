__int64 sub_312AB0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-428h] BYREF
  __int64 v7; // [rsp+8h] [rbp-420h] BYREF
  char v8[1032]; // [rsp+10h] [rbp-418h] BYREF
  unsigned __int64 v9; // [rsp+418h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, &v6, &v7) )
  {
    v2 = v7 - v6;
  }
  else
  {
    v5 = sub_192350(0, &v6, v0, v1);
    v3 = 0;
    v6 = v5;
    if ( v5 == -1 )
      return v3;
    v7 = v5;
    v2 = 0;
  }
  qsnprintf(v8, 1024, "%lld", v2);
  sub_312940((__int64)qword_8CD748, v8, -1);
  return 1;
}

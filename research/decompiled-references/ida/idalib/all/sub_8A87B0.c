__int64 __fastcall sub_8A87B0(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = a2;
  v4 = 3;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = serialize_json(a1, &v4, 2);
  if ( v4 != 3 )
    sub_8A7D80();
  v4 = 0;
  v5 = 0;
  jvalue_t_clear(&v4);
  if ( !v2 )
  {
    if ( !under_debugger )
      interr(3144);
    BUG();
  }
  return a1;
}

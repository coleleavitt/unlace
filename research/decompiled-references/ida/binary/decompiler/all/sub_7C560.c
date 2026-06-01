unsigned __int64 __fastcall sub_7C560(unsigned __int8 **a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  __int64 v5; // rdx
  _QWORD v7[4]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = *a1;
  if ( *a1 >= a1[1] )
    sub_79910(a1);
  v5 = *v3;
  *a1 = v3 + 1;
  if ( (v5 & 0x80u) == 0LL )
  {
    v8[0] = v5;
    copy_tinfo_t();
    clear_tinfo_t();
    return v9 - __readfsqword(0x28u);
  }
  sub_7C3F0((__int64)v7, a1);
  sub_7C3F0((__int64)v8, a1);
  if ( !(unsigned __int8)deserialize_tinfo() )
  {
    if ( !under_debugger )
      sub_37EA20(51103);
LABEL_16:
    BUG();
  }
  if ( !(unsigned __int8)sub_329720(a2, *((_QWORD *)a1[2] + 187), a3) )
  {
    if ( !under_debugger )
      sub_37EA20(52813);
    goto LABEL_16;
  }
  if ( v8[0] )
  {
    v8[1] = 0;
    qfree();
  }
  if ( v7[0] )
  {
    v7[1] = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

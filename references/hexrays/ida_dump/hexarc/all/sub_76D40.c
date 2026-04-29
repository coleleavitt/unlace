unsigned __int64 __fastcall sub_76D40(unsigned __int8 **a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v9[4]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v3 = *a1;
  if ( *a1 >= a1[1] )
    sub_73F70(a1);
  v5 = *v3;
  *a1 = v3 + 1;
  if ( (v5 & 0x80u) == 0LL )
  {
    v10[0] = v5;
    copy_tinfo_t(a2, v10);
    clear_tinfo_t(v10);
    return v11 - __readfsqword(0x28u);
  }
  sub_76BD0((__int64)v9, a1);
  sub_76BD0((__int64)v10, a1);
  v7 = v9[0];
  v8 = v10[0];
  if ( !(unsigned __int8)deserialize_tinfo(a2, 0, &v7, &v8, 0, 0) )
  {
    if ( !under_debugger )
      sub_37B760(51103);
LABEL_16:
    BUG();
  }
  if ( !(unsigned __int8)sub_325640(a2, *((_QWORD *)a1[2] + 187), a3) )
  {
    if ( !under_debugger )
      sub_37B760(52813);
    goto LABEL_16;
  }
  if ( v10[0] )
  {
    v10[1] = 0;
    qfree(v10[0]);
  }
  if ( v9[0] )
  {
    v9[1] = 0;
    qfree(v9[0]);
  }
  return v11 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_7E6F0(_BYTE *a1, unsigned int a2)
{
  char v2; // bl
  __int64 dtype_size; // rax
  const char *v4; // rsi
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = a1[252];
  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  dtype_size = get_dtype_size();
  if ( !(unsigned __int8)sub_84A20(&v6, a2, dtype_size, (v2 & 0x10) != 0) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v4 = s1;
  if ( (_QWORD)v7 )
    v4 = v6;
  (*(void (__fastcall **)(_BYTE *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

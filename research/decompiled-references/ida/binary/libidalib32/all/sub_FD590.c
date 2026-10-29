__int64 sub_FD590()
{
  __int64 v0; // rsi
  __int64 result; // rax
  _BYTE v2[10]; // [rsp+6h] [rbp-1042h] BYREF
  char v3[4104]; // [rsp+10h] [rbp-1038h] BYREF
  unsigned __int64 v4; // [rsp+1018h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  get_root_filename();
  qsnprintf();
  v0 = sub_9DAF0(1u, (__int64)v2, (__int64)"Please specify the graph output file for %s", v3);
  result = 0;
  if ( v0 )
  {
    qstrncpy();
    return 1;
  }
  return result;
}


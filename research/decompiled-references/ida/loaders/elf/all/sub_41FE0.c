unsigned __int64 __fastcall sub_41FE0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int64 v10; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rsi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d

  v10 = a1[2];
  if ( v10 )
  {
    v12 = a1[4];
    if ( v12 < v10 )
      goto LABEL_10;
    result = a1[3];
  }
  else
  {
    result = a1[3];
    if ( !result )
      return result;
    v12 = a1[4];
  }
  if ( result >= v12 )
  {
    if ( v12 < result )
    {
      set_segm_end(v10, v12, 1);
      result = a1[4];
      a1[3] = result;
    }
    return result;
  }
LABEL_10:
  if ( under_debugger )
    BUG();
  interr(20090);
  return sub_42050(20090, v12, v13, v14, v15, v16, a7, a8, a9);
}


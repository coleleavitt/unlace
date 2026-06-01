__int64 __fastcall sel_chooser_t__::vfunc_11(__int64 a1, _QWORD **a2)
{
  int v2; // edx
  __int64 result; // rax
  char v4; // r14
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = sub_300700(0, 1155);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = getn_selector(v8, 0, LODWORD((*a2)[(_QWORD)a2[1] - 1]));
        if ( v5 )
          break;
        if ( !(unsigned __int8)sub_49F220(a2) )
          goto LABEL_6;
      }
      v4 = v5;
      del_selector(v8[0]);
    }
    while ( (unsigned __int8)sub_49F220(a2) );
LABEL_6:
    if ( v4 )
    {
      v6 = getinf(20);
      v7 = getinf(19);
      auto_mark_range(v7, v6, 40);
      sub_49F270(a1, a2, **a2);
      return 1;
    }
    else
    {
      sub_49F270(a1, a2, **a2);
      return 2;
    }
  }
  return result;
}

__int64 __fastcall sub_FD850(unsigned int a1)
{
  __int64 v2; // [rsp+0h] [rbp-1038h] BYREF
  __int64 v3; // [rsp+8h] [rbp-1030h] BYREF
  _BYTE v4[4104]; // [rsp+10h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1018h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_161C80(0, &v2, &v3) && !get_func() )
  {
    sub_92200((__int64)"AUTOHIDE NONE\nPlease move the cursor to a function or select an area to graph");
    return 1;
  }
  if ( !(unsigned __int8)sub_FD780(a1, v4) )
    return 1;
  return (unsigned __int8)gen_flow_graph();
}


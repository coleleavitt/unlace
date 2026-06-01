__int64 __fastcall sub_FD660(unsigned int a1)
{
  int v2; // [rsp+8h] [rbp-1030h] BYREF
  int v3; // [rsp+Ch] [rbp-102Ch] BYREF
  _BYTE v4[4104]; // [rsp+10h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1018h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_161360(0, &v2, &v3) && !get_func() )
  {
    sub_92120((__int64)"AUTOHIDE NONE\nPlease move the cursor to a function or select an area to graph");
    return 1;
  }
  if ( !(unsigned __int8)sub_FD590(a1, v4) )
    return 1;
  return (unsigned __int8)gen_flow_graph();
}


__int64 __fastcall sub_5FC370(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  _QWORD v5[131]; // [rsp+0h] [rbp-418h] BYREF

  v5[129] = __readfsqword(0x28u);
  v3 = sub_748250(v5, 1024, a1, a3);
  result = 3;
  if ( v3 )
  {
    setup_graph_subsystem((__int64)v5, 0);
    return 0;
  }
  return result;
}

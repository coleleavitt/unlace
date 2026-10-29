__int64 __fastcall sub_5FC770(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_748330(v4, a1, a3, 0, 0x7FFFFFFFFFFFFFFFLL, 0) && (unsigned __int8)set_undo_param(2, v4[0]) )
    return 0;
  else
    return 3;
}

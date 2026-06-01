_QWORD *__fastcall sub_3A3510(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1536);
  v4 = a2;
  if ( (unsigned int)get_auto_state() != 25 )
  {
    if ( !under_debugger )
      interr(45);
    BUG();
  }
  return sub_3A3280((_QWORD *)(v2 + 32), &v4, 0x77u);
}

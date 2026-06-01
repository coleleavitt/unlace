__int64 __fastcall sub_39E950(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = *(_QWORD *)(a1 + 1344);
  v4[0] = a2;
  if ( (unsigned int)get_auto_state() != 25 )
  {
    if ( !under_debugger )
      interr(45);
    BUG();
  }
  return sub_39E5E0((_QWORD *)(v2 + 24), v4, 0x77u);
}


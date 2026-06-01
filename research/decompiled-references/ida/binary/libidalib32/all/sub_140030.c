__int64 __fastcall sub_140030(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 184) )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_140070((TApplication *)((char *)&stru_9CF0.st_size + 1));
  }
  else
  {
    *(_QWORD *)(a1 + 184) = a2;
    return send_request_to_main_thread(nullptr);
  }
}


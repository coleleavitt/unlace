void _simple_asl_connect_once()
{
  __int64 v0; // x19

  if ( qword_9C600 == -1 )
    v0 = qword_9C608;
  else
    v0 = _os_alloc_once(&qword_9C600, 32, _simple_asl_init_context);
  if ( *(_DWORD *)(v0 + 16) == -1 )
    *(_DWORD *)(v0 + 16) = _simple_asl_connect();
}

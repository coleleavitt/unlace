__int64 _simple_asl_get_fd()
{
  __int64 v0; // x19

  if ( qword_9C600 == -1 )
    v0 = qword_9C608;
  else
    v0 = _os_alloc_once(&qword_9C600, 32, _simple_asl_init_context);
  if ( !*(_BYTE *)v0 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(v0 + 24) != -1 )
    _os_once(v0 + 24, 0, _simple_asl_connect_once);
  return *(unsigned int *)(v0 + 16);
}

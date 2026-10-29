__int64 __fastcall set_qerrno(__int64 a1)
{
  if ( (_DWORD)a1 == -1 )
    return get_qerrno(a1);
  *(_DWORD *)(__tls_get_addr() + 256) = a1;
  return (unsigned int)a1;
}


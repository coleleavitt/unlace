__int64 get_qerrno()
{
  return *(unsigned int *)(__tls_get_addr() + 256);
}


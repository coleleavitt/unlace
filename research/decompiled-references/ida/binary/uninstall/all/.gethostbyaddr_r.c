// attributes: thunk
int gethostbyaddr_r(
        const void *addr,
        __socklen_t len,
        int type,
        struct hostent *result_buf,
        char *buf,
        size_t buflen,
        struct hostent **result,
        int *h_errnop)
{
  return gethostbyaddr_r(addr, len, type, result_buf, buf, buflen, result, h_errnop);
}


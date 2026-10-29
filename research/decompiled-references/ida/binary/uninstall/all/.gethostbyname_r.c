// attributes: thunk
int gethostbyname_r(
        const char *name,
        struct hostent *result_buf,
        char *buf,
        size_t buflen,
        struct hostent **result,
        int *h_errnop)
{
  return gethostbyname_r(name, result_buf, buf, buflen, result, h_errnop);
}


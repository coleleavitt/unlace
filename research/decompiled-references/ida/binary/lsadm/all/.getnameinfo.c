// attributes: thunk
int getnameinfo(
        const struct sockaddr *sa,
        socklen_t salen,
        char *host,
        socklen_t hostlen,
        char *serv,
        socklen_t servlen,
        int flags)
{
  return getnameinfo(sa, salen, host, hostlen, serv, servlen, flags);
}


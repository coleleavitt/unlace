// attributes: thunk
int getgrnam_r(const char *name, struct group *resultbuf, char *buffer, size_t buflen, struct group **result)
{
  return getgrnam_r(name, resultbuf, buffer, buflen, result);
}


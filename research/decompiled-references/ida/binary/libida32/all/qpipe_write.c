// attributes: thunk
ssize_t qpipe_write(int fd, const void *buf, size_t n)
{
  return write(fd, buf, n);
}


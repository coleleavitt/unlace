// attributes: thunk
ssize_t qpipe_read(int fd, void *buf, size_t nbytes)
{
  return read(fd, buf, nbytes);
}

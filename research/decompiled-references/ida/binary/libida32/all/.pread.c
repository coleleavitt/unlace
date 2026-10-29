// attributes: thunk
ssize_t pread(int fd, void *buf, size_t nbytes, __off_t offset)
{
  return pread(fd, buf, nbytes, offset);
}


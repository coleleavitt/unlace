// attributes: thunk
int tcsetattr(int fd, int optional_actions, const struct termios *termios_p)
{
  return tcsetattr(fd, optional_actions, termios_p);
}


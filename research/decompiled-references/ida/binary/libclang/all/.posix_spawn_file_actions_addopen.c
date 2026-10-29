// attributes: thunk
int posix_spawn_file_actions_addopen(
        posix_spawn_file_actions_t *file_actions,
        int fd,
        const char *path,
        int oflag,
        mode_t mode)
{
  return posix_spawn_file_actions_addopen(file_actions, fd, path, oflag, mode);
}


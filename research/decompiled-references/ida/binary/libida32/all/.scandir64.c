// attributes: thunk
int scandir64(
        const char *dir,
        struct dirent64 ***namelist,
        int (*selector)(const struct dirent64 *),
        int (*cmp)(const struct dirent64 **, const struct dirent64 **))
{
  return scandir64(dir, namelist, selector, cmp);
}


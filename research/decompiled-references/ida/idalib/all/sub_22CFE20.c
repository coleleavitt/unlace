int __fastcall sub_22CFE20(char *filename, struct stat *stat_buf)
{
  return __lxstat(1, filename, stat_buf);
}

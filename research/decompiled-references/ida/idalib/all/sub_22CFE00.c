int __fastcall sub_22CFE00(char *filename, struct stat *stat_buf)
{
  return __xstat(1, filename, stat_buf);
}

int fprintf(FILE *a1, const char *a2, ...)
{
  _simple_vdprintf(2, (char *)a2);
  return 0;
}

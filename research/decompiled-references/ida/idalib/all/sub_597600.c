__int64 __fastcall sub_597600(unsigned __int64 a1, const char *a2, const char *a3, double a4, double a5)
{
  unsigned __int64 free_disk_space; // rax

  free_disk_space = get_free_disk_space(a2, a4, a5);
  if ( free_disk_space < a1 )
    sub_5973D0(
      (__int64)"%s enough disk space to %s (file %s)\n(wanted: %llu, available: %llu)",
      "Not",
      a3,
      a2,
      a1,
      free_disk_space);
  return 1;
}

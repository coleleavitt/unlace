int __fastcall sub_1FD17C0(__int64 a1)
{
  int v1; // ecx

  fwrite("*** Global Module Index Statistics:\n", 1u, 0x24u, stderr);
  v1 = *(_DWORD *)(a1 + 1488);
  if ( v1 )
    fprintf(
      stderr,
      "  %u / %u identifier lookups succeeded (%f%%)\n",
      *(_DWORD *)(a1 + 1492),
      v1,
      (double)*(int *)(a1 + 1492) * 100.0 / (double)v1);
  return fputc(10, stderr);
}

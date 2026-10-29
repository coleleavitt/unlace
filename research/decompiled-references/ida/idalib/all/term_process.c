int __fastcall term_process(__int64 a1)
{
  int result; // eax

  result = kill(a1, 9);
  if ( !result )
    return check_process_exit(a1, 0, 0xFFFFFFFFLL);
  return result;
}

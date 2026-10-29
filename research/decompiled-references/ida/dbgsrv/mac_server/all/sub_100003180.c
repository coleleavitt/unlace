/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003180
// Address: 0x0000000100003180

//----- (0000000100003180) ----------------------------------------------------
mach_error_t __fastcall sub_100003180(__int64 a1, __int64 a2)
{
  mach_error_t result; // eax
  unsigned int v3; // r14d
  char *v4; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1);
  result = *(_DWORD *)(a2 + 16);
  if ( result == 2 )
  {
    result = task_resume(*(_DWORD *)(a1 + 848));
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      v3 = result;
      v4 = mach_error_string(result);
      result = sub_100000AE0((int)"%s => %d (%s)\n", "task_resume", v3, v4);
    }
  }
  else if ( result == 1 )
  {
    result = sub_100001CD0(
               a1,
               2 * (unsigned int)*(unsigned __int8 *)(a2 + 13) + 7,
               *(_DWORD *)(a1 + 528),
               (char *)1,
               *(_DWORD *)(a2 + 8));
  }
  *(_DWORD *)(a2 + 16) = 0;
  *(_BYTE *)(a2 + 13) = 0;
  return result;
}

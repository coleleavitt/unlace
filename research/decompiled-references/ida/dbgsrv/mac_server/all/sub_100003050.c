/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003050
// Address: 0x0000000100003050

//----- (0000000100003050) ----------------------------------------------------
mach_msg_return_t __fastcall sub_100003050(__int64 a1, int *a2)
{
  unsigned int v2; // r14d
  char *v3; // r15
  unsigned int v4; // r12d
  unsigned int v5; // eax
  int *v6; // rax
  const char *v7; // rcx
  mach_msg_return_t result; // eax
  unsigned int v9; // ebx
  char *v10; // rax
  unsigned int v11; // [rsp+14h] [rbp-2Ch]

  if ( a2[520] == 5 && *((_QWORD *)a2 + 262) == 2 && **((_QWORD **)a2 + 261) == 65539 )
  {
    v2 = *(_DWORD *)(a1 + 528);
    v3 = (char *)*a2;
    v4 = a2[2];
    v5 = ptrace(13, v2, v3, v4);
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      if ( v5 )
      {
        v11 = v5;
        v6 = __error();
        v7 = (const char *)winerr(*v6);
        v5 = v11;
      }
      else
      {
        v7 = "ok";
      }
      sub_100000AE0((int)"%s(%u, %p, 0x%X) => 0x%X (%s)\n", "PT_THUPDATE", v2, v3, v4, v5, v7);
    }
  }
  result = mach_msg((mach_msg_header_t *)(a2 + 261), 1, a2[262], 0, a2[263], 0, 0);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    v9 = result;
    v10 = mach_error_string(result);
    return sub_100000AE0((int)"%s => %d (%s)\n", "mach_msg (reply)", v9, v10);
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079A40
// Address: 0x0000000100079A40

//----- (0000000100079A40) ----------------------------------------------------
__int64 sub_100079A40(char **a1, char a2, __int64 a3, ...)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r15
  void *v7; // rdi
  __int128 v9; // [rsp+B0h] [rbp-460h] BYREF
  __int64 v10; // [rsp+C0h] [rbp-450h]
  char __s[1024]; // [rsp+D0h] [rbp-440h] BYREF
  va_list va; // [rsp+4D0h] [rbp-40h] BYREF

  va_start(va, a3);
  vqmakepath(__s, 1024, a3, &va[0].gp_offset);
  if ( (a2 & 4) == 0 || qisdir(__s) )
  {
    v9 = 0;
    v10 = 0;
    v4 = strlen(__s);
    v5 = v4;
    v6 = v4 + 1;
    if ( v4 == -1 )
    {
      v7 = nullptr;
    }
    else
    {
      v7 = qvector_reserve((__int64)&v9, nullptr, v4 + 1, 1u);
      *(_QWORD *)&v9 = v7;
    }
    *((_QWORD *)&v9 + 1) = v6;
    memmove(v7, __s, v5);
    *(_BYTE *)(v9 + v5) = 0;
    sub_100016E60(a1, (__int64)&v9);
    if ( (_QWORD)v9 )
    {
      *((_QWORD *)&v9 + 1) = 0;
      qfree((void *)v9);
    }
  }
  return __stack_chk_guard;
}

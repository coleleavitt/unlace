/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfwrite
// Address: 0x00000000000C2390

//----- (00000000000C2390) ----------------------------------------------------
size_t __fastcall qfwrite(FILE *s, void *ptr, size_t n)
{
  size_t v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // r14

  if ( s )
  {
    v3 = n;
    if ( n )
    {
      v4 = fwrite(ptr, 1u, n, s);
      if ( v4 != v3 )
      {
        v5 = v4;
        set_qerrno((v4 > 0) + 1);
        return v5;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 9;
    set_qerrno(1u);
    return -1;
  }
  return v3;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);

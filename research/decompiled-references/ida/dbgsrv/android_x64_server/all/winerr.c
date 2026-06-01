/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: winerr
// Address: 0x00000000000C3A20

//----- (00000000000C3A20) ----------------------------------------------------
char *__fastcall winerr(int errnum)
{
  char **v1; // rbx
  char *v2; // rax
  char *v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r12
  char *v7; // rdi

  v1 = (char **)sub_B7250();
  v2 = strerror(errnum);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    if ( v4 )
    {
      v5 = v4;
      v6 = v4 + 1;
      if ( (unsigned __int64)v1[2] >= v4 + 1 )
      {
        v7 = *v1;
      }
      else
      {
        v7 = (char *)qvector_reserve((__int64)v1, *v1, v4 + 1, 1u);
        *v1 = v7;
      }
      v1[1] = (char *)v6;
      memmove(v7, v3, v5);
      (*v1)[v5] = 0;
    }
    else
    {
      v1[1] = nullptr;
    }
  }
  else
  {
    sub_3BBA0((__int64)v1, "Unknown error, code: 0x%08X", errnum);
  }
  return *v1;
}

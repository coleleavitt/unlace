/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001CD0
// Address: 0x0000000100001CD0

//----- (0000000100001CD0) ----------------------------------------------------
__int64 __fastcall sub_100001CD0(__int64 a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5)
{
  unsigned int v7; // r12d
  const char *v8; // r13
  int *v9; // rax
  const char *v10; // rax

  v7 = ptrace(a2, a3, a4, a5);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    if ( a2 > 0x1F )
    {
      v8 = "?";
      if ( v7 )
        goto LABEL_4;
    }
    else
    {
      v8 = (char *)qword_10008FE30 + *((int *)qword_10008FE30 + a2);
      if ( v7 )
      {
LABEL_4:
        v9 = __error();
        v10 = (const char *)winerr(*v9);
LABEL_7:
        sub_100000AE0((int)"%s(%u, %p, 0x%X) => 0x%X (%s)\n", v8, a3, a4, a5, v7, v10);
        return v7;
      }
    }
    v10 = "ok";
    goto LABEL_7;
  }
  return v7;
}
// 10008FE30: using guessed type __int64 qword_10008FE30[16];

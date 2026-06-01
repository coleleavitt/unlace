/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49CD18
// Address: 0x000000000049CD18

//----- (000000000049CD18) ----------------------------------------------------
void *__fastcall sub_49CD18(int *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  void *v9; // x23
  const char *v11; // x3
  void *ptr; // [xsp+40h] [xbp-30h] BYREF
  __int64 v13; // [xsp+48h] [xbp-28h]
  __int64 v14; // [xsp+50h] [xbp-20h]
  int fd[2]; // [xsp+58h] [xbp-18h] BYREF
  __int64 v16; // [xsp+60h] [xbp-10h] BYREF

  *(_QWORD *)fd = -1;
  v16 = -1;
  if ( !a2 )
    goto LABEL_6;
  if ( !(unsigned int)sub_49C430(fd) )
    goto LABEL_5;
  if ( !under_debugger )
    sub_492270(3181);
  while ( 1 )
  {
    __break(0x3E8u);
LABEL_5:
    *a2 = fd[1];
LABEL_6:
    if ( !a1 )
      break;
    if ( !(unsigned int)sub_49C430(&v16) )
    {
      *a1 = v16;
      break;
    }
    if ( !under_debugger )
      sub_492270(3182);
  }
  v8 = SHIDWORD(v16);
  *(_QWORD *)(a3 + 32) = fd[0];
  *(_QWORD *)(a3 + 40) = v8;
  ptr = nullptr;
  v13 = 0;
  v14 = 0;
  v9 = sub_4951E0(a3, (rlim_t *)&ptr);
  if ( fd[0] != -1 )
    j__close(fd[0]);
  if ( HIDWORD(v16) != -1 )
    j__close(SHIDWORD(v16));
  if ( !v9 )
  {
    v11 = (const char *)ptr;
    if ( !v13 )
      v11 = (const char *)&qword_4B2D48;
    sub_40CD68(a4, "%s: %s", *(const char **)(a3 + 16), v11);
    if ( a1 )
      j__close(*a1);
    if ( a2 )
      j__close(*a2);
  }
  if ( ptr )
  {
    v13 = 0;
    j__free(ptr);
  }
  return v9;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
// 52451C: using guessed type char under_debugger;

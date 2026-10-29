void __fastcall sub_40D7B0(__int64 a1, const void *a2, int a3, int a4, int a5, int a6)
{
  int *v8; // rbx
  int v9; // edx
  int v10; // r13d
  int v11; // eax
  int v12; // r14d
  int *v13; // rax
  __int64 *v14; // rdi

  if ( *(int *)a1 > 1 )
  {
    sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"TclAppendBytesToByteArray", a3, a4, a5, a6);
    if ( a3 >= 0 )
      goto LABEL_3;
  }
  else if ( a3 >= 0 )
  {
    goto LABEL_3;
  }
  sub_47D740(
    (unsigned int)"%s must be called with definite number of bytes to append",
    (unsigned int)"TclAppendBytesToByteArray",
    a3,
    a4,
    a5,
    a6);
LABEL_3:
  if ( a3 )
  {
    if ( *(char ***)(a1 + 24) != &off_653DC0 )
      sub_40D430(0, a1);
    v8 = *(int **)(a1 + 32);
    v9 = *v8;
    if ( 0x7FFFFFFF - *v8 < a3 )
    {
      sub_47D740((unsigned int)"max size for a Tcl value (%d bytes) exceeded", 0x7FFFFFFF, v9, a4, a5, a6);
      v9 = *v8;
    }
    v10 = v9 + a3;
    if ( v8[1] < v9 + a3 )
    {
      if ( v10 > 0x3FFFFFFF || (v12 = 2 * v10, (v13 = (int *)sub_40FD00(v8)) == nullptr) )
      {
        v11 = 0x7FFFFFFF - v10;
        if ( a3 + 1024 <= (unsigned int)(0x7FFFFFFF - v10) )
          v11 = a3 + 1024;
        v12 = v10 + v11;
        v13 = (int *)sub_40FD00(v8);
        if ( !v13 )
        {
          v12 = v10;
          v13 = (int *)sub_40FC10(v8, (unsigned int)(v10 + 8));
        }
      }
      v13[1] = v12;
      *(_QWORD *)(a1 + 32) = v13;
      v8 = v13;
      v9 = *v13;
    }
    if ( a2 )
    {
      memcpy((char *)v8 + v9 + 8, a2, a3);
      v9 = *v8;
    }
    v14 = *(__int64 **)(a1 + 8);
    *v8 = v9 + a3;
    if ( v14 )
    {
      if ( v14 != off_656088 )
        Tcl_Free(v14);
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
}


/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: getsysfile
// Address: 0x0000000100079140

//----- (0000000100079140) ----------------------------------------------------
char *__fastcall getsysfile(char *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  const char *v6; // rdx
  char *v7; // rbx
  void *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  void *v12; // rdi
  __int128 v15; // [rsp+10h] [rbp-50h] BYREF
  __int64 v16; // [rsp+20h] [rbp-40h]

  v15 = 0;
  v16 = 0;
  get_ida_subdirs((__int64)&v15, a4, 0);
  if ( *((_QWORD *)&v15 + 1) )
  {
    v4 = 8;
    v5 = 0;
    while ( 1 )
    {
      v6 = _s1;
      if ( *(_QWORD *)(v15 + v4) )
        v6 = *(const char **)(v15 + v4 - 8);
      v7 = qmakepath(a1, a2, (__int64)v6, a3, 0);
      if ( qfileexist(v7) )
        break;
      ++v5;
      v4 += 24;
      if ( v5 >= *((_QWORD *)&v15 + 1) )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v7 = nullptr;
  }
  v8 = (void *)v15;
  if ( (_QWORD)v15 )
  {
    v9 = *((_QWORD *)&v15 + 1);
    if ( *((_QWORD *)&v15 + 1) )
    {
      v10 = 0;
      do
      {
        v11 = v15;
        v12 = *(void **)(v15 + v10);
        if ( v12 )
        {
          *(_QWORD *)(v15 + v10 + 8) = 0;
          qfree(v12);
          *(_QWORD *)(v11 + v10) = 0;
          *(_QWORD *)(v11 + v10 + 16) = 0;
        }
        v10 += 24;
        --v9;
      }
      while ( v9 );
      v8 = (void *)v15;
    }
    *((_QWORD *)&v15 + 1) = 0;
    qfree(v8);
  }
  return v7;
}

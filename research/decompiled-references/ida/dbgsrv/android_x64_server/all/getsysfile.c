/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: getsysfile
// Address: 0x00000000000BD1B0

//----- (00000000000BD1B0) ----------------------------------------------------
char *__fastcall getsysfile(char *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // rbx
  char *v6; // rbp
  const char *v7; // rdx
  char *v8; // r13
  char *v9; // rbx
  void *v10; // r14
  unsigned __int64 v11; // r15
  __int64 i; // rbp
  void *v13; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h]
  unsigned __int64 v17; // [rsp+20h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v16 = 0;
  get_ida_subdirs((__int64 *)ptr, a4, 0);
  if ( ptr[1] )
  {
    v5 = 8;
    v6 = nullptr;
    while ( 1 )
    {
      v7 = s1;
      if ( *(_QWORD *)((char *)ptr[0] + v5) )
        v7 = *(const char **)((char *)ptr[0] + v5 - 8);
      v8 = qmakepath(a1, a2, v7, a3, 0);
      if ( qfileexist(v8) )
        break;
      ++v6;
      v5 += 24;
      if ( v6 >= ptr[1] )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v8 = nullptr;
  }
  v9 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v10 = ptr[1];
    if ( ptr[1] )
    {
      v11 = 1;
      for ( i = 0; ; i += 24 )
      {
        v13 = *(void **)&v9[i];
        if ( v13 )
        {
          *(_QWORD *)&v9[i + 8] = 0;
          qfree(v13);
          *(_QWORD *)&v9[i] = 0;
          *(_QWORD *)&v9[i + 16] = 0;
        }
        if ( v11 >= (unsigned __int64)v10 )
          break;
        v9 = (char *)ptr[0];
        ++v11;
      }
      v9 = (char *)ptr[0];
    }
    ptr[1] = nullptr;
    qfree(v9);
    ptr[0] = nullptr;
    v16 = 0;
  }
  return v8;
}

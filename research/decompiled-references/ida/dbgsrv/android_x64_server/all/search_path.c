/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: search_path
// Address: 0x00000000000BCC50

//----- (00000000000BCC50) ----------------------------------------------------
__int64 __fastcall search_path(char *a1, __int64 a2, _BYTE *a3, char a4)
{
  __int64 v4; // rbx
  const char *i; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-1058h] BYREF
  __int64 v9; // [rsp+10h] [rbp-1048h]
  const char *v10[519]; // [rsp+20h] [rbp-1038h] BYREF

  v10[512] = (const char *)__readfsqword(0x28u);
  if ( a3 && (v4 = (__int64)a3, *a3) )
  {
    if ( qisabspath(a3) )
    {
      qstrncpy(a1, v4, a2);
      LOBYTE(v4) = 1;
    }
    else
    {
      *(_OWORD *)ptr = 0;
      v9 = 0;
      if ( (unsigned __int8)qgetenv("PATH", (__int64)ptr) )
      {
        for ( i = qstrtok((char *)ptr[0], ":", v10); i; i = qstrtok(nullptr, ":", v10) )
        {
          if ( *i )
          {
            qmakepath(a1, a2, i, v4, 0);
            if ( qfileexist(a1) )
            {
              LOBYTE(v4) = 1;
              goto LABEL_17;
            }
          }
        }
      }
      if ( !a4
        || (qgetcwd((char *)v10, 0x1000u), qmakepath(a1, a2, (const char *)v10, v4, 0), LOBYTE(v4) = 1, !qfileexist(a1)) )
      {
        LODWORD(v4) = 0;
      }
LABEL_17:
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v9 = 0;
      }
    }
  }
  else
  {
    LODWORD(v4) = 0;
  }
  return (unsigned int)v4;
}

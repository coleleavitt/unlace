/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DB60
// Address: 0x000000000003DB60

//----- (000000000003DB60) ----------------------------------------------------
unsigned __int64 __fastcall sub_3DB60(_QWORD *a1)
{
  void *v2; // rdi
  FILE *v3; // rdi
  size_t v4; // rax
  char *v5; // rdi
  size_t v6; // rax
  const char *v7; // rbp
  void *v8; // r13
  char *v9; // rdi
  __int128 v11; // [rsp+0h] [rbp-98h] BYREF
  __int128 v12; // [rsp+10h] [rbp-88h] BYREF
  char v13[24]; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-50h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  unsigned __int64 v16; // [rsp+60h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  v2 = (void *)a1[144];
  if ( v2 )
  {
    a1[145] = 0;
    qfree(v2);
    a1[144] = 0;
    a1[146] = 0;
  }
  a1[147] = 0;
  v3 = (FILE *)a1[152];
  if ( v3 )
  {
    rewind(v3);
    *(_OWORD *)ptr = 0;
    v15 = 0;
    while ( (unsigned __int8)sub_3DDC0((__int64)a1, (__int64)&v12) )
    {
      if ( (unsigned __int64)v12 < *((_QWORD *)&v12 + 1) && __strchr_chk(v13, 120, 8) )
      {
        v4 = __strlen_chk(".oat", 5);
        if ( !v4 )
          goto LABEL_21;
        v5 = (char *)ptr[1] - 1;
        if ( !ptr[1] )
          v5 = nullptr;
        if ( (unsigned __int64)v5 >= v4 && !strncmp((char *)ptr[0] + (unsigned __int64)v5 - v4, ".oat", v4) )
          goto LABEL_21;
        v6 = __strlen_chk(".odex", 6);
        if ( !v6 )
          goto LABEL_21;
        v7 = (const char *)ptr[0];
        v8 = ptr[1];
        v9 = (char *)ptr[1] - 1;
        if ( !ptr[1] )
          v9 = nullptr;
        if ( (unsigned __int64)v9 >= v6 && !strncmp((char *)ptr[0] + (unsigned __int64)v9 - v6, ".odex", v6) )
          goto LABEL_21;
        if ( !v8 )
          v7 = s1;
        if ( strstr(v7, "jit-cache") )
        {
LABEL_21:
          v11 = v12;
          rangeset_t_add((__int64)(a1 + 144), (unsigned __int64 *)&v11);
        }
      }
    }
    sub_391F0((__int64)a1, "ART: refreshed code ranges: %d regions\n", *((_DWORD *)a1 + 290));
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v15 = 0;
    }
  }
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);

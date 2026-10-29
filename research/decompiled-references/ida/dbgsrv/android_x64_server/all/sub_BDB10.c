/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BDB10
// Address: 0x00000000000BDB10

//----- (00000000000BDB10) ----------------------------------------------------
unsigned __int64 sub_BDB10(__int64 *a1, char a2, const char *a3, ...)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbx
  const char *v6; // rbp
  __int64 v7; // r15
  const char *v8; // rsi
  void *ptr; // [rsp+C8h] [rbp-1070h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-1068h]
  __int64 v12; // [rsp+D8h] [rbp-1060h]
  char s[4096]; // [rsp+E0h] [rbp-1058h] BYREF
  gcc_va_list va; // [rsp+10E0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+1100h] [rbp-38h]

  va_start(va, a3);
  v15 = __readfsqword(0x28u);
  vqmakepath(s, 4096, a3, (int *)va);
  if ( (a2 & 4) == 0 || qisdir(s) )
  {
    sub_37F60((__int64)&ptr, s);
    v3 = *a1;
    v4 = 24 * a1[1];
    v5 = *a1;
    if ( v4 )
    {
      v6 = s1;
      if ( v11 )
        v6 = (const char *)ptr;
      v7 = 24 * a1[1];
      v5 = *a1;
      while ( 1 )
      {
        v8 = s1;
        if ( *(_QWORD *)(v5 + 8) )
          v8 = *(const char **)v5;
        if ( !strcmp(v6, v8) )
          break;
        v5 += 24;
        v7 -= 24;
        if ( !v7 )
          goto LABEL_13;
      }
    }
    if ( v5 == v4 + v3 )
LABEL_13:
      sub_47F30((__int64)a1, (__int64)&ptr);
    if ( ptr )
    {
      v11 = 0;
      qfree(ptr);
      ptr = nullptr;
      v12 = 0;
    }
  }
  return __readfsqword(0x28u);
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3920
// Address: 0x00000000000C3920

//----- (00000000000C3920) ----------------------------------------------------
unsigned __int64 sub_C3920()
{
  __pid_t v0; // eax
  int v1; // ebp
  FILE *v2; // rax
  FILE *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int16 v6; // [rsp+8h] [rbp-420h]
  char nptr[1014]; // [rsp+Ah] [rbp-41Eh] BYREF
  unsigned __int64 v8; // [rsp+400h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  v0 = getpid();
  v1 = 0;
  qsnprintf((char *)&v5, 1024, "/proc/%d/status", v0);
  v2 = fopen((const char *)&v5, "r");
  if ( v2 )
  {
    v3 = v2;
    while ( 1 )
    {
      if ( !__fgets_chk(&v5, 1024, v3, 1024) )
      {
LABEL_6:
        LOBYTE(v1) = 0;
        goto LABEL_8;
      }
      if ( !(v5 ^ 0x6950726563617254LL | v6 ^ 0x3A64LL) )
        break;
      if ( (unsigned int)++v1 > 0xF )
        goto LABEL_6;
    }
    LOBYTE(v1) = (unsigned int)atol(nptr) != 0;
LABEL_8:
    fclose(v3);
  }
  LOBYTE(under_debugger) = v1;
  return __readfsqword(0x28u);
}
// 34180: using guessed type __int64 __fastcall __fgets_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 158B40: using guessed type __int64 under_debugger;

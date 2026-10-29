/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99010
// Address: 0x00099010

//----- (00099010) --------------------------------------------------------
int __cdecl sub_99010(int a1, char *a2, void *a3)
{
  int v4; // [esp+0h] [ebp-18h] BYREF
  _DWORD v5[4]; // [esp+8h] [ebp-10h] BYREF

  v5[1] = __readgsdword(0x14u);
  if ( a1 )
  {
    if ( a1 <= 0 )
      verror(a2, a3);
    callui((int)v5);
    return 0;
  }
  else
  {
    callui((int)&v4);
    return v4;
  }
}
// B1570: using guessed type void __cdecl __noreturn verror(char *s, __gnuc_va_list __varargs);
// 13BC20: using guessed type int (__stdcall *callui)(int);

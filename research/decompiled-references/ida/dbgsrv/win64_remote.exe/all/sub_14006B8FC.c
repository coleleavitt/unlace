/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006B8FC
// Address: 0x000000014006B8FC

//----- (000000014006B8FC) ----------------------------------------------------
__int64 __fastcall sub_14006B8FC(_QWORD *a1)
{
  _DWORD *v1; // rbx
  int v3; // edx
  __int64 v5; // rbx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( v3 == 429065504 || (unsigned int)(v3 - 429065505) <= 1 || v3 == 26820608 )
    {
      *(_QWORD *)_current_exception() = v1;
      v5 = a1[1];
      *(_QWORD *)_current_exception_context() = v5;
      terminate();
    }
  }
  return 0;
}
// 14006BC40: using guessed type __int64 _current_exception(void);
// 14006BC54: using guessed type __int64 _current_exception_context(void);
// 140081A2C: using guessed type void __noreturn terminate(void);

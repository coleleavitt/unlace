/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052350
// Address: 0x0000000140052350

//----- (0000000140052350) ----------------------------------------------------
bool __fastcall sub_140052350(__int64 a1, void *a2)
{
  BOOL v5; // edi
  struct _CONTEXT Context; // [rsp+20h] [rbp-4E8h] BYREF

  Context.ContextFlags = 1048593;
  if ( GetThreadContext(a2, &Context) )
  {
    Context.Dr0 = *(_QWORD *)(a1 + 696);
    Context.Dr1 = *(_QWORD *)(a1 + 704);
    Context.Dr2 = *(_QWORD *)(a1 + 712);
    Context.Dr3 = *(_QWORD *)(a1 + 720);
    Context.Dr7 = *(unsigned int *)(a1 + 748);
    Context.Dr6 = 0;
    v5 = SetThreadContext(a2, &Context);
    if ( !v5 )
      sub_140043190(a1, (struct __crt_locale_pointers *)"SetThreadContext");
    return v5;
  }
  else
  {
    sub_140043190(a1, (struct __crt_locale_pointers *)"GetThreadContext");
    return 0;
  }
}

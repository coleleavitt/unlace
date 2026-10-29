/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF190
// Address: 0x00000000000BF190

//----- (00000000000BF190) ----------------------------------------------------
void __fastcall sub_BF190(__int64 a1)
{
  int v1; // eax
  void *v2; // rdi
  void *v3; // rbx
  __int64 v4; // rdi

  *(_QWORD *)a1 = &off_1505C0;
  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v2 = *(void **)(a1 + 24);
      if ( v2 )
        operator delete(v2);
    }
    else if ( v1 != 2 )
    {
      if ( !(_BYTE)under_debugger )
        interr(193);
      BUG();
    }
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    if ( v3 )
    {
      if ( *(int *)v3 < 2 )
      {
        qfclose(*((FILE **)v3 + 1));
      }
      else
      {
        v4 = *((_QWORD *)v3 + 1);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        qfree(*((void **)v3 + 5));
        qfree(*((void **)v3 + 4));
      }
      operator delete(v3);
    }
  }
}
// 1505C0: using guessed type void (__fastcall __noreturn *off_1505C0)();
// 158B40: using guessed type __int64 under_debugger;

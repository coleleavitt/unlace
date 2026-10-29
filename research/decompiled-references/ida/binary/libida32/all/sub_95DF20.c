void __fastcall sub_95DF20(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdi
  void (__fastcall *v3)(void *); // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(void (__fastcall **)(void *))(*(_QWORD *)v1 + 8LL);
    if ( v3 == sub_95DF00 )
    {
      sub_95DD20(v2);
      operator delete(v1, 0x148u);
    }
    else
    {
      v3((void *)v2);
    }
  }
}


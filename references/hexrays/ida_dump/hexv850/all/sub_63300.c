void __fastcall sub_63300(__int64 a1)
{
  _QWORD *exception; // rax
  __int64 v2; // rsi
  _QWORD *v3; // rax
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // eax
  __int64 i; // rdx
  __int64 v8; // rsi

  v2 = *(int *)(a1 + 64);
  if ( (_DWORD)v2 )
  {
    v3 = (_QWORD *)qrealloc(*(_QWORD *)(a1 + 528), 8 * v2);
    if ( !v3 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v4 = *(_DWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 528) = v3;
    v5 = *(_QWORD *)(a1 + 520);
    if ( v4 > 0 )
    {
      *v3 = v5;
      v6 = 1;
      for ( i = *(_QWORD *)(v5 + 8); v6 < *(_DWORD *)(a1 + 64); i = *(_QWORD *)(i + 8) )
      {
        v8 = v6++;
        *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v8) = i;
      }
    }
  }
}

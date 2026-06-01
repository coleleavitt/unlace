void __fastcall dwarf_line_context_destructor(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  if ( *(_DWORD *)a1 == -804450031 )
  {
    v2 = *(void **)(a1 + 144);
    if ( v2 )
    {
      free(v2);
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
    }
    v3 = *(_QWORD **)(a1 + 216);
    if ( v3 )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
        free(v4);
      }
      while ( v3 );
      *(_QWORD *)(a1 + 248) = 0;
      *(_OWORD *)(a1 + 216) = 0;
      *(_OWORD *)(a1 + 232) = 0;
    }
    free(*(void **)(a1 + 176));
    v5 = *(void **)(a1 + 208);
    *(_QWORD *)(a1 + 176) = 0;
    free(v5);
    v6 = *(void **)(a1 + 256);
    *(_QWORD *)(a1 + 208) = 0;
    if ( v6 )
    {
      free(v6);
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    *(_DWORD *)a1 = 0;
  }
}


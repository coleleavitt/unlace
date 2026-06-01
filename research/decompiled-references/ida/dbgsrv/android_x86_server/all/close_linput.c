/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x000AB760

//----- (000AB760) --------------------------------------------------------
void __cdecl close_linput(void *ptr)
{
  int v1; // eax

  if ( ptr )
  {
    if ( *(int *)ptr < 2 )
    {
      qfclose(*((FILE **)ptr + 1));
    }
    else
    {
      v1 = *((_DWORD *)ptr + 1);
      if ( v1 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 8))(*((_DWORD *)ptr + 1));
      qfree(*((void **)ptr + 7));
      qfree(*((void **)ptr + 6));
    }
    operator delete(ptr);
  }
}

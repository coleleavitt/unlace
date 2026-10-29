__int64 __fastcall sub_115D0(__int64 a1)
{
  __int64 v1; // rax
  void (*v2)(void); // rbx
  void *v3; // rbx

  while ( 1 )
  {
    v3 = ptr;
    if ( !ptr )
      break;
    v1 = *((_QWORD *)ptr + 1);
    if ( !v1 )
    {
      if ( *(_QWORD *)ptr )
        j__free(*(void **)ptr);
      j__free(v3);
      break;
    }
    v2 = *(void (**)(void))(*(_QWORD *)ptr + 8 * v1 - 8);
    sub_11550((__int64)v2);
    v2();
  }
  ptr = nullptr;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}


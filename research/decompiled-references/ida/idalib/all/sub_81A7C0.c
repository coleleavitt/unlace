__int64 __fastcall sub_81A7C0(__int64 a1)
{
  int v2; // ebp
  void *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbp
  void *v7; // rax
  void *v8; // rax
  bool v9; // cc
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // rax

  v2 = *(_DWORD *)(a1 + 152) & 0x2000;
  if ( *(_QWORD *)(a1 + 72) && !*(_QWORD *)(a1 + 328) )
  {
    v11 = *(_QWORD *)(a1 + 336);
    v12 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v11, 8);
    if ( !v12 )
    {
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 64) = "out of memory";
      return 12;
    }
    *(_QWORD *)(a1 + 328) = memset(v12, 0, 8 * v11);
  }
  if ( v2 )
    return 0;
  v3 = *(void **)(a1 + 384);
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 400) )
    {
      v5 = *(_QWORD *)(a1 + 408);
      *(_DWORD *)(a1 + 400) = 0;
      memset(v3, 0, 8 * v5);
    }
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 408);
  v7 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v6, 8);
  if ( v7 )
  {
    v8 = memset(v7, 0, 8 * v6);
    v9 = *(_QWORD *)(a1 + 304) <= 1u;
    *(_QWORD *)(a1 + 384) = v8;
    if ( v9 && *(_QWORD *)(a1 + 296) <= 1u )
      return 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 128))(
            *(_QWORD *)(a1 + 144),
            *(_QWORD *)(a1 + 88),
            8);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 392) = v10;
      return 0;
    }
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 64) = "out of memory";
  }
  else
  {
    *(_QWORD *)(a1 + 384) = 0;
    *(_QWORD *)(a1 + 64) = "out of memory";
  }
  return 12;
}

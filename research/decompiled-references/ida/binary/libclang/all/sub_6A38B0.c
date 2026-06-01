__int64 __fastcall sub_6A38B0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  unsigned int v8; // ecx
  void *v9; // rdi
  __int64 v11; // rax

  v5 = a4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 12;
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    v8 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = (4LL * a3) | *(_QWORD *)(a1 + 8) & 3LL | v7 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v5 == v8 )
      goto LABEL_9;
    if ( v8 > 4 )
    {
      v9 = *(void **)(a1 + 24);
      if ( v9 )
        operator delete[](v9);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 4LL * a3;
    if ( !a4 )
      return a1 + 24;
  }
  *(_DWORD *)(a1 + 16) = v5;
  if ( v5 <= 4 )
    return a1 + 24;
  v11 = operator new[](8LL * v5);
  v5 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = v11;
LABEL_9:
  if ( v5 <= 4 )
    return a1 + 24;
  return *(_QWORD *)(a1 + 24);
}


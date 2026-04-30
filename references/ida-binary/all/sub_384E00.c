__int64 __fastcall sub_384E00(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 112LL))(*(_QWORD *)(a2 + 40));
  result = 0;
  if ( dword_8BCA58 != v5 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 12LL);
    v8 = sub_384C20(*(_QWORD *)(a3 + 728), v7);
    v9 = *(_QWORD *)(a1 + 40);
    v10 = v8;
    if ( v9 )
    {
      qfree(v9, (const char *)v7);
      *(_QWORD *)(a1 + 40) = 0;
    }
    v11 = qalloc_or_throw(24);
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 12) = v7;
    *(_QWORD *)v11 = &srcdbg_place_t___vtable;
    *(_QWORD *)(v11 + 16) = v10;
    *(_QWORD *)(a1 + 40) = v11;
    return 1;
  }
  return result;
}

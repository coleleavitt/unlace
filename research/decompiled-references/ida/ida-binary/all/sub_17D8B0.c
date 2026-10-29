__int64 __fastcall sub_17D8B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi

  if ( *(int *)(a1 + 96) >= -1 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 112) = 0;
      qfree(v6, a2, a3, a4, a5);
    }
  }
  result = clear_tinfo_t(a1 + 64);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree(v11, a2, v8, v9, v10);
  }
  return result;
}

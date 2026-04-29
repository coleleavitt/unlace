__int64 __fastcall sub_380EE0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 module_data; // r13
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rax

  module_data = get_module_data((unsigned int)dword_4C1BB8);
  v8 = qalloc_or_throw(32);
  *(_QWORD *)v8 = off_4B8F58;
  *(_DWORD *)(v8 + 12) = a3;
  *(_DWORD *)(v8 + 8) = a4;
  *(_OWORD *)(v8 + 16) = -1;
  if ( !a2 )
    return v8;
  v9 = *(_QWORD *)(module_data + 1008);
  v10 = *(__int64 **)(v9 + 40);
  v11 = &v10[*(_QWORD *)(v9 + 48)];
  if ( v10 == v11 )
    return v8;
  while ( 1 )
  {
    v12 = *v10;
    if ( *v10 )
    {
      v13 = *(_QWORD *)(v12 + 32);
      if ( v13 )
      {
        if ( a2 == v13 + 128 )
          break;
      }
    }
    if ( v11 == ++v10 )
      return v8;
  }
  v15 = *(_QWORD *)(v12 + 24);
  if ( !v15 )
    return v8;
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(v15 + 40);
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 40LL);
  return v8;
}

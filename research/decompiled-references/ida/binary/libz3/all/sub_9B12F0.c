void __fastcall sub_9B12F0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 i; // r12
  unsigned int v7; // esi
  _BOOL8 v8; // rcx
  __int64 v9; // rdi
  _BOOL8 v10; // rcx
  __int64 v11; // rdi

  v3 = *a2;
  if ( *a2 )
  {
    for ( i = v3 + 40LL * *(unsigned int *)(v3 - 4); i != v3; v3 += 40 )
    {
      v7 = *(_DWORD *)(v3 + 32);
      if ( v7 != -1 && sub_9B1230(a1, v7) )
      {
        v8 = 1;
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          v8 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * *(unsigned int *)(v3 + 32));
        (*(void (__fastcall **)(__int64, __int64, __int64, _BOOL8))(*(_QWORD *)v9 + 24LL))(v9, a3, v3, v8);
        v10 = 1;
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          v10 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * *(unsigned int *)(v3 + 32));
        (*(void (__fastcall **)(__int64, __int64, __int64, _BOOL8))(*(_QWORD *)v11 + 24LL))(v11, a3, v3, v10);
      }
    }
  }
}


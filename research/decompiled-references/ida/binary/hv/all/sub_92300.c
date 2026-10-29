__int64 __fastcall sub_92300(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp

  if ( a1 )
  {
    if ( *(__int64 *)(a1 + 8) >= 0 && *(int *)(a1 + 16) >= 0 )
    {
      v1 = operator new(0x38u);
      *(_QWORD *)(v1 + 8) = a1;
      v2 = v1;
      *(_DWORD *)v1 = 4;
      sub_91F50(v1);
      return v2;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return 0;
}


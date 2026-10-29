unsigned __int64 __fastcall sub_B7BB70(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  int v4; // eax

  v1 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  result = v1;
  if ( *a1 )
  {
    if ( (*a1 & 4) != 0 )
    {
      result = 0;
      if ( v1 )
      {
        v3 = *(_QWORD *)v1;
        v4 = *(_DWORD *)(*(_QWORD *)v1 + 12LL);
        if ( *(_DWORD *)(v1 + 8) != v4 )
        {
          *(_DWORD *)(v1 + 8) = v4;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
        }
        return *(_QWORD *)(v1 + 16);
      }
    }
  }
  return result;
}

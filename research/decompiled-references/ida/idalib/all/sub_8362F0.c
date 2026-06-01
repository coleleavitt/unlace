__int64 __fastcall sub_8362F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = a1 + 136;
  v2 = *(_QWORD *)(a1 + 48) - (a1 + 136);
  if ( v2 + *(unsigned int *)(a1 + 56) != 0x8000 )
  {
    if ( !under_debugger )
      interr(3334);
    BUG();
  }
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v1);
    if ( !(_BYTE)result )
      return result;
    *(_QWORD *)(a1 + 48) = v1;
    *(_DWORD *)(a1 + 56) = 0x8000;
  }
  return 1;
}

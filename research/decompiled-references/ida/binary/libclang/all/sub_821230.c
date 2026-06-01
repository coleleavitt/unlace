__int64 __fastcall sub_821230(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) > 0x40u )
  {
    v3 = *(void **)a1;
    if ( v3 )
      operator delete[](v3);
  }
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  result = *(unsigned __int8 *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a1 + 12) = result;
  return result;
}


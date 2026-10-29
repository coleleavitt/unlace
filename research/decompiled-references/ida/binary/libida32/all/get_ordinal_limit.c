__int64 __fastcall get_ordinal_limit(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( !a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 8LL);
  v1 = *(_QWORD *)(a1 + 64);
  result = 0xFFFFFFFFLL;
  if ( v1 && (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    result = *(unsigned int *)(v1 + 48);
    if ( (_DWORD)result == 1 )
      return 0;
  }
  return result;
}


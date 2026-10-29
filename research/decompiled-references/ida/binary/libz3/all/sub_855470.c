__int64 __fastcall sub_855470(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 104);
  if ( (_DWORD)result )
  {
    do
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  if ( !*(_BYTE *)(a1 + 848) )
    return sub_855310(a1);
  return result;
}


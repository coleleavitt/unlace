__int64 __fastcall sub_20A0EC0(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return operator delete(*(_QWORD *)(a1 + 8), 24LL * *(unsigned int *)(a1 + 16), 8);
  return result;
}

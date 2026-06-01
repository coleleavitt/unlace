bool __fastcall sub_18C0AE0(__int64 a1)
{
  bool result; // al
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _DWORD *v5; // rax

  result = 0;
  if ( (*(_QWORD *)a1 & 0x80000LL) != 0 )
  {
    v2 = 8LL * *(unsigned int *)(a1 + 4);
    v3 = a1 + v2 + 64;
    v4 = a1 + v2 + 80;
    v5 = (_DWORD *)v3;
    if ( (*(_WORD *)a1 & 0x1FF) != 0x18 )
      v5 = (_DWORD *)v4;
    return *v5 != 0;
  }
  return result;
}

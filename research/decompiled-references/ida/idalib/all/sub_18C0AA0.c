bool __fastcall sub_18C0AA0(__int64 a1)
{
  bool result; // al
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  result = 0;
  if ( (*(_QWORD *)a1 & 0x80000LL) != 0 )
  {
    v2 = 8LL * *(unsigned int *)(a1 + 4);
    v3 = a1 + v2 + 64;
    v4 = a1 + v2 + 80;
    v5 = v3;
    if ( (*(_WORD *)a1 & 0x1FF) != 0x18 )
      v5 = v4;
    return *(_DWORD *)(v5 + 8) != 0;
  }
  return result;
}

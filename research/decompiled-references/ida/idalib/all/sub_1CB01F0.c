__int64 __fastcall sub_1CB01F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( (*(_QWORD *)a1 & 0x80000LL) == 0 )
    sub_2EAAE2();
  v1 = 8LL * *(unsigned int *)(a1 + 4);
  v2 = a1 + v1 + 64;
  v3 = a1 + v1 + 80;
  if ( (*(_WORD *)a1 & 0x1FF) == 0x18 )
    v3 = v2;
  return *(unsigned int *)(v3 + 8);
}

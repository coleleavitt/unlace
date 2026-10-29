__int64 __fastcall sub_9C88C0(__int64 a1)
{
  __int64 v1; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v1 = sub_B8C3D0(a1);
  return *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
}

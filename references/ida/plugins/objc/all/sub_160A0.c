__int64 __fastcall sub_160A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // edx

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(v3 + 2208);
  if ( v5 >= a3 || !v5 )
    return 1;
  if ( *(_BYTE *)(v3 + 2216) )
    sub_EC40();
  return 0;
}

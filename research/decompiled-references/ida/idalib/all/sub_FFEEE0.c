__int64 __fastcall sub_FFEEE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ecx

  if ( (_DWORD)a1 == 108 )
    return 1;
  v3 = sub_20ED4B0(a1, a2, a3, 1);
  v5 = 0;
  if ( v4 )
    LOBYTE(v5) = *(_DWORD *)(v3 + 4 * v4 - 4) == 108;
  return v5;
}

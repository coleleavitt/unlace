__int64 __fastcall sub_FFED40(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx

  if ( (_DWORD)a1 == 18 )
    return 1;
  v3 = (_DWORD *)sub_20ED4B0(a1, a2, a3, 1);
  v4 = 0;
  if ( v5 )
    LOBYTE(v4) = *v3 == 18;
  return v4;
}

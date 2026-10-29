__int64 __fastcall sub_21AE750(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 == *(_QWORD *)(a1 + 16) )
  {
    sub_21AE3F0(a1, *(char **)(a1 + 8), a2);
    return *(_QWORD *)(a1 + 8) - 64LL;
  }
  else
  {
    *(_QWORD *)v2 = v2 + 16;
    *(_QWORD *)(v2 + 8) = 0x100000000LL;
    if ( *(_DWORD *)(a2 + 8) )
      sub_2124940((char ***)v2, (char ***)a2);
    *(_QWORD *)(v2 + 24) = v2 + 40;
    *(_QWORD *)(v2 + 32) = 0x400000000LL;
    if ( *(_DWORD *)(a2 + 32) )
      sub_2124940((char ***)(v2 + 24), (char ***)(a2 + 24));
    *(_DWORD *)(v2 + 56) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(v2 + 60) = *(_DWORD *)(a2 + 60);
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = result + 64;
  }
  return result;
}

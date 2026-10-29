__int64 __fastcall sub_574660(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  const char *v6; // r8
  int v7; // r9d

  v4 = *(_QWORD *)(a1 + 624);
  v5 = *(unsigned __int16 *)(a1 + 248);
  v6 = "!!bad insn.itype!!";
  v7 = *(_DWORD *)(v4 + 104);
  if ( v5 >= v7 && v5 < *(_DWORD *)(v4 + 108) )
    v6 = *(const char **)(*(_QWORD *)(v4 + 112) + 16LL * (v5 - v7));
  return (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, __int64))(*(_QWORD *)a1 + 288LL))(a1, v6, a2, a3);
}

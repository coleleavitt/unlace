__int64 __fastcall sub_1670DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // eax

  v5 = sub_F68450(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  v7 = v6 - 33;
  LOBYTE(v7) = (unsigned __int8)(v6 - 33) <= 1u;
  return ((_BYTE)v6 == 42) | v7;
}

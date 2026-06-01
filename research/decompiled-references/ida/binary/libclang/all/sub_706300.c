__int64 __fastcall sub_706300(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi

  if ( ((*(_DWORD *)a2 >> 14) & 0xC) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 46 )
  {
    return 0;
  }
  v4 = sub_818430(a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  v6 = *(_QWORD *)(v4 + 48);
  v7 = (unsigned int)sub_781830(v4);
  v8 = sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 18560) & 0xFFFFFFFFFFFFFFF0LL));
  result = *(_QWORD *)(v5 + 48);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 10 )
    return result;
  if ( v7 < v8 )
    return *(_QWORD *)(a1 + 18560);
  if ( v7 != v8 )
    return 0;
  v9 = a1 + 18608;
  if ( (unsigned __int8)sub_B100B0(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL)) )
    v9 = a1 + 18560;
  return *(_QWORD *)v9;
}


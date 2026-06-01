__int64 __fastcall sub_A83740(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax

  if ( ((*(_DWORD *)a2 >> 14) & 0xC) != 0
    || (*(_BYTE *)(a1[290] + 1LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 47 )
  {
    return 0;
  }
  v3 = sub_BDB250(a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 48);
    v6 = (unsigned int)sub_B54430(v3);
    v7 = sub_A73FE0((__int64)a1, *(_QWORD *)(a1[2340] & 0xFFFFFFFFFFFFFFF0LL));
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 10 )
      return *(_QWORD *)(v4 + 48);
    if ( v6 < v7 )
      return a1[2340];
    if ( v6 == v7 )
    {
      if ( !(unsigned __int8)sub_F41400(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL)) )
        return a1[2346];
      return a1[2340];
    }
  }
  return 0;
}


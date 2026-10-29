__int64 __fastcall sub_5C94F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = *(int *)(a1 + 68);
  if ( (unsigned int)v2 > 7 )
    return set_qerrno(5, a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 104LL) += v2;
  v4 = *(_QWORD *)(a1 + 120);
  if ( !v4 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 104);
  }
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x8000000000LL) != 0 )
    return set_qerrno(66, a2);
  *(_QWORD *)(v4 + 40) = v5 | 0x8000000000LL;
  return 0;
}


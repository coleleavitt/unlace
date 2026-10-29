__int64 __fastcall sub_966380(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+0h] [rbp-2Ch]

  if ( a2 == a3 )
    return (unsigned int)dword_1C7EC74;
  if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 24), a2, a3) )
    return (unsigned int)dword_1C7EC70;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = sub_8E7230(*(_QWORD *)(a1 + 16), a2, a3);
  v7 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  result = sub_B645B0(*(_QWORD *)(a1 + 16), v7);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 8))-- == 1 )
    {
      v9 = result;
      sub_15D7BC0(v5, v7);
      return v9;
    }
  }
  return result;
}


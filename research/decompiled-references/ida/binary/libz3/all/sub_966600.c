__int64 __fastcall sub_966600(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12

  v4 = *(_QWORD *)(a1 + 16);
  v5 = sub_966570(a1, a3);
  v6 = sub_966570(a1, a2);
  sub_8F5D90(v4, (__int64)v6, (__int64)v5);
  if ( a3 == a2 )
  {
    v7 = dword_1C7EC74;
  }
  else if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 24), a2, a3) )
  {
    v7 = dword_1C7EC70;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = sub_8E7230(*(_QWORD *)(a1 + 16), a2, a3);
    v12 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    sub_B6F780(*(_QWORD *)(a1 + 16));
    v7 = sub_B645B0(*(_QWORD *)(a1 + 16), v12);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 8))-- == 1 )
        sub_15D7BC0(v10, v12);
    }
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL) + 16LL * (v7 >> 1);
  *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 11) & 0xF3 | (8 * !(v7 & 1) + 4);
  return v7;
}


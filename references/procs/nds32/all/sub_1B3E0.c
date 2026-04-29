__int64 __fastcall sub_1B3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rbp
  __int64 sreg; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  if ( a4 != -1 )
    a3 = a4;
  if ( a5 >= 0
    && (_WORD)a5 == 29
    && (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 168LL) & 8) != 0
    && (v6 = a3, sreg = get_sreg(a3, 34), sreg != -1) )
  {
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 11;
    *(_OWORD *)(a1 + 8) = 0;
    v8 = qvector_reserve(a1, 0, 1, 24);
    v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    v10 = v8 + 24 * v9;
    *(_QWORD *)v10 = sreg;
    *(_QWORD *)(v10 + 8) = v6;
    *(_DWORD *)(v10 + 16) = 0x200000;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  return a1;
}

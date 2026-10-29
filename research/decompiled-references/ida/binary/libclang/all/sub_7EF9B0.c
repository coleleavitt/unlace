__int64 __fastcall sub_7EF9B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax

  v7 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 )
  {
    if ( v7 )
      goto LABEL_3;
    v8 = 16;
LABEL_6:
    v9 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
    return sub_7EEDC0(
             a1,
             *(_QWORD *)(a2 + 40),
             v9 * ((a3 + v8 != 0) + (a3 + v8 - (unsigned __int64)(a3 + v8 != 0)) / v9));
  }
  if ( !v7 )
  {
    v8 = 0;
    goto LABEL_6;
  }
LABEL_3:
  if ( (unsigned __int8)sub_7EF1F0(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8), a4, a5, a6) )
  {
    v8 = 16;
    if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
      v8 = 16LL * (*(_QWORD *)(a2 + 32) != 0);
    goto LABEL_6;
  }
  return 0;
}


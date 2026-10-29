__int64 __fastcall sub_1988AC0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // r13
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // r12

  v9 = *a1;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 || !sub_15F2610(*a1, 0, a3, a4, a5, a6) )
  {
    v14 = sub_19A27D0(v9);
    v11 = *a1;
    v12 = (_QWORD *)v14;
    if ( *(_QWORD *)(a2 + 8) == v14 )
      goto LABEL_4;
  }
  else
  {
    v10 = sub_19885D0(a1, *(_QWORD *)(a2 + 8), a7, a8);
    v11 = *a1;
    v12 = v10;
    if ( *(_QWORD **)(a2 + 8) == v10 )
    {
LABEL_4:
      sub_19B4EA0(v11, a2);
      return a2;
    }
  }
  v15 = *(_DWORD *)(a2 + 4);
  v16 = 1;
  v17 = *(_QWORD *)a2 >> 16;
  if ( !(unsigned __int8)sub_19A92A0(v11, v15, v12) )
    return sub_19B4F00(*a1, v15, v12, (v17 & 8) != 0);
  return v16;
}

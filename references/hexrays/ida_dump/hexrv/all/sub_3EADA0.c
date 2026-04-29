unsigned __int64 __fastcall sub_3EADA0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r14d
  unsigned __int64 result; // rax
  __int64 v14; // rsi
  int v15; // edx

  v6 = *(_QWORD *)(a1 + 832);
  v7 = *(_QWORD *)(v6 + 712);
  if ( !v7
    || (v8 = a2,
        v9 = *(int *)(*(_QWORD *)(v6 + 704) + 4 * v7 - 4),
        *(_QWORD *)(v6 + 712) = v7 - 1,
        sub_3E8D60(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), a4, 0x3BEA45E214ADDC55LL, v9, 0),
        a2 = (unsigned int)a2,
        sub_3E9170(a1, a2, v9),
        v10 = *(_QWORD *)(a1 + 832),
        (v11 = *(_QWORD *)(v10 + 712)) == 0) )
  {
    sub_3E4E50(a5, a1, a2);
  }
  v12 = *(_DWORD *)(*(_QWORD *)(v10 + 704) + 4 * v11 - 4);
  *(_QWORD *)(v10 + 712) = v11 - 1;
  sub_3E9B00(
    a1,
    *(unsigned __int16 *)(a1 + 842),
    *(unsigned __int8 *)(a1 + 144),
    v12,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v12, v9, v9, 0);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v12);
  sub_3E9170(a1, a3, v9);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v9);
  result = *(_DWORD *)(a1 + 844) & 6;
  if ( (_DWORD)result != 4 )
  {
    v14 = *(unsigned __int16 *)(a1 + 842);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
    if ( (int)v14 < v15 )
    {
      sub_3EA150(a1, v14, v15, v8, v8, (_DWORD)result != 6, a5);
      return sub_3EA150(
               a1,
               *(unsigned __int16 *)(a1 + 842),
               *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
               a3,
               a3,
               (~(unsigned __int8)*(_DWORD *)(a1 + 844) & 6) != 0,
               a5);
    }
  }
  return result;
}

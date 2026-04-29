__int64 __fastcall sub_3A4030(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v10; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_325D80((__int64 *)a1, (__int64)a2, nullptr, 0x40u);
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v8 = *(_QWORD *)a1;
    v7 = 3;
    v6 = 2;
    if ( *(_QWORD *)(a1 + 16) >= 3u )
      goto LABEL_3;
LABEL_5:
    v10 = qvector_reserve(a1, v8, v7, 1);
    *(_QWORD *)a1 = v10;
    v8 = v10;
    goto LABEL_3;
  }
  v6 = v5 + 1;
  v7 = v5 + 2;
  v8 = *(_QWORD *)a1;
  --v5;
  if ( *(_QWORD *)(a1 + 16) < v7 )
    goto LABEL_5;
LABEL_3:
  *(_QWORD *)(a1 + 8) = v7;
  *(_BYTE *)(v8 + v6) = 0;
  *(_WORD *)(*(_QWORD *)a1 + v5) = 14906;
  sub_25E0B0((__int64 *)a1, nullptr, a2, a3, 1u);
  return a1;
}

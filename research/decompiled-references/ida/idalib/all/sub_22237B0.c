__int64 __fastcall sub_22237B0(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int64 v7; // r14
  unsigned __int8 *v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    if ( !*(_BYTE *)(a1 + 104) )
    {
      v7 = *(_QWORD *)(a1 + 32);
      v8 = *(unsigned __int8 **)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 64);
      if ( v7 >= v9 && (unsigned __int64)v8 <= v9 )
        sub_2223530(a1, *(unsigned __int8 **)(a1 + 64), *(_QWORD *)(a1 + 32) - v9);
      else
        sub_2223530(a1, v8, *(_QWORD *)(a1 + 32) - (_QWORD)v8);
      *(_QWORD *)(a1 + 64) = v7;
    }
    *(_BYTE *)(a1 + 104) = 1;
    sub_227C220(a1, a2, a3, a4);
    v10 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 64) = v10;
  }
  return a1;
}

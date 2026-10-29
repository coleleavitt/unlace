/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5ED50
// Address: 0x000000000005ED50

//----- (000000000005ED50) ----------------------------------------------------
unsigned __int64 __fastcall sub_5ED50(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbp

  v3 = a1[4];
  v4 = a1[8];
  if ( v4 && v3 && 0xFFFFFFFFFFFFFFFFLL / v3 < v4 || a2 && v3 && 0xFFFFFFFFFFFFFFFFLL / v3 < a2 )
    return 0;
  v6 = a1[1];
  v7 = qlseek(*(_QWORD *)(v6 + 472), 0, 1);
  v8 = *(_QWORD *)(v6 + 480);
  v9 = v7 - v8;
  v5 = 0;
  if ( qlseek(*(_QWORD *)(v6 + 472), a1[8] * a1[4] + a1[2] + v8, 0) != -1 && a2 )
  {
    v10 = 0;
    v5 = 0;
    do
    {
      if ( !(unsigned __int8)sub_59FD0((__int64)a1, (_OWORD *)(v10 + a1[5])) )
        break;
      ++v5;
      v10 += 16;
    }
    while ( v5 < a2 );
  }
  qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + v9, 0);
  return v5;
}

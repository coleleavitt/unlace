/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4706A0
// Address: 0x00000000004706A0

//----- (00000000004706A0) ----------------------------------------------------
__int64 __fastcall sub_4706A0(__int64 a1, char a2, __int64 a3)
{
  signed int v5; // r13d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rsi
  __int64 result; // rax
  char *v10; // rsi
  __time_t v11; // rax
  char *v12; // rax

  v5 = *(_DWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 8) && v5 >= 0 )
  {
    v11 = sub_481E10();
    v6 = sub_46EF50(v11, v5);
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(char **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v7 + 1) )
  {
    v12 = (char *)sub_481540(a1 + 32, v8, v7 + 1, 0x20u);
    *(_QWORD *)(a1 + 32) = v12;
    v8 = v12;
    v7 = *(_QWORD *)(a1 + 40);
  }
  result = 32 * v7;
  v10 = &v8[result];
  *(_QWORD *)v10 = a3;
  *((_QWORD *)v10 + 1) = 0;
  *((_QWORD *)v10 + 2) = v6;
  v10[24] = a2;
  ++*(_QWORD *)(a1 + 40);
  return result;
}

__int64 __fastcall sub_73A820(int *a1)
{
  __int64 *v1; // rsi
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbp
  int v8; // r12d
  __int64 v9; // rdx
  unsigned int *v10; // rsi

  sub_7450E0(a1, 1);
  v1 = *(__int64 **)(*((_QWORD *)a1 + 333) + 8LL);
  if ( !v1 && *((__int16 *)a1 + 817) > 0 )
  {
    v7 = (unsigned int *)(a1 + 410);
    v8 = 0;
    do
    {
      v9 = *v7;
      v10 = v7;
      ++v8;
      v7 += 8;
      sub_745040(a1, v10, v9);
    }
    while ( v8 < *((__int16 *)a1 + 817) );
    v1 = *(__int64 **)(*((_QWORD *)a1 + 333) + 8LL);
  }
  v2 = *a1;
  *((_QWORD *)a1 + 5) = v1;
  v3 = *v1;
  if ( *((__int16 *)v1 + 4) <= (int)(v2 >> 1) )
  {
    if ( !under_debugger )
      interr(831);
    BUG();
  }
  if ( *(_WORD *)(v3 + 4) )
    return sub_73AB60(a1, v1);
  v4 = a1[9];
  a1[9] = *(_DWORD *)v3;
  sub_73C020(a1, 1);
  result = sub_73B860(a1, v4);
  if ( !(_BYTE)result )
    sub_743100((unsigned int)dword_2CCC638, 0, v6);
  return result;
}

__int64 __fastcall sub_1B01600(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned __int64 v9; // r12

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  v6 = *(_QWORD *)a1 + 16 * v3;
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    if ( v4 > a2 || v6 <= a2 )
    {
      sub_1B01530(a1, v5);
      v6 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v9 = a2 - v4;
      sub_1B01530(a1, v5);
      a2 = *(_QWORD *)a1 + v9;
      v6 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
    }
  }
  v7 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v6 + 8) = v7;
  if ( v7 > 0x40 )
    sub_2205510(v6);
  else
    *(_QWORD *)v6 = *(_QWORD *)a2;
  result = *(unsigned __int8 *)(a2 + 12);
  *(_BYTE *)(v6 + 12) = result;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

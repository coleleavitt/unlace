__int64 __fastcall get_sreg_range_num(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r10
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r9
  _QWORD *v9; // r10

  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  v3 = v2[2];
  if ( (int)a2 < *(_DWORD *)(v3 + 68) || (int)a2 > *(_DWORD *)(v3 + 72) )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(*v2 + 1768LL);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v5 = (int)a2 - *(_DWORD *)(*(_QWORD *)(v4 + 8) + 68LL);
  if ( v5 >= *(_QWORD *)(v4 + 40) )
    sub_5144F0(a1, a2);
  v6 = v5 << 6;
  *(_DWORD *)(*(_QWORD *)(v4 + 32) + v6 + 56) = a2;
  v7 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v4 + 32) + v6), a1);
  if ( v7 == (unsigned __int64 *)(*v9 + 33LL * v9[1]) || v8 < *v7 || v8 >= v7[1] )
    return 0xFFFFFFFFLL;
  else
    return 1041204193 * ((unsigned int)v7 - (unsigned int)*v9);
}

__int64 __fastcall get_sreg_ranges_qty(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  v2 = v1[2];
  if ( (int)a1 < *(_DWORD *)(v2 + 68) || (int)a1 > *(_DWORD *)(v2 + 72) )
    return 0;
  v3 = *(_QWORD *)(*v1 + 1768LL);
  if ( !*(_BYTE *)(v3 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v4 = (unsigned int)(a1 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
  if ( (unsigned __int64)(int)v4 >= *(_QWORD *)(v3 + 40) )
    sub_5144F0(a1, v4);
  v5 = (__int64)(int)v4 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v5 + 56) = a1;
  return *(unsigned int *)(*(_QWORD *)(v3 + 32) + v5 + 8);
}

__int64 __fastcall get_sreg_range_num(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v9; // r10
  unsigned int *v10; // rax
  unsigned int v11; // r9d
  _QWORD *v12; // r10

  v4 = *(_QWORD **)(qword_2CA1698 + 1480);
  v5 = v4[2];
  if ( (int)a2 < *(_DWORD *)(v5 + 68) || (int)a2 > *(_DWORD *)(v5 + 72) )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(*v4 + 1576LL);
  if ( !*(_BYTE *)(v6 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = *(_QWORD *)(v6 + 8);
  v8 = (int)a2 - *(_DWORD *)(v7 + 68);
  if ( v8 >= *(_QWORD *)(v6 + 40) )
    sub_4FC970(a1, a2, v7, a4);
  v9 = v8 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v9 + 56) = a2;
  v10 = sub_4FED00((unsigned int **)(*(_QWORD *)(v6 + 32) + v9), a1);
  if ( v10 == (unsigned int *)(*v12 + 17LL * v12[1]) || v11 < *v10 || v11 >= v10[1] )
    return 0xFFFFFFFFLL;
  else
    return -252645135 * ((unsigned int)v10 - (unsigned int)*v12);
}

